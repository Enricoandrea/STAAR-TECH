﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_tE86988D006DE4FD0270C59F0919804201589A502;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2;
// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3;
// System.Func`2<System.Threading.CancellationToken,System.Object>
struct Func_2_tFB4752E44FC81929027C0874E2CC5BC203FB9299;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_3_tFEFDB2B01CD4B043311B068436637E5070889805;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_3_t359FD5E7BAD8B2C342996872E5118F17E5D24F5E;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A;
// System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>
struct Func_3_tA2A8B0E927886E80AC7F18140C1C6161415E29EC;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// System.IProgress`1<System.UInt32>
struct IProgress_1_t2A68F003FD832798269827977313E2A8DA00BA94;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.Streams.IBuffer>
struct TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.UInt32>
struct TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Threading.CancellationTokenRegistration[]
struct CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.IO.BufferedStream
struct BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09;
// Windows.Foundation.IAsyncInfo
struct IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamFlushAsyncResult
struct StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36;
// System.IO.StreamOperationAsyncResult
struct StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27;
// System.IO.StreamReadAsyncResult
struct StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33;
// System.IO.StreamWriteAsyncResult
struct StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t737F79AE4901C68E935CD553A20978CEEF44F333;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842;
// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129;
// System.Threading.Tasks.ExceptionDispatchHelper/<>c
struct U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075;
// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7;
// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249;
// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2;
// System.IO.WindowsRuntimeStreamExtensions/<>c
struct U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA;
// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tFEFDB2B01CD4B043311B068436637E5070889805_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgress_1_t2A68F003FD832798269827977313E2A8DA00BA94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_t737F79AE4901C68E935CD553A20978CEEF44F333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral075E3039D77F4010416D02768A2D30DAE372D363;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3;
IL2CPP_EXTERN_C String_t* _stringLiteral104D147DBCB46F57262B84F93DA55697DB41041F;
IL2CPP_EXTERN_C String_t* _stringLiteral164F50649DB9AD66D8010884BCD2E7EF6D9586C3;
IL2CPP_EXTERN_C String_t* _stringLiteral1F15B34FDCB1544A2AB6DD55379F791BDA5A40EC;
IL2CPP_EXTERN_C String_t* _stringLiteral213C267FBE52C6C33B5523EDCF2F7345CC49B041;
IL2CPP_EXTERN_C String_t* _stringLiteral2ED816718FBC3E178D3367429A74D7E71535575A;
IL2CPP_EXTERN_C String_t* _stringLiteral30025877E7ECF450F2047975152F5007CA8F7082;
IL2CPP_EXTERN_C String_t* _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4839FA0EB649348E4C333F51DDFC1E62AEDDBA34;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral528B01FB578E1644A959C494D637A7F8756C1A8C;
IL2CPP_EXTERN_C String_t* _stringLiteral52B2BD21832AF0B449CFD652E1B844BE0BC454D9;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F;
IL2CPP_EXTERN_C String_t* _stringLiteral597B697A0554A8988A81FC9F2B357D6027857CEA;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6E244A75EDAD97000428673DBA8215456B776073;
IL2CPP_EXTERN_C String_t* _stringLiteral6EC63F13E8EF6446434D8DD192E33F499A18F921;
IL2CPP_EXTERN_C String_t* _stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B;
IL2CPP_EXTERN_C String_t* _stringLiteral77FC6A45AA037417CBD14210CD02B3B9F4A3A680;
IL2CPP_EXTERN_C String_t* _stringLiteral81B3831FCAA702A03FE2F7FCE058D367DE8559B0;
IL2CPP_EXTERN_C String_t* _stringLiteral832C4F81E24CCBFF4E7EB3B607EF3F2014F042CD;
IL2CPP_EXTERN_C String_t* _stringLiteral86026AF0E517D49DA08ECB5085428B0DD45FB264;
IL2CPP_EXTERN_C String_t* _stringLiteral873B6C8A4B1BCC0DE87008C0BEE9C272FF746BEE;
IL2CPP_EXTERN_C String_t* _stringLiteral87E93D65632F2787675566D82B8FBFD0856FEAB0;
IL2CPP_EXTERN_C String_t* _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1;
IL2CPP_EXTERN_C String_t* _stringLiteral8A415D789D919AD88B5D9DEA8D8716351276D26B;
IL2CPP_EXTERN_C String_t* _stringLiteral8D02CF110EAE277BF80B0ABB2DDF1E5C34A5EAA5;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteral90FE78598A19B3BDD30AE2B14F02A7C553E63A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral92196344FD1BC529F2C783D1184779BAB239C616;
IL2CPP_EXTERN_C String_t* _stringLiteral97A6DE11F0A437842D0A2AE6CCB91D8BA5E81213;
IL2CPP_EXTERN_C String_t* _stringLiteral97B5D9A9C1E93F6D1C82708532506E0F66173640;
IL2CPP_EXTERN_C String_t* _stringLiteral98997B148C010D1AA3341A7CE29C43B075E5D416;
IL2CPP_EXTERN_C String_t* _stringLiteralA1A89E50A90934499ED855F3DDECC1AF3F1A2B88;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA47F6922CBC47935F33073D4990D85481289C7B2;
IL2CPP_EXTERN_C String_t* _stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C;
IL2CPP_EXTERN_C String_t* _stringLiteralB05CC11CA67D7FCD20736A7DBD8C65EEA11AA548;
IL2CPP_EXTERN_C String_t* _stringLiteralB4792D73601AFAC8241C44E882B3149512DDA812;
IL2CPP_EXTERN_C String_t* _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909;
IL2CPP_EXTERN_C String_t* _stringLiteralBF16CB6EAF2A1F143A075008C091BEF301FE5C4F;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC572FE41E8E4C5A824E966055EB754531EA8F74F;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6CCF4B282C357742ED68E704F568ED2482BF22;
IL2CPP_EXTERN_C String_t* _stringLiteralCEC49CE5B8EEBB0AE649A7794608079E6C355F17;
IL2CPP_EXTERN_C String_t* _stringLiteralCF7DF948FC4905FED1A56776B9DFCCB86C46912A;
IL2CPP_EXTERN_C String_t* _stringLiteralCFAC928B9632979CA328C6C33549FD409AEF4B74;
IL2CPP_EXTERN_C String_t* _stringLiteralD170D006841B596DCF7410F1FDBFBB378C531F14;
IL2CPP_EXTERN_C String_t* _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralDE88FB7F7A400DD8C3FDB11F48D50F6D76160556;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF48A59EF6A2D1A2B5003A4E8EC274199F2C46032;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralFAAA1D4C74B19E4EA70FF43057879BAF549456EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFAC57901EC8544C5A7E2C0595D8334FEDA1ED6AE;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_CreateCompletedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m65A1011F5F6AC07752C810182D7DFDAD5894D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_CreateFaultedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFFC434D0B239CFDBDC102A6BB414B60ED53735E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3D73F0240C3DFBF99483E95685495B309B663C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m2D515BE44CC2EEF0000471409195DE07E1FFA104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE0DB7B0FB2E6C3DF13B50EB6DA95F5595A791718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1__ctor_m406D494EC42FC7092C7FC5D54DDDA9152370405E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2__ctor_mBEEE894AB050A3A29C12E1234AD79071A09D9D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2__ctor_mCFF52653200B0107A811708F38C2B70B61B43885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m8E7EE7177996B51FD512405432E62B1AE1222076_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_mA8E6F6E13D83AE75FC0B473BF5246B5FBEFABD16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mB0CBF1534C424EAB71B637D7D94A9C08075C645F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mE7E56163BF50D945CB1D68BDB080B8749F818F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m6F376C53460806F3D7CC5B24A810B7ECB57D2783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m8BD6E96F985B9A350DFE72E2CCF7497616B64AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m8A05ADA8FF6EDF6CFCA2C2660794D545772DC0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m9B82A97DDF714DB40F3F3A427B17C4D9A3E2BEEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m2F4B3F813D9DEFDEC39FBCDB714E377D19AC55AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mECE29428CA37743D2F19A203D3EF3888E65F04BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_m67A483ECC43944CCC0EAF9F2A56FCF6E32BCD908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m98F82CF4807C6A35851318FD01B7ACC3DA19056F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mFFB5FFFD5832DB24B9F7E14BB475861B05358464_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mA3958D52F1592896372718C7B09FAF2903B2340C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m496C4F7DE611D04F4DDD8D2D3155818325A767C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_GetValue_mFCD4BCFE169658FB4CDAAB2116587570B3F8808F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m3DDF21461062BF04F3D0E5E79312BE85FB0D8E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m2A07D111A0F6C2F9378C4A16FEC047227D03F46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_mD2536B2FDC67BD8C6CA840FAF32A5F60DA07A968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CreateValueCallback__ctor_m84F8E3AD53A878D6A80773FCC422ED195F7C83E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m11B8AD33AF4A204453BE2E124607A776B58DCC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m419CF3EBB8FB8DC7517218FA92970124E9C146A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_3__ctor_m729C04D53C73797C133BB99ED6DF3A9BFCEFDE6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_Create_mCFCCE6682F27EF6DB0DDD1B98ED2D646BB98E2AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_mEB739056C500A597233B38098E04A191F9A36ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_set_Size_mBD892F48AC347AB88570C0827AAF0095B842E74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m099FCDDFB91AD16B8B44FABAA58724B0287F7295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_ProcessCompletedOperation_mA5C6EC0EF465614E0AE88430AEC8DF3F6025230B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult__ctor_m4EF40C261535040FDA42115D9929D78AAC39FD5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamReadAsyncResult__ctor_mB4751ECFF1421735FF8B57120061C884BE9FA73D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mC1D36A45BF2FDCABABBDCEDE49FE3A913422AC19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAsWindowsRuntimeStreamInternalFactoryHelperU3Eb__18_0_m8452C90E376CFCD06DC0BC186ED412B40981D9B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m58C22FF74F0ED46128DC029260EBB1DBE0B078A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3CA1C6225A9BBFF348E501B52B09F9F1BE240677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CThrowAsyncU3Eb__0_0_mB3363903A0109D2B9F6868D27250126A5C800D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m07976EC558FC7948EC3B2E2CB1754A7D4481B9E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mFE1F64F591789133E43780CA963413C77F1A4A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m4445219F60D31A3DEB9CC0FEAC6F7BB3341176E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_mB585D7A26713B56BC3B4879C491EB98119BA811A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_mEBC6BD100444E3BE6CAA99A1636F6F4161BA5FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_BeginRead_mE6AB044C46DE2754BCC8DCE9EF832391EED12E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_BeginWrite_m50A59F32475413205F8F723F16D88F802AEB642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureCanRead_m9C10520B67B8D00F979656A93E7DDAF913092EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureCanWrite_mA36BDE1AAC42A8D3838AEAEDDD4AFE7A2C2A0F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_m62CFB3E8790BE8D12212844DFB09B71BE02436D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m716E0EB253D4DB25B7932DD5EE58490148835CCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_m2BF01BA573F31B3B42AF7158A684ADF05E9E5E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_SetLength_m78F03F9F30847F87AEA9149151671A4D14521CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_get_Length_mDF0B04AB284F70BF62C5E28280E93B0A74A1D51D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_get_Position_m5988993EEDE99249A30261CBE151DCCAB5911D21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_set_Position_mB3EF40165C47C58B59200AFD3E8636B2E8F3671D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_AsStream_mFF165E0D0547E847CB2C20A92510B888456632A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_CopyTo_mC39B757A48802F2164588EEBEBEDC7F51C59DBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_IsSameData_m82285A1BC8340128D111C98CD3F0F25B79E74F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_Create_mB5A22FE17FF12F01AB1CBD3B4B2F28DF680DFB8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer__ctor_m2CC3E1AF862FA66E1BBAE510BBF4A291E7D34874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_AsInputStream_m9849FAA37F8DD6C8A5D15FAFF7B84403C6E0D38F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_AsOutputStream_m9E1D8FF199D75F6731D5CECF1313675B7D870A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_mCA7C1C1EA13F99456CA1CF2F551C603BD62A6E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) = 0;
};

// <Module>
struct U3CModuleU3E_t2CE77F518739165827EE877B1C5F077D546E7CA1 
{
public:

public:
};

// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t6F1702BEB08256952B124A9982A893DF328C2434 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) = 0;
};

// System.Object


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C, ___data_4)); }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* get_data_4() const { return ___data_4; }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject * ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587, ___data_4)); }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* get_data_4() const { return ___data_4; }
	inline EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(EphemeronU5BU5D_tA2F880A59471B7642CA02323CD56295126FC28A8* value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587, ___size_6)); }
	inline int32_t get_size_6() const { return ___size_6; }
	inline int32_t* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(int32_t value)
	{
		___size_6 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.InteropServices.WindowsRuntime.AsyncInfo
struct AsyncInfo_tC9B1A5623D90D937C35A85635F33A208A7B76A28  : public RuntimeObject
{
public:

public:
};


// System.Threading.Tasks.AsyncInfoIdGenerator
struct AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5  : public RuntimeObject
{
public:

public:
};

struct AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields
{
public:
	// System.Random System.Threading.Tasks.AsyncInfoIdGenerator::s_idGenerator
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___s_idGenerator_0;

public:
	inline static int32_t get_offset_of_s_idGenerator_0() { return static_cast<int32_t>(offsetof(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields, ___s_idGenerator_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_s_idGenerator_0() const { return ___s_idGenerator_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_s_idGenerator_0() { return &___s_idGenerator_0; }
	inline void set_s_idGenerator_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___s_idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_idGenerator_0), (void*)value);
	}
};


// System.Threading.Tasks.ExceptionDispatchHelper
struct ExceptionDispatchHelper_t355DF89A0E6A05A072DF8DD75A566B6FA56AD19B  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// System.IO.StreamOperationsImplementation
struct StreamOperationsImplementation_t32C76827FDB3B6AA897AF93383075782DFCC2012  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Windows.Foundation.TokenizerHelper
struct TokenizerHelper_tF253F84A7B764F03B22DAD1E2F830BC159292C85  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8  : public RuntimeObject
{
public:

public:
};


// System.IO.WinRtIOHelper
struct WinRtIOHelper_t975CD952FF1DE370F34C932E9FE1AD51316B4711  : public RuntimeObject
{
public:

public:
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions
struct WindowsRuntimeBufferExtensions_tED10EE034DC9535C28109217447530AABE3D108E  : public RuntimeObject
{
public:

public:
};


// System.IO.WindowsRuntimeStreamExtensions
struct WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660  : public RuntimeObject
{
public:

public:
};

struct WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream> System.IO.WindowsRuntimeStreamExtensions::s_winRtToNetFxAdapterMap
	ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C * ___s_winRtToNetFxAdapterMap_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter> System.IO.WindowsRuntimeStreamExtensions::s_netFxToWinRtAdapterMap
	ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * ___s_netFxToWinRtAdapterMap_1;

public:
	inline static int32_t get_offset_of_s_winRtToNetFxAdapterMap_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_StaticFields, ___s_winRtToNetFxAdapterMap_0)); }
	inline ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C * get_s_winRtToNetFxAdapterMap_0() const { return ___s_winRtToNetFxAdapterMap_0; }
	inline ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C ** get_address_of_s_winRtToNetFxAdapterMap_0() { return &___s_winRtToNetFxAdapterMap_0; }
	inline void set_s_winRtToNetFxAdapterMap_0(ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C * value)
	{
		___s_winRtToNetFxAdapterMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtToNetFxAdapterMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_netFxToWinRtAdapterMap_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_StaticFields, ___s_netFxToWinRtAdapterMap_1)); }
	inline ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * get_s_netFxToWinRtAdapterMap_1() const { return ___s_netFxToWinRtAdapterMap_1; }
	inline ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 ** get_address_of_s_netFxToWinRtAdapterMap_1() { return &___s_netFxToWinRtAdapterMap_1; }
	inline void set_s_netFxToWinRtAdapterMap_1(ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * value)
	{
		___s_netFxToWinRtAdapterMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_netFxToWinRtAdapterMap_1), (void*)value);
	}
};


// System.WindowsRuntimeSystemExtensions
struct WindowsRuntimeSystemExtensions_tF05B5F933CDB48DE7C5AF213EDECD001BAE9BF94  : public RuntimeObject
{
public:

public:
};


// System.Threading.Tasks.ExceptionDispatchHelper/<>c
struct U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields
{
public:
	// System.Threading.Tasks.ExceptionDispatchHelper/<>c System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9
	U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9__0_0
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___U3CU3E9__0_0_1;
	// System.Threading.SendOrPostCallback System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9__0_1
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields, ___U3CU3E9__0_0_1)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields, ___U3CU3E9__0_1_2)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A  : public RuntimeObject
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::buffer
	RuntimeObject* ___buffer_0;
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_1;
	// System.Byte[] System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_2;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::offset
	int32_t ___offset_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A, ___buffer_0)); }
	inline RuntimeObject* get_buffer_0() const { return ___buffer_0; }
	inline RuntimeObject** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(RuntimeObject* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A, ___stream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_1() const { return ___stream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A, ___data_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_2() const { return ___data_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A, ___offset_3)); }
	inline int32_t get_offset_3() const { return ___offset_3; }
	inline int32_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int32_t value)
	{
		___offset_3 = value;
	}
};


// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}
};


// System.IO.WindowsRuntimeStreamExtensions/<>c
struct U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_StaticFields
{
public:
	// System.IO.WindowsRuntimeStreamExtensions/<>c System.IO.WindowsRuntimeStreamExtensions/<>c::<>9
	U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA * ___U3CU3E9_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter> System.IO.WindowsRuntimeStreamExtensions/<>c::<>9__18_0
	CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_StaticFields, ___U3CU3E9__18_0_1)); }
	inline CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};


// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields
{
public:
	// System.WindowsRuntimeSystemExtensions/<>c System.WindowsRuntimeSystemExtensions/<>c::<>9
	U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * ___U3CU3E9_0;
	// System.Action`1<System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_0
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__0_0_1;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_1
	Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE 
{
public:
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____array_0;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_1;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____array_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__array_0() const { return ____array_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__offset_1() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____offset_1)); }
	inline int32_t get__offset_1() const { return ____offset_1; }
	inline int32_t* get_address_of__offset_1() { return &____offset_1; }
	inline void set__offset_1(int32_t value)
	{
		____offset_1 = value;
	}

	inline static int32_t get_offset_of__count_2() { return static_cast<int32_t>(offsetof(ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE, ____count_2)); }
	inline int32_t get__count_2() const { return ____count_2; }
	inline int32_t* get_address_of__count_2() { return &____count_2; }
	inline void set__count_2(int32_t value)
	{
		____count_2 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.VoidValueTypeParameter
struct VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_tE3A581A2091DC722CAA86B9FD732C749E2EEB6FC__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>
struct AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF, ___m_task_2)); }
	inline Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>
struct AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7, ___m_task_2)); }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// Windows.Foundation.AsyncStatus
struct AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.BufferedStream
struct BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.IO.Stream System.IO.BufferedStream::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_4;
	// System.Byte[] System.IO.BufferedStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_5;
	// System.Int32 System.IO.BufferedStream::_bufferSize
	int32_t ____bufferSize_6;
	// System.Int32 System.IO.BufferedStream::_readPos
	int32_t ____readPos_7;
	// System.Int32 System.IO.BufferedStream::_readLen
	int32_t ____readLen_8;
	// System.Int32 System.IO.BufferedStream::_writePos
	int32_t ____writePos_9;

public:
	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____stream_4)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_4() const { return ____stream_4; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_4), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____buffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_5), (void*)value);
	}

	inline static int32_t get_offset_of__bufferSize_6() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____bufferSize_6)); }
	inline int32_t get__bufferSize_6() const { return ____bufferSize_6; }
	inline int32_t* get_address_of__bufferSize_6() { return &____bufferSize_6; }
	inline void set__bufferSize_6(int32_t value)
	{
		____bufferSize_6 = value;
	}

	inline static int32_t get_offset_of__readPos_7() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____readPos_7)); }
	inline int32_t get__readPos_7() const { return ____readPos_7; }
	inline int32_t* get_address_of__readPos_7() { return &____readPos_7; }
	inline void set__readPos_7(int32_t value)
	{
		____readPos_7 = value;
	}

	inline static int32_t get_offset_of__readLen_8() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____readLen_8)); }
	inline int32_t get__readLen_8() const { return ____readLen_8; }
	inline int32_t* get_address_of__readLen_8() { return &____readLen_8; }
	inline void set__readLen_8(int32_t value)
	{
		____readLen_8 = value;
	}

	inline static int32_t get_offset_of__writePos_9() { return static_cast<int32_t>(offsetof(BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF, ____writePos_9)); }
	inline int32_t get__writePos_9() const { return ____writePos_9; }
	inline int32_t* get_address_of__writePos_9() { return &____writePos_9; }
	inline void set__writePos_9(int32_t value)
	{
		____writePos_9 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_kernelEvent
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* ___m_registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_state
	int32_t ___m_state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_threadIDExecutingCallbacks
	int32_t ___m_threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::m_disposed
	bool ___m_disposed_11;
	// System.Threading.CancellationTokenRegistration[] System.Threading.CancellationTokenSource::m_linkingRegistrations
	CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* ___m_linkingRegistrations_12;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_executingCallback
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_executingCallback_14;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::m_timer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___m_timer_15;

public:
	inline static int32_t get_offset_of_m_kernelEvent_3() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_kernelEvent_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_kernelEvent_3() const { return ___m_kernelEvent_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_kernelEvent_3() { return &___m_kernelEvent_3; }
	inline void set_m_kernelEvent_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_kernelEvent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_kernelEvent_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_registeredCallbacksLists_4() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_registeredCallbacksLists_4)); }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* get_m_registeredCallbacksLists_4() const { return ___m_registeredCallbacksLists_4; }
	inline SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A** get_address_of_m_registeredCallbacksLists_4() { return &___m_registeredCallbacksLists_4; }
	inline void set_m_registeredCallbacksLists_4(SparselyPopulatedArray_1U5BU5D_t4D2064CEC206620DC5001D7C857A845833DCB52A* value)
	{
		___m_registeredCallbacksLists_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_registeredCallbacksLists_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_9() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_state_9)); }
	inline int32_t get_m_state_9() const { return ___m_state_9; }
	inline int32_t* get_address_of_m_state_9() { return &___m_state_9; }
	inline void set_m_state_9(int32_t value)
	{
		___m_state_9 = value;
	}

	inline static int32_t get_offset_of_m_threadIDExecutingCallbacks_10() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_threadIDExecutingCallbacks_10)); }
	inline int32_t get_m_threadIDExecutingCallbacks_10() const { return ___m_threadIDExecutingCallbacks_10; }
	inline int32_t* get_address_of_m_threadIDExecutingCallbacks_10() { return &___m_threadIDExecutingCallbacks_10; }
	inline void set_m_threadIDExecutingCallbacks_10(int32_t value)
	{
		___m_threadIDExecutingCallbacks_10 = value;
	}

	inline static int32_t get_offset_of_m_disposed_11() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_disposed_11)); }
	inline bool get_m_disposed_11() const { return ___m_disposed_11; }
	inline bool* get_address_of_m_disposed_11() { return &___m_disposed_11; }
	inline void set_m_disposed_11(bool value)
	{
		___m_disposed_11 = value;
	}

	inline static int32_t get_offset_of_m_linkingRegistrations_12() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_linkingRegistrations_12)); }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* get_m_linkingRegistrations_12() const { return ___m_linkingRegistrations_12; }
	inline CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910** get_address_of_m_linkingRegistrations_12() { return &___m_linkingRegistrations_12; }
	inline void set_m_linkingRegistrations_12(CancellationTokenRegistrationU5BU5D_t864BA2E1E6485FDC593F17F7C01525F33CCE7910* value)
	{
		___m_linkingRegistrations_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkingRegistrations_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_executingCallback_14() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_executingCallback_14)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_executingCallback_14() const { return ___m_executingCallback_14; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_executingCallback_14() { return &___m_executingCallback_14; }
	inline void set_m_executingCallback_14(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_executingCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_executingCallback_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_timer_15() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3, ___m_timer_15)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get_m_timer_15() const { return ___m_timer_15; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of_m_timer_15() { return &___m_timer_15; }
	inline void set_m_timer_15(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		___m_timer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_timer_15), (void*)value);
	}
};

struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_Set
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_Set_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::_staticSource_NotCancelable
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____staticSource_NotCancelable_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Action`1<System.Object> System.Threading.CancellationTokenSource::s_LinkedTokenCancelDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_LinkedTokenCancelDelegate_13;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___s_timerCallback_16;

public:
	inline static int32_t get_offset_of__staticSource_Set_0() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_Set_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_Set_0() const { return ____staticSource_Set_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_Set_0() { return &____staticSource_Set_0; }
	inline void set__staticSource_Set_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_Set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_Set_0), (void*)value);
	}

	inline static int32_t get_offset_of__staticSource_NotCancelable_1() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ____staticSource_NotCancelable_1)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__staticSource_NotCancelable_1() const { return ____staticSource_NotCancelable_1; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__staticSource_NotCancelable_1() { return &____staticSource_NotCancelable_1; }
	inline void set__staticSource_NotCancelable_1(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____staticSource_NotCancelable_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticSource_NotCancelable_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_nLists_2() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_nLists_2)); }
	inline int32_t get_s_nLists_2() const { return ___s_nLists_2; }
	inline int32_t* get_address_of_s_nLists_2() { return &___s_nLists_2; }
	inline void set_s_nLists_2(int32_t value)
	{
		___s_nLists_2 = value;
	}

	inline static int32_t get_offset_of_s_LinkedTokenCancelDelegate_13() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_LinkedTokenCancelDelegate_13)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_LinkedTokenCancelDelegate_13() const { return ___s_LinkedTokenCancelDelegate_13; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_LinkedTokenCancelDelegate_13() { return &___s_LinkedTokenCancelDelegate_13; }
	inline void set_s_LinkedTokenCancelDelegate_13(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_LinkedTokenCancelDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LinkedTokenCancelDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_timerCallback_16() { return static_cast<int32_t>(offsetof(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_StaticFields, ___s_timerCallback_16)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_s_timerCallback_16() const { return ___s_timerCallback_16; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_s_timerCallback_16() { return &___s_timerCallback_16; }
	inline void set_s_timerCallback_16(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___s_timerCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_timerCallback_16), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E_marshaled_com
{
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_marshaled_com ___m_configuredTaskAwaiter_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(intptr_t* comReturnValue) = 0;
};
// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(intptr_t ___pStm0) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(uint32_t ___dwReserved0) = 0;
};

// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.IO.SeekOrigin
struct SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamOperationAsyncResult
struct StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27  : public RuntimeObject
{
public:
	// System.AsyncCallback System.IO.StreamOperationAsyncResult::_userCompletionCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ____userCompletionCallback_0;
	// System.Object System.IO.StreamOperationAsyncResult::_userAsyncStateInfo
	RuntimeObject * ____userAsyncStateInfo_1;
	// Windows.Foundation.IAsyncInfo System.IO.StreamOperationAsyncResult::_asyncStreamOperation
	RuntimeObject* ____asyncStreamOperation_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_completed
	bool ____completed_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_callbackInvoked
	bool ____callbackInvoked_4;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_waitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ____waitHandle_5;
	// System.Int64 System.IO.StreamOperationAsyncResult::_bytesCompleted
	int64_t ____bytesCompleted_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.StreamOperationAsyncResult::_errorInfo
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ____errorInfo_7;
	// System.Boolean System.IO.StreamOperationAsyncResult::_processCompletedOperationInCallback
	bool ____processCompletedOperationInCallback_8;
	// Windows.Foundation.IAsyncInfo System.IO.StreamOperationAsyncResult::_completedOperation
	RuntimeObject* ____completedOperation_9;

public:
	inline static int32_t get_offset_of__userCompletionCallback_0() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____userCompletionCallback_0)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get__userCompletionCallback_0() const { return ____userCompletionCallback_0; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of__userCompletionCallback_0() { return &____userCompletionCallback_0; }
	inline void set__userCompletionCallback_0(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		____userCompletionCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userCompletionCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of__userAsyncStateInfo_1() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____userAsyncStateInfo_1)); }
	inline RuntimeObject * get__userAsyncStateInfo_1() const { return ____userAsyncStateInfo_1; }
	inline RuntimeObject ** get_address_of__userAsyncStateInfo_1() { return &____userAsyncStateInfo_1; }
	inline void set__userAsyncStateInfo_1(RuntimeObject * value)
	{
		____userAsyncStateInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userAsyncStateInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of__asyncStreamOperation_2() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____asyncStreamOperation_2)); }
	inline RuntimeObject* get__asyncStreamOperation_2() const { return ____asyncStreamOperation_2; }
	inline RuntimeObject** get_address_of__asyncStreamOperation_2() { return &____asyncStreamOperation_2; }
	inline void set__asyncStreamOperation_2(RuntimeObject* value)
	{
		____asyncStreamOperation_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncStreamOperation_2), (void*)value);
	}

	inline static int32_t get_offset_of__completed_3() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____completed_3)); }
	inline bool get__completed_3() const { return ____completed_3; }
	inline bool* get_address_of__completed_3() { return &____completed_3; }
	inline void set__completed_3(bool value)
	{
		____completed_3 = value;
	}

	inline static int32_t get_offset_of__callbackInvoked_4() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____callbackInvoked_4)); }
	inline bool get__callbackInvoked_4() const { return ____callbackInvoked_4; }
	inline bool* get_address_of__callbackInvoked_4() { return &____callbackInvoked_4; }
	inline void set__callbackInvoked_4(bool value)
	{
		____callbackInvoked_4 = value;
	}

	inline static int32_t get_offset_of__waitHandle_5() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____waitHandle_5)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get__waitHandle_5() const { return ____waitHandle_5; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of__waitHandle_5() { return &____waitHandle_5; }
	inline void set__waitHandle_5(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		____waitHandle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____waitHandle_5), (void*)value);
	}

	inline static int32_t get_offset_of__bytesCompleted_6() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____bytesCompleted_6)); }
	inline int64_t get__bytesCompleted_6() const { return ____bytesCompleted_6; }
	inline int64_t* get_address_of__bytesCompleted_6() { return &____bytesCompleted_6; }
	inline void set__bytesCompleted_6(int64_t value)
	{
		____bytesCompleted_6 = value;
	}

	inline static int32_t get_offset_of__errorInfo_7() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____errorInfo_7)); }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * get__errorInfo_7() const { return ____errorInfo_7; }
	inline ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 ** get_address_of__errorInfo_7() { return &____errorInfo_7; }
	inline void set__errorInfo_7(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * value)
	{
		____errorInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____errorInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of__processCompletedOperationInCallback_8() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____processCompletedOperationInCallback_8)); }
	inline bool get__processCompletedOperationInCallback_8() const { return ____processCompletedOperationInCallback_8; }
	inline bool* get_address_of__processCompletedOperationInCallback_8() { return &____processCompletedOperationInCallback_8; }
	inline void set__processCompletedOperationInCallback_8(bool value)
	{
		____processCompletedOperationInCallback_8 = value;
	}

	inline static int32_t get_offset_of__completedOperation_9() { return static_cast<int32_t>(offsetof(StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27, ____completedOperation_9)); }
	inline RuntimeObject* get__completedOperation_9() const { return ____completedOperation_9; }
	inline RuntimeObject** get_address_of__completedOperation_9() { return &____completedOperation_9; }
	inline void set__completedOperation_9(RuntimeObject* value)
	{
		____completedOperation_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedOperation_9), (void*)value);
	}
};


// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A 
{
public:
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SynchronizationContextProperties_t1A9B979AA4252E755DB5A8CC447FBF89E0AB296A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject * ____winRtStream_4;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_5;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_6;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_7;

public:
	inline static int32_t get_offset_of__winRtStream_4() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____winRtStream_4)); }
	inline RuntimeObject * get__winRtStream_4() const { return ____winRtStream_4; }
	inline RuntimeObject ** get_address_of__winRtStream_4() { return &____winRtStream_4; }
	inline void set__winRtStream_4(RuntimeObject * value)
	{
		____winRtStream_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____winRtStream_4), (void*)value);
	}

	inline static int32_t get_offset_of__canRead_5() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canRead_5)); }
	inline bool get__canRead_5() const { return ____canRead_5; }
	inline bool* get_address_of__canRead_5() { return &____canRead_5; }
	inline void set__canRead_5(bool value)
	{
		____canRead_5 = value;
	}

	inline static int32_t get_offset_of__canWrite_6() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canWrite_6)); }
	inline bool get__canWrite_6() const { return ____canWrite_6; }
	inline bool* get_address_of__canWrite_6() { return &____canWrite_6; }
	inline void set__canWrite_6(bool value)
	{
		____canWrite_6 = value;
	}

	inline static int32_t get_offset_of__canSeek_7() { return static_cast<int32_t>(offsetof(WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D, ____canSeek_7)); }
	inline bool get__canSeek_7() const { return ____canSeek_7; }
	inline bool* get_address_of__canSeek_7() { return &____canSeek_7; }
	inline void set__canSeek_7(bool value)
	{
		____canSeek_7 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129  : public RuntimeObject
{
public:
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____data_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__data_1() const { return ____data_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}

	inline static int32_t get_offset_of__dataStartOffs_2() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataStartOffs_2)); }
	inline int32_t get__dataStartOffs_2() const { return ____dataStartOffs_2; }
	inline int32_t* get_address_of__dataStartOffs_2() { return &____dataStartOffs_2; }
	inline void set__dataStartOffs_2(int32_t value)
	{
		____dataStartOffs_2 = value;
	}

	inline static int32_t get_offset_of__usefulDataLength_3() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____usefulDataLength_3)); }
	inline int32_t get__usefulDataLength_3() const { return ____usefulDataLength_3; }
	inline int32_t* get_address_of__usefulDataLength_3() { return &____usefulDataLength_3; }
	inline void set__usefulDataLength_3(int32_t value)
	{
		____usefulDataLength_3 = value;
	}

	inline static int32_t get_offset_of__maxDataCapacity_4() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____maxDataCapacity_4)); }
	inline int32_t get__maxDataCapacity_4() const { return ____maxDataCapacity_4; }
	inline int32_t* get_address_of__maxDataCapacity_4() { return &____maxDataCapacity_4; }
	inline void set__maxDataCapacity_4(int32_t value)
	{
		____maxDataCapacity_4 = value;
	}

	inline static int32_t get_offset_of__pinHandle_5() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____pinHandle_5)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__pinHandle_5() const { return ____pinHandle_5; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__pinHandle_5() { return &____pinHandle_5; }
	inline void set__pinHandle_5(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____pinHandle_5 = value;
	}

	inline static int32_t get_offset_of__dataPtr_6() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129, ____dataPtr_6)); }
	inline intptr_t get__dataPtr_6() const { return ____dataPtr_6; }
	inline intptr_t* get_address_of__dataPtr_6() { return &____dataPtr_6; }
	inline void set__dataPtr_6(intptr_t value)
	{
		____dataPtr_6 = value;
	}
};

struct WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields
{
public:
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;

public:
	inline static int32_t get_offset_of_s_winRtMarshalProxy_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields, ___s_winRtMarshalProxy_0)); }
	inline RuntimeObject* get_s_winRtMarshalProxy_0() const { return ___s_winRtMarshalProxy_0; }
	inline RuntimeObject** get_address_of_s_winRtMarshalProxy_0() { return &___s_winRtMarshalProxy_0; }
	inline void set_s_winRtMarshalProxy_0(RuntimeObject* value)
	{
		___s_winRtMarshalProxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_winRtMarshalProxy_0), (void*)value);
	}
};


// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization
struct StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2 
{
public:
	// System.Int32 System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	uint32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000, ___m_result_40)); }
	inline uint32_t get_m_result_40() const { return ___m_result_40; }
	inline uint32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(uint32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t6FC35BB19FCA2C2DB6123A06471BBE690A4321D5 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1C1AAE8EADFDCAF9CEA5AE18E1328F96EEE762D2 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};

// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m3863CB02C1CDBA1050DAAE7311DF9F3E8BCD9D74(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m7E8AA78C1877123B35EAFA58FEF0FA86D8A97583(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m37ACAD97746ABA13006C88EDF582C3B73B68D806(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m53FE58D39AE61799A01EE7ECB9429CB3EE01EEFE() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mD8F3D2C7103B340A9FF16F58333E33643F552635() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;

public:
	inline static int32_t get_offset_of__managedStream_0() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____managedStream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__managedStream_0() const { return ____managedStream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__managedStream_0() { return &____managedStream_0; }
	inline void set__managedStream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____managedStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____managedStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_1() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____leaveUnderlyingStreamOpen_1)); }
	inline bool get__leaveUnderlyingStreamOpen_1() const { return ____leaveUnderlyingStreamOpen_1; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_1() { return &____leaveUnderlyingStreamOpen_1; }
	inline void set__leaveUnderlyingStreamOpen_1(bool value)
	{
		____leaveUnderlyingStreamOpen_1 = value;
	}

	inline static int32_t get_offset_of__readOptimization_2() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____readOptimization_2)); }
	inline int32_t get__readOptimization_2() const { return ____readOptimization_2; }
	inline int32_t* get_address_of__readOptimization_2() { return &____readOptimization_2; }
	inline void set__readOptimization_2(int32_t value)
	{
		____readOptimization_2 = value;
	}
};


// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.IO.StreamFlushAsyncResult
struct StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36  : public StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27
{
public:

public:
};


// System.IO.StreamReadAsyncResult
struct StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33  : public StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamReadAsyncResult::_userBuffer
	RuntimeObject* ____userBuffer_10;

public:
	inline static int32_t get_offset_of__userBuffer_10() { return static_cast<int32_t>(offsetof(StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33, ____userBuffer_10)); }
	inline RuntimeObject* get__userBuffer_10() const { return ____userBuffer_10; }
	inline RuntimeObject** get_address_of__userBuffer_10() { return &____userBuffer_10; }
	inline void set__userBuffer_10(RuntimeObject* value)
	{
		____userBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userBuffer_10), (void*)value);
	}
};


// System.IO.StreamWriteAsyncResult
struct StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667  : public StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27
{
public:

public:
};


// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069  : public RuntimeObject
{
public:
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;

public:
	inline static int32_t get_offset_of__props_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069, ____props_0)); }
	inline int32_t get__props_0() const { return ____props_0; }
	inline int32_t* get_address_of__props_0() { return &____props_0; }
	inline void set__props_0(int32_t value)
	{
		____props_0 = value;
	}
};

struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields
{
public:
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t * ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t * ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t * ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t * ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t * ___s_cachedPreparedType5_5;

public:
	inline static int32_t get_offset_of_s_cachedPreparedType1_1() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType1_1)); }
	inline Type_t * get_s_cachedPreparedType1_1() const { return ___s_cachedPreparedType1_1; }
	inline Type_t ** get_address_of_s_cachedPreparedType1_1() { return &___s_cachedPreparedType1_1; }
	inline void set_s_cachedPreparedType1_1(Type_t * value)
	{
		___s_cachedPreparedType1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType1_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType2_2() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType2_2)); }
	inline Type_t * get_s_cachedPreparedType2_2() const { return ___s_cachedPreparedType2_2; }
	inline Type_t ** get_address_of_s_cachedPreparedType2_2() { return &___s_cachedPreparedType2_2; }
	inline void set_s_cachedPreparedType2_2(Type_t * value)
	{
		___s_cachedPreparedType2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType2_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType3_3() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType3_3)); }
	inline Type_t * get_s_cachedPreparedType3_3() const { return ___s_cachedPreparedType3_3; }
	inline Type_t ** get_address_of_s_cachedPreparedType3_3() { return &___s_cachedPreparedType3_3; }
	inline void set_s_cachedPreparedType3_3(Type_t * value)
	{
		___s_cachedPreparedType3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType3_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType4_4() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType4_4)); }
	inline Type_t * get_s_cachedPreparedType4_4() const { return ___s_cachedPreparedType4_4; }
	inline Type_t ** get_address_of_s_cachedPreparedType4_4() { return &___s_cachedPreparedType4_4; }
	inline void set_s_cachedPreparedType4_4(Type_t * value)
	{
		___s_cachedPreparedType4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType4_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_cachedPreparedType5_5() { return static_cast<int32_t>(offsetof(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_StaticFields, ___s_cachedPreparedType5_5)); }
	inline Type_t * get_s_cachedPreparedType5_5() const { return ___s_cachedPreparedType5_5; }
	inline Type_t ** get_address_of_s_cachedPreparedType5_5() { return &___s_cachedPreparedType5_5; }
	inline void set_s_cachedPreparedType5_5(Type_t * value)
	{
		___s_cachedPreparedType5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedPreparedType5_5), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_4)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_12), (void*)value);
	}
};


// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF  : public RuntimeObject
{
public:
	// Windows.Storage.Streams.IBuffer System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::dataBuffer
	RuntimeObject* ___dataBuffer_0;
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_1;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::bytesRequested
	int32_t ___bytesRequested_2;
	// Windows.Storage.Streams.InputStreamOptions System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::options
	uint32_t ___options_3;

public:
	inline static int32_t get_offset_of_dataBuffer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF, ___dataBuffer_0)); }
	inline RuntimeObject* get_dataBuffer_0() const { return ___dataBuffer_0; }
	inline RuntimeObject** get_address_of_dataBuffer_0() { return &___dataBuffer_0; }
	inline void set_dataBuffer_0(RuntimeObject* value)
	{
		___dataBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF, ___stream_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_1() const { return ___stream_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_bytesRequested_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF, ___bytesRequested_2)); }
	inline int32_t get_bytesRequested_2() const { return ___bytesRequested_2; }
	inline int32_t* get_address_of_bytesRequested_2() { return &___bytesRequested_2; }
	inline void set_bytesRequested_2(int32_t value)
	{
		___bytesRequested_2 = value;
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF, ___options_3)); }
	inline uint32_t get_options_3() const { return ___options_3; }
	inline uint32_t* get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(uint32_t value)
	{
		___options_3 = value;
	}
};


// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d
struct U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF  ___U3CU3Et__builder_1;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.Byte[] System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<data>5__2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CdataU3E5__2_5;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<offset>5__3
	int32_t ___U3CoffsetU3E5__3_6;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<bytesCompleted>5__4
	int32_t ___U3CbytesCompletedU3E5__4_7;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<bytesRead>5__5
	int32_t ___U3CbytesReadU3E5__5_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ___U3CU3Eu__1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_cancelToken_3() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___cancelToken_3)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancelToken_3() const { return ___cancelToken_3; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancelToken_3() { return &___cancelToken_3; }
	inline void set_cancelToken_3(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancelToken_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_3))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressListener_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___U3CdataU3E5__2_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CdataU3E5__2_5() const { return ___U3CdataU3E5__2_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CdataU3E5__2_5() { return &___U3CdataU3E5__2_5; }
	inline void set_U3CdataU3E5__2_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CdataU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoffsetU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___U3CoffsetU3E5__3_6)); }
	inline int32_t get_U3CoffsetU3E5__3_6() const { return ___U3CoffsetU3E5__3_6; }
	inline int32_t* get_address_of_U3CoffsetU3E5__3_6() { return &___U3CoffsetU3E5__3_6; }
	inline void set_U3CoffsetU3E5__3_6(int32_t value)
	{
		___U3CoffsetU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CbytesCompletedU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___U3CbytesCompletedU3E5__4_7)); }
	inline int32_t get_U3CbytesCompletedU3E5__4_7() const { return ___U3CbytesCompletedU3E5__4_7; }
	inline int32_t* get_address_of_U3CbytesCompletedU3E5__4_7() { return &___U3CbytesCompletedU3E5__4_7; }
	inline void set_U3CbytesCompletedU3E5__4_7(int32_t value)
	{
		___U3CbytesCompletedU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CbytesReadU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___U3CbytesReadU3E5__5_8)); }
	inline int32_t get_U3CbytesReadU3E5__5_8() const { return ___U3CbytesReadU3E5__5_8; }
	inline int32_t* get_address_of_U3CbytesReadU3E5__5_8() { return &___U3CbytesReadU3E5__5_8; }
	inline void set_U3CbytesReadU3E5__5_8(int32_t value)
	{
		___U3CbytesReadU3E5__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4, ___U3CU3Eu__1_9)); }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
	}
};


// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d
struct U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * ___U3CU3E4__this_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<bytesToWrite>5__2
	int32_t ___U3CbytesToWriteU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0, ___cancelToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancelToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressListener_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0, ___U3CbytesToWriteU3E5__2_5)); }
	inline int32_t get_U3CbytesToWriteU3E5__2_5() const { return ___U3CbytesToWriteU3E5__2_5; }
	inline int32_t* get_address_of_U3CbytesToWriteU3E5__2_5() { return &___U3CbytesToWriteU3E5__2_5; }
	inline void set_U3CbytesToWriteU3E5__2_5(int32_t value)
	{
		___U3CbytesToWriteU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d
struct U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>t__builder
	AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::cancelToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>4__this
	U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * ___U3CU3E4__this_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.UInt32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<bytesToWrite>5__2
	uint32_t ___U3CbytesToWriteU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55, ___cancelToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancelToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_progressListener_4() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55, ___progressListener_4)); }
	inline RuntimeObject* get_progressListener_4() const { return ___progressListener_4; }
	inline RuntimeObject** get_address_of_progressListener_4() { return &___progressListener_4; }
	inline void set_progressListener_4(RuntimeObject* value)
	{
		___progressListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressListener_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55, ___U3CbytesToWriteU3E5__2_5)); }
	inline uint32_t get_U3CbytesToWriteU3E5__2_5() const { return ___U3CbytesToWriteU3E5__2_5; }
	inline uint32_t* get_address_of_U3CbytesToWriteU3E5__2_5() { return &___U3CbytesToWriteU3E5__2_5; }
	inline void set_U3CbytesToWriteU3E5__2_5(uint32_t value)
	{
		___U3CbytesToWriteU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55, ___U3CU3Eu__1_6)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d
struct U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 
{
public:
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cancelToken_2() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244, ___cancelToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancelToken_2() const { return ___cancelToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancelToken_2() { return &___cancelToken_2; }
	inline void set_cancelToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancelToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancelToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244, ___U3CU3E4__this_3)); }
	inline U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_3_tFEFDB2B01CD4B043311B068436637E5070889805  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C  : public MulticastDelegate_t
{
public:

public:
};


// System.TypeLoadException
struct TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t737F79AE4901C68E935CD553A20978CEEF44F333  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2  : public UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62
{
public:
	// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::_sourceBuffer
	RuntimeObject* ____sourceBuffer_13;

public:
	inline static int32_t get_offset_of__sourceBuffer_13() { return static_cast<int32_t>(offsetof(WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2, ____sourceBuffer_13)); }
	inline RuntimeObject* get__sourceBuffer_13() const { return ____sourceBuffer_13; }
	inline RuntimeObject** get_address_of__sourceBuffer_13() { return &____sourceBuffer_13; }
	inline void set__sourceBuffer_13(RuntimeObject* value)
	{
		____sourceBuffer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sourceBuffer_13), (void*)value);
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DllNotFoundException
struct DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596  : public TypeLoadException_t57F05DC978AA8B70B0CE1AB2EF99D7F97FE428E7
{
public:

public:
};


// System.ObjectDisposedException
struct ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1__ctor_m406D494EC42FC7092C7FC5D54DDDA9152370405E_gshared (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateCompletedOperation<System.Object,System.UInt32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_CreateCompletedOperation_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m8F02CA0A7CF7E1E1DA95C5BE99505B6EDA1FD575_gshared (RuntimeObject * ___synchronousResult0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateFaultedOperation<System.Object,System.UInt32>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_CreateFaultedOperation_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE743FB4924E46DF74D8DAADAEB0922096EAE1406_gshared (Exception_t * ___error0, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mF53BEC1A0F780C21303AB39F3D3D39B3C192BF5C_gshared (Func_3_tA2A8B0E927886E80AC7F18140C1C6161415E29EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Object,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m28A7E2C6DAF4AF9DE48970A1C78594FEE8E2B985_gshared (Func_3_t359FD5E7BAD8B2C342996872E5118F17E5D24F5E * ___taskProvider0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.UInt32,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE0DB7B0FB2E6C3DF13B50EB6DA95F5595A791718_gshared (Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A * ___taskProvider0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.CancellationToken,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4FDD6D066F0A0D7F7ABA0E4067D0EC7A295FEF9E_gshared (Func_2_tFB4752E44FC81929027C0874E2CC5BC203FB9299 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<TResult> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Boolean>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3D73F0240C3DFBF99483E95685495B309B663C6B_gshared (Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3 * ___taskProvider0, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_mFF8E8577A0BB26DC2BDB73C59E24F85A50F126BE_gshared (AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_mBEEE894AB050A3A29C12E1234AD79071A09D9D4A_gshared (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m1FA49556C8AF2651A0954435110D2B4C074D6131_gshared (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::GetWindowsRuntimeStream<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_m2BF01BA573F31B3B42AF7158A684ADF05E9E5E67_gshared (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA862158C8AFAC8C13E7929EBC6C2377B77749884_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateValueCallback__ctor_mB9ADC6D68C2AA74553916845F467C4B66886B9F2_gshared (CreateValueCallback_tE86988D006DE4FD0270C59F0919804201589A502 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !1 System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(!0,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConditionalWeakTable_2_GetValue_mB51D411D93A879AE9CFEE8192F8277244481862F_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, RuntimeObject * ___key0, CreateValueCallback_tE86988D006DE4FD0270C59F0919804201589A502 * ___createValueCallback1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m8E40E9007C1DDFA6CBFECFEB3DB8B073A935C874_gshared (ConditionalWeakTable_2_tCF100268EF76D0BC19F774221E488BBB4CD4B365 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020  AsyncTaskMethodBuilder_1_Create_mE593F9E703EBA7EF294FAC0F5C20F69AF4D08C26_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_mB3F2A7D21E93F1960A3FDCE4CA45E15A2F8C475D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mFFB5FFFD5832DB24B9F7E14BB475861B05358464_gshared (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B_gshared (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mA3958D52F1592896372718C7B09FAF2903B2340C_gshared (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  AsyncTaskMethodBuilder_1_Create_m8BD6E96F985B9A350DFE72E2CCF7497616B64AAD_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_m67A483ECC43944CCC0EAF9F2A56FCF6E32BCD908_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_gshared (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_mBEADD16D1D2F1CD587F8B7E2E3CB597793C8296D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_gshared (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mB0CBF1534C424EAB71B637D7D94A9C08075C645F_gshared (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m8A05ADA8FF6EDF6CFCA2C2660794D545772DC0CC_gshared (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278_gshared (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, uint32_t ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE_gshared (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mE7E56163BF50D945CB1D68BDB080B8749F818F73_gshared (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_mA8E6F6E13D83AE75FC0B473BF5246B5FBEFABD16_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);

// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m40499D330F8C53CB8DB062A378750E4EFF834765 (const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m7EBFB07A7B97F6413261B302A509C280E5E11400 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, int32_t ___Seed0, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1 (Exception_t * ___source0, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4 (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ExceptionDispatchHelper::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchHelper_ThrowAsync_mE9BE6288BF86A15597A56DEEFAC6E4D3FFCD1FB6 (Exception_t * ___exception0, SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___targetContext1, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391 (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::DetermineStreamReadOptimization(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetFxToWinRtStreamAdapter_DetermineStreamReadOptimization_m58EB3801314D6C3443A7EA0AA5ACCB4FB04E0B16 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream__ctor_m038C7BFB1D46906D5DF89F17C9448F1563D8B918 (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/InputOutputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputOutputStream__ctor_m6CA3E83C22D2D1CEE62B0A6CF021D037FFE088D3 (InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/InputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputStream__ctor_m68CA0BD07718A4D24C9284E8EC399585D84BDB64 (InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/OutputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStream__ctor_mE45249984FA1D32DE488BD36B1520969116AEB5C (OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::CanApplyReadMemoryStreamOptimization(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_CanApplyReadMemoryStreamOptimization_mE57A6166BE948862ACE3509F46FDE7A78C36DFC6 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D (Exception_t * __this, int32_t ___hr0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_MemoryStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_MemoryStream_mED35E5235EC5D6A1C22E0A21C30CD2FAE1A6F115 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_AbstractStream_mF67729FB8A31BD11C32CF9320181E6B5F6204B68 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, uint32_t ___options3, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.StreamOperationsImplementation::WriteAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_WriteAsync_AbstractStream_m0A1892CA1978A02EE7D2AC4DD401FE2742EE662A (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject* ___buffer1, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.StreamOperationsImplementation::FlushAsync_AbstractStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_FlushAsync_AbstractStream_mCDDF8FAF730ECC067270252F6BE44BF456E57691 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::ThrowCloningNotSupported(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_mEB739056C500A597233B38098E04A191F9A36ECE (String_t* ___methodName0, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_m61246E6214ACF6ACB2C598F150F0E7DD8F284EBA (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m9D117804CEAD8DDB366EFB055702EF8A98C0B59E (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m04CD33ADE2C70BE8203D158EBD3B542E9A2913E3 (RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3BB834FA13052393D767E65AD6AA9F5895106B8 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m0708B053D257F2CAAF889574B24C4A7962589932 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  ___point10, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  ___point21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m8862DD1ECBAF777BE9D0588E3A8EF156D5804A32 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 System.Double::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39 (double* __this, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_mCA2106041EFEB7B8CF97B5E14AF104B10675119A (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m44B6960BFB68F35716E0BF8F72EDD0F953D7726C (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mF6CC550E4069B44DD2FF78D43A00C72B5DDCBED6 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m2CD22B92BC86D731EC55ED4D2A970491CBFD1C51 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mA2F7BE150D07CEBCFD61C570B32EAC23B2300F9F (Rect_tC45F1DDF39812623644DE296D8057A4958176627  ___rect10, Rect_tC45F1DDF39812623644DE296D8057A4958176627  ___rect21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m04BF12511F6183664FD7B4A02D026FA634070FC3 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m58DC668E32A3C2056607605E74B7F43CBC0A2E1B (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_mED586CB93B08F0C0C6B38058D94AF006D06B2D3A (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  ___size10, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  ___size21, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m37CCB677ADF6B257D9933FA438B4BE1940258A3C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_mF60F1C386F7CC56AC0C97E0F87C0AF09B15A2F6C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m0433DB6256B42158534031FE03B25F45662CFD7C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::.ctor(Windows.Foundation.IAsyncInfo,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult__ctor_m4EF40C261535040FDA42115D9929D78AAC39FD5A (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, RuntimeObject* ___asyncStreamOperation0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationCompletedHandler_1__ctor_m406D494EC42FC7092C7FC5D54DDDA9152370405E (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1__ctor_m406D494EC42FC7092C7FC5D54DDDA9152370405E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m2168C90AB0D3B27C96752E962C524B6DB21E68A1 (StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_m9A9C58014FC08A5B59B25F5D7A0ADEB91ABE90DB (Exception_t * ___e0, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2D8BF8C366EFC78114F7CCDB1F36D7DA0CEF238C (Exception_t * ___nativeException0, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.WaitHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitHandle_Dispose_m065D0C79A79BDC2761EC2042EF06BE2ABE07432E (WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * __this, const RuntimeMethod* method);
// System.Threading.WaitHandle System.IO.StreamOperationAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * StreamOperationAsyncResult_get_AsyncWaitHandle_mEC2CC1587D5C0D572D1676084C9F0874C70E5419 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method);
// System.Boolean System.IO.StreamOperationAsyncResult::CancelStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_CancelStreamOperation_mD876EEEBA5CAF174B5B6B7B44A8894AEBA5BE2A5 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * ExceptionDispatchInfo_get_SourceException_m461A8748D61FCC7EF8D71D2784D851B0523B9B30_inline (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation_InvalidOperationThrowHelper(System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m099FCDDFB91AD16B8B44FABAA58724B0287F7295 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___errInfo0, String_t* ___errMsg1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ThrowWithIOExceptionDispatchInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mF68E2255C8F285DD07C8D9620F43922C6E813FFA (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_mA5C6EC0EF465614E0AE88430AEC8DF3F6025230B (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Interlocked::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interlocked_MemoryBarrier_m67F789B124E593914275180C7B5BE40BF7C06A77 (const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mFCCCB843AEC4B5B3FC89BCED2BA839783920EA47 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject* ___ar0, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetWindowsRuntimeBuffer(System.IO.MemoryStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___underlyingStream0, int32_t ___positionInStream1, int32_t ___length2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateCompletedOperation<Windows.Storage.Streams.IBuffer,System.UInt32>(TResult)
inline RuntimeObject* AsyncInfo_CreateCompletedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m65A1011F5F6AC07752C810182D7DFDAD5894D962 (RuntimeObject* ___synchronousResult0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))AsyncInfo_CreateCompletedOperation_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m8F02CA0A7CF7E1E1DA95C5BE99505B6EDA1FD575_gshared)(___synchronousResult0, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateFaultedOperation<Windows.Storage.Streams.IBuffer,System.UInt32>(System.Exception)
inline RuntimeObject* AsyncInfo_CreateFaultedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFFC434D0B239CFDBDC102A6BB414B60ED53735E8 (Exception_t * ___error0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Exception_t *, const RuntimeMethod*))AsyncInfo_CreateFaultedOperation_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE743FB4924E46DF74D8DAADAEB0922096EAE1406_gshared)(___error0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mFB31F49B69D848D6A4202E5C228090F000EC8773 (U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * __this, const RuntimeMethod* method);
// System.UInt32 System.Math::Min(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_m85C0EE76BB4C0487A6BDE8C1AC5DB265F1D01731 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBuffer_Create_mB5A22FE17FF12F01AB1CBD3B4B2F28DF680DFB8D (int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m729C04D53C73797C133BB99ED6DF3A9BFCEFDE6A (Func_3_tFEFDB2B01CD4B043311B068436637E5070889805 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tFEFDB2B01CD4B043311B068436637E5070889805 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mF53BEC1A0F780C21303AB39F3D3D39B3C192BF5C_gshared)(__this, ___object0, ___method1, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<Windows.Storage.Streams.IBuffer,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m2D515BE44CC2EEF0000471409195DE07E1FFA104 (Func_3_tFEFDB2B01CD4B043311B068436637E5070889805 * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_tFEFDB2B01CD4B043311B068436637E5070889805 *, const RuntimeMethod*))AsyncInfo_Run_TisRuntimeObject_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m28A7E2C6DAF4AF9DE48970A1C78594FEE8E2B985_gshared)(___taskProvider0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m9C80E0F1C68A32966AC1BDE51AF56467CEC8F43C (U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::TryGetUnderlyingData(Windows.Storage.Streams.IBuffer,System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D (RuntimeObject* ___buffer0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___underlyingDataArray1, int32_t* ___underlyingDataArrayStartOffset2, const RuntimeMethod* method);
// System.Void System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m419CF3EBB8FB8DC7517218FA92970124E9C146A5 (Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_3__ctor_mF53BEC1A0F780C21303AB39F3D3D39B3C192BF5C_gshared)(__this, ___object0, ___method1, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.UInt32,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE0DB7B0FB2E6C3DF13B50EB6DA95F5595A791718 (Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A *, const RuntimeMethod*))AsyncInfo_Run_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE0DB7B0FB2E6C3DF13B50EB6DA95F5595A791718_gshared)(___taskProvider0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m350292D0F4A35020BB1B08AE37B9662E357BEA7F (U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m11B8AD33AF4A204453BE2E124607A776B58DCC3A (Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4FDD6D066F0A0D7F7ABA0E4067D0EC7A295FEF9E_gshared)(__this, ___object0, ___method1, method);
}
// Windows.Foundation.IAsyncOperation`1<TResult> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Boolean>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3D73F0240C3DFBF99483E95685495B309B663C6B (Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3 * ___taskProvider0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3 *, const RuntimeMethod*))AsyncInfo_Run_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3D73F0240C3DFBF99483E95685495B309B663C6B_gshared)(___taskProvider0, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_mCFF52653200B0107A811708F38C2B70B61B43885 (AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_mFF8E8577A0BB26DC2BDB73C59E24F85A50F126BE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m74976DB164217A4ADEC6B28D5EF7CD9FF4365010 (StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Void System.IO.WinRtIOHelper::EnsureResultsInUserBuffer(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtIOHelper_EnsureResultsInUserBuffer_mA8464445C199626924D06FD09512D3DA71BFBA2D (RuntimeObject* ___userBuffer0, RuntimeObject* ___resultBuffer1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_mBEEE894AB050A3A29C12E1234AD79071A09D9D4A (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 *, RuntimeObject *, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_mBEEE894AB050A3A29C12E1234AD79071A09D9D4A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m574F743C45D1546AE38267AE4A252FAA6B69A47D (StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_GetInstance_m5E7210CCE4FEC86354CDE721C9E6A9AA119CBFB5 (RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_mDEE0AD902FFF6FD50CC73C9636ECF5603B5705D3_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Exception_GetType_mC5B8B5C944B326B751282AB0E8C25A7F85457D9F (Exception_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m2E583B338AA33E737AFFC4B5B2FB90404E0CD441 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::IsSameData(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_IsSameData_m82285A1BC8340128D111C98CD3F0F25B79E74F3B (RuntimeObject* ___buffer0, RuntimeObject* ___otherBuffer1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_mC39B757A48802F2164588EEBEBEDC7F51C59DBD0 (RuntimeObject* ___source0, RuntimeObject* ___destination1, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IRandomAccessStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m1FA49556C8AF2651A0954435110D2B4C074D6131_gshared)(__this, method);
}
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanWrite_mA36BDE1AAC42A8D3838AEAEDDD4AFE7A2C2A0F36 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IInputStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_m62CFB3E8790BE8D12212844DFB09B71BE02436D9 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m1FA49556C8AF2651A0954435110D2B4C074D6131_gshared)(__this, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanRead_m9C10520B67B8D00F979656A93E7DDAF913092EAF (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m7A963A1238745EA1B15E5FDC68DA2AE906F41997 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.IO.StreamReadAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult__ctor_mB4751ECFF1421735FF8B57120061C884BE9FA73D (StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33 * __this, RuntimeObject* ___asyncStreamReadOperation0, RuntimeObject* ___buffer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___userCompletionCallback2, RuntimeObject * ___userAsyncStateInfo3, bool ___processCompletedOperationInCallback4, const RuntimeMethod* method);
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginRead_mE6AB044C46DE2754BCC8DCE9EF832391EED12E43 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IOutputStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m716E0EB253D4DB25B7932DD5EE58490148835CCD (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m1FA49556C8AF2651A0954435110D2B4C074D6131_gshared)(__this, method);
}
// System.Void System.IO.StreamWriteAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult__ctor_m3E6BCECE31072AA11E7A0D3E7910E0C794077650 (StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667 * __this, RuntimeObject* ___asyncStreamWriteOperation0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method);
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_m50A59F32475413205F8F723F16D88F802AEB642A (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method);
// System.Void System.IO.StreamFlushAsyncResult::.ctor(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult__ctor_m06EC8654F12493C0349F347F66D6310FEA18B572 (StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * __this, RuntimeObject* ___asyncStreamFlushOperation0, bool ___processCompletedOperationInCallback1, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Wait_mE75D8B0522C50D3DB13E208E49880920BD792027 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method);
// System.Boolean System.IO.StreamOperationAsyncResult::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_HasError_m6562D6FE81A91FE169D371027E52AA640BFB20B6 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::CloseStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_CloseStreamOperation_m042F47DF9DB008F66624EC8398941FDEAFE37AE3 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationAsyncResult::ThrowCachedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowCachedError_m6BB20A414CCA426D49DBD08B85B247FB92FEA42E (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m2CC3E1AF862FA66E1BBAE510BBF4A291E7D34874 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_mA589AD77C4BBD6897EE1802F8DF214330D2F3DF8 (RuntimeObject** ___bufferMarshalerPtr0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mEC09896FFBB8AE7C9ED9A83202516F4932F6D388 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201 (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.IntPtr System.Threading.Interlocked::CompareExchange(System.IntPtr&,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interlocked_CompareExchange_m0287C6AF02601D65769C9E5CDC78896267519694 (intptr_t* ___location10, intptr_t ___value1, intptr_t ___comparand2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC (intptr_t ___value0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_m69A7AF2F78D2FD92102F889CE30A1631801F39E2 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A (const RuntimeMethod* method);
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.IBuffer,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD (RuntimeObject* ___source0, uint32_t ___sourceIndex1, RuntimeObject* ___destination2, uint32_t ___destinationIndex3, uint32_t ___count4, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetPointerAtOffset(Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_mD3E36B5B724504FB00B9B474D15D0FE620D8A9F3 (RuntimeObject* ___buffer0, uint32_t ___offset1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mBDE4BE8D48B38EEB9AC3CFFD818A3E6B08E55731 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m5B5711DAE25F766427A60AA33208E669EACD0716 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::MemCopy(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_MemCopy_m9CAD78C950D609251C284C2C0174A315D1E68D9C (intptr_t ___src0, intptr_t ___dst1, uint32_t ___count2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::GetUnderlyingData(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_GetUnderlyingData_mF98EAC4462C456131B597F1ED6C25866EF8EE6C5 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___underlyingDataArray0, int32_t* ___underlyingDataArrayStartOffset1, const RuntimeMethod* method);
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_m805F2DF539D1327A845A6B723C67CD28B40E65E4 (UnauthorizedAccessException_t737F79AE4901C68E935CD553A20978CEEF44F333 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// !0[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *, const RuntimeMethod*))ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline)(__this, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m0F85B577C8583B6CC3B129FFF739C983DF238474 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___index1, int32_t ___count2, bool ___writable3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::.ctor(Windows.Storage.Streams.IBuffer,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m3609BABDC0D1C08EFB30CDC63257A84820D0DEAB (WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2 * __this, RuntimeObject* ___sourceBuffer0, uint8_t* ___dataPtr1, const RuntimeMethod* method);
// System.Object System.IO.WindowsRuntimeStreamExtensions::AsWindowsRuntimeStreamInternal(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_mCA7C1C1EA13F99456CA1CF2F551C603BD62A6E89 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.IO.Stream System.IO.BufferedStream::get_UnderlyingStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * BufferedStream_get_UnderlyingStream_m73FBEC90103DC4CDD89B42D2AC562846F24EB5C4_inline (BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * __this, const RuntimeMethod* method);
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::GetWindowsRuntimeStream<System.Object>()
inline RuntimeObject * WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_m2BF01BA573F31B3B42AF7158A684ADF05E9E5E67 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D *, const RuntimeMethod*))WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_m2BF01BA573F31B3B42AF7158A684ADF05E9E5E67_gshared)(__this, method);
}
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mC830C2F97D5314DF72EEFFE749E7F7FB467D0382 (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * __this, String_t* ___objectName0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::TryGetValue(!0,!1&)
inline bool ConditionalWeakTable_2_TryGetValue_m3DDF21461062BF04F3D0E5E79312BE85FB0D8E7E (ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___key0, NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD **, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA862158C8AFAC8C13E7929EBC6C2377B77749884_gshared)(__this, ___key0, ___value1, method);
}
// System.IO.NetFxToWinRtStreamAdapter System.IO.WindowsRuntimeStreamExtensions::AsWindowsRuntimeStreamInternalFactoryHelper(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternalFactoryHelper_mF2577D4425C9AD03D50CD8A571D2854AA645663F (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::.ctor(System.Object,System.IntPtr)
inline void CreateValueCallback__ctor_m84F8E3AD53A878D6A80773FCC422ED195F7C83E6 (CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 *, RuntimeObject *, intptr_t, const RuntimeMethod*))CreateValueCallback__ctor_mB9ADC6D68C2AA74553916845F467C4B66886B9F2_gshared)(__this, ___object0, ___method1, method);
}
// !1 System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::GetValue(!0,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<!0,!1>)
inline NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * ConditionalWeakTable_2_GetValue_mFCD4BCFE169658FB4CDAAB2116587570B3F8808F (ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___key0, CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * ___createValueCallback1, const RuntimeMethod* method)
{
	return ((  NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * (*) (ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 *, const RuntimeMethod*))ConditionalWeakTable_2_GetValue_mB51D411D93A879AE9CFEE8192F8277244481862F_gshared)(__this, ___key0, ___createValueCallback1, method);
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::SetWonInitializationRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_SetWonInitializationRace_mD5DF51D65756D840D8C804643765F280019B22F8 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::.ctor()
inline void ConditionalWeakTable_2__ctor_m2A07D111A0F6C2F9378C4A16FEC047227D03F46E (ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m8E40E9007C1DDFA6CBFECFEB3DB8B073A935C874_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::.ctor()
inline void ConditionalWeakTable_2__ctor_mD2536B2FDC67BD8C6CA840FAF32A5F60DA07A968 (ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 *, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m8E40E9007C1DDFA6CBFECFEB3DB8B073A935C874_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  CancellationToken_Register_m38A48FD8F7E27AE5C42F68A6E33AC762C41CF25F (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772 (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mE1761BE81335B68DA4E0F742344DA72F092A29C1_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  CancellationToken_get_None_mB04BA0EF2CFF1C232295CD0DFD31E68B8B618F93 (const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_mB0B522683D21AFA1DF389FAEDCC2378104CAFDB4_inline (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_ContinueWith_m677069D586E45200AD48EA1913196665025B0866 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * ___continuationAction0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___continuationOptions3, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler4, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4D81DCF10C76AEB669B68A648026DDA582B353F2 (U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter__ctor_mAD8E5B3EE7C68EEEC36F5EE6147D6262235EC363 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::set_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_set_Size_mBD892F48AC347AB88570C0827AAF0095B842E74C (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::Create()
inline AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF  AsyncTaskMethodBuilder_1_Create_m6F376C53460806F3D7CC5B24A810B7ECB57D2783 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mE593F9E703EBA7EF294FAC0F5C20F69AF4D08C26_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m98F82CF4807C6A35851318FD01B7ACC3DA19056F (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * __this, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_mB3F2A7D21E93F1960A3FDCE4CA45E15A2F8C475D_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::get_Task()
inline Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * AsyncTaskMethodBuilder_1_get_Task_m496C4F7DE611D04F4DDD8D2D3155818325A767C0 (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * (*) (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m61DEC300353320E428E17DA0D59D61974F4415BB_gshared)(__this, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Create()
inline AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mFFB5FFFD5832DB24B9F7E14BB475861B05358464 (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mFFB5FFFD5832DB24B9F7E14BB475861B05358464_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::get_Task()
inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * (*) (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mA3958D52F1592896372718C7B09FAF2903B2340C (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mA3958D52F1592896372718C7B09FAF2903B2340C_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  AsyncTaskMethodBuilder_1_Create_m8BD6E96F985B9A350DFE72E2CCF7497616B64AAD (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m8BD6E96F985B9A350DFE72E2CCF7497616B64AAD_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_m67A483ECC43944CCC0EAF9F2A56FCF6E32BCD908 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_m67A483ECC43944CCC0EAF9F2A56FCF6E32BCD908_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_gshared)(__this, method);
}
// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMemoryStream__ctor_m842E41A08BA615148A90816DFEE94AEE6D0616F1 (UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62 * __this, uint8_t* ___pointer0, int64_t ___length1, int64_t ___capacity2, int32_t ___access3, const RuntimeMethod* method);
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m127BD234CFB3525C21B77C1B24516F1BDAFF6D4E (U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA * __this, const RuntimeMethod* method);
// System.IO.NetFxToWinRtStreamAdapter System.IO.NetFxToWinRtStreamAdapter::Create(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * NetFxToWinRtStreamAdapter_Create_mCFCCE6682F27EF6DB0DDD1B98ED2D646BB98E2AF (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9513CC4EE8B992C0AC93FFFCE848D90102E29B4D (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1 (CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * __this, const RuntimeMethod* method);
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F (CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2 (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  (*) (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999 (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m8E7EE7177996B51FD512405432E62B1AE1222076 (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * __this, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * ___awaiter0, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *, ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_mBEADD16D1D2F1CD587F8B7E2E3CB597793C8296D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681 (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m9B82A97DDF714DB40F3F3A427B17C4D9A3E2BEEE (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m2F4B3F813D9DEFDEC39FBCDB714E377D19AC55AA (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mC1D36A45BF2FDCABABBDCEDE49FE3A913422AC19 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mECE29428CA37743D2F19A203D3EF3888E65F04BE (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m736C84D61B4AB2FCD150BD3945C6874471A9224D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m8EB4BEE55C89189510AFEB6A234A1D52E1CB6B25 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mB0CBF1534C424EAB71B637D7D94A9C08075C645F (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mB0CBF1534C424EAB71B637D7D94A9C08075C645F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6 (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m8A05ADA8FF6EDF6CFCA2C2660794D545772DC0CC (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m8A05ADA8FF6EDF6CFCA2C2660794D545772DC0CC_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278 (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, uint32_t ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *, uint32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278_gshared)(__this, ___result0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mCEEE5BD2395036F1C1D727C3E700EF9C98C1AB66 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m1D1090AA1574315EAAAF1BDFAF102FF0DDDFA444 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WindowsRuntimeBufferExtensions_AsStream_mFF165E0D0547E847CB2C20A92510B888456632A5 (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mE7E56163BF50D945CB1D68BDB080B8749F818F73 (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mE7E56163BF50D945CB1D68BDB080B8749F818F73_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m39EAE8D3C28C897571BD6B75E8EEB9FF3B4C91E3 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * __this, const RuntimeMethod* method);
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m33A77D8CF8ADAC6609E23EDDCEEF760CC6AB424E (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_mA8E6F6E13D83AE75FC0B473BF5246B5FBEFABD16 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * ___awaiter0, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_mA8E6F6E13D83AE75FC0B473BF5246B5FBEFABD16_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared)(__this, ___result0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m8AA44C87D0EB20CF938521C952A1853B775E4663 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mA57C936E30D64B8028F444623EA38774735D9255 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WinTypes_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL RoGetBufferMarshaler(IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F**);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m40499D330F8C53CB8DB062A378750E4EFF834765 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var))->get_s_idGenerator_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 1, ((int32_t)2147483647LL));
		V_2 = L_3;
		IL2CPP_LEAVE(0x2D, FINALLY_0023);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = V_0;
			Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_5, /*hidden argument*/NULL);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::EnsureInitializedThreadsafe(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_mEE89719BE4A0B87FCB294BB614728639FAA1CF83 (uint32_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___id0;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___id0;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = AsyncInfoIdGenerator_CreateNext_m40499D330F8C53CB8DB062A378750E4EFF834765(/*hidden argument*/NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___id0;
		V_1 = (uint32_t*)L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Interlocked_CompareExchange_m7EBFB07A7B97F6413261B302A509C280E5E11400((int32_t*)((uintptr_t)L_6), L_7, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.AsyncInfoIdGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_mE1D6A0727D81C4A603D39953F4F70B5481202B06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4(L_0, ((int32_t)19830118), /*hidden argument*/NULL);
		((AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_tF16F79AB004639968E4A54724F6F28FB4DDF48F5_il2cpp_TypeInfo_var))->set_s_idGenerator_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.ExceptionDispatchHelper::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchHelper_ThrowAsync_mE9BE6288BF86A15597A56DEEFAC6E4D3FFCD1FB6 (Exception_t * ___exception0, SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___targetContext1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CThrowAsyncU3Eb__0_0_mB3363903A0109D2B9F6868D27250126A5C800D0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m07976EC558FC7948EC3B2E2CB1754A7D4481B9E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * G_B5_0 = NULL;
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * G_B5_1 = NULL;
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * G_B4_0 = NULL;
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * G_B4_1 = NULL;
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * G_B11_0 = NULL;
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * G_B11_1 = NULL;
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * G_B10_0 = NULL;
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * G_B10_1 = NULL;
	{
		Exception_t * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		Exception_t * L_1 = ___exception0;
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_2;
		L_2 = ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_3 = ___targetContext1;
		if (!L_3)
		{
			goto IL_0041;
		}
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_4 = ___targetContext1;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var);
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_5 = ((U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_6 = L_5;
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			if (L_6)
			{
				G_B5_0 = L_6;
				G_B5_1 = L_4;
				goto IL_002e;
			}
		}

IL_0017:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var);
			U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * L_7 = ((U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_8 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
			SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3CThrowAsyncU3Eb__0_0_mB3363903A0109D2B9F6868D27250126A5C800D0A_RuntimeMethod_var), /*hidden argument*/NULL);
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_9 = L_8;
			((U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_9);
			G_B5_0 = L_9;
			G_B5_1 = G_B4_1;
		}

IL_002e:
		{
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_10 = V_0;
			NullCheck(G_B5_1);
			VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B5_1, G_B5_0, L_10);
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0036;
		}
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Object)
		Exception_t * L_11 = ___exception0;
		ExceptionDispatchHelper_ThrowAsync_mE9BE6288BF86A15597A56DEEFAC6E4D3FFCD1FB6(L_11, (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 *)NULL, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}

IL_0041:
	{
		V_1 = (bool)1;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * L_12 = (SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 *)il2cpp_codegen_object_new(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069_il2cpp_TypeInfo_var);
			SynchronizationContext__ctor_mBFA5A0DA5DAD6FD0001098E970759A1F90A03391(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var);
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_13 = ((U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_14 = L_13;
			G_B10_0 = L_14;
			G_B10_1 = L_12;
			if (L_14)
			{
				G_B11_0 = L_14;
				G_B11_1 = L_12;
				goto IL_0067;
			}
		}

IL_0050:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var);
			U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * L_15 = ((U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_16 = (SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *)il2cpp_codegen_object_new(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C_il2cpp_TypeInfo_var);
			SendOrPostCallback__ctor_m68774F2BDC46DE2BA6C3D61D66481FD4D994F6A4(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m07976EC558FC7948EC3B2E2CB1754A7D4481B9E4_RuntimeMethod_var), /*hidden argument*/NULL);
			SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * L_17 = L_16;
			((U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_17);
			G_B11_0 = L_17;
			G_B11_1 = G_B10_1;
		}

IL_0067:
		{
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_18 = V_0;
			NullCheck(G_B11_1);
			VirtActionInvoker2< SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C *, RuntimeObject * >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B11_1, G_B11_0, L_18);
			goto IL_0074;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006f;
		}
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Object)
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0074;
	} // end catch (depth: 1)

IL_0074:
	{
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_007d;
		}
	}
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_20 = V_0;
		NullCheck(L_20);
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_20, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E* ____ibufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E = il2cpp_codegen_com_query_interface<IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	intptr_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ibufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E->IBufferByteAccess_GetBuffer_m8F6F0F782B7EA90FC90602224E5817AF96A568A9(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0 (RuntimeObject* __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method)
{
	IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F* ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F = il2cpp_codegen_com_query_interface<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F->IMarshal_GetUnmarshalClass_m8E46B958BDAD31CAB4469F61769C4A43CEE851B0(___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlFlags4, ___pCid5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7 (RuntimeObject* __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method)
{
	IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F* ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F = il2cpp_codegen_com_query_interface<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F->IMarshal_GetMarshalSizeMax_mF0954EED35E28BBA1CE5D782B9468FAFA2794CE7(___riid0, ___pv1, ___dwDestContext2, ___pvDestContext3, ___mshlflags4, ___pSize5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68 (RuntimeObject* __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method)
{
	IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F* ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F = il2cpp_codegen_com_query_interface<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F->IMarshal_MarshalInterface_mA481A30479B4E39647B608B7ED40FB7AEB302A68(___pStm0, ___riid1, ___pv2, ___dwDestContext3, ___pvDestContext4, ___mshlflags5);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF (RuntimeObject* __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method)
{
	IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F* ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F = il2cpp_codegen_com_query_interface<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F->IMarshal_UnmarshalInterface_m535C6AE1A1625CCBEE16A8AADD6FA0228668B5AF(___pStm0, ___riid1, ___ppv2);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F (RuntimeObject* __this, intptr_t ___pStm0, const RuntimeMethod* method)
{
	IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F* ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F = il2cpp_codegen_com_query_interface<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F->IMarshal_ReleaseMarshalData_m99BFE51BA91305E8BDDBAE578DE0DE99A1FA626F(___pStm0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30 (RuntimeObject* __this, uint32_t ___dwReserved0, const RuntimeMethod* method)
{
	IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F* ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F = il2cpp_codegen_com_query_interface<IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F->IMarshal_DisconnectObject_m7B4B9C315995DCCA208E1681D8747ED4005BAC30(___dwReserved0);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IO.NetFxToWinRtStreamAdapter System.IO.NetFxToWinRtStreamAdapter::Create(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * NetFxToWinRtStreamAdapter_Create_mCFCCE6682F27EF6DB0DDD1B98ED2D646BB98E2AF (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * V_1 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_Create_mCFCCE6682F27EF6DB0DDD1B98ED2D646BB98E2AF_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = ___stream0;
		int32_t L_5;
		L_5 = NetFxToWinRtStreamAdapter_DetermineStreamReadOptimization_m58EB3801314D6C3443A7EA0AA5ACCB4FB04E0B16(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001f:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = ___stream0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_6);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8 = ___stream0;
		int32_t L_9 = V_0;
		RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * L_10 = (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 *)il2cpp_codegen_object_new(RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_il2cpp_TypeInfo_var);
		RandomAccessStream__ctor_m038C7BFB1D46906D5DF89F17C9448F1563D8B918(L_10, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_007a;
	}

IL_0031:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = ___stream0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_11);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_13 = ___stream0;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_13);
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_15 = ___stream0;
		int32_t L_16 = V_0;
		InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7 * L_17 = (InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7 *)il2cpp_codegen_object_new(InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_il2cpp_TypeInfo_var);
		InputOutputStream__ctor_m6CA3E83C22D2D1CEE62B0A6CF021D037FFE088D3(L_17, L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_007a;
	}

IL_004b:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_18 = ___stream0;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_18);
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_20 = ___stream0;
		int32_t L_21 = V_0;
		InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249 * L_22 = (InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249 *)il2cpp_codegen_object_new(InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_il2cpp_TypeInfo_var);
		InputStream__ctor_m68CA0BD07718A4D24C9284E8EC399585D84BDB64(L_22, L_20, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_007a;
	}

IL_005d:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_23 = ___stream0;
		NullCheck(L_23);
		bool L_24;
		L_24 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_23);
		if (!L_24)
		{
			goto IL_006f;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_25 = ___stream0;
		int32_t L_26 = V_0;
		OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789 * L_27 = (OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789 *)il2cpp_codegen_object_new(OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_il2cpp_TypeInfo_var);
		OutputStream__ctor_mE45249984FA1D32DE488BD36B1520969116AEB5C(L_27, L_25, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		goto IL_007a;
	}

IL_006f:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_28 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFAAA1D4C74B19E4EA70FF43057879BAF549456EC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_Create_mCFCCE6682F27EF6DB0DDD1B98ED2D646BB98E2AF_RuntimeMethod_var)));
	}

IL_007a:
	{
		NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * L_29 = V_1;
		return L_29;
	}
}
// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::DetermineStreamReadOptimization(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetFxToWinRtStreamAdapter_DetermineStreamReadOptimization_m58EB3801314D6C3443A7EA0AA5ACCB4FB04E0B16 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		bool L_1;
		L_1 = NetFxToWinRtStreamAdapter_CanApplyReadMemoryStreamOptimization_mE57A6166BE948862ACE3509F46FDE7A78C36DFC6(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000a:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::CanApplyReadMemoryStreamOptimization(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_CanApplyReadMemoryStreamOptimization_mE57A6166BE948862ACE3509F46FDE7A78C36DFC6 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		V_0 = ((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)IsInstClass((RuntimeObject*)L_0, MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var));
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * >::Invoke(34 /* System.Boolean System.IO.MemoryStream::TryGetBuffer(System.ArraySegment`1<System.Byte>&) */, L_2, (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_1));
		return L_3;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter__ctor_mAD8E5B3EE7C68EEEC36F5EE6147D6262235EC363 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method)
{
	{
		__this->set__leaveUnderlyingStreamOpen_1((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___readOptimization1;
		__this->set__readOptimization_2(L_0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		__this->set__managedStream_0(L_1);
		return;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::SetWonInitializationRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_SetWonInitializationRace_mD5DF51D65756D840D8C804643765F280019B22F8 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	{
		__this->set__leaveUnderlyingStreamOpen_1((bool)0);
		return;
	}
}
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_0 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__managedStream_0();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_2 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mE57C6A61713668708F9B3CEF060A8D006B1FE880(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4792D73601AFAC8241C44E882B3149512DDA812)), /*hidden argument*/NULL);
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_3, ((int32_t)-2147483629), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85_RuntimeMethod_var)));
	}

IL_001f:
	{
		return G_B2_0;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_System_IDisposable_Dispose_mC85AEE5C582996B9A6FECE99B1EF7D74AD979833 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_0 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__managedStream_0();
		V_0 = L_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		__this->set__managedStream_0((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
		bool L_2 = __this->get__leaveUnderlyingStreamOpen_1();
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3 = V_0;
		NullCheck(L_3);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_3, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC_RuntimeMethod_var)));
	}

IL_000e:
	{
		uint32_t L_2 = ___count1;
		if (false)
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_3 = ___count1;
		if ((!(((uint32_t)((int32_t)2147483647LL)) < ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}

IL_001a:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = L_4;
		NullCheck(L_5);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_5, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___buffer0;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_6);
		uint32_t L_8 = ___count1;
		if ((!(((uint32_t)L_7) < ((uint32_t)L_8))))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = L_9;
		NullCheck(L_10);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_10, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC_RuntimeMethod_var)));
	}

IL_004f:
	{
		uint32_t L_11 = ___options2;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_12 = ___options2;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_13 = ___options2;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_14 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF7DF948FC4905FED1A56776B9DFCCB86C46912A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97A6DE11F0A437842D0A2AE6CCB91D8BA5E81213)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_15 = L_14;
		NullCheck(L_15);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_15, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC_RuntimeMethod_var)));
	}

IL_0075:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_16;
		L_16 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		V_0 = L_16;
		int32_t L_17 = __this->get__readOptimization_2();
		V_2 = L_17;
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_20 = V_0;
		RuntimeObject* L_21 = ___buffer0;
		uint32_t L_22 = ___count1;
		RuntimeObject* L_23;
		L_23 = StreamOperationsImplementation_ReadAsync_MemoryStream_mED35E5235EC5D6A1C22E0A21C30CD2FAE1A6F115(L_20, L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		goto IL_00a3;
	}

IL_0095:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_24 = V_0;
		RuntimeObject* L_25 = ___buffer0;
		uint32_t L_26 = ___count1;
		uint32_t L_27 = ___options2;
		RuntimeObject* L_28;
		L_28 = StreamOperationsImplementation_ReadAsync_AbstractStream_mF67729FB8A31BD11C32CF9320181E6B5F6204B68(L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		V_1 = L_28;
		goto IL_00a3;
	}

IL_00a1:
	{
		V_1 = (RuntimeObject*)NULL;
	}

IL_00a3:
	{
		RuntimeObject* L_29 = V_1;
		return L_29;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___buffer0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_4 = ___buffer0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97B5D9A9C1E93F6D1C82708532506E0F66173640)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_7 = L_6;
		NullCheck(L_7);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_7, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4_RuntimeMethod_var)));
	}

IL_0032:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_8;
		L_8 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ___buffer0;
		RuntimeObject* L_10;
		L_10 = StreamOperationsImplementation_WriteAsync_AbstractStream_m0A1892CA1978A02EE7D2AC4DD401FE2742EE662A(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1;
		L_1 = StreamOperationsImplementation_FlushAsync_AbstractStream_mCDDF8FAF730ECC067270252F6BE44BF456E57691(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		uint64_t L_0 = ___position0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = L_1;
		NullCheck(L_2);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_2, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C_RuntimeMethod_var)));
	}

IL_0022:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3;
		L_3 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		uint64_t L_4 = ___position0;
		V_0 = L_4;
		int64_t L_5 = V_0;
		NullCheck(L_3);
		int64_t L_6;
		L_6 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(27 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_3, L_5, 0);
		return;
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::set_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_set_Size_mBD892F48AC347AB88570C0827AAF0095B842E74C (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B4_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B3_0 = NULL;
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF16CB6EAF2A1F143A075008C091BEF301FE5C4F)), /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = L_1;
		NullCheck(L_2);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_2, ((int32_t)-2147024809), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_set_Size_mBD892F48AC347AB88570C0827AAF0095B842E74C_RuntimeMethod_var)));
	}

IL_0022:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_3;
		L_3 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_m88F3180573228E134F64D39CB5150CCB0BED1A85(__this, /*hidden argument*/NULL);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = L_3;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_4);
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_0046;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral832C4F81E24CCBFF4E7EB3B607EF3F2014F042CD)), /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_7 = L_6;
		NullCheck(L_7);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_7, ((int32_t)-2147483634), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_set_Size_mBD892F48AC347AB88570C0827AAF0095B842E74C_RuntimeMethod_var)));
	}

IL_0046:
	{
		uint64_t L_8 = ___value0;
		V_0 = L_8;
		int64_t L_9 = V_0;
		NullCheck(G_B4_0);
		VirtActionInvoker1< int64_t >::Invoke(28 /* System.Void System.IO.Stream::SetLength(System.Int64) */, G_B4_0, L_9);
		return;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::ThrowCloningNotSupported(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_mEB739056C500A597233B38098E04A191F9A36ECE (String_t* ___methodName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___methodName0;
		String_t* L_1;
		L_1 = String_Concat_mC41740F000A5A48F8D313FB4CEE0E35E207A2632(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC572FE41E8E4C5A824E966055EB754531EA8F74F)), L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52B2BD21832AF0B449CFD652E1B844BE0BC454D9)), /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_2 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_2, L_1, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_3, ((int32_t)-2147467263), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_mEB739056C500A597233B38098E04A191F9A36ECE_RuntimeMethod_var)));
	}
}
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47F6922CBC47935F33073D4990D85481289C7B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_mEB739056C500A597233B38098E04A191F9A36ECE(_stringLiteralA47F6922CBC47935F33073D4990D85481289C7B2, /*hidden argument*/NULL);
		return (RuntimeObject*)NULL;
	}
}
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral873B6C8A4B1BCC0DE87008C0BEE9C272FF746BEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_mEB739056C500A597233B38098E04A191F9A36ECE(_stringLiteral873B6C8A4B1BCC0DE87008C0BEE9C272FF746BEE, /*hidden argument*/NULL);
		return (RuntimeObject*)NULL;
	}
}
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05CC11CA67D7FCD20736A7DBD8C65EEA11AA548);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_mEB739056C500A597233B38098E04A191F9A36ECE(_stringLiteralB05CC11CA67D7FCD20736A7DBD8C65EEA11AA548, /*hidden argument*/NULL);
		return (RuntimeObject*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_m61246E6214ACF6ACB2C598F150F0E7DD8F284EBA (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ToString_m61246E6214ACF6ACB2C598F150F0E7DD8F284EBA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ToString_m61246E6214ACF6ACB2C598F150F0E7DD8F284EBA(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m9D117804CEAD8DDB366EFB055702EF8A98C0B59E (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2;
		L_2 = Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Point_System_IFormattable_ToString_m9D117804CEAD8DDB366EFB055702EF8A98C0B59E_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_System_IFormattable_ToString_m9D117804CEAD8DDB366EFB055702EF8A98C0B59E(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___provider1;
		Il2CppChar L_1;
		L_1 = TokenizerHelper_GetNumericListSeparator_m04CD33ADE2C70BE8203D158EBD3B542E9A2913E3(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___provider1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		String_t* L_6 = ___format0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		String_t* L_9 = ___format0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_11;
		L_11 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_10, /*hidden argument*/NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject * L_14 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_13);
		double L_15;
		L_15 = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, /*hidden argument*/NULL);
		double L_16 = L_15;
		RuntimeObject * L_17 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_16);
		double L_18;
		L_18 = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, /*hidden argument*/NULL);
		double L_19 = L_18;
		RuntimeObject * L_20 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mA3BB834FA13052393D767E65AD6AA9F5895106B8(L_2, L_11, L_14, L_17, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ConvertToString_m1718BB721B25C6838DF9517C43C3672A5651D800(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m0708B053D257F2CAAF889574B24C4A7962589932 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  ___point10, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  ___point21, const RuntimeMethod* method)
{
	{
		double L_0;
		L_0 = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)(&___point10), /*hidden argument*/NULL);
		double L_1;
		L_1 = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)(&___point21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2;
		L_2 = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)(&___point10), /*hidden argument*/NULL);
		double L_3;
		L_3 = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)(&___point21), /*hidden argument*/NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_m8862DD1ECBAF777BE9D0588E3A8EF156D5804A32 (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578  L_1 = (*(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3;
		L_3 = Point_op_Equality_m0708B053D257F2CAAF889574B24C4A7962589932(L_1, ((*(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)UnBox(L_2, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Point_Equals_m8862DD1ECBAF777BE9D0588E3A8EF156D5804A32_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Point_Equals_m8862DD1ECBAF777BE9D0588E3A8EF156D5804A32(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_mCA2106041EFEB7B8CF97B5E14AF104B10675119A (Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Point_get_X_mBB038490F2A4DEDC4933215A768B9A81E4C2CC1B((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_2;
		L_2 = Point_get_Y_m2F97D657DF50D6247401C2290485AB8543DF6D46((Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Point_GetHashCode_mCA2106041EFEB7B8CF97B5E14AF104B10675119A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * _thisAdjusted = reinterpret_cast<Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Point_GetHashCode_mCA2106041EFEB7B8CF97B5E14AF104B10675119A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__x_0();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__y_1();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_3();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_2();
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m44B6960BFB68F35716E0BF8F72EDD0F953D7726C (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0;
		L_0 = Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, (String_t*)NULL, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ToString_m44B6960BFB68F35716E0BF8F72EDD0F953D7726C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ToString_m44B6960BFB68F35716E0BF8F72EDD0F953D7726C(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mF6CC550E4069B44DD2FF78D43A00C72B5DDCBED6 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2;
		L_2 = Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_System_IFormattable_ToString_mF6CC550E4069B44DD2FF78D43A00C72B5DDCBED6_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_System_IFormattable_ToString_mF6CC550E4069B44DD2FF78D43A00C72B5DDCBED6(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rect_get_IsEmpty_mE36545CBAEDF2D001CBAC319393EA79E48D27C0F((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___provider1;
		Il2CppChar L_2;
		L_2 = TokenizerHelper_GetNumericListSeparator_m04CD33ADE2C70BE8203D158EBD3B542E9A2913E3(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___provider1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7 = ___format0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		String_t* L_10 = ___format0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		String_t* L_13 = ___format0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		String_t* L_16 = ___format0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_18;
		L_18 = String_Concat_m27B9C3007C7DABFABCC3726B37A3BE08CB40C417(L_17, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject * L_23 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		float L_25 = __this->get__x_0();
		float L_26 = L_25;
		RuntimeObject * L_27 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_27);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = L_24;
		float L_29 = __this->get__y_1();
		float L_30 = L_29;
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_31);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_32 = L_28;
		float L_33 = __this->get__width_2();
		float L_34 = L_33;
		RuntimeObject * L_35 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_35);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_36 = L_32;
		float L_37 = __this->get__height_3();
		float L_38 = L_37;
		RuntimeObject * L_39 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_39);
		String_t* L_40;
		L_40 = String_Format_m2CD22B92BC86D731EC55ED4D2A970491CBFD1C51(L_3, L_18, L_36, /*hidden argument*/NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ConvertToString_mB4FB30771B944939D306264C3CEC8CA261663AB8(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_mA2F7BE150D07CEBCFD61C570B32EAC23B2300F9F (Rect_tC45F1DDF39812623644DE296D8057A4958176627  ___rect10, Rect_tC45F1DDF39812623644DE296D8057A4958176627  ___rect21, const RuntimeMethod* method)
{
	{
		double L_0;
		L_0 = Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect10), /*hidden argument*/NULL);
		double L_1;
		L_1 = Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2;
		L_2 = Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect10), /*hidden argument*/NULL);
		double L_3;
		L_3 = Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4;
		L_4 = Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect10), /*hidden argument*/NULL);
		double L_5;
		L_5 = Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect21), /*hidden argument*/NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6;
		L_6 = Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect10), /*hidden argument*/NULL);
		double L_7;
		L_7 = Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)(&___rect21), /*hidden argument*/NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m04BF12511F6183664FD7B4A02D026FA634070FC3 (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Rect_tC45F1DDF39812623644DE296D8057A4958176627  L_1 = (*(Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3;
		L_3 = Rect_op_Equality_mA2F7BE150D07CEBCFD61C570B32EAC23B2300F9F(L_1, ((*(Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)UnBox(L_2, Rect_tC45F1DDF39812623644DE296D8057A4958176627_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rect_Equals_m04BF12511F6183664FD7B4A02D026FA634070FC3_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_Equals_m04BF12511F6183664FD7B4A02D026FA634070FC3(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m58DC668E32A3C2056607605E74B7F43CBC0A2E1B (Rect_tC45F1DDF39812623644DE296D8057A4958176627 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Rect_get_X_mC61200F5A6209C1923A31A9E3472119F5A8D6D44((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_2;
		L_2 = Rect_get_Y_m7259D1A5D24C16D7A11BC20990974BD4CD3F7A45((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_4;
		L_4 = Rect_get_Width_m84D19C975C7FFB238982BD399F5BD47DDB6D8755((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_6;
		L_6 = Rect_get_Height_mD13C951C4E65C105EAF648BB3CF57D483683F239((Rect_tC45F1DDF39812623644DE296D8057A4958176627 *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Rect_GetHashCode_m58DC668E32A3C2056607605E74B7F43CBC0A2E1B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Rect_tC45F1DDF39812623644DE296D8057A4958176627 * _thisAdjusted = reinterpret_cast<Rect_tC45F1DDF39812623644DE296D8057A4958176627 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rect_GetHashCode_m58DC668E32A3C2056607605E74B7F43CBC0A2E1B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__width_0();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__height_1();
		return ((double)((double)L_0));
	}
}
IL2CPP_EXTERN_C  double Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2 (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	{
		double L_0;
		L_0 = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m37CCB677ADF6B257D9933FA438B4BE1940258A3C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  L_1 = (*(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this);
		RuntimeObject * L_2 = ___o0;
		bool L_3;
		L_3 = Size_Equals_mED586CB93B08F0C0C6B38058D94AF006D06B2D3A(L_1, ((*(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)UnBox(L_2, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Size_Equals_m37CCB677ADF6B257D9933FA438B4BE1940258A3C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_Equals_m37CCB677ADF6B257D9933FA438B4BE1940258A3C(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_mF60F1C386F7CC56AC0C97E0F87C0AF09B15A2F6C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1;
		L_1 = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		double L_3;
		L_3 = Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Double_GetHashCode_m33CB20AA5674C6F4367B7B08340B33FB979F9F39((double*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_2^(int32_t)L_4));
	}
}
IL2CPP_EXTERN_C  int32_t Size_GetHashCode_mF60F1C386F7CC56AC0C97E0F87C0AF09B15A2F6C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Size_GetHashCode_mF60F1C386F7CC56AC0C97E0F87C0AF09B15A2F6C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_mED586CB93B08F0C0C6B38058D94AF006D06B2D3A (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  ___size10, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92  ___size21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size10), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size21), /*hidden argument*/NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2;
		L_2 = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_2;
		double L_3;
		L_3 = Size_get_Width_mFFFADCD6C6C747A37D60B86A1C06938E566D6026((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size21), /*hidden argument*/NULL);
		bool L_4;
		L_4 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(&V_0), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5;
		L_5 = Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size10), /*hidden argument*/NULL);
		V_0 = L_5;
		double L_6;
		L_6 = Size_get_Height_mC2E3FEE775BD1E4268FBB24945F34B237931A779((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)(&___size21), /*hidden argument*/NULL);
		bool L_7;
		L_7 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)(&V_0), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m0433DB6256B42158534031FE03B25F45662CFD7C (Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m9C27BE69640130CF3B78325BFE795417D116B1F2((Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
	}

IL_000e:
	{
		float L_1 = __this->get__width_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->get__height_1();
		float L_5 = L_4;
		RuntimeObject * L_6 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_3, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Size_ToString_m0433DB6256B42158534031FE03B25F45662CFD7C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * _thisAdjusted = reinterpret_cast<Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Size_ToString_m0433DB6256B42158534031FE03B25F45662CFD7C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamFlushAsyncResult::.ctor(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult__ctor_m06EC8654F12493C0349F347F66D6310FEA18B572 (StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * __this, RuntimeObject* ___asyncStreamFlushOperation0, bool ___processCompletedOperationInCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1__ctor_m406D494EC42FC7092C7FC5D54DDDA9152370405E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamFlushOperation0;
		bool L_1 = ___processCompletedOperationInCallback1;
		StreamOperationAsyncResult__ctor_m4EF40C261535040FDA42115D9929D78AAC39FD5A(__this, L_0, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)NULL, NULL, L_1, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___asyncStreamFlushOperation0;
		AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * L_3 = (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 *)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var);
		AsyncOperationCompletedHandler_1__ctor_m406D494EC42FC7092C7FC5D54DDDA9152370405E(L_3, __this, (intptr_t)((intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var), /*hidden argument*/AsyncOperationCompletedHandler_1__ctor_m406D494EC42FC7092C7FC5D54DDDA9152370405E_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker1< AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * >::Invoke(0 /* System.Void Windows.Foundation.IAsyncOperation`1<System.Boolean>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<!0>) */, IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m346DBF7E51C4594662AFF8D167739650B9514749 (StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m2168C90AB0D3B27C96752E962C524B6DB21E68A1(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m2168C90AB0D3B27C96752E962C524B6DB21E68A1 (StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t* G_B2_0 = NULL;
	int64_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	int64_t* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* !0 Windows.Foundation.IAsyncOperation`1<System.Boolean>::GetResults() */, IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int64_t* L_2 = ___bytesCompleted1;
		bool L_3 = V_0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		*((int64_t*)G_B3_1) = (int64_t)((int64_t)((int64_t)G_B3_0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationAsyncResult::ThrowWithIOExceptionDispatchInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mF68E2255C8F285DD07C8D9620F43922C6E813FFA (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__completedOperation_9();
		NullCheck(L_0);
		Exception_t * L_1;
		L_1 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_0);
		Exception_t * L_2;
		L_2 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_m9A9C58014FC08A5B59B25F5D7A0ADEB91ABE90DB(L_1, /*hidden argument*/NULL);
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_3;
		L_3 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2D8BF8C366EFC78114F7CCDB1F36D7DA0CEF238C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::.ctor(Windows.Foundation.IAsyncInfo,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult__ctor_m4EF40C261535040FDA42115D9929D78AAC39FD5A (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, RuntimeObject* ___asyncStreamOperation0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___asyncStreamOperation0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86026AF0E517D49DA08ECB5085428B0DD45FB264)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult__ctor_m4EF40C261535040FDA42115D9929D78AAC39FD5A_RuntimeMethod_var)));
	}

IL_0014:
	{
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_2 = ___userCompletionCallback1;
		__this->set__userCompletionCallback_0(L_2);
		RuntimeObject * L_3 = ___userAsyncStateInfo2;
		__this->set__userAsyncStateInfo_1(L_3);
		RuntimeObject* L_4 = ___asyncStreamOperation0;
		__this->set__asyncStreamOperation_2(L_4);
		il2cpp_codegen_memory_barrier();
		__this->set__completed_3(0);
		il2cpp_codegen_memory_barrier();
		__this->set__callbackInvoked_4(0);
		__this->set__bytesCompleted_6(((int64_t)((int64_t)0)));
		__this->set__errorInfo_7((ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 *)NULL);
		bool L_5 = ___processCompletedOperationInCallback3;
		__this->set__processCompletedOperationInCallback_8(L_5);
		return;
	}
}
// System.Object System.IO.StreamOperationAsyncResult::get_AsyncState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StreamOperationAsyncResult_get_AsyncState_mA2E1B7519AD7CF9B4589B324EC92181F452399D6 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__userAsyncStateInfo_1();
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.StreamOperationAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * StreamOperationAsyncResult_get_AsyncWaitHandle_mEC2CC1587D5C0D572D1676084C9F0874C70E5419 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * V_0 = NULL;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * V_1 = NULL;
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = __this->get__waitHandle_5();
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = V_0;
		return L_2;
	}

IL_000e:
	{
		bool L_3 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** L_5 = __this->get_address_of__waitHandle_5();
		il2cpp_codegen_memory_barrier();
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_6 = V_0;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_7;
		L_7 = InterlockedCompareExchangeImpl<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *>((ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA **)L_5, L_6, (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)NULL);
		V_1 = L_7;
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_9 = V_0;
		NullCheck(L_9);
		WaitHandle_Dispose_m065D0C79A79BDC2761EC2042EF06BE2ABE07432E(L_9, /*hidden argument*/NULL);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_10 = V_1;
		return L_10;
	}

IL_0035:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_11 = V_0;
		return L_11;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_CompletedSynchronously_mCB694C3225E6982D2F379060F264346AE6B2FD91 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_IsCompleted_mED014A182B316DBF1D368C8232C3B7CF1F9A9132 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Wait_mE75D8B0522C50D3DB13E208E49880920BD792027 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * V_0 = NULL;
	{
		bool L_0 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * L_1;
		L_1 = StreamOperationAsyncResult_get_AsyncWaitHandle_mEC2CC1587D5C0D572D1676084C9F0874C70E5419(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001b;
	}

IL_0014:
	{
		WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_2);
	}

IL_001b:
	{
		bool L_4 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_HasError_m6562D6FE81A91FE169D371027E52AA640BFB20B6 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_0 = __this->get__errorInfo_7();
		return (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ThrowCachedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowCachedError_m6BB20A414CCA426D49DBD08B85B247FB92FEA42E (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_0 = __this->get__errorInfo_7();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_1 = __this->get__errorInfo_7();
		NullCheck(L_1);
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::CancelStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_CancelStreamOperation_mD876EEEBA5CAF174B5B6B7B44A8894AEBA5BE2A5 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__callbackInvoked_4();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		RuntimeObject* L_1 = __this->get__asyncStreamOperation_2();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Windows.Foundation.IAsyncInfo::Cancel() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_1);
		return (bool)1;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::CloseStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_CloseStreamOperation_m042F47DF9DB008F66624EC8398941FDEAFE37AE3 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_0 = __this->get__asyncStreamOperation_2();
			if (!L_0)
			{
				goto IL_0013;
			}
		}

IL_0008:
		{
			RuntimeObject* L_1 = __this->get__asyncStreamOperation_2();
			NullCheck(L_1);
			InterfaceActionInvoker0::Invoke(4 /* System.Void Windows.Foundation.IAsyncInfo::Close() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_1);
		}

IL_0013:
		{
			goto IL_0018;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{ // begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0018;
	} // end catch (depth: 1)

IL_0018:
	{
		__this->set__asyncStreamOperation_2((RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Finalize_mDCFE44E099F697B247990106CCDE5C65E87E69FD (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		bool L_0;
		L_0 = StreamOperationAsyncResult_CancelStreamOperation_mD876EEEBA5CAF174B5B6B7B44A8894AEBA5BE2A5(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation_InvalidOperationThrowHelper(System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m099FCDDFB91AD16B8B44FABAA58724B0287F7295 (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * ___errInfo0, String_t* ___errMsg1, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	Exception_t * G_B3_0 = NULL;
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_0 = ___errInfo0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_1 = ___errInfo0;
		NullCheck(L_1);
		Exception_t * L_2;
		L_2 = ExceptionDispatchInfo_get_SourceException_m461A8748D61FCC7EF8D71D2784D851B0523B9B30_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = ((Exception_t *)(NULL));
	}

IL_000c:
	{
		V_0 = G_B3_0;
		Exception_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_4 = ___errMsg1;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_5 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m099FCDDFB91AD16B8B44FABAA58724B0287F7295_RuntimeMethod_var)));
	}

IL_0017:
	{
		String_t* L_6 = ___errMsg1;
		Exception_t * L_7 = V_0;
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m099FCDDFB91AD16B8B44FABAA58724B0287F7295_RuntimeMethod_var)));
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_mA5C6EC0EF465614E0AE88430AEC8DF3F6025230B (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A415D789D919AD88B5D9DEA8D8716351276D26B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1A89E50A90934499ED855F3DDECC1AF3F1A2B88);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * G_B9_0 = NULL;
	{
		bool L_0 = __this->get__callbackInvoked_4();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_1 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m099FCDDFB91AD16B8B44FABAA58724B0287F7295(L_1, _stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A, /*hidden argument*/NULL);
	}

IL_001a:
	{
		bool L_2 = __this->get__processCompletedOperationInCallback_8();
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		bool L_3 = __this->get__completed_3();
		il2cpp_codegen_memory_barrier();
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_4 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m099FCDDFB91AD16B8B44FABAA58724B0287F7295(L_4, _stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A, /*hidden argument*/NULL);
	}

IL_003c:
	{
		RuntimeObject* L_5 = __this->get__completedOperation_9();
		if (L_5)
		{
			goto IL_008a;
		}
	}
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_6 = __this->get__errorInfo_7();
		V_0 = L_6;
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_8 = V_0;
		NullCheck(L_8);
		Exception_t * L_9;
		L_9 = ExceptionDispatchInfo_get_SourceException_m461A8748D61FCC7EF8D71D2784D851B0523B9B30_inline(L_8, /*hidden argument*/NULL);
		G_B9_0 = L_9;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = ((Exception_t *)(NULL));
	}

IL_0057:
	{
		V_1 = G_B9_0;
		V_2 = _stringLiteralA1A89E50A90934499ED855F3DDECC1AF3F1A2B88;
		Exception_t * L_10 = V_1;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		Exception_t * L_11 = V_1;
		if (!((NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)IsInstClass((RuntimeObject*)L_11, NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_12 = V_2;
		Exception_t * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		NullCheck(L_12);
		bool L_15;
		L_15 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_16 = V_0;
		NullCheck(L_16);
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(L_16, /*hidden argument*/NULL);
		goto IL_008a;
	}

IL_007f:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_17 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_ProcessCompletedOperation_mA5C6EC0EF465614E0AE88430AEC8DF3F6025230B_RuntimeMethod_var)));
	}

IL_008a:
	{
		RuntimeObject* L_18 = __this->get__completedOperation_9();
		NullCheck(L_18);
		uint32_t L_19;
		L_19 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Foundation.IAsyncInfo::get_Id() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = __this->get__asyncStreamOperation_2();
		NullCheck(L_20);
		uint32_t L_21;
		L_21 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Foundation.IAsyncInfo::get_Id() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_20);
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_00b2;
		}
	}
	{
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_22 = __this->get__errorInfo_7();
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m099FCDDFB91AD16B8B44FABAA58724B0287F7295(L_22, _stringLiteral8A415D789D919AD88B5D9DEA8D8716351276D26B, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		RuntimeObject* L_23 = __this->get__completedOperation_9();
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_23);
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00d9;
		}
	}
	{
		__this->set__bytesCompleted_6(((int64_t)((int64_t)0)));
		RuntimeObject* L_25 = __this->get__completedOperation_9();
		NullCheck(L_25);
		Exception_t * L_26;
		L_26 = InterfaceFuncInvoker0< Exception_t * >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4_il2cpp_TypeInfo_var, L_25);
		StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mF68E2255C8F285DD07C8D9620F43922C6E813FFA(__this, L_26, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		RuntimeObject* L_27 = __this->get__completedOperation_9();
		int64_t* L_28 = __this->get_address_of__bytesCompleted_6();
		VirtActionInvoker2< RuntimeObject*, int64_t* >::Invoke(8 /* System.Void System.IO.StreamOperationAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&) */, __this, L_27, (int64_t*)L_28);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::StreamOperationCompletedCallback(Windows.Foundation.IAsyncInfo,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7 (StreamOperationAsyncResult_tD8D4F6054B4C2D740227A71A7C39BC5D56442B27 * __this, RuntimeObject* ___completedOperation0, int32_t ___unusedCompletionStatus1, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				bool L_0 = __this->get__callbackInvoked_4();
				il2cpp_codegen_memory_barrier();
				if (!L_0)
				{
					goto IL_0015;
				}
			}

IL_000a:
			{
				InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87E93D65632F2787675566D82B8FBFD0856FEAB0)), /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var)));
			}

IL_0015:
			{
				il2cpp_codegen_memory_barrier();
				__this->set__callbackInvoked_4(1);
				RuntimeObject* L_2 = ___completedOperation0;
				if (L_2)
				{
					goto IL_002c;
				}
			}

IL_0021:
			{
				NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_3 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
				NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1A89E50A90934499ED855F3DDECC1AF3F1A2B88)), /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var)));
			}

IL_002c:
			{
				RuntimeObject* L_4 = ___completedOperation0;
				__this->set__completedOperation_9(L_4);
				bool L_5 = __this->get__processCompletedOperationInCallback_8();
				if (!L_5)
				{
					goto IL_0041;
				}
			}

IL_003b:
			{
				StreamOperationAsyncResult_ProcessCompletedOperation_mA5C6EC0EF465614E0AE88430AEC8DF3F6025230B(__this, /*hidden argument*/NULL);
			}

IL_0041:
			{
				IL2CPP_LEAVE(0x81, FINALLY_005a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0043;
			}
			throw e;
		}

CATCH_0043:
		{ // begin catch(System.Exception)
			V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			__this->set__bytesCompleted_6(((int64_t)((int64_t)0)));
			Exception_t * L_6 = V_0;
			ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_7;
			L_7 = ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1(L_6, /*hidden argument*/NULL);
			__this->set__errorInfo_7(L_7);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0x81, FINALLY_005a);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			il2cpp_codegen_memory_barrier();
			__this->set__completed_3(1);
			Interlocked_MemoryBarrier_m67F789B124E593914275180C7B5BE40BF7C06A77(/*hidden argument*/NULL);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_8 = __this->get__waitHandle_5();
			il2cpp_codegen_memory_barrier();
			if (!L_8)
			{
				goto IL_0080;
			}
		}

IL_0072:
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_9 = __this->get__waitHandle_5();
			il2cpp_codegen_memory_barrier();
			NullCheck(L_9);
			bool L_10;
			L_10 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_9, /*hidden argument*/NULL);
		}

IL_0080:
		{
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x81, IL_0081)
	}

IL_0081:
	{
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_11 = __this->get__userCompletionCallback_0();
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_12 = __this->get__userCompletionCallback_0();
		NullCheck(L_12);
		AsyncCallback_Invoke_mFCCCB843AEC4B5B3FC89BCED2BA839783920EA47(L_12, __this, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_MemoryStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_MemoryStream_mED35E5235EC5D6A1C22E0A21C30CD2FAE1A6F115 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfo_CreateCompletedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m65A1011F5F6AC07752C810182D7DFDAD5894D962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject* L_0 = ___buffer1;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_0, 0);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		V_0 = ((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)IsInstClass((RuntimeObject*)L_1, MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var));
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = V_0;
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_3 = V_0;
			NullCheck(L_3);
			int64_t L_4;
			L_4 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
			uint32_t L_5 = ___count2;
			RuntimeObject* L_6;
			L_6 = WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD(L_2, ((int32_t)((int32_t)L_4)), L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			uint32_t L_8;
			L_8 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_7);
			if ((!(((uint32_t)L_8) > ((uint32_t)0))))
			{
				goto IL_0035;
			}
		}

IL_0026:
		{
			MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_9 = V_0;
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			uint32_t L_11;
			L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_10);
			NullCheck(L_9);
			int64_t L_12;
			L_12 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(27 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, ((int64_t)((uint64_t)L_11)), 1);
		}

IL_0035:
		{
			RuntimeObject* L_13 = V_1;
			RuntimeObject* L_14;
			L_14 = AsyncInfo_CreateCompletedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m65A1011F5F6AC07752C810182D7DFDAD5894D962(L_13, /*hidden argument*/AsyncInfo_CreateCompletedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m65A1011F5F6AC07752C810182D7DFDAD5894D962_RuntimeMethod_var);
			V_2 = L_14;
			goto IL_0046;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003e;
		}
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Exception)
		RuntimeObject* L_15;
		L_15 = AsyncInfo_CreateFaultedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFFC434D0B239CFDBDC102A6BB414B60ED53735E8(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncInfo_CreateFaultedOperation_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFFC434D0B239CFDBDC102A6BB414B60ED53735E8_RuntimeMethod_var)));
		V_2 = L_15;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0046;
	} // end catch (depth: 1)

IL_0046:
	{
		RuntimeObject* L_16 = V_2;
		return L_16;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_AbstractStream_mF67729FB8A31BD11C32CF9320181E6B5F6204B68 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject* ___buffer1, uint32_t ___count2, uint32_t ___options3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfo_Run_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m2D515BE44CC2EEF0000471409195DE07E1FFA104_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m729C04D53C73797C133BB99ED6DF3A9BFCEFDE6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tFEFDB2B01CD4B043311B068436637E5070889805_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mFE1F64F591789133E43780CA963413C77F1A4A77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_0 = (U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass1_0__ctor_mFB31F49B69D848D6A4202E5C228090F000EC8773(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_1 = V_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_1);
		L_1->set_stream_1(L_2);
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_3 = V_0;
		uint32_t L_4 = ___options3;
		NullCheck(L_3);
		L_3->set_options_3(L_4);
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_5 = V_0;
		uint32_t L_6 = ___count2;
		NullCheck(L_5);
		L_5->set_bytesRequested_2(L_6);
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_7 = V_0;
		RuntimeObject* L_8 = ___buffer1;
		NullCheck(L_7);
		L_7->set_dataBuffer_0(((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)IsInstSealed((RuntimeObject*)L_8, WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->get_dataBuffer_0();
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_11 = V_0;
		RuntimeObject* L_12 = ___buffer1;
		NullCheck(L_12);
		uint32_t L_13;
		L_13 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		uint32_t L_14;
		L_14 = Math_Min_m85C0EE76BB4C0487A6BDE8C1AC5DB265F1D01731(((int32_t)2147483647LL), L_13, /*hidden argument*/NULL);
		RuntimeObject* L_15;
		L_15 = WindowsRuntimeBuffer_Create_mB5A22FE17FF12F01AB1CBD3B4B2F28DF680DFB8D(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_dataBuffer_0(L_15);
	}

IL_004a:
	{
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_16 = V_0;
		Func_3_tFEFDB2B01CD4B043311B068436637E5070889805 * L_17 = (Func_3_tFEFDB2B01CD4B043311B068436637E5070889805 *)il2cpp_codegen_object_new(Func_3_tFEFDB2B01CD4B043311B068436637E5070889805_il2cpp_TypeInfo_var);
		Func_3__ctor_m729C04D53C73797C133BB99ED6DF3A9BFCEFDE6A(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mFE1F64F591789133E43780CA963413C77F1A4A77_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m729C04D53C73797C133BB99ED6DF3A9BFCEFDE6A_RuntimeMethod_var);
		RuntimeObject* L_18;
		L_18 = AsyncInfo_Run_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m2D515BE44CC2EEF0000471409195DE07E1FFA104(L_17, /*hidden argument*/AsyncInfo_Run_TisIBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m2D515BE44CC2EEF0000471409195DE07E1FFA104_RuntimeMethod_var);
		return L_18;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.StreamOperationsImplementation::WriteAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_WriteAsync_AbstractStream_m0A1892CA1978A02EE7D2AC4DD401FE2742EE662A (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, RuntimeObject* ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfo_Run_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE0DB7B0FB2E6C3DF13B50EB6DA95F5595A791718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3__ctor_m419CF3EBB8FB8DC7517218FA92970124E9C146A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m4445219F60D31A3DEB9CC0FEAC6F7BB3341176E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_mB585D7A26713B56BC3B4879C491EB98119BA811A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * V_0 = NULL;
	Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_0 = (U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass2_0__ctor_m9C80E0F1C68A32966AC1BDE51AF56467CEC8F43C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_1 = V_0;
		RuntimeObject* L_2 = ___buffer1;
		NullCheck(L_1);
		L_1->set_buffer_0(L_2);
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_3 = V_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_4 = ___stream0;
		NullCheck(L_3);
		L_3->set_stream_1(L_4);
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->get_buffer_0();
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_8 = L_7->get_address_of_data_2();
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_9 = V_0;
		NullCheck(L_9);
		int32_t* L_10 = L_9->get_address_of_offset_3();
		bool L_11;
		L_11 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D(L_6, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_8, (int32_t*)L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_12 = V_0;
		Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A * L_13 = (Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A *)il2cpp_codegen_object_new(Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A_il2cpp_TypeInfo_var);
		Func_3__ctor_m419CF3EBB8FB8DC7517218FA92970124E9C146A5(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m4445219F60D31A3DEB9CC0FEAC6F7BB3341176E1_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m419CF3EBB8FB8DC7517218FA92970124E9C146A5_RuntimeMethod_var);
		V_1 = L_13;
		goto IL_0049;
	}

IL_003c:
	{
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_14 = V_0;
		Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A * L_15 = (Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A *)il2cpp_codegen_object_new(Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A_il2cpp_TypeInfo_var);
		Func_3__ctor_m419CF3EBB8FB8DC7517218FA92970124E9C146A5(L_15, L_14, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_mB585D7A26713B56BC3B4879C491EB98119BA811A_RuntimeMethod_var), /*hidden argument*/Func_3__ctor_m419CF3EBB8FB8DC7517218FA92970124E9C146A5_RuntimeMethod_var);
		V_1 = L_15;
	}

IL_0049:
	{
		Func_3_tF1BD101B9A05A863EBE03E61BC6C2CE8BB05C10A * L_16 = V_1;
		RuntimeObject* L_17;
		L_17 = AsyncInfo_Run_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE0DB7B0FB2E6C3DF13B50EB6DA95F5595A791718(L_16, /*hidden argument*/AsyncInfo_Run_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE0DB7B0FB2E6C3DF13B50EB6DA95F5595A791718_RuntimeMethod_var);
		return L_17;
	}
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.StreamOperationsImplementation::FlushAsync_AbstractStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_FlushAsync_AbstractStream_mCDDF8FAF730ECC067270252F6BE44BF456E57691 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfo_Run_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3D73F0240C3DFBF99483E95685495B309B663C6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m11B8AD33AF4A204453BE2E124607A776B58DCC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_mEBC6BD100444E3BE6CAA99A1636F6F4161BA5FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * L_0 = (U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m350292D0F4A35020BB1B08AE37B9662E357BEA7F(L_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * L_1 = L_0;
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_1);
		L_1->set_stream_0(L_2);
		Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3 * L_3 = (Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3 *)il2cpp_codegen_object_new(Func_2_tAF8470C0F66AB867D011CB8DE0D12BC65ACEA8A3_il2cpp_TypeInfo_var);
		Func_2__ctor_m11B8AD33AF4A204453BE2E124607A776B58DCC3A(L_3, L_1, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_mEBC6BD100444E3BE6CAA99A1636F6F4161BA5FEE_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m11B8AD33AF4A204453BE2E124607A776B58DCC3A_RuntimeMethod_var);
		RuntimeObject* L_4;
		L_4 = AsyncInfo_Run_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3D73F0240C3DFBF99483E95685495B309B663C6B(L_3, /*hidden argument*/AsyncInfo_Run_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m3D73F0240C3DFBF99483E95685495B309B663C6B_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamReadAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult__ctor_mB4751ECFF1421735FF8B57120061C884BE9FA73D (StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33 * __this, RuntimeObject* ___asyncStreamReadOperation0, RuntimeObject* ___buffer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___userCompletionCallback2, RuntimeObject * ___userAsyncStateInfo3, bool ___processCompletedOperationInCallback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2__ctor_mCFF52653200B0107A811708F38C2B70B61B43885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamReadOperation0;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___userCompletionCallback2;
		RuntimeObject * L_2 = ___userAsyncStateInfo3;
		bool L_3 = ___processCompletedOperationInCallback4;
		StreamOperationAsyncResult__ctor_m4EF40C261535040FDA42115D9929D78AAC39FD5A(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___buffer1;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamReadAsyncResult__ctor_mB4751ECFF1421735FF8B57120061C884BE9FA73D_RuntimeMethod_var)));
	}

IL_001a:
	{
		RuntimeObject* L_6 = ___buffer1;
		__this->set__userBuffer_10(L_6);
		RuntimeObject* L_7 = ___asyncStreamReadOperation0;
		AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * L_8 = (AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 *)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var);
		AsyncOperationWithProgressCompletedHandler_2__ctor_mCFF52653200B0107A811708F38C2B70B61B43885(L_8, __this, (intptr_t)((intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var), /*hidden argument*/AsyncOperationWithProgressCompletedHandler_2__ctor_mCFF52653200B0107A811708F38C2B70B61B43885_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker1< AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * >::Invoke(2 /* System.Void Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<!0,!1>) */, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93_il2cpp_TypeInfo_var, L_7, L_8);
		return;
	}
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m610BFAFAC70476AF7689764A12ACCD5E798E7E68 (StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamReadAsyncResult_ProcessConcreteCompletedOperation_m74976DB164217A4ADEC6B28D5EF7CD9FF4365010(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m74976DB164217A4ADEC6B28D5EF7CD9FF4365010 (StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* !0 Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults() */, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->get__userBuffer_10();
		RuntimeObject* L_3 = V_0;
		WinRtIOHelper_EnsureResultsInUserBuffer_mA8464445C199626924D06FD09512D3DA71BFBA2D(L_2, L_3, /*hidden argument*/NULL);
		int64_t* L_4 = ___bytesCompleted1;
		RuntimeObject* L_5 = __this->get__userBuffer_10();
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_5);
		*((int64_t*)L_4) = (int64_t)((int64_t)((uint64_t)L_6));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamWriteAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult__ctor_m3E6BCECE31072AA11E7A0D3E7910E0C794077650 (StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667 * __this, RuntimeObject* ___asyncStreamWriteOperation0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___userCompletionCallback1, RuntimeObject * ___userAsyncStateInfo2, bool ___processCompletedOperationInCallback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2__ctor_mBEEE894AB050A3A29C12E1234AD79071A09D9D4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___asyncStreamWriteOperation0;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___userCompletionCallback1;
		RuntimeObject * L_2 = ___userAsyncStateInfo2;
		bool L_3 = ___processCompletedOperationInCallback3;
		StreamOperationAsyncResult__ctor_m4EF40C261535040FDA42115D9929D78AAC39FD5A(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___asyncStreamWriteOperation0;
		AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * L_5 = (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 *)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var);
		AsyncOperationWithProgressCompletedHandler_2__ctor_mBEEE894AB050A3A29C12E1234AD79071A09D9D4A(L_5, __this, (intptr_t)((intptr_t)StreamOperationAsyncResult_StreamOperationCompletedCallback_m8664F986613B86D53F2A6546B57F039B79FD77B7_RuntimeMethod_var), /*hidden argument*/AsyncOperationWithProgressCompletedHandler_2__ctor_mBEEE894AB050A3A29C12E1234AD79071A09D9D4A_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker1< AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * >::Invoke(2 /* System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<!0,!1>) */, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m6D4642009EB79E37E8C1C3F128D703A7438D8E98 (StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___completedOperation0;
		int64_t* L_1 = ___bytesCompleted1;
		StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m574F743C45D1546AE38267AE4A252FAA6B69A47D(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB_il2cpp_TypeInfo_var)), (int64_t*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m574F743C45D1546AE38267AE4A252FAA6B69A47D (StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667 * __this, RuntimeObject* ___completedOperation0, int64_t* ___bytesCompleted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___completedOperation0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* !0 Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::GetResults() */, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int64_t* L_2 = ___bytesCompleted1;
		uint32_t L_3 = V_0;
		*((int64_t*)L_2) = (int64_t)((int64_t)((uint64_t)L_3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m04CD33ADE2C70BE8203D158EBD3B542E9A2913E3 (RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___provider0;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1;
		L_1 = NumberFormatInfo_GetInstance_m5E7210CCE4FEC86354CDE721C9E6A9AA119CBFB5(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberDecimalSeparator_mDEE0AD902FFF6FD50CC73C9636ECF5603B5705D3_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NumberFormatInfo_get_NumberDecimalSeparator_mDEE0AD902FFF6FD50CC73C9636ECF5603B5705D3_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * WinRtIOHelper_NativeExceptionToIOExceptionInfo_m2D8BF8C366EFC78114F7CCDB1F36D7DA0CEF238C (Exception_t * ___nativeException0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD170D006841B596DCF7410F1FDBFBB378C531F14);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Exception_t * L_0 = ___nativeException0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Exception_GetType_mC5B8B5C944B326B751282AB0E8C25A7F85457D9F(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Exception_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(119 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5 = ___nativeException0;
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_6;
		L_6 = ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001e:
	{
		Exception_t * L_7 = ___nativeException0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		V_0 = L_8;
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_IsNullOrWhiteSpace_m2E583B338AA33E737AFFC4B5B2FB90404E0CD441(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = _stringLiteralD170D006841B596DCF7410F1FDBFBB378C531F14;
	}

IL_0033:
	{
		String_t* L_11 = V_0;
		Exception_t * L_12 = ___nativeException0;
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_13 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_13, L_11, L_12, /*hidden argument*/NULL);
		ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * L_14;
		L_14 = ExceptionDispatchInfo_Capture_m2576BA3BF8758CA1B34DF06BD78707EFC8DEE3E1(L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void System.IO.WinRtIOHelper::EnsureResultsInUserBuffer(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtIOHelper_EnsureResultsInUserBuffer_mA8464445C199626924D06FD09512D3DA71BFBA2D (RuntimeObject* ___userBuffer0, RuntimeObject* ___resultBuffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___resultBuffer1;
		RuntimeObject* L_1 = ___userBuffer0;
		bool L_2;
		L_2 = WindowsRuntimeBufferExtensions_IsSameData_m82285A1BC8340128D111C98CD3F0F25B79E74F3B(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RuntimeObject* L_3 = ___resultBuffer1;
		RuntimeObject* L_4 = ___userBuffer0;
		WindowsRuntimeBufferExtensions_CopyTo_mC39B757A48802F2164588EEBEBEDC7F51C59DBD0(L_3, L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___userBuffer0;
		RuntimeObject* L_6 = ___resultBuffer1;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_5, L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanRead_m9C10520B67B8D00F979656A93E7DDAF913092EAF (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canRead_5();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98997B148C010D1AA3341A7CE29C43B075E5D416)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureCanRead_m9C10520B67B8D00F979656A93E7DDAF913092EAF_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanWrite_mA36BDE1AAC42A8D3838AEAEDDD4AFE7A2C2A0F36 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canWrite_6();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral597B697A0554A8988A81FC9F2B357D6027857CEA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureCanWrite_mA36BDE1AAC42A8D3838AEAEDDD4AFE7A2C2A0F36_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanRead_mEEFAF13B04BB453AC6D2D17B29C051A8296CA39C (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canRead_5();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_4();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanWrite_mD4A8E9EC976CBE27DB471F5E0C874E4B08442370 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canWrite_6();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_4();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanSeek_m5E8371F34A7591CF8619F162B0A7A897A7716D74 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__canSeek_7();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = __this->get__winRtStream_4();
		return (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_get_Length_mDF0B04AB284F70BF62C5E28280E93B0A74A1D51D (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		bool L_1 = __this->get__canSeek_7();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_2 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90FE78598A19B3BDD30AE2B14F02A7C553E63A7C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_get_Length_mDF0B04AB284F70BF62C5E28280E93B0A74A1D51D_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		uint64_t L_3;
		L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var, G_B2_0);
		uint64_t L_4 = L_3;
		G_B3_0 = L_4;
		if ((!(((uint64_t)L_4) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			G_B4_0 = L_4;
			goto IL_0035;
		}
	}
	{
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_5 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral164F50649DB9AD66D8010884BCD2E7EF6D9586C3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_get_Length_mDF0B04AB284F70BF62C5E28280E93B0A74A1D51D_RuntimeMethod_var)));
	}

IL_0035:
	{
		return G_B4_0;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_get_Position_m5988993EEDE99249A30261CBE151DCCAB5911D21 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		bool L_1 = __this->get__canSeek_7();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_2 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EC63F13E8EF6446434D8DD192E33F499A18F921)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_get_Position_m5988993EEDE99249A30261CBE151DCCAB5911D21_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		uint64_t L_3;
		L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(4 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position() */, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var, G_B2_0);
		uint64_t L_4 = L_3;
		G_B3_0 = L_4;
		if ((!(((uint64_t)L_4) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			G_B4_0 = L_4;
			goto IL_0035;
		}
	}
	{
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_5 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral164F50649DB9AD66D8010884BCD2E7EF6D9586C3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_get_Position_m5988993EEDE99249A30261CBE151DCCAB5911D21_RuntimeMethod_var)));
	}

IL_0035:
	{
		return G_B4_0;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_set_Position_mB3EF40165C47C58B59200AFD3E8636B2E8F3671D (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral104D147DBCB46F57262B84F93DA55697DB41041F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_set_Position_mB3EF40165C47C58B59200AFD3E8636B2E8F3671D_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_2;
		L_2 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		bool L_3 = __this->get__canSeek_7();
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_002e;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_4 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EC63F13E8EF6446434D8DD192E33F499A18F921)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_set_Position_mB3EF40165C47C58B59200AFD3E8636B2E8F3671D_RuntimeMethod_var)));
	}

IL_002e:
	{
		int64_t L_5 = ___value0;
		NullCheck(G_B4_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(5 /* System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64) */, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var, G_B4_0, L_5);
		return;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, int64_t ___offset0, int32_t ___origin1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint64_t V_3 = 0;
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t G_B16_0 = 0;
	int64_t G_B18_0 = 0;
	int64_t G_B17_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get__canSeek_7();
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_2 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4839FA0EB649348E4C333F51DDFC1E62AEDDBA34)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_3 = ___origin1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		goto IL_0113;
	}

IL_0031:
	{
		int64_t L_4 = ___offset0;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_4);
		int64_t L_5 = ___offset0;
		return L_5;
	}

IL_003a:
	{
		int64_t L_6;
		L_6 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		V_1 = L_6;
		int64_t L_7 = V_1;
		int64_t L_8 = ___offset0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()), (int64_t)L_7))) >= ((int64_t)L_8)))
		{
			goto IL_005a;
		}
	}
	{
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_9 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var)));
	}

IL_005a:
	{
		int64_t L_10 = V_1;
		int64_t L_11 = ___offset0;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)L_11));
		int64_t L_12 = V_2;
		if ((((int64_t)L_12) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_006e;
		}
	}
	{
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_13 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral104D147DBCB46F57262B84F93DA55697DB41041F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var)));
	}

IL_006e:
	{
		int64_t L_14 = V_2;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_14);
		int64_t L_15 = V_2;
		return L_15;
	}

IL_0077:
	{
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		uint64_t L_17;
		L_17 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
		uint64_t L_18 = V_3;
		if ((!(((uint64_t)L_18) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_00d4;
		}
	}
	{
		int64_t L_19 = ___offset0;
		if ((((int64_t)L_19) < ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_009a;
		}
	}
	{
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_20 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var)));
	}

IL_009a:
	{
		int64_t L_21 = ___offset0;
		if ((((int64_t)L_21) == ((int64_t)((int64_t)(std::numeric_limits<int64_t>::min)()))))
		{
			goto IL_00aa;
		}
	}
	{
		int64_t L_22 = ___offset0;
		G_B16_0 = ((-L_22));
		goto IL_00b3;
	}

IL_00aa:
	{
		G_B16_0 = ((int64_t)(std::numeric_limits<int64_t>::min)());
	}

IL_00b3:
	{
		V_5 = G_B16_0;
		uint64_t L_23 = V_3;
		uint64_t L_24 = V_5;
		int64_t L_25 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_23, (int64_t)L_24));
		G_B17_0 = L_25;
		if ((!(((uint64_t)L_25) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			G_B18_0 = L_25;
			goto IL_00d0;
		}
	}
	{
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_26 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var)));
	}

IL_00d0:
	{
		V_4 = G_B18_0;
		goto IL_0108;
	}

IL_00d4:
	{
		uint64_t L_27 = V_3;
		V_6 = L_27;
		int64_t L_28 = V_6;
		int64_t L_29 = ___offset0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()), (int64_t)L_28))) >= ((int64_t)L_29)))
		{
			goto IL_00f1;
		}
	}
	{
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_30 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var)));
	}

IL_00f1:
	{
		int64_t L_31 = V_6;
		int64_t L_32 = ___offset0;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_31, (int64_t)L_32));
		int64_t L_33 = V_4;
		if ((((int64_t)L_33) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0108;
		}
	}
	{
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_34 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
		IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral104D147DBCB46F57262B84F93DA55697DB41041F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var)));
	}

IL_0108:
	{
		int64_t L_35 = V_4;
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_35);
		int64_t L_36 = V_4;
		return L_36;
	}

IL_0113:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_37 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral528B01FB578E1644A959C494D637A7F8756C1A8C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mE1D936462DF1B5ED3AD7016BD5C47DE5978339C1_RuntimeMethod_var)));
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetLength_m78F03F9F30847F87AEA9149151671A4D14521CE6 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, int64_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		int64_t L_0 = ___value0;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D02CF110EAE277BF80B0ABB2DDF1E5C34A5EAA5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_SetLength_m78F03F9F30847F87AEA9149151671A4D14521CE6_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_2;
		L_2 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_m34BF774DAB35599EBFDEFEBE08BAA03A84043774_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = __this->get__canSeek_7();
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_4 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4839FA0EB649348E4C333F51DDFC1E62AEDDBA34)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_SetLength_m78F03F9F30847F87AEA9149151671A4D14521CE6_RuntimeMethod_var)));
	}

IL_002f:
	{
		WinRtToNetFxStreamAdapter_EnsureCanWrite_mA36BDE1AAC42A8D3838AEAEDDD4AFE7A2C2A0F36(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = V_0;
		int64_t L_6 = ___value0;
		NullCheck(L_5);
		InterfaceActionInvoker1< uint64_t >::Invoke(1 /* System.Void Windows.Storage.Streams.IRandomAccessStream::put_Size(System.UInt64) */, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		uint64_t L_8;
		L_8 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = InterfaceFuncInvoker0< uint64_t >::Invoke(4 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position() */, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var, L_9);
		if ((!(((uint64_t)L_8) < ((uint64_t)L_10))))
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		int64_t L_12 = ___value0;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint64_t >::Invoke(5 /* System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64) */, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0051:
	{
		return;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginRead_mE6AB044C46DE2754BCC8DCE9EF832391EED12E43 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_m62CFB3E8790BE8D12212844DFB09B71BE02436D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginRead_mE6AB044C46DE2754BCC8DCE9EF832391EED12E43_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginRead_mE6AB044C46DE2754BCC8DCE9EF832391EED12E43_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginRead_mE6AB044C46DE2754BCC8DCE9EF832391EED12E43_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B3831FCAA702A03FE2F7FCE058D367DE8559B0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginRead_mE6AB044C46DE2754BCC8DCE9EF832391EED12E43_RuntimeMethod_var)));
	}

IL_003f:
	{
		RuntimeObject* L_10;
		L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_m62CFB3E8790BE8D12212844DFB09B71BE02436D9(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_m62CFB3E8790BE8D12212844DFB09B71BE02436D9_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m9C10520B67B8D00F979656A93E7DDAF913092EAF(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		RuntimeObject* L_14;
		L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m7A963A1238745EA1B15E5FDC68DA2AE906F41997(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		int32_t L_16 = ___count2;
		NullCheck(L_10);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, uint32_t, uint32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions) */, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_il2cpp_TypeInfo_var, L_10, L_15, L_16, 1);
		RuntimeObject* L_18 = V_0;
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_19 = ___callback3;
		RuntimeObject * L_20 = ___state4;
		bool L_21 = ___usedByBlockingWrapper5;
		StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33 * L_22 = (StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33 *)il2cpp_codegen_object_new(StreamReadAsyncResult_t449453DAE6452C8A5BD07DCB7A6B3593B2224F33_il2cpp_TypeInfo_var);
		StreamReadAsyncResult__ctor_mB4751ECFF1421735FF8B57120061C884BE9FA73D(L_22, L_17, L_18, L_19, L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_Read_m5C10A6BE8CDD4441A3861CC0AF6B8D4E3D4251DF (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		RuntimeObject* L_3;
		L_3 = WinRtToNetFxStreamAdapter_BeginRead_mE6AB044C46DE2754BCC8DCE9EF832391EED12E43(__this, L_0, L_1, L_2, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)NULL, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		int32_t L_5;
		L_5 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(22 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, __this, L_4);
		return L_5;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_m50A59F32475413205F8F723F16D88F802AEB642A (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___state4, bool ___usedByBlockingWrapper5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m716E0EB253D4DB25B7932DD5EE58490148835CCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginWrite_m50A59F32475413205F8F723F16D88F802AEB642A_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginWrite_m50A59F32475413205F8F723F16D88F802AEB642A_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___count2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginWrite_m50A59F32475413205F8F723F16D88F802AEB642A_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = ___buffer0;
		NullCheck(L_6);
		int32_t L_7 = ___offset1;
		int32_t L_8 = ___count2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginWrite_m50A59F32475413205F8F723F16D88F802AEB642A_RuntimeMethod_var)));
	}

IL_003f:
	{
		RuntimeObject* L_10;
		L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m716E0EB253D4DB25B7932DD5EE58490148835CCD(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m716E0EB253D4DB25B7932DD5EE58490148835CCD_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_mA36BDE1AAC42A8D3838AEAEDDD4AFE7A2C2A0F36(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = ___buffer0;
		int32_t L_12 = ___offset1;
		int32_t L_13 = ___count2;
		RuntimeObject* L_14;
		L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m7A963A1238745EA1B15E5FDC68DA2AE906F41997(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer) */, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_il2cpp_TypeInfo_var, L_10, L_15);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_17 = ___callback3;
		RuntimeObject * L_18 = ___state4;
		bool L_19 = ___usedByBlockingWrapper5;
		StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667 * L_20 = (StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667 *)il2cpp_codegen_object_new(StreamWriteAsyncResult_tFE25862AC4D386D2AC31C5572CDB0C3F5F1C5667_il2cpp_TypeInfo_var);
		StreamWriteAsyncResult__ctor_m3E6BCECE31072AA11E7A0D3E7910E0C794077650(L_20, L_16, L_17, L_18, (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Write_mEB976C6AC1556E2195FE60F76E0165DCE6CA4A45 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___buffer0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___count2;
		RuntimeObject* L_3;
		L_3 = WinRtToNetFxStreamAdapter_BeginWrite_m50A59F32475413205F8F723F16D88F802AEB642A(__this, L_0, L_1, L_2, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)NULL, NULL, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		VirtActionInvoker1< RuntimeObject* >::Invoke(25 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, __this, L_4);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Flush_m1B6ED8AE08B8385798E9E2D0E7880F3E7593A670 (WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m716E0EB253D4DB25B7932DD5EE58490148835CCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m716E0EB253D4DB25B7932DD5EE58490148835CCD(__this, /*hidden argument*/WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_m716E0EB253D4DB25B7932DD5EE58490148835CCD_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get__canWrite_6();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync() */, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_il2cpp_TypeInfo_var, L_2);
		StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * L_4 = (StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 *)il2cpp_codegen_object_new(StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36_il2cpp_TypeInfo_var);
		StreamFlushAsyncResult__ctor_m06EC8654F12493C0349F347F66D6310FEA18B572(L_4, L_3, (bool)0, /*hidden argument*/NULL);
		V_1 = L_4;
		StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * L_5 = V_1;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_mE75D8B0522C50D3DB13E208E49880920BD792027(L_5, /*hidden argument*/NULL);
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * L_6 = V_1;
			NullCheck(L_6);
			StreamOperationAsyncResult_ProcessCompletedOperation_mA5C6EC0EF465614E0AE88430AEC8DF3F6025230B(L_6, /*hidden argument*/NULL);
			StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8;
			L_8 = StreamOperationAsyncResult_get_HasError_m6562D6FE81A91FE169D371027E52AA640BFB20B6(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003d;
			}
		}

IL_0031:
		{
			StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * L_9 = V_1;
			NullCheck(L_9);
			StreamOperationAsyncResult_CloseStreamOperation_m042F47DF9DB008F66624EC8398941FDEAFE37AE3(L_9, /*hidden argument*/NULL);
			StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * L_10 = V_1;
			NullCheck(L_10);
			StreamOperationAsyncResult_ThrowCachedError_m6BB20A414CCA426D49DBD08B85B247FB92FEA42E(L_10, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x46, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		StreamFlushAsyncResult_t084B701DC862E854585B2D2454423C72B0D3EB36 * L_11 = V_1;
		NullCheck(L_11);
		StreamOperationAsyncResult_CloseStreamOperation_m042F47DF9DB008F66624EC8398941FDEAFE37AE3(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBuffer_Create_mB5A22FE17FF12F01AB1CBD3B4B2F28DF680DFB8D (int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_Create_mB5A22FE17FF12F01AB1CBD3B4B2F28DF680DFB8D_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___capacity0;
		WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * L_3 = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m2CC3E1AF862FA66E1BBAE510BBF4A291E7D34874(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_mA589AD77C4BBD6897EE1802F8DF214330D2F3DF8 (RuntimeObject** ___bufferMarshalerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef int32_t (STDCALL *PInvokeFunc) (IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WinTypes_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WinTypes.dll"), "RoGetBufferMarshaler", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bufferMarshalerPtr0' to native representation
	IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F* ____bufferMarshalerPtr0_empty = NULL;
	IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F** ____bufferMarshalerPtr0_marshaled = &____bufferMarshalerPtr0_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WinTypes_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetBufferMarshaler)(____bufferMarshalerPtr0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____bufferMarshalerPtr0_marshaled);
	#endif

	// Marshaling of parameter '___bufferMarshalerPtr0' back from native representation
	RuntimeObject* _____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = NULL;
	if (*____bufferMarshalerPtr0_marshaled != NULL)
	{
		_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____bufferMarshalerPtr0_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced), IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F::IID, *____bufferMarshalerPtr0_marshaled);
		}
	}
	else
	{
		_____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___bufferMarshalerPtr0 = _____bufferMarshalerPtr0_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___bufferMarshalerPtr0, (void*)____bufferMarshalerPtr0_marshaled);

	// Marshaling cleanup of parameter '___bufferMarshalerPtr0' native representation
	if (*____bufferMarshalerPtr0_marshaled != NULL)
	{
		(*____bufferMarshalerPtr0_marshaled)->Release();
		*____bufferMarshalerPtr0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596 * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1;
			L_1 = WindowsRuntimeBuffer_RoGetBufferMarshaler_mA589AD77C4BBD6897EE1802F8DF214330D2F3DF8((RuntimeObject**)(&V_0), /*hidden argument*/NULL);
			V_1 = L_1;
			RuntimeObject* L_2 = V_0;
			((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var))->set_s_winRtMarshalProxy_0(L_2);
			int32_t L_3 = V_1;
			if (!L_3)
			{
				goto IL_003b;
			}
		}

IL_001a:
		{
			String_t* L_4;
			L_4 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC6CCF4B282C357742ED68E704F568ED2482BF22)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE88FB7F7A400DD8C3FDB11F48D50F6D76160556)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E244A75EDAD97000428673DBA8215456B776073)), /*hidden argument*/NULL);
			Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
			Exception_t * L_6 = L_5;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_6, L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A_RuntimeMethod_var)));
		}

IL_003b:
		{
			RuntimeObject* L_8 = V_0;
			if (L_8)
			{
				goto IL_0058;
			}
		}

IL_003e:
		{
			String_t* L_9;
			L_9 = String_Format_m8464C6DD7299114954DA87FC39FCD129F3E2ACA2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC6CCF4B282C357742ED68E704F568ED2482BF22)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE88FB7F7A400DD8C3FDB11F48D50F6D76160556)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E244A75EDAD97000428673DBA8215456B776073)), /*hidden argument*/NULL);
			NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_10 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
			NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A_RuntimeMethod_var)));
		}

IL_0058:
		{
			goto IL_0067;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.DllNotFoundException)
		V_2 = ((DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596 *)IL2CPP_GET_ACTIVE_EXCEPTION(DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596 *));
		DllNotFoundException_tD2224C1993151B8CCF9938FD62649816CF977596 * L_11 = V_2;
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_12 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mEC09896FFBB8AE7C9ED9A83202516F4932F6D388(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77FC6A45AA037417CBD14210CD02B3B9F4A3A680)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0067:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m2CC3E1AF862FA66E1BBAE510BBF4A291E7D34874 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__dataPtr_6((intptr_t)(0));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m2CC3E1AF862FA66E1BBAE510BBF4A291E7D34874_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_2 = ___capacity0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set__data_1(L_3);
		__this->set__dataStartOffs_2(0);
		__this->set__usefulDataLength_3(0);
		int32_t L_4 = ___capacity0;
		__this->set__maxDataCapacity_4(L_4);
		__this->set__dataPtr_6((intptr_t)(0));
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__dataPtr_6((intptr_t)(0));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___data0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF_RuntimeMethod_var)));
	}

IL_001f:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_6 = ___capacity3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_7 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF_RuntimeMethod_var)));
	}

IL_004d:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___data0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF_RuntimeMethod_var)));
	}

IL_0060:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___data0;
		NullCheck(L_12);
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___capacity3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_15 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF_RuntimeMethod_var)));
	}

IL_0074:
	{
		int32_t L_16 = ___capacity3;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF_RuntimeMethod_var)));
	}

IL_0084:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___data0;
		__this->set__data_1(L_19);
		int32_t L_20 = ___offset1;
		__this->set__dataStartOffs_2(L_20);
		int32_t L_21 = ___length2;
		__this->set__usefulDataLength_3(L_21);
		int32_t L_22 = ___capacity3;
		__this->set__maxDataCapacity_4(L_22);
		__this->set__dataPtr_6((intptr_t)(0));
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::GetUnderlyingData(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_GetUnderlyingData_mF98EAC4462C456131B597F1ED6C25866EF8EE6C5 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___underlyingDataArray0, int32_t* ___underlyingDataArrayStartOffset1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_0 = ___underlyingDataArray0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get__data_1();
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_1);
		int32_t* L_2 = ___underlyingDataArrayStartOffset1;
		int32_t L_3 = __this->get__dataStartOffs_2();
		*((int32_t*)L_2) = (int32_t)L_3;
		return;
	}
}
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_m69A7AF2F78D2FD92102F889CE30A1631801F39E2 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 ));
		V_1 = (bool)0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x78, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		{
		}

IL_000d:
		try
		{ // begin try (depth: 2)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__data_1();
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
			L_1 = GCHandle_Alloc_m51C5BC1D6902ADA3B9C297C1A96DB322A6403201((RuntimeObject *)(RuntimeObject *)L_0, 3, /*hidden argument*/NULL);
			V_0 = L_1;
			intptr_t L_2;
			L_2 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
			int32_t L_3 = __this->get__dataStartOffs_2();
			intptr_t L_4;
			L_4 = IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D((intptr_t)L_2, L_3, /*hidden argument*/NULL);
			V_2 = (intptr_t)L_4;
			intptr_t* L_5 = __this->get_address_of__dataPtr_6();
			intptr_t L_6 = V_2;
			intptr_t L_7;
			L_7 = Interlocked_CompareExchange_m0287C6AF02601D65769C9E5CDC78896267519694((intptr_t*)L_5, (intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_8;
			L_8 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_8;
			IL2CPP_LEAVE(0x77, FINALLY_004b);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004b;
		}

FINALLY_004b:
		{ // begin finally (depth: 2)
			{
				bool L_9 = V_1;
				if (L_9)
				{
					goto IL_0057;
				}
			}

IL_004e:
			{
				GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
				goto IL_0076;
			}

IL_0057:
			{
				GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_10 = __this->get_address_of__pinHandle_5();
				bool L_11;
				L_11 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_10, /*hidden argument*/NULL);
				if (!L_11)
				{
					goto IL_006f;
				}
			}

IL_0064:
			{
				GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_12 = __this->get_address_of__pinHandle_5();
				GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_12, /*hidden argument*/NULL);
			}

IL_006f:
			{
				GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_13 = V_0;
				__this->set__pinHandle_5(L_13);
			}

IL_0076:
			{
				IL2CPP_END_FINALLY(75)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(75)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x77, IL_0077)
		}

IL_0077:
		{
			IL2CPP_END_FINALLY(12)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
	}

IL_0078:
	{
		intptr_t L_14 = V_2;
		void* L_15;
		L_15 = IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC((intptr_t)L_14, /*hidden argument*/NULL);
		return (uint8_t*)(L_15);
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Finalize_mB61A1948CDD8B145D00BC2E66F05BB4A713BF5E3 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_0 = __this->get_address_of__pinHandle_5();
			bool L_1;
			L_1 = GCHandle_get_IsAllocated_mEDA4DAC6AD6D881110E96CAFDAB78C068F5B144D((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000d:
		{
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_2 = __this->get_address_of__pinHandle_5();
			GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_2, /*hidden argument*/NULL);
		}

IL_0018:
		{
			IL2CPP_LEAVE(0x21, FINALLY_001a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x21, IL_0021)
	}

IL_0021:
	{
		return;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_mFCD1D3C1A5DC7CB389927A5529BCD86518ED0AB5 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__maxDataCapacity_4();
		return L_0;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_mBC04A275BE71FE110C0A6B94A66A5F9726F6461F (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__usefulDataLength_3();
		return L_0;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, __this);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_2 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97B5D9A9C1E93F6D1C82708532506E0F66173640)), /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m92A787DA80F9CBC81E05D158F3D8099A8F1DD44D(L_3, ((int32_t)-2147483637), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m2B1B2192ECCDAE8762FC18CC6B16B4BC5551D95B_RuntimeMethod_var)));
	}

IL_0024:
	{
		uint32_t L_4 = ___value0;
		__this->set__usefulDataLength_3(L_4);
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_mAF0662BC19B20E3AC7377C080B057C9423B49014 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t* L_0 = __this->get_address_of__dataPtr_6();
		intptr_t L_1;
		L_1 = VolatileRead((intptr_t*)L_0);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3;
		L_3 = IntPtr_op_Inequality_mB4DF9161F8D8F48708A2A7BBD7BF626F1EB8C3C8((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}

IL_001b:
	{
		uint8_t* L_5;
		L_5 = WindowsRuntimeBuffer_PinUnderlyingData_m69A7AF2F78D2FD92102F889CE30A1631801F39E2(__this, /*hidden argument*/NULL);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_6), (void*)(void*)L_5, /*hidden argument*/NULL);
		return (intptr_t)L_6;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mA7586ECB5656276267A0336CA96A2083B41B1BBC (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, uint32_t ___dwReserved0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		uint32_t L_1 = ___dwReserved0;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32) */, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m4140DA5FB36C45D0C1EC1352BEA8DE6696578064 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlflags4, uint32_t* ___pSize5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		Guid_t * L_1 = ___riid0;
		intptr_t L_2 = ___pv1;
		uint32_t L_3 = ___dwDestContext2;
		intptr_t L_4 = ___pvDestContext3;
		uint32_t L_5 = ___mshlflags4;
		uint32_t* L_6 = ___pSize5;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t, uint32_t* >::Invoke(1 /* System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&) */, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var, L_0, (Guid_t *)L_1, (intptr_t)L_2, L_3, (intptr_t)L_4, L_5, (uint32_t*)L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mF89EBF002568BC8D18BA6B28CE2A02A3C67D8426 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, Guid_t * ___riid0, intptr_t ___pv1, uint32_t ___dwDestContext2, intptr_t ___pvDestContext3, uint32_t ___mshlFlags4, Guid_t * ___pCid5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		Guid_t * L_1 = ___riid0;
		intptr_t L_2 = ___pv1;
		uint32_t L_3 = ___dwDestContext2;
		intptr_t L_4 = ___pvDestContext3;
		uint32_t L_5 = ___mshlFlags4;
		Guid_t * L_6 = ___pCid5;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t, Guid_t * >::Invoke(0 /* System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&) */, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var, L_0, (Guid_t *)L_1, (intptr_t)L_2, L_3, (intptr_t)L_4, L_5, (Guid_t *)L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mB73D77AE608A5F1EF29F56F06C45DE1C04B8F639 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t ___pv2, uint32_t ___dwDestContext3, intptr_t ___pvDestContext4, uint32_t ___mshlflags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		Guid_t * L_2 = ___riid1;
		intptr_t L_3 = ___pv2;
		uint32_t L_4 = ___dwDestContext3;
		intptr_t L_5 = ___pvDestContext4;
		uint32_t L_6 = ___mshlflags5;
		NullCheck(L_0);
		InterfaceActionInvoker6< intptr_t, Guid_t *, intptr_t, uint32_t, intptr_t, uint32_t >::Invoke(2 /* System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32) */, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t)L_3, L_4, (intptr_t)L_5, L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m1BBAA5FC9C261A979249C3720C077D910619B4BF (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(4 /* System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr) */, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_m71734EF46FAADB9CEE534A73D08FC73352F37B39 (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * __this, intptr_t ___pStm0, Guid_t * ___riid1, intptr_t* ___ppv2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_mFE15E88142F2E95E3F75B8D5CB0ABC866138FF1A(/*hidden argument*/NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var))->get_s_winRtMarshalProxy_0();
		intptr_t L_1 = ___pStm0;
		Guid_t * L_2 = ___riid1;
		intptr_t* L_3 = ___ppv2;
		NullCheck(L_0);
		InterfaceActionInvoker3< intptr_t, Guid_t *, intptr_t* >::Invoke(3 /* System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&) */, IMarshal_tD34B3265844DB850A43AD96E1A0ABA8DFCF3397F_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m7A963A1238745EA1B15E5FDC68DA2AE906F41997 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___source0;
		int32_t L_1 = ___offset1;
		int32_t L_2 = ___length2;
		int32_t L_3 = ___length2;
		RuntimeObject* L_4;
		L_4 = WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___offset1, int32_t ___length2, int32_t ___capacity3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___offset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_6 = ___capacity3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_7 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F_RuntimeMethod_var)));
	}

IL_003b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9 = ___offset1;
		int32_t L_10 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F_RuntimeMethod_var)));
	}

IL_004e:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = ___source0;
		NullCheck(L_12);
		int32_t L_13 = ___offset1;
		int32_t L_14 = ___capacity3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_15 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F_RuntimeMethod_var)));
	}

IL_0061:
	{
		int32_t L_16 = ___capacity3;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_m96A0F4D50F23DE1FBDB82E0DD6CF1A5A4383E04F_RuntimeMethod_var)));
	}

IL_0070:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___source0;
		int32_t L_20 = ___offset1;
		int32_t L_21 = ___length2;
		int32_t L_22 = ___capacity3;
		WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * L_23 = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF(L_23, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_mC39B757A48802F2164588EEBEBEDC7F51C59DBD0 (RuntimeObject* ___source0, RuntimeObject* ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mC39B757A48802F2164588EEBEBEDC7F51C59DBD0_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___destination1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mC39B757A48802F2164588EEBEBEDC7F51C59DBD0_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___source0;
		RuntimeObject* L_5 = ___destination1;
		RuntimeObject* L_6 = ___source0;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_6);
		WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD(L_4, 0, L_5, 0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.IBuffer,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD (RuntimeObject* ___source0, uint32_t ___sourceIndex1, RuntimeObject* ___destination2, uint32_t ___destinationIndex3, uint32_t ___count4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___destination2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_001c:
	{
		uint32_t L_4 = ___count4;
		if (true)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_002c:
	{
		uint32_t L_6 = ___sourceIndex1;
		if (true)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_7 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFAC928B9632979CA328C6C33549FD409AEF4B74)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_003b:
	{
		uint32_t L_8 = ___destinationIndex3;
		if (true)
		{
			goto IL_004a;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEC49CE5B8EEBB0AE649A7794608079E6C355F17)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_004a:
	{
		RuntimeObject* L_10 = ___source0;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_10);
		uint32_t L_12 = ___sourceIndex1;
		if ((!(((uint32_t)L_11) <= ((uint32_t)L_12))))
		{
			goto IL_005e;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F15B34FDCB1544A2AB6DD55379F791BDA5A40EC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_005e:
	{
		RuntimeObject* L_14 = ___source0;
		NullCheck(L_14);
		uint32_t L_15;
		L_15 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_14);
		uint32_t L_16 = ___sourceIndex1;
		uint32_t L_17 = ___count4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16))) < ((uint32_t)L_17))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30025877E7ECF450F2047975152F5007CA8F7082)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_0075:
	{
		RuntimeObject* L_19 = ___destination2;
		NullCheck(L_19);
		uint32_t L_20;
		L_20 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_19);
		uint32_t L_21 = ___destinationIndex3;
		if ((!(((uint32_t)L_20) <= ((uint32_t)L_21))))
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_22 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F15B34FDCB1544A2AB6DD55379F791BDA5A40EC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_0089:
	{
		RuntimeObject* L_23 = ___destination2;
		NullCheck(L_23);
		uint32_t L_24;
		L_24 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_23);
		uint32_t L_25 = ___destinationIndex3;
		uint32_t L_26 = ___count4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))) < ((uint32_t)L_26))))
		{
			goto IL_00a0;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_27 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B3831FCAA702A03FE2F7FCE058D367DE8559B0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mB3FC107257E386E731B0A262478673EA8ECA37DD_RuntimeMethod_var)));
	}

IL_00a0:
	{
		RuntimeObject* L_28 = ___source0;
		bool L_29;
		L_29 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D(L_28, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)(&V_0), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_4 = L_29;
		RuntimeObject* L_30 = ___destination2;
		bool L_31;
		L_31 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D(L_30, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)(&V_1), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_5 = L_31;
		bool L_32 = V_4;
		bool L_33 = V_5;
		if (!((int32_t)((int32_t)L_32&(int32_t)L_33)))
		{
			goto IL_00cf;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_0;
		int32_t L_35 = V_2;
		uint32_t L_36 = ___sourceIndex1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37 = V_1;
		int32_t L_38 = V_3;
		uint32_t L_39 = ___destinationIndex3;
		uint32_t L_40 = ___count4;
		Buffer_BlockCopy_mF4642D7BB69FA7570F69E323F4597A2166065612((RuntimeArray *)(RuntimeArray *)L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), (RuntimeArray *)(RuntimeArray *)L_37, ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39)), L_40, /*hidden argument*/NULL);
		return;
	}

IL_00cf:
	{
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_42 = ___destination2;
		uint32_t L_43 = ___destinationIndex3;
		intptr_t L_44;
		L_44 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_mD3E36B5B724504FB00B9B474D15D0FE620D8A9F3(L_42, L_43, /*hidden argument*/NULL);
		V_6 = (intptr_t)L_44;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_45 = V_0;
		int32_t L_46 = V_2;
		uint32_t L_47 = ___sourceIndex1;
		intptr_t L_48 = V_6;
		uint32_t L_49 = ___count4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_mBDE4BE8D48B38EEB9AC3CFFD818A3E6B08E55731(L_45, ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)), (intptr_t)L_48, L_49, /*hidden argument*/NULL);
		return;
	}

IL_00ea:
	{
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0101;
		}
	}
	{
		RuntimeObject* L_51 = ___source0;
		uint32_t L_52 = ___sourceIndex1;
		intptr_t L_53;
		L_53 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_mD3E36B5B724504FB00B9B474D15D0FE620D8A9F3(L_51, L_52, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = V_1;
		int32_t L_55 = V_3;
		uint32_t L_56 = ___destinationIndex3;
		uint32_t L_57 = ___count4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m5B5711DAE25F766427A60AA33208E669EACD0716((intptr_t)L_53, L_54, ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56)), L_57, /*hidden argument*/NULL);
		return;
	}

IL_0101:
	{
		RuntimeObject* L_58 = ___source0;
		uint32_t L_59 = ___sourceIndex1;
		intptr_t L_60;
		L_60 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_mD3E36B5B724504FB00B9B474D15D0FE620D8A9F3(L_58, L_59, /*hidden argument*/NULL);
		RuntimeObject* L_61 = ___destination2;
		uint32_t L_62 = ___destinationIndex3;
		intptr_t L_63;
		L_63 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_mD3E36B5B724504FB00B9B474D15D0FE620D8A9F3(L_61, L_62, /*hidden argument*/NULL);
		V_6 = (intptr_t)L_63;
		intptr_t L_64 = V_6;
		uint32_t L_65 = ___count4;
		WindowsRuntimeBufferExtensions_MemCopy_m9CAD78C950D609251C284C2C0174A315D1E68D9C((intptr_t)L_60, (intptr_t)L_64, L_65, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::TryGetUnderlyingData(Windows.Storage.Streams.IBuffer,System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D (RuntimeObject* ___buffer0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** ___underlyingDataArray1, int32_t* ___underlyingDataArrayStartOffset2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___buffer0;
		V_0 = ((WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)IsInstSealed((RuntimeObject*)L_2, WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var));
		WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_4 = ___underlyingDataArray1;
		*((RuntimeObject **)L_4) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)NULL);
		int32_t* L_5 = ___underlyingDataArrayStartOffset2;
		*((int32_t*)L_5) = (int32_t)(-1);
		return (bool)0;
	}

IL_0020:
	{
		WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * L_6 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_7 = ___underlyingDataArray1;
		int32_t* L_8 = ___underlyingDataArrayStartOffset2;
		NullCheck(L_6);
		WindowsRuntimeBuffer_GetUnderlyingData_mF98EAC4462C456131B597F1ED6C25866EF8EE6C5(L_6, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_7, (int32_t*)L_8, /*hidden argument*/NULL);
		return (bool)1;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::IsSameData(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_IsSameData_m82285A1BC8340128D111C98CD3F0F25B79E74F3B (RuntimeObject* ___buffer0, RuntimeObject* ___otherBuffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___buffer0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_IsSameData_m82285A1BC8340128D111C98CD3F0F25B79E74F3B_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___otherBuffer1;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___buffer0;
		RuntimeObject* L_4 = ___otherBuffer1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		RuntimeObject* L_5 = ___buffer0;
		bool L_6;
		L_6 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D(L_5, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)(&V_0), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_4 = L_6;
		RuntimeObject* L_7 = ___otherBuffer1;
		bool L_8;
		L_8 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D(L_7, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)(&V_1), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_5 = L_8;
		bool L_9 = V_4;
		bool L_10 = V_5;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_12) == ((RuntimeObject*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_13))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0046:
	{
		return (bool)0;
	}

IL_0048:
	{
		RuntimeObject* L_16 = ___buffer0;
		RuntimeObject* L_17 = ___otherBuffer1;
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var));
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var)));
		intptr_t L_18;
		L_18 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var)));
		RuntimeObject* L_19 = V_6;
		NullCheck(L_19);
		intptr_t L_20;
		L_20 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var, L_19);
		bool L_21;
		L_21 = IntPtr_op_Equality_m30958D875BACA94F48B6FF6D17B4CF5C36DACD48((intptr_t)L_18, (intptr_t)L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetWindowsRuntimeBuffer(System.IO.MemoryStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ___underlyingStream0, int32_t ___positionInStream1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = ___underlyingStream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral075E3039D77F4010416D02768A2D30DAE372D363)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___positionInStream1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ED816718FBC3E178D3367429A74D7E71535575A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_5 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD_RuntimeMethod_var)));
	}

IL_002c:
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_6 = ___underlyingStream0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_6);
		int32_t L_8 = ___positionInStream1;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF48A59EF6A2D1A2B5003A4E8EC274199F2C46032)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD_RuntimeMethod_var)));
	}

IL_0040:
	{
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_10 = ___underlyingStream0;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtFuncInvoker1< bool, ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * >::Invoke(34 /* System.Boolean System.IO.MemoryStream::TryGetBuffer(System.ArraySegment`1<System.Byte>&) */, L_10, (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0));
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		UnauthorizedAccessException_t737F79AE4901C68E935CD553A20978CEEF44F333 * L_12 = (UnauthorizedAccessException_t737F79AE4901C68E935CD553A20978CEEF44F333 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnauthorizedAccessException_t737F79AE4901C68E935CD553A20978CEEF44F333_il2cpp_TypeInfo_var)));
		UnauthorizedAccessException__ctor_m805F2DF539D1327A845A6B723C67CD28B40E65E4(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213C267FBE52C6C33B5523EDCF2F7345CC49B041)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m3A1DB254D5AD66D6BCA7C1E131D0CABB049995FD_RuntimeMethod_var)));
	}

IL_0055:
	{
		int32_t L_13;
		L_13 = ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0), /*hidden argument*/ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_RuntimeMethod_var);
		V_1 = L_13;
		int32_t L_14 = ___length2;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_15 = ___underlyingStream0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_15);
		int32_t L_17 = ___positionInStream1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B(L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		V_2 = L_18;
		int32_t L_19 = ___length2;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_20 = ___underlyingStream0;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
		int32_t L_22 = ___positionInStream1;
		int32_t L_23;
		L_23 = Math_Min_m6411ABA96F53F6B588FD9F2F72FB5FDAC1C1BC9B(L_19, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_21)), (int32_t)L_22)), /*hidden argument*/NULL);
		int32_t L_24;
		L_24 = Math_Max_m709673BDF5D9264E61FEBBC4CE1038752523838D(0, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25;
		L_25 = ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_inline((ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE *)(&V_0), /*hidden argument*/ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_RuntimeMethod_var);
		int32_t L_26 = V_1;
		int32_t L_27 = ___positionInStream1;
		int32_t L_28 = V_3;
		int32_t L_29 = V_2;
		WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 * L_30 = (WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129 *)il2cpp_codegen_object_new(WindowsRuntimeBuffer_tE3CF8BF11DD5DE3AD2DEDFC9DFB99C5E6CE0A129_il2cpp_TypeInfo_var);
		WindowsRuntimeBuffer__ctor_m1E9B2DB50B7A9D90795865B70036FD0E98D886EF(L_30, L_25, ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_27)), L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WindowsRuntimeBufferExtensions_AsStream_mFF165E0D0547E847CB2C20A92510B888456632A5 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsStream_mFF165E0D0547E847CB2C20A92510B888456632A5_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___source0;
		bool L_3;
		L_3 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D(L_2, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = V_0;
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = ___source0;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_6);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_8 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m0F85B577C8583B6CC3B129FFF739C983DF238474(L_8, L_4, L_5, L_7, (bool)1, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		RuntimeObject* L_9 = ___source0;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = ___source0;
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var, L_11);
		void* L_13;
		L_13 = IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC((intptr_t)L_12, /*hidden argument*/NULL);
		WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2 * L_14 = (WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2 *)il2cpp_codegen_object_new(WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2_il2cpp_TypeInfo_var);
		WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m3609BABDC0D1C08EFB30CDC63257A84820D0DEAB(L_14, L_10, (uint8_t*)(uint8_t*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetPointerAtOffset(Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_mD3E36B5B724504FB00B9B474D15D0FE620D8A9F3 (RuntimeObject* ___buffer0, uint32_t ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___buffer0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var)));
		intptr_t L_1;
		L_1 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IBufferByteAccess_tAB5A5724D10A6E9006A794EC1B2626F787C67E9E_il2cpp_TypeInfo_var)));
		void* L_2;
		L_2 = IntPtr_op_Explicit_mA5998CF146607D3A77FAC10688695E26BD8141BC((intptr_t)L_1, /*hidden argument*/NULL);
		uint32_t L_3 = ___offset1;
		intptr_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline((&L_4), (void*)(void*)((void*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)L_3))), /*hidden argument*/NULL);
		return (intptr_t)L_4;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::MemCopy(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_MemCopy_m9CAD78C950D609251C284C2C0174A315D1E68D9C (intptr_t ___src0, intptr_t ___dst1, uint32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		uint32_t L_0 = ___count2;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0037;
		}
	}
	{
		intptr_t L_1 = ___src0;
		intptr_t L_2 = ___dst1;
		WindowsRuntimeBufferExtensions_MemCopy_m9CAD78C950D609251C284C2C0174A315D1E68D9C((intptr_t)L_1, (intptr_t)L_2, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		intptr_t L_3 = ___src0;
		intptr_t L_4;
		L_4 = IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D((intptr_t)L_3, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		intptr_t L_5 = ___dst1;
		intptr_t L_6;
		L_6 = IntPtr_op_Addition_m9A29705FE7EF0501FD9DB69925AA70734E66BC7D((intptr_t)L_5, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		uint32_t L_7 = ___count2;
		WindowsRuntimeBufferExtensions_MemCopy_m9CAD78C950D609251C284C2C0174A315D1E68D9C((intptr_t)L_4, (intptr_t)L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)2147483647LL))), /*hidden argument*/NULL);
		return;
	}

IL_0037:
	{
		uint32_t L_8 = ___count2;
		V_0 = L_8;
		int32_t L_9 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_1 = L_10;
		intptr_t L_11 = ___src0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = V_1;
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m5B5711DAE25F766427A60AA33208E669EACD0716((intptr_t)L_11, L_12, 0, L_13, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_1;
		intptr_t L_15 = ___dst1;
		int32_t L_16 = V_0;
		Marshal_Copy_mBDE4BE8D48B38EEB9AC3CFFD818A3E6B08E55731(L_14, 0, (intptr_t)L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IInputStream System.IO.WindowsRuntimeStreamExtensions::AsInputStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeStreamExtensions_AsInputStream_m9849FAA37F8DD6C8A5D15FAFF7B84403C6E0D38F (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsInputStream_m9849FAA37F8DD6C8A5D15FAFF7B84403C6E0D38F_RuntimeMethod_var)));
	}

IL_000e:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_4 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFAC57901EC8544C5A7E2C0595D8334FEDA1ED6AE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsInputStream_m9849FAA37F8DD6C8A5D15FAFF7B84403C6E0D38F_RuntimeMethod_var)));
	}

IL_0021:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_mCA7C1C1EA13F99456CA1CF2F551C603BD62A6E89(L_5, /*hidden argument*/NULL);
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2_il2cpp_TypeInfo_var));
	}
}
// Windows.Storage.Streams.IOutputStream System.IO.WindowsRuntimeStreamExtensions::AsOutputStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeStreamExtensions_AsOutputStream_m9E1D8FF199D75F6731D5CECF1313675B7D870A58 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsOutputStream_m9E1D8FF199D75F6731D5CECF1313675B7D870A58_RuntimeMethod_var)));
	}

IL_000e:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_4 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92196344FD1BC529F2C783D1184779BAB239C616)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsOutputStream_m9E1D8FF199D75F6731D5CECF1313675B7D870A58_RuntimeMethod_var)));
	}

IL_0021:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		RuntimeObject * L_6;
		L_6 = WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_mCA7C1C1EA13F99456CA1CF2F551C603BD62A6E89(L_5, /*hidden argument*/NULL);
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD_il2cpp_TypeInfo_var));
	}
}
// System.Object System.IO.WindowsRuntimeStreamExtensions::AsWindowsRuntimeStreamInternal(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_mCA7C1C1EA13F99456CA1CF2F551C603BD62A6E89 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m3DDF21461062BF04F3D0E5E79312BE85FB0D8E7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_m2BF01BA573F31B3B42AF7158A684ADF05E9E5E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * V_0 = NULL;
	NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * V_1 = NULL;
	BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * V_2 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		V_0 = ((WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D *)IsInstClass((RuntimeObject*)L_0, WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_il2cpp_TypeInfo_var));
		WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_2 = ___stream0;
		V_2 = ((BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF *)IsInstSealed((RuntimeObject*)L_2, BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF_il2cpp_TypeInfo_var));
		BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_3 = V_2;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * L_4 = V_2;
		NullCheck(L_4);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_5;
		L_5 = BufferedStream_get_UnderlyingStream_m73FBEC90103DC4CDD89B42D2AC562846F24EB5C4_inline(L_4, /*hidden argument*/NULL);
		V_0 = ((WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D *)IsInstClass((RuntimeObject*)L_5, WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D_il2cpp_TypeInfo_var));
	}

IL_0020:
	{
		WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		WinRtToNetFxStreamAdapter_tD80B23D09908ED4FB814064B29A5FF84D3C6404D * L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject * L_8;
		L_8 = WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_m2BF01BA573F31B3B42AF7158A684ADF05E9E5E67(L_7, /*hidden argument*/WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_m2BF01BA573F31B3B42AF7158A684ADF05E9E5E67_RuntimeMethod_var);
		RuntimeObject * L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_003c;
		}
	}
	{
		ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A * L_10 = (ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_t29EF6F519F16BA477EC682F23E8344BB1E9A958A_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mC830C2F97D5314DF72EEFFE749E7F7FB467D0382(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4792D73601AFAC8241C44E882B3149512DDA812)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_mCA7C1C1EA13F99456CA1CF2F551C603BD62A6E89_RuntimeMethod_var)));
	}

IL_003c:
	{
		return G_B6_0;
	}

IL_003d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * L_11 = ((WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var))->get_s_netFxToWinRtAdapterMap_1();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_12 = ___stream0;
		NullCheck(L_11);
		bool L_13;
		L_13 = ConditionalWeakTable_2_TryGetValue_m3DDF21461062BF04F3D0E5E79312BE85FB0D8E7E(L_11, L_12, (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD **)(&V_1), /*hidden argument*/ConditionalWeakTable_2_TryGetValue_m3DDF21461062BF04F3D0E5E79312BE85FB0D8E7E_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * L_14 = V_1;
		return L_14;
	}

IL_004e:
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_15 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * L_16;
		L_16 = WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternalFactoryHelper_mF2577D4425C9AD03D50CD8A571D2854AA645663F(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.IO.NetFxToWinRtStreamAdapter System.IO.WindowsRuntimeStreamExtensions::AsWindowsRuntimeStreamInternalFactoryHelper(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternalFactoryHelper_mF2577D4425C9AD03D50CD8A571D2854AA645663F (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_GetValue_mFCD4BCFE169658FB4CDAAB2116587570B3F8808F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateValueCallback__ctor_m84F8E3AD53A878D6A80773FCC422ED195F7C83E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAsWindowsRuntimeStreamInternalFactoryHelperU3Eb__18_0_m8452C90E376CFCD06DC0BC186ED412B40981D9B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * G_B2_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B2_1 = NULL;
	ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * G_B2_2 = NULL;
	CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * G_B1_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B1_1 = NULL;
	ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * G_B1_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * L_0 = ((WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var))->get_s_netFxToWinRtAdapterMap_1();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_1 = ___stream0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var);
		CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * L_2 = ((U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA * L_4 = ((U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * L_5 = (CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 *)il2cpp_codegen_object_new(CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908_il2cpp_TypeInfo_var);
		CreateValueCallback__ctor_m84F8E3AD53A878D6A80773FCC422ED195F7C83E6(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CAsWindowsRuntimeStreamInternalFactoryHelperU3Eb__18_0_m8452C90E376CFCD06DC0BC186ED412B40981D9B6_RuntimeMethod_var), /*hidden argument*/CreateValueCallback__ctor_m84F8E3AD53A878D6A80773FCC422ED195F7C83E6_RuntimeMethod_var);
		CreateValueCallback_t6FE182F84B306CF1FEC9D2747D3A8A5018418908 * L_6 = L_5;
		((U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		NullCheck(G_B2_2);
		NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * L_7;
		L_7 = ConditionalWeakTable_2_GetValue_mFCD4BCFE169658FB4CDAAB2116587570B3F8808F(G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/ConditionalWeakTable_2_GetValue_mFCD4BCFE169658FB4CDAAB2116587570B3F8808F_RuntimeMethod_var);
		NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * L_8 = L_7;
		NullCheck(L_8);
		NetFxToWinRtStreamAdapter_SetWonInitializationRace_mD5DF51D65756D840D8C804643765F280019B22F8(L_8, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Void System.IO.WindowsRuntimeStreamExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions__cctor_m29608D3616F244926B1D569ACC54FBAE09881C62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_m2A07D111A0F6C2F9378C4A16FEC047227D03F46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_mD2536B2FDC67BD8C6CA840FAF32A5F60DA07A968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C * L_0 = (ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C *)il2cpp_codegen_object_new(ConditionalWeakTable_2_tC5DF09F9F0422EBD479D2D76CEB29F650E7F425C_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_m2A07D111A0F6C2F9378C4A16FEC047227D03F46E(L_0, /*hidden argument*/ConditionalWeakTable_2__ctor_m2A07D111A0F6C2F9378C4A16FEC047227D03F46E_RuntimeMethod_var);
		((WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var))->set_s_winRtToNetFxAdapterMap_0(L_0);
		ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 * L_1 = (ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587 *)il2cpp_codegen_object_new(ConditionalWeakTable_2_tE3CA4D25B431D4C1E5740890EF932268869BE587_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_mD2536B2FDC67BD8C6CA840FAF32A5F60DA07A968(L_1, /*hidden argument*/ConditionalWeakTable_2__ctor_mD2536B2FDC67BD8C6CA840FAF32A5F60DA07A968_RuntimeMethod_var);
		((WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var))->set_s_netFxToWinRtAdapterMap_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m8C4E3C8ED37956F5AD7759557C16260CED2ECFD2 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___source0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___sink1, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___concatenationLifetime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m58C22FF74F0ED46128DC029260EBB1DBE0B078A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3CA1C6225A9BBFF348E501B52B09F9F1BE240677_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B2_0 = NULL;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * G_B2_1 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B1_0 = NULL;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * G_B1_1 = NULL;
	Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * G_B4_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B4_1 = NULL;
	Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * G_B3_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B3_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_0 = ((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = (&___source0);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___source0);
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * L_2 = ((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_3 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m58C22FF74F0ED46128DC029260EBB1DBE0B078A9_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_4 = L_3;
		((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * L_5 = ___sink1;
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_6;
		L_6 = CancellationToken_Register_m38A48FD8F7E27AE5C42F68A6E33AC762C41CF25F((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)G_B2_1, G_B2_0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7 = ___concatenationLifetime2;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_8 = ((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->get_U3CU3E9__0_1_2();
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * L_10 = ((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_11 = (Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 *)il2cpp_codegen_object_new(Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4_il2cpp_TypeInfo_var);
		Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3CA1C6225A9BBFF348E501B52B09F9F1BE240677_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mF5BAD5A096500EC74F25D943B318D37A7E9B2772_RuntimeMethod_var);
		Action_2_tD95FEB0CD8C2141DE035440434C3769AA37151D4 * L_12 = L_11;
		((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->set_U3CU3E9__0_1_2(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_13 = V_0;
		CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  L_14 = L_13;
		RuntimeObject * L_15 = Box(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var, &L_14);
		IL2CPP_RUNTIME_CLASS_INIT(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_il2cpp_TypeInfo_var);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_16;
		L_16 = CancellationToken_get_None_mB04BA0EF2CFF1C232295CD0DFD31E68B8B618F93(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_17;
		L_17 = TaskScheduler_get_Default_mB0B522683D21AFA1DF389FAEDCC2378104CAFDB4_inline(/*hidden argument*/NULL);
		NullCheck(G_B4_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_18;
		L_18 = Task_ContinueWith_m677069D586E45200AD48EA1913196665025B0866(G_B4_1, G_B4_0, L_15, L_16, ((int32_t)524288), L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_m9A9C58014FC08A5B59B25F5D7A0ADEB91ABE90DB (Exception_t * ___e0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___e0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD6BB3FB20F3BE086792799BB4AA11DB953EDC1ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * L_0 = (U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 *)il2cpp_codegen_object_new(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4D81DCF10C76AEB669B68A648026DDA582B353F2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4D81DCF10C76AEB669B68A648026DDA582B353F2 (U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::<ThrowAsync>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CThrowAsyncU3Eb__0_0_mB3363903A0109D2B9F6868D27250126A5C800D0A (U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * __this, RuntimeObject * ___edi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___edi0;
		NullCheck(((ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09_il2cpp_TypeInfo_var)));
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(((ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::<ThrowAsync>b__0_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m07976EC558FC7948EC3B2E2CB1754A7D4481B9E4 (U3CU3Ec_t78C32968871E614CD5AF5D7902483FE4723D1075 * __this, RuntimeObject * ___edi0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___edi0;
		NullCheck(((ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09_il2cpp_TypeInfo_var)));
		ExceptionDispatchInfo_Throw_m7BB0D6275623932B2FCEB0BD7FF4073ED010C095(((ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 *)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.NetFxToWinRtStreamAdapter/InputOutputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputOutputStream__ctor_m6CA3E83C22D2D1CEE62B0A6CF021D037FFE088D3 (InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___readOptimization1;
		NetFxToWinRtStreamAdapter__ctor_mAD8E5B3EE7C68EEEC36F5EE6147D6262235EC363(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.NetFxToWinRtStreamAdapter/InputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputStream__ctor_m68CA0BD07718A4D24C9284E8EC399585D84BDB64 (InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___readOptimization1;
		NetFxToWinRtStreamAdapter__ctor_mAD8E5B3EE7C68EEEC36F5EE6147D6262235EC363(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.NetFxToWinRtStreamAdapter/OutputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStream__ctor_mE45249984FA1D32DE488BD36B1520969116AEB5C (OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___readOptimization1;
		NetFxToWinRtStreamAdapter__ctor_mAD8E5B3EE7C68EEEC36F5EE6147D6262235EC363(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream__ctor_m038C7BFB1D46906D5DF89F17C9448F1563D8B918 (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___readOptimization1, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___stream0;
		int32_t L_1 = ___readOptimization1;
		NetFxToWinRtStreamAdapter__ctor_mAD8E5B3EE7C68EEEC36F5EE6147D6262235EC363(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		NetFxToWinRtStreamAdapter_set_Size_mBD892F48AC347AB88570C0827AAF0095B842E74C(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mFB31F49B69D848D6A4202E5C228090F000EC8773 (U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::<ReadAsync_AbstractStream>b__0(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_mFE1F64F591789133E43780CA963413C77F1A4A77 (U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m6F376C53460806F3D7CC5B24A810B7ECB57D2783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m98F82CF4807C6A35851318FD01B7ACC3DA19056F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m496C4F7DE611D04F4DDD8D2D3155818325A767C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_3(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF  L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m6F376C53460806F3D7CC5B24A810B7ECB57D2783(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m6F376C53460806F3D7CC5B24A810B7ECB57D2783_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m98F82CF4807C6A35851318FD01B7ACC3DA19056F((AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *)L_3, (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m98F82CF4807C6A35851318FD01B7ACC3DA19056F_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_m496C4F7DE611D04F4DDD8D2D3155818325A767C0((AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m496C4F7DE611D04F4DDD8D2D3155818325A767C0_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m9C80E0F1C68A32966AC1BDE51AF56467CEC8F43C (U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::<WriteAsync_AbstractStream>b__0(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m4445219F60D31A3DEB9CC0FEAC6F7BB3341176E1 (U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mFFB5FFFD5832DB24B9F7E14BB475861B05358464_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mFFB5FFFD5832DB24B9F7E14BB475861B05358464((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_3, (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mFFB5FFFD5832DB24B9F7E14BB475861B05358464_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::<WriteAsync_AbstractStream>b__1(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_mB585D7A26713B56BC3B4879C491EB98119BA811A (U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken0, RuntimeObject* ___progressListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mA3958D52F1592896372718C7B09FAF2903B2340C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		RuntimeObject* L_1 = ___progressListener1;
		(&V_0)->set_progressListener_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7  L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m7BBF407E5320FBACA46D957080BDEA8B2BA920EB_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mA3958D52F1592896372718C7B09FAF2903B2340C((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_3, (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mA3958D52F1592896372718C7B09FAF2903B2340C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_mD75CCABBB7F8F1BEF86A73DAF7D9A8822EB6852B_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m350292D0F4A35020BB1B08AE37B9662E357BEA7F (U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::<FlushAsync_AbstractStream>b__0(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_mEBC6BD100444E3BE6CAA99A1636F6F4161BA5FEE (U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m8BD6E96F985B9A350DFE72E2CCF7497616B64AAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_m67A483ECC43944CCC0EAF9F2A56FCF6E32BCD908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = ___cancelToken0;
		(&V_0)->set_cancelToken_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  L_1;
		L_1 = AsyncTaskMethodBuilder_1_Create_m8BD6E96F985B9A350DFE72E2CCF7497616B64AAD(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_m8BD6E96F985B9A350DFE72E2CCF7497616B64AAD_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_2 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_m67A483ECC43944CCC0EAF9F2A56FCF6E32BCD908((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_2, (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_m67A483ECC43944CCC0EAF9F2A56FCF6E32BCD908_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_3, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m6F8035FA0DEBE32D20BAD45867B41491F5D55F78_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::.ctor(Windows.Storage.Streams.IBuffer,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m3609BABDC0D1C08EFB30CDC63257A84820D0DEAB (WindowsRuntimeBufferUnmanagedMemoryStream_tF4F2C43EA7B8DDE6E8030BC00895A77456112ED2 * __this, RuntimeObject* ___sourceBuffer0, uint8_t* ___dataPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = ___dataPtr1;
		RuntimeObject* L_1 = ___sourceBuffer0;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___sourceBuffer0;
		NullCheck(L_3);
		uint32_t L_4;
		L_4 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_3);
		UnmanagedMemoryStream__ctor_m842E41A08BA615148A90816DFEE94AEE6D0616F1(__this, (uint8_t*)(uint8_t*)L_0, ((int64_t)((uint64_t)L_2)), ((int64_t)((uint64_t)L_4)), 3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___sourceBuffer0;
		__this->set__sourceBuffer_13(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9E3D28EF63C99F5E5BB9A11FC67EB41C29F88480 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA * L_0 = (U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA *)il2cpp_codegen_object_new(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m127BD234CFB3525C21B77C1B24516F1BDAFF6D4E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m127BD234CFB3525C21B77C1B24516F1BDAFF6D4E (U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.NetFxToWinRtStreamAdapter System.IO.WindowsRuntimeStreamExtensions/<>c::<AsWindowsRuntimeStreamInternalFactoryHelper>b__18_0(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * U3CU3Ec_U3CAsWindowsRuntimeStreamInternalFactoryHelperU3Eb__18_0_m8452C90E376CFCD06DC0BC186ED412B40981D9B6 (U3CU3Ec_tCD7BF557D547104D18D0372C66DEF71D2FA235EA * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___str0, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = ___str0;
		NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * L_1;
		L_1 = NetFxToWinRtStreamAdapter_Create_mCFCCE6682F27EF6DB0DDD1B98ED2D646BB98E2AF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m53260FAF728AD2BE4D01E86896D315D5B70B7F2D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * L_0 = (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA *)il2cpp_codegen_object_new(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9513CC4EE8B992C0AC93FFFCE848D90102E29B4D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9513CC4EE8B992C0AC93FFFCE848D90102E29B4D (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_m58C22FF74F0ED46128DC029260EBB1DBE0B078A9 (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * __this, RuntimeObject * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___state0;
		NullCheck(((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m2D87D42962FF166576B4FB3A34DF5C07F4AECEF1(((CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 *)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_1(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_m3CA1C6225A9BBFF348E501B52B09F9F1BE240677 (U3CU3Ec_tB7C79769543C7E04BE145B23C62FF192CD44C0DA * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___state1;
		V_0 = ((*(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)((CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)UnBox(L_0, CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_mAE8E6F50C883B44EFF2F74E9EA4AD31E9571743F((CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mC1D36A45BF2FDCABABBDCEDE49FE3A913422AC19 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m8E7EE7177996B51FD512405432E62B1AE1222076_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m2F4B3F813D9DEFDEC39FBCDB714E377D19AC55AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgress_1_t2A68F003FD832798269827977313E2A8DA00BA94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	int32_t G_B19_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0054;
			}
		}

IL_0011:
		{
			U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->get_dataBuffer_0();
			NullCheck(L_4);
			InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_4, 0);
			U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_dataBuffer_0();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** L_7 = __this->get_address_of_U3CdataU3E5__2_5();
			int32_t* L_8 = __this->get_address_of_U3CoffsetU3E5__3_6();
			bool L_9;
			L_9 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m45FE4BE8F613091F4767B6A960056A6C41B35B8D(L_6, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726**)L_7, (int32_t*)L_8, /*hidden argument*/NULL);
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_10 = __this->get_address_of_cancelToken_3();
			bool L_11;
			L_11 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_10, /*hidden argument*/NULL);
			V_3 = L_11;
			__this->set_U3CbytesCompletedU3E5__4_7(0);
			goto IL_017c;
		}

IL_004d:
		{
			__this->set_U3CbytesReadU3E5__5_8(0);
		}

IL_0054:
		{
		}

IL_0055:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_12 = V_0;
				if (!L_12)
				{
					goto IL_00c7;
				}
			}

IL_0058:
			{
				U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_13 = V_1;
				NullCheck(L_13);
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = L_13->get_stream_1();
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = __this->get_U3CdataU3E5__2_5();
				int32_t L_16 = __this->get_U3CoffsetU3E5__3_6();
				int32_t L_17 = __this->get_U3CbytesCompletedU3E5__4_7();
				U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_18 = V_1;
				NullCheck(L_18);
				int32_t L_19 = L_18->get_bytesRequested_2();
				int32_t L_20 = __this->get_U3CbytesCompletedU3E5__4_7();
				CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_21 = __this->get_cancelToken_3();
				NullCheck(L_14);
				Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_22;
				L_22 = VirtFuncInvoker4< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(23 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_14, L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20)), L_21);
				NullCheck(L_22);
				ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC  L_23;
				L_23 = Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2(L_22, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m9637E2990F98EDC90D1A03B57A4954CE2171C4E2_RuntimeMethod_var);
				V_6 = L_23;
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_24;
				L_24 = ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_inline((ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC *)(&V_6), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_RuntimeMethod_var);
				V_5 = L_24;
				bool L_25;
				L_25 = ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_m4192DC0E89B48FF93421FFF4EB52C21C42687999_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_00e4;
				}
			}

IL_00a3:
			{
				int32_t L_26 = 0;
				V_0 = L_26;
				__this->set_U3CU3E1__state_0(L_26);
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_27 = V_5;
				__this->set_U3CU3Eu__1_9(L_27);
				AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * L_28 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m8E7EE7177996B51FD512405432E62B1AE1222076((AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *)L_28, (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_5), (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4_m8E7EE7177996B51FD512405432E62B1AE1222076_RuntimeMethod_var);
				goto IL_01c6;
			}

IL_00c7:
			{
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_29 = __this->get_U3CU3Eu__1_9();
				V_5 = L_29;
				ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 * L_30 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_30, sizeof(ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 ));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->set_U3CU3E1__state_0(L_31);
			}

IL_00e4:
			{
				int32_t L_32;
				L_32 = ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681((ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 *)(&V_5), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m0927E49E03619C51620F396FE1DD5DBD41AC6681_RuntimeMethod_var);
				V_4 = L_32;
				int32_t L_33 = V_4;
				__this->set_U3CbytesReadU3E5__5_8(L_33);
				int32_t L_34 = __this->get_U3CbytesCompletedU3E5__4_7();
				int32_t L_35 = __this->get_U3CbytesReadU3E5__5_8();
				__this->set_U3CbytesCompletedU3E5__4_7(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35)));
				goto IL_011f;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_010a;
			}
			throw e;
		}

CATCH_010a:
		{ // begin catch(System.OperationCanceledException)
			{
				int32_t L_36 = __this->get_U3CbytesCompletedU3E5__4_7();
				if (L_36)
				{
					goto IL_011d;
				}
			}

IL_0113:
			{
				int32_t L_37 = __this->get_U3CbytesReadU3E5__5_8();
				if (L_37)
				{
					goto IL_011d;
				}
			}

IL_011b:
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mC1D36A45BF2FDCABABBDCEDE49FE3A913422AC19_RuntimeMethod_var)));
			}

IL_011d:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_011f;
			}
		} // end catch (depth: 2)

IL_011f:
		{
			U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_38 = V_1;
			NullCheck(L_38);
			RuntimeObject* L_39 = L_38->get_dataBuffer_0();
			int32_t L_40 = __this->get_U3CbytesCompletedU3E5__4_7();
			NullCheck(L_39);
			InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_39, L_40);
			U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_41 = V_1;
			NullCheck(L_41);
			uint32_t L_42 = L_41->get_options_3();
			if ((((int32_t)L_42) == ((int32_t)1)))
			{
				goto IL_015c;
			}
		}

IL_0139:
		{
			int32_t L_43 = __this->get_U3CbytesReadU3E5__5_8();
			if (!L_43)
			{
				goto IL_015c;
			}
		}

IL_0141:
		{
			int32_t L_44 = __this->get_U3CbytesCompletedU3E5__4_7();
			U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_45 = V_1;
			NullCheck(L_45);
			int32_t L_46 = L_45->get_bytesRequested_2();
			if ((((int32_t)L_44) == ((int32_t)L_46)))
			{
				goto IL_015c;
			}
		}

IL_014f:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_47 = __this->get_address_of_cancelToken_3();
			bool L_48;
			L_48 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_47, /*hidden argument*/NULL);
			G_B19_0 = ((int32_t)(L_48));
			goto IL_015d;
		}

IL_015c:
		{
			G_B19_0 = 1;
		}

IL_015d:
		{
			V_3 = (bool)G_B19_0;
			RuntimeObject* L_49 = __this->get_progressListener_4();
			if (!L_49)
			{
				goto IL_017c;
			}
		}

IL_0166:
		{
			RuntimeObject* L_50 = __this->get_progressListener_4();
			U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_51 = V_1;
			NullCheck(L_51);
			RuntimeObject* L_52 = L_51->get_dataBuffer_0();
			NullCheck(L_52);
			uint32_t L_53;
			L_53 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_52);
			NullCheck(L_50);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t2A68F003FD832798269827977313E2A8DA00BA94_il2cpp_TypeInfo_var, L_50, L_53);
		}

IL_017c:
		{
			bool L_54 = V_3;
			if (!L_54)
			{
				goto IL_004d;
			}
		}

IL_0182:
		{
			U3CU3Ec__DisplayClass1_0_t588EF2E10C56BE5C9447744D6FAA4CE78AAFA6EF * L_55 = V_1;
			NullCheck(L_55);
			RuntimeObject* L_56 = L_55->get_dataBuffer_0();
			V_2 = L_56;
			goto IL_01ab;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018b;
		}
		throw e;
	}

CATCH_018b:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CdataU3E5__2_5((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * L_57 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_58 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m9B82A97DDF714DB40F3F3A427B17C4D9A3E2BEEE((AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *)L_57, L_58, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9B82A97DDF714DB40F3F3A427B17C4D9A3E2BEEE_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c6;
	} // end catch (depth: 1)

IL_01ab:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CdataU3E5__2_5((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * L_59 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_60 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m2F4B3F813D9DEFDEC39FBCDB714E377D19AC55AA((AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *)L_59, L_60, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m2F4B3F813D9DEFDEC39FBCDB714E377D19AC55AA_RuntimeMethod_var);
	}

IL_01c6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mC1D36A45BF2FDCABABBDCEDE49FE3A913422AC19_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * _thisAdjusted = reinterpret_cast<U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 *>(__this + _offset);
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mC1D36A45BF2FDCABABBDCEDE49FE3A913422AC19(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m8EB4BEE55C89189510AFEB6A234A1D52E1CB6B25 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mECE29428CA37743D2F19A203D3EF3888E65F04BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mECE29428CA37743D2F19A203D3EF3888E65F04BE((AsyncTaskMethodBuilder_1_tA6B8DEC053D765113BBBF7AFE042994BEC34FCCF *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mECE29428CA37743D2F19A203D3EF3888E65F04BE_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m8EB4BEE55C89189510AFEB6A234A1D52E1CB6B25_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 * _thisAdjusted = reinterpret_cast<U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_t49F4AB9AB54F3B6D10E147B3A216E2E1551CA8F4 *>(__this + _offset);
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m8EB4BEE55C89189510AFEB6A234A1D52E1CB6B25(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mCEEE5BD2395036F1C1D727C3E700EF9C98C1AB66 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mB0CBF1534C424EAB71B637D7D94A9C08075C645F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgress_1_t2A68F003FD832798269827977313E2A8DA00BA94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * V_1 = NULL;
	uint32_t V_2 = 0;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0095;
			}
		}

IL_0014:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4;
			L_4 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0021:
		{
			V_2 = 0;
			goto IL_00f3;
		}

IL_0028:
		{
			U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_buffer_0();
			NullCheck(L_6);
			uint32_t L_7;
			L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CbytesToWriteU3E5__2_5(L_7);
			U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_8 = V_1;
			NullCheck(L_8);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9 = L_8->get_stream_1();
			U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_10 = V_1;
			NullCheck(L_10);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = L_10->get_data_2();
			U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = L_12->get_offset_3();
			int32_t L_14 = __this->get_U3CbytesToWriteU3E5__2_5();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_15 = __this->get_cancelToken_2();
			NullCheck(L_9);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_16;
			L_16 = VirtFuncInvoker4< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(26 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_9, L_11, L_13, L_14, L_15);
			NullCheck(L_16);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_17;
			L_17 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_16, (bool)0, /*hidden argument*/NULL);
			V_4 = L_17;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_18;
			L_18 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_18;
			bool L_19;
			L_19 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_00b1;
			}
		}

IL_0075:
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_21 = V_3;
			__this->set_U3CU3Eu__1_6(L_21);
			AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mB0CBF1534C424EAB71B637D7D94A9C08075C645F((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_22, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0_mB0CBF1534C424EAB71B637D7D94A9C08075C645F_RuntimeMethod_var);
			goto IL_0107;
		}

IL_0095:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_23 = __this->get_U3CU3Eu__1_6();
			V_3 = L_23;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_24 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_24, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
		}

IL_00b1:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), /*hidden argument*/NULL);
			RuntimeObject* L_26 = __this->get_progressListener_4();
			if (!L_26)
			{
				goto IL_00d1;
			}
		}

IL_00c0:
		{
			RuntimeObject* L_27 = __this->get_progressListener_4();
			int32_t L_28 = __this->get_U3CbytesToWriteU3E5__2_5();
			NullCheck(L_27);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t2A68F003FD832798269827977313E2A8DA00BA94_il2cpp_TypeInfo_var, L_27, L_28);
		}

IL_00d1:
		{
			int32_t L_29 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_2 = L_29;
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00da;
		}
		throw e;
	}

CATCH_00da:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m8A05ADA8FF6EDF6CFCA2C2660794D545772DC0CC((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_30, L_31, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m8A05ADA8FF6EDF6CFCA2C2660794D545772DC0CC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0107;
	} // end catch (depth: 1)

IL_00f3:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		uint32_t L_33 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_32, L_33, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278_RuntimeMethod_var);
	}

IL_0107:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mCEEE5BD2395036F1C1D727C3E700EF9C98C1AB66_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 *>(__this + _offset);
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mCEEE5BD2395036F1C1D727C3E700EF9C98C1AB66(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m1D1090AA1574315EAAAF1BDFAF102FF0DDDFA444 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m1D1090AA1574315EAAAF1BDFAF102FF0DDDFA444_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t3467C816E509590EE3200A9E223F1BB527F8ADB0 *>(__this + _offset);
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m1D1090AA1574315EAAAF1BDFAF102FF0DDDFA444(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m39EAE8D3C28C897571BD6B75E8EEB9FF3B4C91E3 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mE7E56163BF50D945CB1D68BDB080B8749F818F73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgress_1_t2A68F003FD832798269827977313E2A8DA00BA94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B6_0 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * G_B5_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00a9;
			}
		}

IL_0014:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4;
			L_4 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0021:
		{
			V_2 = 0;
			goto IL_0108;
		}

IL_0028:
		{
			U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_buffer_0();
			NullCheck(L_6);
			uint32_t L_7;
			L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CbytesToWriteU3E5__2_5(L_7);
			U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_8 = V_1;
			NullCheck(L_8);
			RuntimeObject* L_9 = L_8->get_buffer_0();
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10;
			L_10 = WindowsRuntimeBufferExtensions_AsStream_mFF165E0D0547E847CB2C20A92510B888456632A5(L_9, /*hidden argument*/NULL);
			V_3 = ((int32_t)16384);
			uint32_t L_11 = __this->get_U3CbytesToWriteU3E5__2_5();
			int32_t L_12 = V_3;
			G_B5_0 = L_10;
			if ((((int64_t)((int64_t)((uint64_t)L_11))) >= ((int64_t)((int64_t)((int64_t)L_12)))))
			{
				G_B6_0 = L_10;
				goto IL_005c;
			}
		}

IL_0055:
		{
			uint32_t L_13 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_3 = L_13;
			G_B6_0 = G_B5_0;
		}

IL_005c:
		{
			U3CU3Ec__DisplayClass2_0_t6629E878FE1F1E0CBB8A0E0A8FB1A8CBDD19BA2A * L_14 = V_1;
			NullCheck(L_14);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_15 = L_14->get_stream_1();
			int32_t L_16 = V_3;
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_17 = __this->get_cancelToken_2();
			NullCheck(G_B6_0);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_18;
			L_18 = VirtFuncInvoker3< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(16 /* System.Threading.Tasks.Task System.IO.Stream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken) */, G_B6_0, L_15, L_16, L_17);
			NullCheck(L_18);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_19;
			L_19 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_18, (bool)0, /*hidden argument*/NULL);
			V_5 = L_19;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_20;
			L_20 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_5), /*hidden argument*/NULL);
			V_4 = L_20;
			bool L_21;
			L_21 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_4), /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00c6;
			}
		}

IL_0088:
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_23 = V_4;
			__this->set_U3CU3Eu__1_6(L_23);
			AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mE7E56163BF50D945CB1D68BDB080B8749F818F73((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_24, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_4), (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55_mE7E56163BF50D945CB1D68BDB080B8749F818F73_RuntimeMethod_var);
			goto IL_011c;
		}

IL_00a9:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_25 = __this->get_U3CU3Eu__1_6();
			V_4 = L_25;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_26 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_26, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_00c6:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_4), /*hidden argument*/NULL);
			RuntimeObject* L_28 = __this->get_progressListener_4();
			if (!L_28)
			{
				goto IL_00e6;
			}
		}

IL_00d5:
		{
			RuntimeObject* L_29 = __this->get_progressListener_4();
			uint32_t L_30 = __this->get_U3CbytesToWriteU3E5__2_5();
			NullCheck(L_29);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(!0) */, IProgress_1_t2A68F003FD832798269827977313E2A8DA00BA94_il2cpp_TypeInfo_var, L_29, L_30);
		}

IL_00e6:
		{
			uint32_t L_31 = __this->get_U3CbytesToWriteU3E5__2_5();
			V_2 = L_31;
			goto IL_0108;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ef;
		}
		throw e;
	}

CATCH_00ef:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m8A05ADA8FF6EDF6CFCA2C2660794D545772DC0CC((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_32, L_33, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m8A05ADA8FF6EDF6CFCA2C2660794D545772DC0CC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011c;
	} // end catch (depth: 1)

IL_0108:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		uint32_t L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_34, L_35, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m94468BBEFEABAFB0486FA7265D93FF1887561278_RuntimeMethod_var);
	}

IL_011c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m39EAE8D3C28C897571BD6B75E8EEB9FF3B4C91E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 *>(__this + _offset);
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_m39EAE8D3C28C897571BD6B75E8EEB9FF3B4C91E3(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m33A77D8CF8ADAC6609E23EDDCEEF760CC6AB424E (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE((AsyncTaskMethodBuilder_1_tFB0D50FC10548069BD538127EBF14D5C905F0BF7 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m146DC950BFDB56035DFC03ECA9CAD76875AA76BE_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m33A77D8CF8ADAC6609E23EDDCEEF760CC6AB424E_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 * _thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t45C9D5939BABB857A9071BC1B99007035BF22A55 *>(__this + _offset);
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_m33A77D8CF8ADAC6609E23EDDCEEF760CC6AB424E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m8AA44C87D0EB20CF938521C952A1853B775E4663 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_mA8E6F6E13D83AE75FC0B473BF5246B5FBEFABD16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * V_1 = NULL;
	bool V_2 = false;
	ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006f;
			}
		}

IL_0011:
		{
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * L_3 = __this->get_address_of_cancelToken_2();
			bool L_4;
			L_4 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0025;
			}
		}

IL_001e:
		{
			V_2 = (bool)0;
			goto IL_00af;
		}

IL_0025:
		{
			U3CU3Ec__DisplayClass3_0_tCC4A287099EEF5AF6DD20989D478D5D884C35128 * L_5 = V_1;
			NullCheck(L_5);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_6 = L_5->get_stream_0();
			CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_7 = __this->get_cancelToken_2();
			NullCheck(L_6);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
			L_8 = VirtFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  >::Invoke(20 /* System.Threading.Tasks.Task System.IO.Stream::FlushAsync(System.Threading.CancellationToken) */, L_6, L_7);
			NullCheck(L_8);
			ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E  L_9;
			L_9 = Task_ConfigureAwait_m0477031D48C23B8368049C62C53C33D32322EDCE(L_8, (bool)0, /*hidden argument*/NULL);
			V_4 = L_9;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_10;
			L_10 = ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline((ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E *)(&V_4), /*hidden argument*/NULL);
			V_3 = L_10;
			bool L_11;
			L_11 = ConfiguredTaskAwaiter_get_IsCompleted_m98056416CC6E5741A2201994591D27D127A17730((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_008b;
			}
		}

IL_004f:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_13 = V_3;
			__this->set_U3CU3Eu__1_4(L_13);
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_mA8E6F6E13D83AE75FC0B473BF5246B5FBEFABD16((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_14, (ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244_mA8E6F6E13D83AE75FC0B473BF5246B5FBEFABD16_RuntimeMethod_var);
			goto IL_00c3;
		}

IL_006f:
		{
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_15 = __this->get_U3CU3Eu__1_4();
			V_3 = L_15;
			ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C * L_16 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_16, sizeof(ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_008b:
		{
			ConfiguredTaskAwaiter_GetResult_m29A9880E9FCC4B8E9928B60E137FB53D0C8F0CE6((ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C *)(&V_3), /*hidden argument*/NULL);
			V_2 = (bool)1;
			goto IL_00af;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0096;
		}
		throw e;
	}

CATCH_0096:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_18, L_19, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c3;
	} // end catch (depth: 1)

IL_00af:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_00c3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m8AA44C87D0EB20CF938521C952A1853B775E4663_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * _thisAdjusted = reinterpret_cast<U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 *>(__this + _offset);
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m8AA44C87D0EB20CF938521C952A1853B775E4663(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mA57C936E30D64B8028F444623EA38774735D9255 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_mCDAB8238204B89C30E35AED2CCBFB57DBC70108A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mA57C936E30D64B8028F444623EA38774735D9255_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 * _thisAdjusted = reinterpret_cast<U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_t523252D7A14BBE10B0E7B0B74A9D1D94A78AF244 *>(__this + _offset);
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mA57C936E30D64B8028F444623EA38774735D9255(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * ExceptionDispatchInfo_get_SourceException_m461A8748D61FCC7EF8D71D2784D851B0523B9B30_inline (ExceptionDispatchInfo_t85442E41DA1485CFF22598AC362EE986DF3CDD09 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_m_Exception_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_mDEE0AD902FFF6FD50CC73C9636ECF5603B5705D3_inline (NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_numberDecimalSeparator_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_mBB7AF6DA6350129AD6422DE474FD52F715CC0C40_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * BufferedStream_get_UnderlyingStream_m73FBEC90103DC4CDD89B42D2AC562846F24EB5C4_inline (BufferedStream_tEA6DCBF74DF3E764C6C25DFA2348AB06214A77DF * __this, const RuntimeMethod* method)
{
	{
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_0 = __this->get__stream_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_mB0B522683D21AFA1DF389FAEDCC2378104CAFDB4_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = ((TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var))->get_s_defaultTaskScheduler_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  ConfiguredTaskAwaitable_GetAwaiter_m9F912D7DF74F087AFAF1F478CE59152DF22395A2_inline (ConfiguredTaskAwaitable_t4B703D7D241C339E7814EFFE5D266424E90BCE1E * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tF5D70726C84CD1BBDFC5E58FFB1000C5750EA28C  L_0 = __this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m13F255A2A7A730982F330A448FCB32239782C505_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__offset_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ArraySegment_1_get_Array_m3D83A2CFF4D51F8ED83C89538616FF0A700F463C_gshared_inline (ArraySegment_1_t89782CFC3178DB9FD8FFCCC398B4575AE8D740AE * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get__array_0();
		return (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  ConfiguredTaskAwaitable_1_GetAwaiter_m8FA39505FC2099C60148C0F029CB49792690A0D5_gshared_inline (ConfiguredTaskAwaitable_1_t95CB4612A5B70DDFE0643FA38A73D6B984DD68EC * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2  L_0 = (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 )__this->get_m_configuredTaskAwaiter_0();
		return (ConfiguredTaskAwaiter_tC61B5622274D0DD1DDBFA197A90CBDAF40F230C2 )L_0;
	}
}
