﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.IList`1<Vuforia.Image>>
struct Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<Vuforia.Internal.Observers.IObserver>
struct Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C;
// System.Action`1<Vuforia.ObserverBehaviour>
struct Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775;
// System.Action`1<Vuforia.Internal.Observers.VuMarkInstance>
struct Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0;
// System.Action`1<Vuforia.Internal.Observers.VuMarkObserver>
struct Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3;
// System.Action`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>
struct Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59;
// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus>
struct Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4;
// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ContentTile>
struct Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Internal.Observers.VuMarkInstance>
struct Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47;
// System.Collections.Generic.Dictionary`2<Vuforia.PixelFormat,System.String>
struct Dictionary_2_tA351F61618E4EFB374D4B5E6D64F08A1303D1ED7;
// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB;
// System.Func`1<System.Nullable`1<System.Int32>>
struct Func_1_tDC30C5284AE787359DC813472C98404F72620D79;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>,System.Boolean>
struct Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>,System.String>
struct Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36;
// System.Func`2<Vuforia.AMigratableVideoBackgroundConfigProperty,System.Boolean>
struct Func_2_t5E8B7325166E6F998C6ED790F73009332F4288EB;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<Vuforia.IVuObservation,System.Boolean>
struct Func_2_t7F7CBFE6648FD243BE905799B8E3B444AAB4338D;
// System.Func`2<Vuforia.IVuValidationAreaLabel,System.String>
struct Func_2_tE3019C6C75FA5B136DC3A490CCD5295E3A6589E3;
// System.Func`2<System.Int32,System.Int32>
struct Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA;
// System.Func`2<Vuforia.Newtonsoft.Json.Linq.JProperty,System.Boolean>
struct Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F;
// System.Func`2<Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel,System.Boolean>
struct Func_2_t0B41E011C508D4A9114973798676A8E737FC1522;
// System.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<Vuforia.ObserverBehaviour,System.Boolean>
struct Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Func`2<UnityEngine.RaycastHit,System.Boolean>
struct Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B;
// System.Func`2<UnityEngine.RaycastHit,System.Single>
struct Func_2_t253D46ABB79DD652C4B14F298491AEECC980BF6A;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Func`2<Vuforia.VuMarkBehaviour,Vuforia.VuMarkBehaviour>
struct Func_2_t23BD7B313D283EE96C8D6F643D5A077D818F5B28;
// System.Func`3<System.String,System.Int32,System.String>
struct Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F;
// System.Func`3<System.Version,System.Version,System.Boolean>
struct Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D;
// System.Collections.Generic.IDictionary`2<Vuforia.PixelFormat,System.Action`2<System.Collections.Generic.IList`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>,Vuforia.Image>>
struct IDictionary_2_t539A0D5481E40CF711EACFC8DC39E1E9D83A94E7;
// System.Collections.Generic.IDictionary`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>
struct IDictionary_2_tDD38EE0A7BD9CD204A53723E8AB7269730B7FBCF;
// System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t9DFF2C56D7941ACD9B62391A91351E53D4624AC6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition>
struct IEnumerable_1_tB72FBF19F79E6490AB81481C901D6B173A6DC23B;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t9D3E713F8938CF33F827C721FDA0523EECEBC72E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Vuforia.Internal.Observers.IObserverComponent>
struct IList_1_tC28035A8F84F3F3658F495A42678C87699EE5406;
// System.Collections.Generic.IList`1<Vuforia.Image>
struct IList_1_t724C9D9CDCB632634BF7B1E2DAA7D7DEB100B177;
// System.Collections.Generic.IList`1<Vuforia.Newtonsoft.Json.Linq.JToken>
struct IList_1_t3B6D56F1FAB574422D58B0F381112EAC3E0A18BA;
// System.Collections.Generic.IList`1<Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>
struct IList_1_tDFCE5D160688937EFB20C4EDB4C44DBD25D39B9C;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t54B152FB364EC47FC3BD440154FEB50A17503847;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_tDA1FACADA2EBD1F518087EF8A99C23BD8BE068DD;
// System.Collections.Generic.IList`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>
struct IList_1_t106FE00489A3E9DCDBFB4C3718FBBE96D322C566;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.ContentTile>
struct KeyCollection_tC4EBAAACCF1691CB0311E9EAE3087C7D1F4727FD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.Internal.Observers.VuMarkInstance>
struct KeyCollection_tBD8C9AFDA1A02B53A12E1B00F7584707126ABB27;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735;
// System.Collections.Generic.List`1<Vuforia.MeshConstructionRequest>
struct List_1_t2BA761FD43F8276EAF5E60158D1F43AF4AEBE490;
// System.Collections.Generic.List`1<Vuforia.PointCloudMaterial>
struct List_1_tD89B43ADABB2D56ED4A6B721CB72880FC2770725;
// System.Collections.Generic.List`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>
struct List_1_tE0D038D3B48FF84E86879A46038D07747742A26F;
// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// UnityEngine.Events.UnityEvent`1<System.Int32Enum>
struct UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71;
// UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStartError>
struct UnityEvent_1_t40BAB9C363ECB4269A7B1A42634A079A858AAE7B;
// UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStatus>
struct UnityEvent_1_t12854B51B9F904B8C9E6FE7E4E56585ACCAAC404;
// UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStatusInfo>
struct UnityEvent_1_t095141A97517292A02F2857E89C48496D207B4A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.ContentTile>
struct ValueCollection_t2305407AA07A562A2B9E0DB57F6EBB1A55C6F4CE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.Internal.Observers.VuMarkInstance>
struct ValueCollection_tC11A437542B9143D64D36DACD9112385306DBF3F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Vuforia.ContentTile>[]
struct EntryU5BU5D_t9DD20B545F8E65C99F86B187724AC0B9C7731293;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Vuforia.Internal.Observers.VuMarkInstance>[]
struct EntryU5BU5D_t8E33CC041660512E69B4326FE5D5AAAEFD0F6708;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Vuforia.WebCamProfile/ProfileData>[]
struct EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Vuforia.Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Vuforia.PCTile[]
struct PCTileU5BU5D_tB67206C00A17F7F21E82E36EF0426CF921574F3D;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData[]
struct TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA;
// Vuforia.AMigratableVideoBackgroundConfigProperty
struct AMigratableVideoBackgroundConfigProperty_t00B6AEFBA2B8CC7F7447366D391A5C26D99F2861;
// Vuforia.Internal.Observers.AObservationFilterComponent
struct AObservationFilterComponent_tFA207BD54AB712F4F6EDD36FAD59762E6410F41D;
// Vuforia.Internal.Observers.AObserverComponent
struct AObserverComponent_t4ECCF8B7EBD52971C682CD4BF7428F54DB2E27D0;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Vuforia.FileIOTask
struct FileIOTask_t541B797A9D8CF19D7FD883F170A4A2E26A4D78B8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Vuforia.Internal.Core.IEngine
struct IEngine_t708DCFFA8A0A96615D4AC23FF9621DA3A280AC3E;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Vuforia.Internal.Observers.IObserver
struct IObserver_tDE0C8AF5F4AAABB85ACC09BC42BE7ABD6FCC961F;
// Vuforia.IPlayModeEditorUtility
struct IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D;
// Vuforia.IVuCameraController
struct IVuCameraController_t2FABFD0AD82D05DFC65552DC7387044BEDC060C8;
// Vuforia.IVuMarkObservation
struct IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99;
// Vuforia.IVuObservation
struct IVuObservation_t9B690621551BE2021F395774BEF4E866FDC50BED;
// Vuforia.IVuObserver
struct IVuObserver_tA47C2939BA13B9CB30EB6B2099B338683B2E4B46;
// Vuforia.IVuValidationAreaLabel
struct IVuValidationAreaLabel_tCA1963A9C8BBB9768EEED31D397BC411455D49F7;
// Vuforia.IWebCamTexAdaptor
struct IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F;
// Vuforia.Image
struct Image_tEA90BDBB0131379427A1282935D21313F94DFDB1;
// Vuforia.ImageDescription
struct ImageDescription_tF2A8E4465A467F49BA5703ABE641FE666FC843D5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Vuforia.Newtonsoft.Json.Linq.JContainer
struct JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC;
// Vuforia.Newtonsoft.Json.Linq.JProperty
struct JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F;
// Vuforia.Newtonsoft.Json.Linq.JToken
struct JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426;
// Vuforia.Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01;
// Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Vuforia.MeshConstructionRequest
struct MeshConstructionRequest_t58B5423197D1673D352D52ED996EC5FFC270430D;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Vuforia.ObserverBehaviour
struct ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274;
// Vuforia.PCBoundingVolume
struct PCBoundingVolume_t9C6FC014A8B3EFBC3168D8692896421A43D02755;
// Vuforia.PCContentUrl
struct PCContentUrl_t1422ED3007A7958710FA5AC1550252453D1DA20C;
// Vuforia.PCTile
struct PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Vuforia.PointCloudBehaviour
struct PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0;
// Vuforia.PointCloudMaterial
struct PointCloudMaterial_t641625D84280575EBA03013E890F5DC63DAE307E;
// Vuforia.PointCloudVoxel
struct PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546;
// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter
struct ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Vuforia.Internal.Rendering.TextureDefinition
struct TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B;
// Vuforia.Internal.Rendering.TextureRenderer
struct TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater
struct VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Vuforia.Voxel
struct Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82;
// Vuforia.VoxelPool
struct VoxelPool_tF723316FB7BFE70D19CAB71A02340EC0CE2D8936;
// Vuforia.VoxelTree
struct VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751;
// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2;
// Vuforia.Internal.Observers.VuMarkInstance
struct VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794;
// Vuforia.VuMarkInstanceId
struct VuMarkInstanceId_t5C200552393A64E29B6A074B462E7E5B71EE5DF5;
// Vuforia.VuMarkInstancesManager
struct VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F;
// Vuforia.Internal.Observers.VuMarkObserver
struct VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479;
// Vuforia.VuMarkPreview
struct VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2;
// Vuforia.Internal.Utility.VuforiaCoroutineUtility
struct VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Vuforia.WebCam
struct WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC;
// Vuforia.PointCloudBehaviour/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tAD1E6D898FC7AE1E21DF6C3590C5AA335946C3BF;
// Vuforia.PointCloudVoxel/<BuildContentMesh>d__5
struct U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF;
// Vuforia.PosixPath/<>c
struct U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4;
// Vuforia.PosixPath/InvalidPathException
struct InvalidPathException_tF72EA733B957D516DCB49AE2D903B15B328D0FF2;
// Vuforia.Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C;
// Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c
struct U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228;
// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036;
// Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t3D5EDC2798057A397DCCD0983DF6E938E2587FAF;
// Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_tE383BA4E25A9185AA714BAAA806E94FEFA7F770E;
// Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_t0C4261F723FC34EE395AE7D67E20174F10583A20;
// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2;
// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_tAE9057E690DB2454E11F777B44C4789EB10FAA6F;
// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t3965085377A2EE8001E752FCFC924E8F13BA93A7;
// Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521;
// Vuforia.SessionRecorderBehaviour/CleanStorageEvent
struct CleanStorageEvent_t3BB428C36FCD0C9F07DA614683107317EDAAF7EA;
// Vuforia.SessionRecorderBehaviour/RecordingStartedEvent
struct RecordingStartedEvent_t103CAF3D69705B1EE8BF87315503FD954EFE5A02;
// Vuforia.SessionRecorderBehaviour/RecordingStoppedEvent
struct RecordingStoppedEvent_t61C624893E604FD6B7AA9B88D2BF289C11F9E45D;
// Vuforia.SessionRecorderBehaviour/ShareRecordingEvent
struct ShareRecordingEvent_t4FD5A6DD64EC91EEC5DFF78C19A3FC6A19A0F26C;
// Vuforia.SessionRecorderBehaviour/StartRecordingEvent
struct StartRecordingEvent_t3336B5309BBE9D92D753D6DB882A2935BA324FC4;
// Vuforia.SessionRecorderBehaviour/StopRecordingEvent
struct StopRecordingEvent_tCCD621EF86F31D6BB7C3AC4B8953775035238696;
// Vuforia.Internal.Simulator.SimulatedObject/<>c
struct U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78;
// Vuforia.Internal.Simulator.SimulatedObjectFactory/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t5FED079403C398907C91F7078A21B865340A7BC3;
// Vuforia.Internal.Core.StateProcessor/<>c
struct U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E;
// Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c
struct U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC;
// Vuforia.TileSetUtil/<>c
struct U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3;
// Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c
struct U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0;
// Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t6B99D7E894E0B8654328BDAB3DFDD1C4A83FE8FE;
// Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t94EC4C2F39D83FAB0C6BA91E4CFBA74E71AFE9F8;
// Vuforia.UnityVersionUtility/<>c
struct U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84;
// Vuforia.Internal.Observers.ValidationAreaObserver/<>c
struct U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82;
// Vuforia.VideoBackgroundConfigMigrator/<>c
struct U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339;
// Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour
struct NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B;
// Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullTextureUpdater
struct NullTextureUpdater_t510AEBCC3EDE757F2677773D9B577D5A56133626;
// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c
struct U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0;
// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t9A60575263DAF1CB08CE1C6F2D14CEEBEF47159B;
// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7;
// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t1FD1E7DDE31A2D094BB5E6D565450E9977C8FFF4;
// Vuforia.Voxel/<BuildContentMesh>d__31
struct U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465;
// Vuforia.Voxel/MeshBuildCallback
struct MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B;
// Vuforia.VoxelTree/<UpdateVisibleTiles>d__33
struct U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288;
// Vuforia.VuMarkInstancesManager/<>c
struct U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629;
// Vuforia.Internal.Observers.VuMarkObserver/VuMarkObservationFilterComponent
struct VuMarkObservationFilterComponent_tC2910136BDB6F9CC234BD63B977FEEF84905C1E8;
// Vuforia.Internal.Observers.VuMarkObserver/VuMarkPreProcessObservationComponent
struct VuMarkPreProcessObservationComponent_tDA6BEB5A2FC24E0BF612907841BC5D11CC57602F;
// Vuforia.VuforiaBehaviour/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tABD9FBBABBF530EEC15EA0ACA81D92A9B26D8440;
// Vuforia.VuforiaConfiguration/DatabaseConfiguration
struct DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B;
// Vuforia.VuforiaConfiguration/PackageInfo
struct PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F;
// Vuforia.VuforiaConfiguration/PlayModeConfiguration
struct PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF;
// Vuforia.VuforiaConfiguration/RequiredShaders
struct RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986;
// Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1
struct U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4;
// Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26
struct U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF;
// Vuforia.World/<>c
struct U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18;
// Vuforia.Internal.Core.WorldOriginProvider/<>c
struct U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A;
// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61;
// Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c
struct U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9DFF2C56D7941ACD9B62391A91351E53D4624AC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9D3E713F8938CF33F827C721FDA0523EECEBC72E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuObservationWithPose_t9E3EB9BF7871428D4F9EA458935951BBD477A2A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuValidationAreaLabel_tCA1963A9C8BBB9768EEED31D397BC411455D49F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t54D930EBCAC78A734F3290D308385D6796983748_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_tA73BA8087E066D24C93D2FDECCC691327114647B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral15837118141CA2B68B23C553BFA6090DA353BF98;
IL2CPP_EXTERN_C String_t* _stringLiteral197861696CD5E89F2838E06BFD9AC2ADBA1425C6;
IL2CPP_EXTERN_C String_t* _stringLiteral22467D1C7743279C159BDA0BDE4993F22771DAB1;
IL2CPP_EXTERN_C String_t* _stringLiteral2623C9694AD5C956295C47EBBD9EA0BD437696B7;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral677774D8B69150E8300A8C0C3378D6703951B692;
IL2CPP_EXTERN_C String_t* _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187;
IL2CPP_EXTERN_C String_t* _stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0;
IL2CPP_EXTERN_C String_t* _stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBF0FE0C2A4D07B1801AF0EF5433861CE13A6E123;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A3AF7D8067F2156CDD2D54C51A7EF7D54C2C06;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A;
IL2CPP_EXTERN_C String_t* _stringLiteralED6317189EDF2D65968A72B77DFC11B4FCB322B8;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9DD8647E4225278CC2A761B61E2242F872066918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB5C82BAB68BE635BD42FB4F1EF7D5CCCC20B33CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mBF1ED5DF8DCF2E42E7411B7F895F8F60792A9487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mA7E117696A43912E3C3DEDCA0C8CB114C1238271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_mF2CB9D79F1B0E63B8E2C540CEAC1BF23240D1669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisType_t_m406A32FAC236C1B4B8A0E59BE30C932E829B175A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m8DD394273424AF26BE4A4516C68FC5993CB3051A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildContentMeshU3Ed__31_System_Collections_IEnumerator_Reset_m9927F6BCB6553B94936D2E9D7BC54C1FDDA442AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBuildContentMeshU3Ed__5_System_Collections_IEnumerator_Reset_mC0242507EE543ABB57EF5916D910EA89206CCD71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__4_System_Collections_IEnumerator_Reset_m1990779C9C9EBD52F5EEBAC8351625C716653329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__4_System_Collections_IEnumerator_Reset_m7254BE4539E778F6D8CC6969D75F69244D2D473C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m67CE78F4DFD5AF8913128B76CF3DE629EE7F8BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_IEnumerator_Reset_m51E8BBE94FB2AED7CE6D46F8F4EBFFD7590EB317_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetPropertyU3Eb__11_1_m026DCDDF4D40613AAA43E83D65B3E85681FAD3B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetupTextureUpdatingU3Eb__28_2_m6C524097B9278DAA37D298FA7AE7740E66909D23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateVisibleTilesU3Ed__33_System_Collections_IEnumerator_Reset_m4162869E8314CADA30C2AEF650575081E53B6D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForFirstWebCamFrameU3Ed__26_System_Collections_IEnumerator_Reset_m26B294C512634C1B187E85695FA4DC1BB2C6196E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m01F9F090C401594D981C95E4340A7838A8820DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m191D00CD72D1ABA62387061E4D74570C30FE8EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m302B658CB5BD327A6274EACB0FD334BBB8401648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var;
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;

struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ContentTile>
struct Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9DD20B545F8E65C99F86B187724AC0B9C7731293* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC4EBAAACCF1691CB0311E9EAE3087C7D1F4727FD * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2305407AA07A562A2B9E0DB57F6EBB1A55C6F4CE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___entries_1)); }
	inline EntryU5BU5D_t9DD20B545F8E65C99F86B187724AC0B9C7731293* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9DD20B545F8E65C99F86B187724AC0B9C7731293** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9DD20B545F8E65C99F86B187724AC0B9C7731293* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___keys_7)); }
	inline KeyCollection_tC4EBAAACCF1691CB0311E9EAE3087C7D1F4727FD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC4EBAAACCF1691CB0311E9EAE3087C7D1F4727FD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC4EBAAACCF1691CB0311E9EAE3087C7D1F4727FD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ___values_8)); }
	inline ValueCollection_t2305407AA07A562A2B9E0DB57F6EBB1A55C6F4CE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2305407AA07A562A2B9E0DB57F6EBB1A55C6F4CE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2305407AA07A562A2B9E0DB57F6EBB1A55C6F4CE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Internal.Observers.VuMarkInstance>
struct Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8E33CC041660512E69B4326FE5D5AAAEFD0F6708* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBD8C9AFDA1A02B53A12E1B00F7584707126ABB27 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC11A437542B9143D64D36DACD9112385306DBF3F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___entries_1)); }
	inline EntryU5BU5D_t8E33CC041660512E69B4326FE5D5AAAEFD0F6708* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8E33CC041660512E69B4326FE5D5AAAEFD0F6708** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8E33CC041660512E69B4326FE5D5AAAEFD0F6708* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___keys_7)); }
	inline KeyCollection_tBD8C9AFDA1A02B53A12E1B00F7584707126ABB27 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBD8C9AFDA1A02B53A12E1B00F7584707126ABB27 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBD8C9AFDA1A02B53A12E1B00F7584707126ABB27 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ___values_8)); }
	inline ValueCollection_tC11A437542B9143D64D36DACD9112385306DBF3F * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC11A437542B9143D64D36DACD9112385306DBF3F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC11A437542B9143D64D36DACD9112385306DBF3F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___entries_1)); }
	inline EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t75C9D3555B033B2373FA467258D208F498EF8466* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___keys_7)); }
	inline KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t13F1E8462B2368C0A9A51E3F40DF0A4793DB6735 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ___values_8)); }
	inline ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE4263867F92480A894EB3DA96B9246A76B41B0E7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>
struct List_1_tE0D038D3B48FF84E86879A46038D07747742A26F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE0D038D3B48FF84E86879A46038D07747742A26F, ____items_1)); }
	inline TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA* get__items_1() const { return ____items_1; }
	inline TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE0D038D3B48FF84E86879A46038D07747742A26F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE0D038D3B48FF84E86879A46038D07747742A26F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE0D038D3B48FF84E86879A46038D07747742A26F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE0D038D3B48FF84E86879A46038D07747742A26F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE0D038D3B48FF84E86879A46038D07747742A26F_StaticFields, ____emptyArray_5)); }
	inline TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextureDataU5BU5D_tDBA2D92588CD81BCEBD293CCFA3D8475979598CA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// Vuforia.AMigratableVideoBackgroundConfigProperty
struct AMigratableVideoBackgroundConfigProperty_t00B6AEFBA2B8CC7F7447366D391A5C26D99F2861  : public RuntimeObject
{
public:
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.AMigratableVideoBackgroundConfigProperty::Config
	VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * ___Config_0;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(AMigratableVideoBackgroundConfigProperty_t00B6AEFBA2B8CC7F7447366D391A5C26D99F2861, ___Config_0)); }
	inline VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * get_Config_0() const { return ___Config_0; }
	inline VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Config_0), (void*)value);
	}
};


// Vuforia.Internal.Observers.AObserver
struct AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<Vuforia.Internal.Observers.IObserverComponent> Vuforia.Internal.Observers.AObserver::<Components>k__BackingField
	RuntimeObject* ___U3CComponentsU3Ek__BackingField_0;
	// System.Int32 Vuforia.Internal.Observers.AObserver::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_1;
	// Vuforia.Internal.Core.IEngine Vuforia.Internal.Observers.AObserver::<Engine>k__BackingField
	RuntimeObject* ___U3CEngineU3Ek__BackingField_2;
	// System.Action`1<Vuforia.Internal.Observers.IObserver> Vuforia.Internal.Observers.AObserver::OnObserverDestroyed
	Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C * ___OnObserverDestroyed_3;
	// System.Boolean Vuforia.Internal.Observers.AObserver::mDisposed
	bool ___mDisposed_4;

public:
	inline static int32_t get_offset_of_U3CComponentsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___U3CComponentsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CComponentsU3Ek__BackingField_0() const { return ___U3CComponentsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CComponentsU3Ek__BackingField_0() { return &___U3CComponentsU3Ek__BackingField_0; }
	inline void set_U3CComponentsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CComponentsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CComponentsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___U3CIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CEngineU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___U3CEngineU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEngineU3Ek__BackingField_2() const { return ___U3CEngineU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEngineU3Ek__BackingField_2() { return &___U3CEngineU3Ek__BackingField_2; }
	inline void set_U3CEngineU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEngineU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEngineU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnObserverDestroyed_3() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___OnObserverDestroyed_3)); }
	inline Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C * get_OnObserverDestroyed_3() const { return ___OnObserverDestroyed_3; }
	inline Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C ** get_address_of_OnObserverDestroyed_3() { return &___OnObserverDestroyed_3; }
	inline void set_OnObserverDestroyed_3(Action_1_tD7A09DC307B2FBEC4E01A407F6075EAC86B4304C * value)
	{
		___OnObserverDestroyed_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnObserverDestroyed_3), (void*)value);
	}

	inline static int32_t get_offset_of_mDisposed_4() { return static_cast<int32_t>(offsetof(AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C, ___mDisposed_4)); }
	inline bool get_mDisposed_4() const { return ___mDisposed_4; }
	inline bool* get_address_of_mDisposed_4() { return &___mDisposed_4; }
	inline void set_mDisposed_4(bool value)
	{
		___mDisposed_4 = value;
	}
};


// Vuforia.Internal.Observers.AObserverComponent
struct AObserverComponent_t4ECCF8B7EBD52971C682CD4BF7428F54DB2E27D0  : public RuntimeObject
{
public:
	// Vuforia.Internal.Observers.IObserver Vuforia.Internal.Observers.AObserverComponent::<Observer>k__BackingField
	RuntimeObject* ___U3CObserverU3Ek__BackingField_0;
	// System.Boolean Vuforia.Internal.Observers.AObserverComponent::mEnabled
	bool ___mEnabled_1;
	// System.Boolean Vuforia.Internal.Observers.AObserverComponent::mObservableActivated
	bool ___mObservableActivated_2;

public:
	inline static int32_t get_offset_of_U3CObserverU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AObserverComponent_t4ECCF8B7EBD52971C682CD4BF7428F54DB2E27D0, ___U3CObserverU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CObserverU3Ek__BackingField_0() const { return ___U3CObserverU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CObserverU3Ek__BackingField_0() { return &___U3CObserverU3Ek__BackingField_0; }
	inline void set_U3CObserverU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CObserverU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CObserverU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_mEnabled_1() { return static_cast<int32_t>(offsetof(AObserverComponent_t4ECCF8B7EBD52971C682CD4BF7428F54DB2E27D0, ___mEnabled_1)); }
	inline bool get_mEnabled_1() const { return ___mEnabled_1; }
	inline bool* get_address_of_mEnabled_1() { return &___mEnabled_1; }
	inline void set_mEnabled_1(bool value)
	{
		___mEnabled_1 = value;
	}

	inline static int32_t get_offset_of_mObservableActivated_2() { return static_cast<int32_t>(offsetof(AObserverComponent_t4ECCF8B7EBD52971C682CD4BF7428F54DB2E27D0, ___mObservableActivated_2)); }
	inline bool get_mObservableActivated_2() const { return ___mObservableActivated_2; }
	inline bool* get_address_of_mObservableActivated_2() { return &___mObservableActivated_2; }
	inline void set_mObservableActivated_2(bool value)
	{
		___mObservableActivated_2 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Vuforia.Newtonsoft.Json.Linq.JToken
struct JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JContainer Vuforia.Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * ____parent_1;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::_previous
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ____previous_2;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::_next
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ____next_3;
	// System.Object Vuforia.Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426, ____parent_1)); }
	inline JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * get__parent_1() const { return ____parent_1; }
	inline JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426, ____previous_2)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get__previous_2() const { return ____previous_2; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426, ____next_3)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get__next_3() const { return ____next_3; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JTokenEqualityComparer Vuforia.Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01 * ____equalityComparer_0;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___BooleanTypes_5;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___NumberTypes_6;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___StringTypes_7;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___GuidTypes_8;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___TimeSpanTypes_9;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___UriTypes_10;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___CharTypes_11;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___DateTimeTypes_12;
	// Vuforia.Newtonsoft.Json.Linq.JTokenType[] Vuforia.Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t549EF9E784AC1BE73394B0E666DFC5FFA1619F01 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_tFB5B6C9A4E9F2E55FD58CE9358174456548CDFBF* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Linq.JsonPath.PathFilter
struct PathFilter_tB1E3CF373F2E3B656C7034D49E0DC965CA882CF7  : public RuntimeObject
{
public:

public:
};


// Vuforia.PointCloudMaterial
struct PointCloudMaterial_t641625D84280575EBA03013E890F5DC63DAE307E  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.PointCloudMaterial::Level
	int32_t ___Level_0;
	// UnityEngine.Material Vuforia.PointCloudMaterial::CloudMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___CloudMaterial_1;
	// System.Single Vuforia.PointCloudMaterial::OriginalPointSize
	float ___OriginalPointSize_2;

public:
	inline static int32_t get_offset_of_Level_0() { return static_cast<int32_t>(offsetof(PointCloudMaterial_t641625D84280575EBA03013E890F5DC63DAE307E, ___Level_0)); }
	inline int32_t get_Level_0() const { return ___Level_0; }
	inline int32_t* get_address_of_Level_0() { return &___Level_0; }
	inline void set_Level_0(int32_t value)
	{
		___Level_0 = value;
	}

	inline static int32_t get_offset_of_CloudMaterial_1() { return static_cast<int32_t>(offsetof(PointCloudMaterial_t641625D84280575EBA03013E890F5DC63DAE307E, ___CloudMaterial_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_CloudMaterial_1() const { return ___CloudMaterial_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_CloudMaterial_1() { return &___CloudMaterial_1; }
	inline void set_CloudMaterial_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___CloudMaterial_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CloudMaterial_1), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPointSize_2() { return static_cast<int32_t>(offsetof(PointCloudMaterial_t641625D84280575EBA03013E890F5DC63DAE307E, ___OriginalPointSize_2)); }
	inline float get_OriginalPointSize_2() const { return ___OriginalPointSize_2; }
	inline float* get_address_of_OriginalPointSize_2() { return &___OriginalPointSize_2; }
	inline void set_OriginalPointSize_2(float value)
	{
		___OriginalPointSize_2 = value;
	}
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
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

// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC, ____token_0)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get__token_0() const { return ____token_0; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// Vuforia.PointCloudBehaviour/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tAD1E6D898FC7AE1E21DF6C3590C5AA335946C3BF  : public RuntimeObject
{
public:
	// Vuforia.PointCloudBehaviour Vuforia.PointCloudBehaviour/<>c__DisplayClass14_0::<>4__this
	PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0 * ___U3CU3E4__this_0;
	// System.Single Vuforia.PointCloudBehaviour/<>c__DisplayClass14_0::maxHeight
	float ___maxHeight_1;
	// UnityEngine.Transform Vuforia.PointCloudBehaviour/<>c__DisplayClass14_0::parentTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parentTransform_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tAD1E6D898FC7AE1E21DF6C3590C5AA335946C3BF, ___U3CU3E4__this_0)); }
	inline PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_maxHeight_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tAD1E6D898FC7AE1E21DF6C3590C5AA335946C3BF, ___maxHeight_1)); }
	inline float get_maxHeight_1() const { return ___maxHeight_1; }
	inline float* get_address_of_maxHeight_1() { return &___maxHeight_1; }
	inline void set_maxHeight_1(float value)
	{
		___maxHeight_1 = value;
	}

	inline static int32_t get_offset_of_parentTransform_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_tAD1E6D898FC7AE1E21DF6C3590C5AA335946C3BF, ___parentTransform_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_parentTransform_2() const { return ___parentTransform_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_parentTransform_2() { return &___parentTransform_2; }
	inline void set_parentTransform_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___parentTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentTransform_2), (void*)value);
	}
};


// Vuforia.PointCloudVoxel/<BuildContentMesh>d__5
struct U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.PointCloudVoxel Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<>4__this
	PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * ___U3CU3E4__this_2;
	// Vuforia.Voxel/MeshBuildCallback Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::callback
	MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * ___callback_3;
	// UnityEngine.Mesh Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<mesh>5__2
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CmeshU3E5__2_4;
	// System.Int32 Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<pointCount>5__3
	int32_t ___U3CpointCountU3E5__3_5;
	// System.Int32[] Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<indices>5__4
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CindicesU3E5__4_6;
	// System.Int32 Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<i>5__5
	int32_t ___U3CiU3E5__5_7;
	// UnityEngine.Vector3[] Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<quadVertices>5__6
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CquadVerticesU3E5__6_8;
	// UnityEngine.Vector3[] Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<quadNormals>5__7
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U3CquadNormalsU3E5__7_9;
	// UnityEngine.Color[] Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<quadColors>5__8
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___U3CquadColorsU3E5__8_10;
	// UnityEngine.Vector2[] Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::<quadUVs>5__9
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U3CquadUVsU3E5__9_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CU3E4__this_2)); }
	inline PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___callback_3)); }
	inline MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * get_callback_3() const { return ___callback_3; }
	inline MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CmeshU3E5__2_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3CmeshU3E5__2_4() const { return ___U3CmeshU3E5__2_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3CmeshU3E5__2_4() { return &___U3CmeshU3E5__2_4; }
	inline void set_U3CmeshU3E5__2_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3CmeshU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointCountU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CpointCountU3E5__3_5)); }
	inline int32_t get_U3CpointCountU3E5__3_5() const { return ___U3CpointCountU3E5__3_5; }
	inline int32_t* get_address_of_U3CpointCountU3E5__3_5() { return &___U3CpointCountU3E5__3_5; }
	inline void set_U3CpointCountU3E5__3_5(int32_t value)
	{
		___U3CpointCountU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CindicesU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CindicesU3E5__4_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CindicesU3E5__4_6() const { return ___U3CindicesU3E5__4_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CindicesU3E5__4_6() { return &___U3CindicesU3E5__4_6; }
	inline void set_U3CindicesU3E5__4_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CindicesU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CindicesU3E5__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CiU3E5__5_7)); }
	inline int32_t get_U3CiU3E5__5_7() const { return ___U3CiU3E5__5_7; }
	inline int32_t* get_address_of_U3CiU3E5__5_7() { return &___U3CiU3E5__5_7; }
	inline void set_U3CiU3E5__5_7(int32_t value)
	{
		___U3CiU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CquadVerticesU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CquadVerticesU3E5__6_8)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CquadVerticesU3E5__6_8() const { return ___U3CquadVerticesU3E5__6_8; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CquadVerticesU3E5__6_8() { return &___U3CquadVerticesU3E5__6_8; }
	inline void set_U3CquadVerticesU3E5__6_8(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CquadVerticesU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CquadVerticesU3E5__6_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquadNormalsU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CquadNormalsU3E5__7_9)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U3CquadNormalsU3E5__7_9() const { return ___U3CquadNormalsU3E5__7_9; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U3CquadNormalsU3E5__7_9() { return &___U3CquadNormalsU3E5__7_9; }
	inline void set_U3CquadNormalsU3E5__7_9(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U3CquadNormalsU3E5__7_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CquadNormalsU3E5__7_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquadColorsU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CquadColorsU3E5__8_10)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_U3CquadColorsU3E5__8_10() const { return ___U3CquadColorsU3E5__8_10; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_U3CquadColorsU3E5__8_10() { return &___U3CquadColorsU3E5__8_10; }
	inline void set_U3CquadColorsU3E5__8_10(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___U3CquadColorsU3E5__8_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CquadColorsU3E5__8_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CquadUVsU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF, ___U3CquadUVsU3E5__9_11)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U3CquadUVsU3E5__9_11() const { return ___U3CquadUVsU3E5__9_11; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U3CquadUVsU3E5__9_11() { return &___U3CquadUVsU3E5__9_11; }
	inline void set_U3CquadUVsU3E5__9_11(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U3CquadUVsU3E5__9_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CquadUVsU3E5__9_11), (void*)value);
	}
};


// Vuforia.PosixPath/<>c
struct U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_StaticFields
{
public:
	// Vuforia.PosixPath/<>c Vuforia.PosixPath/<>c::<>9
	U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Vuforia.PosixPath/<>c::<>9__1_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__1_0_1;
	// System.Func`3<System.String,System.Int32,System.String> Vuforia.PosixPath/<>c::<>9__1_1
	Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F * ___U3CU3E9__1_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_3_t95320C96E280C93B89BF9EA9BAD21F1B51C4AC1F * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_2), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C  : public RuntimeObject
{
public:
	// System.String Vuforia.Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Value
	String_t* ___Value_0;
	// System.Int32 Vuforia.Newtonsoft.Json.Utilities.PropertyNameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Vuforia.Newtonsoft.Json.Utilities.PropertyNameTable/Entry Vuforia.Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Next
	Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C, ___Next_2)); }
	inline Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C * get_Next_2() const { return ___Next_2; }
	inline Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_2), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c
struct U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<>9
	U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.Newtonsoft.Json.Linq.JProperty,System.Boolean> Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<>9__2_0
	Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * ___U3CU3E9__2_0_1;
	// System.Func`2<Vuforia.Newtonsoft.Json.Linq.JProperty,System.Boolean> Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<>9__2_1
	Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * ___U3CU3E9__2_1_2;
	// System.Func`2<Vuforia.Newtonsoft.Json.Linq.JProperty,System.Boolean> Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<>9__2_2
	Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * ___U3CU3E9__2_2_3;
	// System.Func`2<Vuforia.Newtonsoft.Json.Linq.JProperty,System.Boolean> Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<>9__2_3
	Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * ___U3CU3E9__2_3_4;
	// System.Func`2<Vuforia.Newtonsoft.Json.Linq.JProperty,System.Boolean> Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<>9__2_4
	Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * ___U3CU3E9__2_4_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_StaticFields, ___U3CU3E9__2_2_3)); }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * get_U3CU3E9__2_2_3() const { return ___U3CU3E9__2_2_3; }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F ** get_address_of_U3CU3E9__2_2_3() { return &___U3CU3E9__2_2_3; }
	inline void set_U3CU3E9__2_2_3(Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * value)
	{
		___U3CU3E9__2_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_StaticFields, ___U3CU3E9__2_3_4)); }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * get_U3CU3E9__2_3_4() const { return ___U3CU3E9__2_3_4; }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F ** get_address_of_U3CU3E9__2_3_4() { return &___U3CU3E9__2_3_4; }
	inline void set_U3CU3E9__2_3_4(Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * value)
	{
		___U3CU3E9__2_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_StaticFields, ___U3CU3E9__2_4_5)); }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * get_U3CU3E9__2_4_5() const { return ___U3CU3E9__2_4_5; }
	inline Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F ** get_address_of_U3CU3E9__2_4_5() { return &___U3CU3E9__2_4_5; }
	inline void set_U3CU3E9__2_4_5(Func_2_tC34394D1EF248BCB5673843E6E06F7457547FB9F * value)
	{
		___U3CU3E9__2_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_4_5), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>2__current
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ___U3CU3E2__current_1;
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>4__this
	QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036, ___U3CU3E2__current_1)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036, ___U3CU3E4__this_5)); }
	inline QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036, ___U3CU3E7__wrap2_7)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_7() const { return ___U3CU3E7__wrap2_7; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_7() { return &___U3CU3E7__wrap2_7; }
	inline void set_U3CU3E7__wrap2_7(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_7), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t3D5EDC2798057A397DCCD0983DF6E938E2587FAF  : public RuntimeObject
{
public:
	// System.Func`1<System.Object> Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::ctor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t3D5EDC2798057A397DCCD0983DF6E938E2587FAF, ___ctor_0)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctor_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_tE383BA4E25A9185AA714BAAA806E94FEFA7F770E  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::call
	MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_tE383BA4E25A9185AA714BAAA806E94FEFA7F770E, ___call_0)); }
	inline MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_t0C4261F723FC34EE395AE7D67E20174F10583A20  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::call
	MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_2_t0C4261F723FC34EE395AE7D67E20174F10583A20, ___call_0)); }
	inline MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9
	U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__10_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__10_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.String> Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__29_0
	Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * ___U3CU3E9__29_0_2;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__37_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__37_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__39_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__39_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_StaticFields, ___U3CU3E9__29_0_2)); }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * get_U3CU3E9__29_0_2() const { return ___U3CU3E9__29_0_2; }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 ** get_address_of_U3CU3E9__29_0_2() { return &___U3CU3E9__29_0_2; }
	inline void set_U3CU3E9__29_0_2(Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * value)
	{
		___U3CU3E9__29_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_StaticFields, ___U3CU3E9__37_0_3)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__37_0_3() const { return ___U3CU3E9__37_0_3; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__37_0_3() { return &___U3CU3E9__37_0_3; }
	inline void set_U3CU3E9__37_0_3(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__37_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_StaticFields, ___U3CU3E9__39_0_4)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__39_0_4() const { return ___U3CU3E9__39_0_4; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__39_0_4() { return &___U3CU3E9__39_0_4; }
	inline void set_U3CU3E9__39_0_4(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__39_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_4), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_tAE9057E690DB2454E11F777B44C4789EB10FAA6F  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_tAE9057E690DB2454E11F777B44C4789EB10FAA6F, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypeProperty_0), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t3965085377A2EE8001E752FCFC924E8F13BA93A7  : public RuntimeObject
{
public:
	// System.String Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::method
	String_t* ___method_0;
	// System.Type Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::methodDeclaringType
	Type_t * ___methodDeclaringType_1;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_t3965085377A2EE8001E752FCFC924E8F13BA93A7, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}

	inline static int32_t get_offset_of_methodDeclaringType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass43_0_t3965085377A2EE8001E752FCFC924E8F13BA93A7, ___methodDeclaringType_1)); }
	inline Type_t * get_methodDeclaringType_1() const { return ___methodDeclaringType_1; }
	inline Type_t ** get_address_of_methodDeclaringType_1() { return &___methodDeclaringType_1; }
	inline void set_methodDeclaringType_1(Type_t * value)
	{
		___methodDeclaringType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodDeclaringType_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>2__current
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ___U3CU3E2__current_1;
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>4__this
	ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<root>5__3
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ___U3CrootU3E5__3_7;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<value>5__4
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ___U3CvalueU3E5__4_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___U3CU3E2__current_1)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___U3CU3E4__this_5)); }
	inline ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrootU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___U3CrootU3E5__3_7)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get_U3CrootU3E5__3_7() const { return ___U3CrootU3E5__3_7; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of_U3CrootU3E5__3_7() { return &___U3CrootU3E5__3_7; }
	inline void set_U3CrootU3E5__3_7(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		___U3CrootU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrootU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521, ___U3CvalueU3E5__4_8)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get_U3CvalueU3E5__4_8() const { return ___U3CvalueU3E5__4_8; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of_U3CvalueU3E5__4_8() { return &___U3CvalueU3E5__4_8; }
	inline void set_U3CvalueU3E5__4_8(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		___U3CvalueU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__4_8), (void*)value);
	}
};


// Vuforia.SessionRecorderInfoPopup/InfoStrings
struct InfoStrings_t9A264C12A16D7CDD4986C9123C6DD18A07369006  : public RuntimeObject
{
public:

public:
};


// Vuforia.Internal.Simulator.SimulatedObject/<>c
struct U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_StaticFields
{
public:
	// Vuforia.Internal.Simulator.SimulatedObject/<>c Vuforia.Internal.Simulator.SimulatedObject/<>c::<>9
	U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.RaycastHit,System.Boolean> Vuforia.Internal.Simulator.SimulatedObject/<>c::<>9__11_0
	Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___U3CU3E9__11_0_1;
	// System.Func`2<UnityEngine.RaycastHit,System.Single> Vuforia.Internal.Simulator.SimulatedObject/<>c::<>9__11_1
	Func_2_t253D46ABB79DD652C4B14F298491AEECC980BF6A * ___U3CU3E9__11_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_StaticFields, ___U3CU3E9__11_1_2)); }
	inline Func_2_t253D46ABB79DD652C4B14F298491AEECC980BF6A * get_U3CU3E9__11_1_2() const { return ___U3CU3E9__11_1_2; }
	inline Func_2_t253D46ABB79DD652C4B14F298491AEECC980BF6A ** get_address_of_U3CU3E9__11_1_2() { return &___U3CU3E9__11_1_2; }
	inline void set_U3CU3E9__11_1_2(Func_2_t253D46ABB79DD652C4B14F298491AEECC980BF6A * value)
	{
		___U3CU3E9__11_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_1_2), (void*)value);
	}
};


// Vuforia.Internal.Simulator.SimulatedObjectFactory/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t5FED079403C398907C91F7078A21B865340A7BC3  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Internal.Simulator.SimulatedObjectFactory/<>c__DisplayClass14_0::mask
	int32_t ___mask_0;

public:
	inline static int32_t get_offset_of_mask_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass14_0_t5FED079403C398907C91F7078A21B865340A7BC3, ___mask_0)); }
	inline int32_t get_mask_0() const { return ___mask_0; }
	inline int32_t* get_address_of_mask_0() { return &___mask_0; }
	inline void set_mask_0(int32_t value)
	{
		___mask_0 = value;
	}
};


// Vuforia.Internal.Core.StateProcessor/<>c
struct U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E_StaticFields
{
public:
	// Vuforia.Internal.Core.StateProcessor/<>c Vuforia.Internal.Core.StateProcessor/<>c::<>9
	U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E * ___U3CU3E9_0;
	// System.Func`2<Vuforia.IVuObservation,System.Boolean> Vuforia.Internal.Core.StateProcessor/<>c::<>9__4_0
	Func_2_t7F7CBFE6648FD243BE905799B8E3B444AAB4338D * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t7F7CBFE6648FD243BE905799B8E3B444AAB4338D * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t7F7CBFE6648FD243BE905799B8E3B444AAB4338D ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t7F7CBFE6648FD243BE905799B8E3B444AAB4338D * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c
struct U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC_StaticFields
{
public:
	// Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<>9
	U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Vuforia.TileSetUtil/<>c
struct U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3_StaticFields
{
public:
	// Vuforia.TileSetUtil/<>c Vuforia.TileSetUtil/<>c::<>9
	U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 * ___U3CU3E9_0;
	// System.Func`2<System.Int32,System.Int32> Vuforia.TileSetUtil/<>c::<>9__3_0
	Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_tFF6AE79EFD0857556AD37A1A1594C43F76012FEA * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c
struct U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c::<>9
	U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c::<>9__11_1
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__11_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_StaticFields, ___U3CU3E9__11_1_1)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__11_1_1() const { return ___U3CU3E9__11_1_1; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__11_1_1() { return &___U3CU3E9__11_1_1; }
	inline void set_U3CU3E9__11_1_1(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__11_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_1_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t6B99D7E894E0B8654328BDAB3DFDD1C4A83FE8FE  : public RuntimeObject
{
public:
	// System.String Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass11_0::name
	String_t* ___name_0;
	// System.Type Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass11_0::propertyType
	Type_t * ___propertyType_1;
	// System.Collections.Generic.IList`1<System.Type> Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass11_0::indexParameters
	RuntimeObject* ___indexParameters_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t6B99D7E894E0B8654328BDAB3DFDD1C4A83FE8FE, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_propertyType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t6B99D7E894E0B8654328BDAB3DFDD1C4A83FE8FE, ___propertyType_1)); }
	inline Type_t * get_propertyType_1() const { return ___propertyType_1; }
	inline Type_t ** get_address_of_propertyType_1() { return &___propertyType_1; }
	inline void set_propertyType_1(Type_t * value)
	{
		___propertyType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyType_1), (void*)value);
	}

	inline static int32_t get_offset_of_indexParameters_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t6B99D7E894E0B8654328BDAB3DFDD1C4A83FE8FE, ___indexParameters_2)); }
	inline RuntimeObject* get_indexParameters_2() const { return ___indexParameters_2; }
	inline RuntimeObject** get_address_of_indexParameters_2() { return &___indexParameters_2; }
	inline void set_indexParameters_2(RuntimeObject* value)
	{
		___indexParameters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexParameters_2), (void*)value);
	}
};


// Vuforia.UnityVersionUtility/<>c
struct U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84_StaticFields
{
public:
	// Vuforia.UnityVersionUtility/<>c Vuforia.UnityVersionUtility/<>c::<>9
	U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 * ___U3CU3E9_0;
	// System.Func`3<System.Version,System.Version,System.Boolean> Vuforia.UnityVersionUtility/<>c::<>9__1_0
	Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D * ___U3CU3E9__1_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_3_t98C8B652D59F12D9B373C0873EDB9987611E8A8D * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}
};


// Vuforia.Internal.Observers.ValidationAreaObserver/<>c
struct U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82_StaticFields
{
public:
	// Vuforia.Internal.Observers.ValidationAreaObserver/<>c Vuforia.Internal.Observers.ValidationAreaObserver/<>c::<>9
	U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.IVuValidationAreaLabel,System.String> Vuforia.Internal.Observers.ValidationAreaObserver/<>c::<>9__18_0
	Func_2_tE3019C6C75FA5B136DC3A490CCD5295E3A6589E3 * ___U3CU3E9__18_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_tE3019C6C75FA5B136DC3A490CCD5295E3A6589E3 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_tE3019C6C75FA5B136DC3A490CCD5295E3A6589E3 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_tE3019C6C75FA5B136DC3A490CCD5295E3A6589E3 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}
};


// Vuforia.VideoBackgroundConfigMigrator/<>c
struct U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_StaticFields
{
public:
	// Vuforia.VideoBackgroundConfigMigrator/<>c Vuforia.VideoBackgroundConfigMigrator/<>c::<>9
	U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.AMigratableVideoBackgroundConfigProperty,System.Boolean> Vuforia.VideoBackgroundConfigMigrator/<>c::<>9__2_0
	Func_2_t5E8B7325166E6F998C6ED790F73009332F4288EB * ___U3CU3E9__2_0_1;
	// System.Func`2<System.Boolean,System.Boolean> Vuforia.VideoBackgroundConfigMigrator/<>c::<>9__2_1
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___U3CU3E9__2_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t5E8B7325166E6F998C6ED790F73009332F4288EB * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t5E8B7325166E6F998C6ED790F73009332F4288EB ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t5E8B7325166E6F998C6ED790F73009332F4288EB * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_2), (void*)value);
	}
};


// Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour
struct NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B  : public RuntimeObject
{
public:
	// UnityEngine.Material Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour::<Material>k__BackingField
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U3CMaterialU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMaterialU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B, ___U3CMaterialU3Ek__BackingField_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U3CMaterialU3Ek__BackingField_0() const { return ___U3CMaterialU3Ek__BackingField_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U3CMaterialU3Ek__BackingField_0() { return &___U3CMaterialU3Ek__BackingField_0; }
	inline void set_U3CMaterialU3Ek__BackingField_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U3CMaterialU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaterialU3Ek__BackingField_0), (void*)value);
	}
};


// Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullTextureUpdater
struct NullTextureUpdater_t510AEBCC3EDE757F2677773D9B577D5A56133626  : public RuntimeObject
{
public:
	// UnityEngine.Texture Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullTextureUpdater::<VideoBackgroundTexture>k__BackingField
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___U3CVideoBackgroundTextureU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CVideoBackgroundTextureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NullTextureUpdater_t510AEBCC3EDE757F2677773D9B577D5A56133626, ___U3CVideoBackgroundTextureU3Ek__BackingField_0)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_U3CVideoBackgroundTextureU3Ek__BackingField_0() const { return ___U3CVideoBackgroundTextureU3Ek__BackingField_0; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_U3CVideoBackgroundTextureU3Ek__BackingField_0() { return &___U3CVideoBackgroundTextureU3Ek__BackingField_0; }
	inline void set_U3CVideoBackgroundTextureU3Ek__BackingField_0(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___U3CVideoBackgroundTextureU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVideoBackgroundTextureU3Ek__BackingField_0), (void*)value);
	}
};


// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c
struct U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields
{
public:
	// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::<>9
	U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * ___U3CU3E9_0;
	// System.Action`1<System.Collections.Generic.IList`1<Vuforia.Image>> Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::<>9__16_0
	Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * ___U3CU3E9__16_0_1;
	// System.Action`1<System.Collections.Generic.IList`1<Vuforia.Image>> Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::<>9__21_0
	Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * ___U3CU3E9__21_0_2;
	// System.Action`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData> Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::<>9__28_2
	Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * ___U3CU3E9__28_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields, ___U3CU3E9__16_0_1)); }
	inline Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * get_U3CU3E9__16_0_1() const { return ___U3CU3E9__16_0_1; }
	inline Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB ** get_address_of_U3CU3E9__16_0_1() { return &___U3CU3E9__16_0_1; }
	inline void set_U3CU3E9__16_0_1(Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * value)
	{
		___U3CU3E9__16_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields, ___U3CU3E9__21_0_2)); }
	inline Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * get_U3CU3E9__21_0_2() const { return ___U3CU3E9__21_0_2; }
	inline Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB ** get_address_of_U3CU3E9__21_0_2() { return &___U3CU3E9__21_0_2; }
	inline void set_U3CU3E9__21_0_2(Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * value)
	{
		___U3CU3E9__21_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__28_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields, ___U3CU3E9__28_2_3)); }
	inline Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * get_U3CU3E9__28_2_3() const { return ___U3CU3E9__28_2_3; }
	inline Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 ** get_address_of_U3CU3E9__28_2_3() { return &___U3CU3E9__28_2_3; }
	inline void set_U3CU3E9__28_2_3(Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * value)
	{
		___U3CU3E9__28_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__28_2_3), (void*)value);
	}
};


// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t1FD1E7DDE31A2D094BB5E6D565450E9977C8FFF4  : public RuntimeObject
{
public:
	// System.String Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass31_0::keyword
	String_t* ___keyword_0;

public:
	inline static int32_t get_offset_of_keyword_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t1FD1E7DDE31A2D094BB5E6D565450E9977C8FFF4, ___keyword_0)); }
	inline String_t* get_keyword_0() const { return ___keyword_0; }
	inline String_t** get_address_of_keyword_0() { return &___keyword_0; }
	inline void set_keyword_0(String_t* value)
	{
		___keyword_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_0), (void*)value);
	}
};


// Vuforia.Voxel/<BuildContentMesh>d__31
struct U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Voxel/<BuildContentMesh>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.Voxel/<BuildContentMesh>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.Voxel Vuforia.Voxel/<BuildContentMesh>d__31::<>4__this
	Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * ___U3CU3E4__this_2;
	// Vuforia.Voxel/MeshBuildCallback Vuforia.Voxel/<BuildContentMesh>d__31::meshBuildCallback
	MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * ___meshBuildCallback_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465, ___U3CU3E4__this_2)); }
	inline Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_meshBuildCallback_3() { return static_cast<int32_t>(offsetof(U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465, ___meshBuildCallback_3)); }
	inline MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * get_meshBuildCallback_3() const { return ___meshBuildCallback_3; }
	inline MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B ** get_address_of_meshBuildCallback_3() { return &___meshBuildCallback_3; }
	inline void set_meshBuildCallback_3(MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * value)
	{
		___meshBuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshBuildCallback_3), (void*)value);
	}
};


// Vuforia.VoxelTree/<UpdateVisibleTiles>d__33
struct U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.VoxelTree Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::<>4__this
	VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * ___U3CU3E4__this_2;
	// UnityEngine.Plane[] Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::<frustumPlanes>5__2
	PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* ___U3CfrustumPlanesU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288, ___U3CU3E4__this_2)); }
	inline VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfrustumPlanesU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288, ___U3CfrustumPlanesU3E5__2_3)); }
	inline PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* get_U3CfrustumPlanesU3E5__2_3() const { return ___U3CfrustumPlanesU3E5__2_3; }
	inline PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD** get_address_of_U3CfrustumPlanesU3E5__2_3() { return &___U3CfrustumPlanesU3E5__2_3; }
	inline void set_U3CfrustumPlanesU3E5__2_3(PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* value)
	{
		___U3CfrustumPlanesU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfrustumPlanesU3E5__2_3), (void*)value);
	}
};


// Vuforia.VuMarkInstancesManager/<>c
struct U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629_StaticFields
{
public:
	// Vuforia.VuMarkInstancesManager/<>c Vuforia.VuMarkInstancesManager/<>c::<>9
	U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.VuMarkBehaviour,Vuforia.VuMarkBehaviour> Vuforia.VuMarkInstancesManager/<>c::<>9__15_1
	Func_2_t23BD7B313D283EE96C8D6F643D5A077D818F5B28 * ___U3CU3E9__15_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629_StaticFields, ___U3CU3E9__15_1_1)); }
	inline Func_2_t23BD7B313D283EE96C8D6F643D5A077D818F5B28 * get_U3CU3E9__15_1_1() const { return ___U3CU3E9__15_1_1; }
	inline Func_2_t23BD7B313D283EE96C8D6F643D5A077D818F5B28 ** get_address_of_U3CU3E9__15_1_1() { return &___U3CU3E9__15_1_1; }
	inline void set_U3CU3E9__15_1_1(Func_2_t23BD7B313D283EE96C8D6F643D5A077D818F5B28 * value)
	{
		___U3CU3E9__15_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_1_1), (void*)value);
	}
};


// Vuforia.VuforiaBehaviour/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_tABD9FBBABBF530EEC15EA0ACA81D92A9B26D8440  : public RuntimeObject
{
public:
	// Vuforia.ObserverBehaviour Vuforia.VuforiaBehaviour/<>c__DisplayClass37_0::observerBehaviour
	ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___observerBehaviour_0;

public:
	inline static int32_t get_offset_of_observerBehaviour_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_tABD9FBBABBF530EEC15EA0ACA81D92A9B26D8440, ___observerBehaviour_0)); }
	inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * get_observerBehaviour_0() const { return ___observerBehaviour_0; }
	inline ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 ** get_address_of_observerBehaviour_0() { return &___observerBehaviour_0; }
	inline void set_observerBehaviour_0(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * value)
	{
		___observerBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerBehaviour_0), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration/DatabaseConfiguration
struct DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaConfiguration/DatabaseConfiguration::disableModelExtraction
	bool ___disableModelExtraction_0;

public:
	inline static int32_t get_offset_of_disableModelExtraction_0() { return static_cast<int32_t>(offsetof(DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D, ___disableModelExtraction_0)); }
	inline bool get_disableModelExtraction_0() const { return ___disableModelExtraction_0; }
	inline bool* get_address_of_disableModelExtraction_0() { return &___disableModelExtraction_0; }
	inline void set_disableModelExtraction_0(bool value)
	{
		___disableModelExtraction_0 = value;
	}
};


// Vuforia.VuforiaConfiguration/PackageInfo
struct PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/PackageInfo::ARFoundationVersion
	String_t* ___ARFoundationVersion_0;

public:
	inline static int32_t get_offset_of_ARFoundationVersion_0() { return static_cast<int32_t>(offsetof(PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F, ___ARFoundationVersion_0)); }
	inline String_t* get_ARFoundationVersion_0() const { return ___ARFoundationVersion_0; }
	inline String_t** get_address_of_ARFoundationVersion_0() { return &___ARFoundationVersion_0; }
	inline void set_ARFoundationVersion_0(String_t* value)
	{
		___ARFoundationVersion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ARFoundationVersion_0), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration/RequiredShaders
struct RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE  : public RuntimeObject
{
public:
	// UnityEngine.Shader Vuforia.VuforiaConfiguration/RequiredShaders::depthMaskShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___depthMaskShader_0;

public:
	inline static int32_t get_offset_of_depthMaskShader_0() { return static_cast<int32_t>(offsetof(RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE, ___depthMaskShader_0)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_depthMaskShader_0() const { return ___depthMaskShader_0; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_depthMaskShader_0() { return &___depthMaskShader_0; }
	inline void set_depthMaskShader_0(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___depthMaskShader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthMaskShader_0), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::numDivisions
	int32_t ___numDivisions_0;
	// UnityEngine.Shader Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::videoBackgroundShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___videoBackgroundShader_1;
	// UnityEngine.Shader Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::unlitShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___unlitShader_2;
	// System.Boolean Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::videoBackgroundEnabled
	bool ___videoBackgroundEnabled_3;

public:
	inline static int32_t get_offset_of_numDivisions_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345, ___numDivisions_0)); }
	inline int32_t get_numDivisions_0() const { return ___numDivisions_0; }
	inline int32_t* get_address_of_numDivisions_0() { return &___numDivisions_0; }
	inline void set_numDivisions_0(int32_t value)
	{
		___numDivisions_0 = value;
	}

	inline static int32_t get_offset_of_videoBackgroundShader_1() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345, ___videoBackgroundShader_1)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_videoBackgroundShader_1() const { return ___videoBackgroundShader_1; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_videoBackgroundShader_1() { return &___videoBackgroundShader_1; }
	inline void set_videoBackgroundShader_1(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___videoBackgroundShader_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoBackgroundShader_1), (void*)value);
	}

	inline static int32_t get_offset_of_unlitShader_2() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345, ___unlitShader_2)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_unlitShader_2() const { return ___unlitShader_2; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_unlitShader_2() { return &___unlitShader_2; }
	inline void set_unlitShader_2(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___unlitShader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unlitShader_2), (void*)value);
	}

	inline static int32_t get_offset_of_videoBackgroundEnabled_3() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345, ___videoBackgroundEnabled_3)); }
	inline bool get_videoBackgroundEnabled_3() const { return ___videoBackgroundEnabled_3; }
	inline bool* get_address_of_videoBackgroundEnabled_3() { return &___videoBackgroundEnabled_3; }
	inline void set_videoBackgroundEnabled_3(bool value)
	{
		___videoBackgroundEnabled_3 = value;
	}
};


// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::mDeviceName
	String_t* ___mDeviceName_1;
	// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_2;

public:
	inline static int32_t get_offset_of_mDeviceName_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986, ___mDeviceName_1)); }
	inline String_t* get_mDeviceName_1() const { return ___mDeviceName_1; }
	inline String_t** get_address_of_mDeviceName_1() { return &___mDeviceName_1; }
	inline void set_mDeviceName_1(String_t* value)
	{
		___mDeviceName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceName_1), (void*)value);
	}

	inline static int32_t get_offset_of_renderTextureLayer_2() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986, ___renderTextureLayer_2)); }
	inline int32_t get_renderTextureLayer_2() const { return ___renderTextureLayer_2; }
	inline int32_t* get_address_of_renderTextureLayer_2() { return &___renderTextureLayer_2; }
	inline void set_renderTextureLayer_2(int32_t value)
	{
		___renderTextureLayer_2 = value;
	}
};


// Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1
struct U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::timeout
	float ___timeout_2;
	// System.Collections.IEnumerator Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::routine
	RuntimeObject* ___routine_3;
	// System.Action`1<System.Boolean> Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::onComplete
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___onComplete_4;
	// System.Single Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::<timer>5__2
	float ___U3CtimerU3E5__2_5;
	// System.Single Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::<start>5__3
	float ___U3CstartU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_2() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___timeout_2)); }
	inline float get_timeout_2() const { return ___timeout_2; }
	inline float* get_address_of_timeout_2() { return &___timeout_2; }
	inline void set_timeout_2(float value)
	{
		___timeout_2 = value;
	}

	inline static int32_t get_offset_of_routine_3() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___routine_3)); }
	inline RuntimeObject* get_routine_3() const { return ___routine_3; }
	inline RuntimeObject** get_address_of_routine_3() { return &___routine_3; }
	inline void set_routine_3(RuntimeObject* value)
	{
		___routine_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___routine_3), (void*)value);
	}

	inline static int32_t get_offset_of_onComplete_4() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___onComplete_4)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_onComplete_4() const { return ___onComplete_4; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_onComplete_4() { return &___onComplete_4; }
	inline void set_onComplete_4(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___onComplete_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onComplete_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___U3CtimerU3E5__2_5)); }
	inline float get_U3CtimerU3E5__2_5() const { return ___U3CtimerU3E5__2_5; }
	inline float* get_address_of_U3CtimerU3E5__2_5() { return &___U3CtimerU3E5__2_5; }
	inline void set_U3CtimerU3E5__2_5(float value)
	{
		___U3CtimerU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CstartU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4, ___U3CstartU3E5__3_6)); }
	inline float get_U3CstartU3E5__3_6() const { return ___U3CstartU3E5__3_6; }
	inline float* get_address_of_U3CstartU3E5__3_6() { return &___U3CstartU3E5__3_6; }
	inline void set_U3CstartU3E5__3_6(float value)
	{
		___U3CstartU3E5__3_6 = value;
	}
};


// Vuforia.VuforiaRuntimeUtilities/SimulatorVars
struct SimulatorVars_t5EDFE68636380E8A90A85E739A11EFF566745BFC  : public RuntimeObject
{
public:

public:
};


// Vuforia.VuforiaShare/VuforiaShare_AndroidBridge
struct VuforiaShare_AndroidBridge_t43C4FD2ECE738751A75C8C7BDC7471B55FA074A2  : public RuntimeObject
{
public:

public:
};


// Vuforia.VuforiaShare/VuforiaShare_iOSBridge
struct VuforiaShare_iOSBridge_t9CCF59CD77668511A4BF9DD6F5FD44D25D1D5055  : public RuntimeObject
{
public:

public:
};


// Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26
struct U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.WebCam Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::<>4__this
	WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF, ___U3CU3E4__this_2)); }
	inline WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Vuforia.World/<>c
struct U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_StaticFields
{
public:
	// Vuforia.World/<>c Vuforia.World/<>c::<>9
	U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.ObserverBehaviour,System.Boolean> Vuforia.World/<>c::<>9__29_0
	Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB * ___U3CU3E9__29_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_StaticFields, ___U3CU3E9__29_0_1)); }
	inline Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB * get_U3CU3E9__29_0_1() const { return ___U3CU3E9__29_0_1; }
	inline Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB ** get_address_of_U3CU3E9__29_0_1() { return &___U3CU3E9__29_0_1; }
	inline void set_U3CU3E9__29_0_1(Func_2_t7B2A6610FCFA9B523BFE169CEA6DACE7A8BC25FB * value)
	{
		___U3CU3E9__29_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_1), (void*)value);
	}
};


// Vuforia.Internal.Core.WorldOriginProvider/<>c
struct U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_StaticFields
{
public:
	// Vuforia.Internal.Core.WorldOriginProvider/<>c Vuforia.Internal.Core.WorldOriginProvider/<>c::<>9
	U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * ___U3CU3E9_0;
	// System.Func`1<System.Nullable`1<System.Int32>> Vuforia.Internal.Core.WorldOriginProvider/<>c::<>9__7_0
	Func_1_tDC30C5284AE787359DC813472C98404F72620D79 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_1_tDC30C5284AE787359DC813472C98404F72620D79 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_1_tDC30C5284AE787359DC813472C98404F72620D79 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_1_tDC30C5284AE787359DC813472C98404F72620D79 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>2__current
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * ___U3CU3E2__current_1;
	// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>4__this
	JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61, ___U3CU3E2__current_1)); }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61, ___U3CU3E4__this_2)); }
	inline JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c
struct U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields
{
public:
	// Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9
	U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__29_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__29_0_1;
	// System.Func`2<System.String,System.Boolean> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__29_1
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__29_1_2;
	// System.Func`2<Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel,System.Boolean> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__29_2
	Func_2_t0B41E011C508D4A9114973798676A8E737FC1522 * ___U3CU3E9__29_2_3;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>,System.Boolean> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__30_0
	Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA * ___U3CU3E9__30_0_4;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>,System.String> Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<>9__30_1
	Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36 * ___U3CU3E9__30_1_5;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__29_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__29_0_1() const { return ___U3CU3E9__29_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__29_0_1() { return &___U3CU3E9__29_0_1; }
	inline void set_U3CU3E9__29_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__29_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__29_1_2)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__29_1_2() const { return ___U3CU3E9__29_1_2; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__29_1_2() { return &___U3CU3E9__29_1_2; }
	inline void set_U3CU3E9__29_1_2(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__29_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__29_2_3)); }
	inline Func_2_t0B41E011C508D4A9114973798676A8E737FC1522 * get_U3CU3E9__29_2_3() const { return ___U3CU3E9__29_2_3; }
	inline Func_2_t0B41E011C508D4A9114973798676A8E737FC1522 ** get_address_of_U3CU3E9__29_2_3() { return &___U3CU3E9__29_2_3; }
	inline void set_U3CU3E9__29_2_3(Func_2_t0B41E011C508D4A9114973798676A8E737FC1522 * value)
	{
		___U3CU3E9__29_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__30_0_4)); }
	inline Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA * get_U3CU3E9__30_0_4() const { return ___U3CU3E9__30_0_4; }
	inline Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA ** get_address_of_U3CU3E9__30_0_4() { return &___U3CU3E9__30_0_4; }
	inline void set_U3CU3E9__30_0_4(Func_2_t33EDFF9B4F90A7671224F56C7CF25E37DB1C8DCA * value)
	{
		___U3CU3E9__30_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_1_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields, ___U3CU3E9__30_1_5)); }
	inline Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36 * get_U3CU3E9__30_1_5() const { return ___U3CU3E9__30_1_5; }
	inline Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36 ** get_address_of_U3CU3E9__30_1_5() { return &___U3CU3E9__30_1_5; }
	inline void set_U3CU3E9__30_1_5(Func_2_tD1A9F3141611204C00C558EFF6536EA93209DD36 * value)
	{
		___U3CU3E9__30_1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_1_5), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>
struct KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD, ___value_1)); }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * get_value_1() const { return ___value_1; }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Double>
struct Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStartError>
struct UnityEvent_1_t40BAB9C363ECB4269A7B1A42634A079A858AAE7B  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t40BAB9C363ECB4269A7B1A42634A079A858AAE7B, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStatus>
struct UnityEvent_1_t12854B51B9F904B8C9E6FE7E4E56585ACCAAC404  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t12854B51B9F904B8C9E6FE7E4E56585ACCAAC404, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStatusInfo>
struct UnityEvent_1_t095141A97517292A02F2857E89C48496D207B4A2  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t095141A97517292A02F2857E89C48496D207B4A2, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// Vuforia.Internal.Observers.ANativeObserver
struct ANativeObserver_t1AEBDBAD83D2D7517210D5F3DCDC883DAE9909E3  : public AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C
{
public:
	// Vuforia.IVuObserver Vuforia.Internal.Observers.ANativeObserver::<VuObserver>k__BackingField
	RuntimeObject* ___U3CVuObserverU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CVuObserverU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ANativeObserver_t1AEBDBAD83D2D7517210D5F3DCDC883DAE9909E3, ___U3CVuObserverU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVuObserverU3Ek__BackingField_5() const { return ___U3CVuObserverU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVuObserverU3Ek__BackingField_5() { return &___U3CVuObserverU3Ek__BackingField_5; }
	inline void set_U3CVuObserverU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVuObserverU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVuObserverU3Ek__BackingField_5), (void*)value);
	}
};


// Vuforia.Internal.Observers.AObservationFilterComponent
struct AObservationFilterComponent_tFA207BD54AB712F4F6EDD36FAD59762E6410F41D  : public AObserverComponent_t4ECCF8B7EBD52971C682CD4BF7428F54DB2E27D0
{
public:

public:
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// Vuforia.ColoredPointCloudData
struct ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF 
{
public:
	// UnityEngine.Vector3[] Vuforia.ColoredPointCloudData::PointPosition
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___PointPosition_0;
	// UnityEngine.Color32[] Vuforia.ColoredPointCloudData::PointColor
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___PointColor_1;
	// UnityEngine.Vector3[] Vuforia.ColoredPointCloudData::PointNormal
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___PointNormal_2;

public:
	inline static int32_t get_offset_of_PointPosition_0() { return static_cast<int32_t>(offsetof(ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF, ___PointPosition_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_PointPosition_0() const { return ___PointPosition_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_PointPosition_0() { return &___PointPosition_0; }
	inline void set_PointPosition_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___PointPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointPosition_0), (void*)value);
	}

	inline static int32_t get_offset_of_PointColor_1() { return static_cast<int32_t>(offsetof(ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF, ___PointColor_1)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_PointColor_1() const { return ___PointColor_1; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_PointColor_1() { return &___PointColor_1; }
	inline void set_PointColor_1(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___PointColor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointColor_1), (void*)value);
	}

	inline static int32_t get_offset_of_PointNormal_2() { return static_cast<int32_t>(offsetof(ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF, ___PointNormal_2)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_PointNormal_2() const { return ___PointNormal_2; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_PointNormal_2() { return &___PointNormal_2; }
	inline void set_PointNormal_2(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___PointNormal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointNormal_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.ColoredPointCloudData
struct ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___PointPosition_0;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___PointColor_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___PointNormal_2;
};
// Native definition for COM marshalling of Vuforia.ColoredPointCloudData
struct ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___PointPosition_0;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * ___PointColor_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___PointNormal_2;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
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


// Vuforia.Newtonsoft.Json.Linq.JContainer
struct JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC  : public JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426
{
public:
	// System.Object Vuforia.Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;

public:
	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_14), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E  : public PathFilter_tB1E3CF373F2E3B656C7034D49E0DC965CA882CF7
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryExpression Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter::<Expression>k__BackingField
	QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546 * ___U3CExpressionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E, ___U3CExpressionU3Ek__BackingField_0)); }
	inline QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546 * get_U3CExpressionU3Ek__BackingField_0() const { return ___U3CExpressionU3Ek__BackingField_0; }
	inline QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546 ** get_address_of_U3CExpressionU3Ek__BackingField_0() { return &___U3CExpressionU3Ek__BackingField_0; }
	inline void set_U3CExpressionU3Ek__BackingField_0(QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546 * value)
	{
		___U3CExpressionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter
struct ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5  : public PathFilter_tB1E3CF373F2E3B656C7034D49E0DC965CA882CF7
{
public:
	// System.String Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// Vuforia.Internal.Observers.VuMarkInstance
struct VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794  : public AObserver_t8E149799BFBB7EB5548F32AE258140FECD63398C
{
public:
	// Vuforia.Internal.Observers.VuMarkObserver Vuforia.Internal.Observers.VuMarkInstance::<VuMarkObserver>k__BackingField
	VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * ___U3CVuMarkObserverU3Ek__BackingField_5;
	// Vuforia.VuMarkInstanceId Vuforia.Internal.Observers.VuMarkInstance::<InstanceId>k__BackingField
	RuntimeObject* ___U3CInstanceIdU3Ek__BackingField_6;
	// Vuforia.Image Vuforia.Internal.Observers.VuMarkInstance::<InstanceImage>k__BackingField
	Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * ___U3CInstanceImageU3Ek__BackingField_7;
	// System.Boolean Vuforia.Internal.Observers.VuMarkInstance::mActivated
	bool ___mActivated_8;

public:
	inline static int32_t get_offset_of_U3CVuMarkObserverU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794, ___U3CVuMarkObserverU3Ek__BackingField_5)); }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * get_U3CVuMarkObserverU3Ek__BackingField_5() const { return ___U3CVuMarkObserverU3Ek__BackingField_5; }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 ** get_address_of_U3CVuMarkObserverU3Ek__BackingField_5() { return &___U3CVuMarkObserverU3Ek__BackingField_5; }
	inline void set_U3CVuMarkObserverU3Ek__BackingField_5(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * value)
	{
		___U3CVuMarkObserverU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVuMarkObserverU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794, ___U3CInstanceIdU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInstanceIdU3Ek__BackingField_6() const { return ___U3CInstanceIdU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInstanceIdU3Ek__BackingField_6() { return &___U3CInstanceIdU3Ek__BackingField_6; }
	inline void set_U3CInstanceIdU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInstanceIdU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceIdU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceImageU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794, ___U3CInstanceImageU3Ek__BackingField_7)); }
	inline Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * get_U3CInstanceImageU3Ek__BackingField_7() const { return ___U3CInstanceImageU3Ek__BackingField_7; }
	inline Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 ** get_address_of_U3CInstanceImageU3Ek__BackingField_7() { return &___U3CInstanceImageU3Ek__BackingField_7; }
	inline void set_U3CInstanceImageU3Ek__BackingField_7(Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * value)
	{
		___U3CInstanceImageU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceImageU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_mActivated_8() { return static_cast<int32_t>(offsetof(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794, ___mActivated_8)); }
	inline bool get_mActivated_8() const { return ___mActivated_8; }
	inline bool* get_address_of_mActivated_8() { return &___mActivated_8; }
	inline void set_mActivated_8(bool value)
	{
		___mActivated_8 = value;
	}
};


// Vuforia.VuMatrix44F
struct VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 
{
public:
	// System.Single Vuforia.VuMatrix44F::m0
	float ___m0_0;
	// System.Single Vuforia.VuMatrix44F::m1
	float ___m1_1;
	// System.Single Vuforia.VuMatrix44F::m2
	float ___m2_2;
	// System.Single Vuforia.VuMatrix44F::m3
	float ___m3_3;
	// System.Single Vuforia.VuMatrix44F::m4
	float ___m4_4;
	// System.Single Vuforia.VuMatrix44F::m5
	float ___m5_5;
	// System.Single Vuforia.VuMatrix44F::m6
	float ___m6_6;
	// System.Single Vuforia.VuMatrix44F::m7
	float ___m7_7;
	// System.Single Vuforia.VuMatrix44F::m8
	float ___m8_8;
	// System.Single Vuforia.VuMatrix44F::m9
	float ___m9_9;
	// System.Single Vuforia.VuMatrix44F::m10
	float ___m10_10;
	// System.Single Vuforia.VuMatrix44F::m11
	float ___m11_11;
	// System.Single Vuforia.VuMatrix44F::m12
	float ___m12_12;
	// System.Single Vuforia.VuMatrix44F::m13
	float ___m13_13;
	// System.Single Vuforia.VuMatrix44F::m14
	float ___m14_14;
	// System.Single Vuforia.VuMatrix44F::m15
	float ___m15_15;

public:
	inline static int32_t get_offset_of_m0_0() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m0_0)); }
	inline float get_m0_0() const { return ___m0_0; }
	inline float* get_address_of_m0_0() { return &___m0_0; }
	inline void set_m0_0(float value)
	{
		___m0_0 = value;
	}

	inline static int32_t get_offset_of_m1_1() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m1_1)); }
	inline float get_m1_1() const { return ___m1_1; }
	inline float* get_address_of_m1_1() { return &___m1_1; }
	inline void set_m1_1(float value)
	{
		___m1_1 = value;
	}

	inline static int32_t get_offset_of_m2_2() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m2_2)); }
	inline float get_m2_2() const { return ___m2_2; }
	inline float* get_address_of_m2_2() { return &___m2_2; }
	inline void set_m2_2(float value)
	{
		___m2_2 = value;
	}

	inline static int32_t get_offset_of_m3_3() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m3_3)); }
	inline float get_m3_3() const { return ___m3_3; }
	inline float* get_address_of_m3_3() { return &___m3_3; }
	inline void set_m3_3(float value)
	{
		___m3_3 = value;
	}

	inline static int32_t get_offset_of_m4_4() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m4_4)); }
	inline float get_m4_4() const { return ___m4_4; }
	inline float* get_address_of_m4_4() { return &___m4_4; }
	inline void set_m4_4(float value)
	{
		___m4_4 = value;
	}

	inline static int32_t get_offset_of_m5_5() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m5_5)); }
	inline float get_m5_5() const { return ___m5_5; }
	inline float* get_address_of_m5_5() { return &___m5_5; }
	inline void set_m5_5(float value)
	{
		___m5_5 = value;
	}

	inline static int32_t get_offset_of_m6_6() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m6_6)); }
	inline float get_m6_6() const { return ___m6_6; }
	inline float* get_address_of_m6_6() { return &___m6_6; }
	inline void set_m6_6(float value)
	{
		___m6_6 = value;
	}

	inline static int32_t get_offset_of_m7_7() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m7_7)); }
	inline float get_m7_7() const { return ___m7_7; }
	inline float* get_address_of_m7_7() { return &___m7_7; }
	inline void set_m7_7(float value)
	{
		___m7_7 = value;
	}

	inline static int32_t get_offset_of_m8_8() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m8_8)); }
	inline float get_m8_8() const { return ___m8_8; }
	inline float* get_address_of_m8_8() { return &___m8_8; }
	inline void set_m8_8(float value)
	{
		___m8_8 = value;
	}

	inline static int32_t get_offset_of_m9_9() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m9_9)); }
	inline float get_m9_9() const { return ___m9_9; }
	inline float* get_address_of_m9_9() { return &___m9_9; }
	inline void set_m9_9(float value)
	{
		___m9_9 = value;
	}

	inline static int32_t get_offset_of_m10_10() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m10_10)); }
	inline float get_m10_10() const { return ___m10_10; }
	inline float* get_address_of_m10_10() { return &___m10_10; }
	inline void set_m10_10(float value)
	{
		___m10_10 = value;
	}

	inline static int32_t get_offset_of_m11_11() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m11_11)); }
	inline float get_m11_11() const { return ___m11_11; }
	inline float* get_address_of_m11_11() { return &___m11_11; }
	inline void set_m11_11(float value)
	{
		___m11_11 = value;
	}

	inline static int32_t get_offset_of_m12_12() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m12_12)); }
	inline float get_m12_12() const { return ___m12_12; }
	inline float* get_address_of_m12_12() { return &___m12_12; }
	inline void set_m12_12(float value)
	{
		___m12_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m14_14() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m14_14)); }
	inline float get_m14_14() const { return ___m14_14; }
	inline float* get_address_of_m14_14() { return &___m14_14; }
	inline void set_m14_14(float value)
	{
		___m14_14 = value;
	}

	inline static int32_t get_offset_of_m15_15() { return static_cast<int32_t>(offsetof(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8, ___m15_15)); }
	inline float get_m15_15() const { return ___m15_15; }
	inline float* get_address_of_m15_15() { return &___m15_15; }
	inline void set_m15_15(float value)
	{
		___m15_15 = value;
	}
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData
struct TextureData_t844E802A25614A015B160F82144E2EE9E2C50367 
{
public:
	// UnityEngine.Texture2D Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData::Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Texture_0;
	// System.Int32 Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData::BufferLength
	int32_t ___BufferLength_1;

public:
	inline static int32_t get_offset_of_Texture_0() { return static_cast<int32_t>(offsetof(TextureData_t844E802A25614A015B160F82144E2EE9E2C50367, ___Texture_0)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_Texture_0() const { return ___Texture_0; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_Texture_0() { return &___Texture_0; }
	inline void set_Texture_0(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___Texture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Texture_0), (void*)value);
	}

	inline static int32_t get_offset_of_BufferLength_1() { return static_cast<int32_t>(offsetof(TextureData_t844E802A25614A015B160F82144E2EE9E2C50367, ___BufferLength_1)); }
	inline int32_t get_BufferLength_1() const { return ___BufferLength_1; }
	inline int32_t* get_address_of_BufferLength_1() { return &___BufferLength_1; }
	inline void set_BufferLength_1(int32_t value)
	{
		___BufferLength_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData
struct TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshaled_pinvoke
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Texture_0;
	int32_t ___BufferLength_1;
};
// Native definition for COM marshalling of Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData
struct TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshaled_com
{
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Texture_0;
	int32_t ___BufferLength_1;
};

// Vuforia.Internal.Observers.VuMarkObserver/VuMarkPreProcessObservationComponent
struct VuMarkPreProcessObservationComponent_tDA6BEB5A2FC24E0BF612907841BC5D11CC57602F  : public AObserverComponent_t4ECCF8B7EBD52971C682CD4BF7428F54DB2E27D0
{
public:
	// Vuforia.Internal.Observers.VuMarkObserver Vuforia.Internal.Observers.VuMarkObserver/VuMarkPreProcessObservationComponent::mObserver
	VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * ___mObserver_3;

public:
	inline static int32_t get_offset_of_mObserver_3() { return static_cast<int32_t>(offsetof(VuMarkPreProcessObservationComponent_tDA6BEB5A2FC24E0BF612907841BC5D11CC57602F, ___mObserver_3)); }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * get_mObserver_3() const { return ___mObserver_3; }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 ** get_address_of_mObserver_3() { return &___mObserver_3; }
	inline void set_mObserver_3(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * value)
	{
		___mObserver_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObserver_3), (void*)value);
	}
};


// Vuforia.CameraDevice/AndroidDevice/Int64Range
struct Int64Range_t6C69130259A0AC52055B35E44B75B69609DB9D1D 
{
public:
	// System.Int64 Vuforia.CameraDevice/AndroidDevice/Int64Range::fromInt
	int64_t ___fromInt_0;
	// System.Int64 Vuforia.CameraDevice/AndroidDevice/Int64Range::toInt
	int64_t ___toInt_1;

public:
	inline static int32_t get_offset_of_fromInt_0() { return static_cast<int32_t>(offsetof(Int64Range_t6C69130259A0AC52055B35E44B75B69609DB9D1D, ___fromInt_0)); }
	inline int64_t get_fromInt_0() const { return ___fromInt_0; }
	inline int64_t* get_address_of_fromInt_0() { return &___fromInt_0; }
	inline void set_fromInt_0(int64_t value)
	{
		___fromInt_0 = value;
	}

	inline static int32_t get_offset_of_toInt_1() { return static_cast<int32_t>(offsetof(Int64Range_t6C69130259A0AC52055B35E44B75B69609DB9D1D, ___toInt_1)); }
	inline int64_t get_toInt_1() const { return ___toInt_1; }
	inline int64_t* get_address_of_toInt_1() { return &___toInt_1; }
	inline void set_toInt_1(int64_t value)
	{
		___toInt_1 = value;
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


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// Vuforia.Internal.VuforiaDriver.CameraIntrinsics
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74 
{
public:
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::FocalLengthX
	float ___FocalLengthX_0;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::FocalLengthY
	float ___FocalLengthY_1;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::PrincipalPointX
	float ___PrincipalPointX_2;
	// System.Single Vuforia.Internal.VuforiaDriver.CameraIntrinsics::PrincipalPointY
	float ___PrincipalPointY_3;
	// System.Single[] Vuforia.Internal.VuforiaDriver.CameraIntrinsics::DistortionCoefficients
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___DistortionCoefficients_4;

public:
	inline static int32_t get_offset_of_FocalLengthX_0() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___FocalLengthX_0)); }
	inline float get_FocalLengthX_0() const { return ___FocalLengthX_0; }
	inline float* get_address_of_FocalLengthX_0() { return &___FocalLengthX_0; }
	inline void set_FocalLengthX_0(float value)
	{
		___FocalLengthX_0 = value;
	}

	inline static int32_t get_offset_of_FocalLengthY_1() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___FocalLengthY_1)); }
	inline float get_FocalLengthY_1() const { return ___FocalLengthY_1; }
	inline float* get_address_of_FocalLengthY_1() { return &___FocalLengthY_1; }
	inline void set_FocalLengthY_1(float value)
	{
		___FocalLengthY_1 = value;
	}

	inline static int32_t get_offset_of_PrincipalPointX_2() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___PrincipalPointX_2)); }
	inline float get_PrincipalPointX_2() const { return ___PrincipalPointX_2; }
	inline float* get_address_of_PrincipalPointX_2() { return &___PrincipalPointX_2; }
	inline void set_PrincipalPointX_2(float value)
	{
		___PrincipalPointX_2 = value;
	}

	inline static int32_t get_offset_of_PrincipalPointY_3() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___PrincipalPointY_3)); }
	inline float get_PrincipalPointY_3() const { return ___PrincipalPointY_3; }
	inline float* get_address_of_PrincipalPointY_3() { return &___PrincipalPointY_3; }
	inline void set_PrincipalPointY_3(float value)
	{
		___PrincipalPointY_3 = value;
	}

	inline static int32_t get_offset_of_DistortionCoefficients_4() { return static_cast<int32_t>(offsetof(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74, ___DistortionCoefficients_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_DistortionCoefficients_4() const { return ___DistortionCoefficients_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_DistortionCoefficients_4() { return &___DistortionCoefficients_4; }
	inline void set_DistortionCoefficients_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___DistortionCoefficients_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DistortionCoefficients_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Internal.VuforiaDriver.CameraIntrinsics
#pragma pack(push, tp, 1)
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_pinvoke
{
	float ___FocalLengthX_0;
	float ___FocalLengthY_1;
	float ___PrincipalPointX_2;
	float ___PrincipalPointY_3;
	float ___DistortionCoefficients_4[8];
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.Internal.VuforiaDriver.CameraIntrinsics
#pragma pack(push, tp, 1)
struct CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_com
{
	float ___FocalLengthX_0;
	float ___FocalLengthY_1;
	float ___PrincipalPointX_2;
	float ___PrincipalPointY_3;
	float ___DistortionCoefficients_4[8];
};
#pragma pack(pop, tp)

// Vuforia.CameraMode
struct CameraMode_tF9E4AC1F6D05A67F31EBDBC565595F21E0C39CFA 
{
public:
	// System.Int32 Vuforia.CameraMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraMode_tF9E4AC1F6D05A67F31EBDBC565595F21E0C39CFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
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

// Vuforia.DriverPixelFormat
struct DriverPixelFormat_t1AACE90C17DA9DF6AC17F74710C676B257C28FE4 
{
public:
	// System.Int32 Vuforia.DriverPixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DriverPixelFormat_t1AACE90C17DA9DF6AC17F74710C676B257C28FE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Vuforia.FocusMode
struct FocusMode_t6FFECC3CC1B559C77ED7E58E5D8E4A860FD410C6 
{
public:
	// System.Int32 Vuforia.FocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusMode_t6FFECC3CC1B559C77ED7E58E5D8E4A860FD410C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Image
struct Image_tEA90BDBB0131379427A1282935D21313F94DFDB1  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.Image::mData
	intptr_t ___mData_0;
	// System.Byte[] Vuforia.Image::mDataArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mDataArray_1;
	// Vuforia.ImageDescription Vuforia.Image::<Description>k__BackingField
	ImageDescription_tF2A8E4465A467F49BA5703ABE641FE666FC843D5 * ___U3CDescriptionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_mData_0() { return static_cast<int32_t>(offsetof(Image_tEA90BDBB0131379427A1282935D21313F94DFDB1, ___mData_0)); }
	inline intptr_t get_mData_0() const { return ___mData_0; }
	inline intptr_t* get_address_of_mData_0() { return &___mData_0; }
	inline void set_mData_0(intptr_t value)
	{
		___mData_0 = value;
	}

	inline static int32_t get_offset_of_mDataArray_1() { return static_cast<int32_t>(offsetof(Image_tEA90BDBB0131379427A1282935D21313F94DFDB1, ___mDataArray_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_mDataArray_1() const { return ___mDataArray_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_mDataArray_1() { return &___mDataArray_1; }
	inline void set_mDataArray_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___mDataArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataArray_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Image_tEA90BDBB0131379427A1282935D21313F94DFDB1, ___U3CDescriptionU3Ek__BackingField_2)); }
	inline ImageDescription_tF2A8E4465A467F49BA5703ABE641FE666FC843D5 * get_U3CDescriptionU3Ek__BackingField_2() const { return ___U3CDescriptionU3Ek__BackingField_2; }
	inline ImageDescription_tF2A8E4465A467F49BA5703ABE641FE666FC843D5 ** get_address_of_U3CDescriptionU3Ek__BackingField_2() { return &___U3CDescriptionU3Ek__BackingField_2; }
	inline void set_U3CDescriptionU3Ek__BackingField_2(ImageDescription_tF2A8E4465A467F49BA5703ABE641FE666FC843D5 * value)
	{
		___U3CDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptionU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.Rendering.IndexFormat
struct IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20 
{
public:
	// System.Int32 UnityEngine.Rendering.IndexFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IndexFormat_tDB840806BBDDDE721BF45EFE55CFB3EF3038DB20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.InstanceIdType
struct InstanceIdType_t06C7820219EB8F3B808C53E7E2D5314CFA391038 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InstanceIdType_t06C7820219EB8F3B808C53E7E2D5314CFA391038, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Newtonsoft.Json.Linq.JProperty
struct JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F  : public JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList Vuforia.Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * ____content_15;
	// System.String Vuforia.Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_16;

public:
	inline static int32_t get_offset_of__content_15() { return static_cast<int32_t>(offsetof(JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F, ____content_15)); }
	inline JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * get__content_15() const { return ____content_15; }
	inline JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC ** get_address_of__content_15() { return &____content_15; }
	inline void set__content_15(JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * value)
	{
		____content_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_15), (void*)value);
	}

	inline static int32_t get_offset_of__name_16() { return static_cast<int32_t>(offsetof(JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F, ____name_16)); }
	inline String_t* get__name_16() const { return ____name_16; }
	inline String_t** get_address_of__name_16() { return &____name_16; }
	inline void set__name_16(String_t* value)
	{
		____name_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_16), (void*)value);
	}
};


// Vuforia.Newtonsoft.Json.Schema.JsonSchemaType
struct JsonSchemaType_t89F923BA09FA940BF213F37AFFF80A9A90992AC3 
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Schema.JsonSchemaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonSchemaType_t89F923BA09FA940BF213F37AFFF80A9A90992AC3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Internal.Utility.LogLevel
struct LogLevel_t0153A852474B733A97D327623F111A5C2916BEB1 
{
public:
	// System.Int32 Vuforia.Internal.Utility.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t0153A852474B733A97D327623F111A5C2916BEB1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Newtonsoft.Json.Utilities.MemberTypes
struct MemberTypes_t8964B5F6912722DDB422D0E11CB73859E857E0EC 
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Utilities.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_t8964B5F6912722DDB422D0E11CB73859E857E0EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.MeshState
struct MeshState_t55A36BE3A8CEC0D63A70E267746047A3D8ABA395 
{
public:
	// System.Int32 Vuforia.MeshState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshState_t55A36BE3A8CEC0D63A70E267746047A3D8ABA395, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MeshTopology
struct MeshTopology_tF37D1A0C174D5906B715580E7318A21B4263C1A6 
{
public:
	// System.Int32 UnityEngine.MeshTopology::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshTopology_tF37D1A0C174D5906B715580E7318A21B4263C1A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.PixelFormat
struct PixelFormat_t2860701D64A90BB02319BA76DB89A5C7DB02C366 
{
public:
	// System.Int32 Vuforia.PixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PixelFormat_t2860701D64A90BB02319BA76DB89A5C7DB02C366, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// Vuforia.PlayModeType
struct PlayModeType_t3C7C677F324184B66D14175150CD9F783D74B07C 
{
public:
	// System.Int32 Vuforia.PlayModeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayModeType_t3C7C677F324184B66D14175150CD9F783D74B07C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryOperator
struct QueryOperator_tBA2C5866D9961172218C9C58CEB4E61A7014790E 
{
public:
	// System.Int32 Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryOperator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryOperator_tBA2C5866D9961172218C9C58CEB4E61A7014790E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
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


// Vuforia.Status
struct Status_t507773DC9329777DFF23BBE12880E1A5331F8826 
{
public:
	// System.Int32 Vuforia.Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t507773DC9329777DFF23BBE12880E1A5331F8826, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.StatusInfo
struct StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD 
{
public:
	// System.Int32 Vuforia.StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t2D3913E705BD464CB7101343C8E44C3140AAEBFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VirtualButtonSensitivity
struct VirtualButtonSensitivity_tF1FAFB55AC69ACF9C0A5F01C8BC8C00383A9BF72 
{
public:
	// System.Int32 Vuforia.VirtualButtonSensitivity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VirtualButtonSensitivity_tF1FAFB55AC69ACF9C0A5F01C8BC8C00383A9BF72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Internal.Observers.VuMarkObserver
struct VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479  : public ANativeObserver_t1AEBDBAD83D2D7517210D5F3DCDC883DAE9909E3
{
public:
	// System.Action`2<System.Single,System.Single> Vuforia.Internal.Observers.VuMarkObserver::TemplateResized
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___TemplateResized_6;
	// System.Action`1<Vuforia.Internal.Observers.VuMarkInstance> Vuforia.Internal.Observers.VuMarkObserver::OnStartedTrackingInstance
	Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * ___OnStartedTrackingInstance_7;
	// System.Action`1<Vuforia.Internal.Observers.VuMarkInstance> Vuforia.Internal.Observers.VuMarkObserver::OnStoppedTrackingInstance
	Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * ___OnStoppedTrackingInstance_8;
	// System.Action`1<Vuforia.Internal.Observers.VuMarkObserver> Vuforia.Internal.Observers.VuMarkObserver::OnDisposedOfAllNativeInstances
	Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3 * ___OnDisposedOfAllNativeInstances_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Internal.Observers.VuMarkInstance> Vuforia.Internal.Observers.VuMarkObserver::mTrackedInstances
	Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * ___mTrackedInstances_10;

public:
	inline static int32_t get_offset_of_TemplateResized_6() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___TemplateResized_6)); }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * get_TemplateResized_6() const { return ___TemplateResized_6; }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 ** get_address_of_TemplateResized_6() { return &___TemplateResized_6; }
	inline void set_TemplateResized_6(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * value)
	{
		___TemplateResized_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TemplateResized_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnStartedTrackingInstance_7() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___OnStartedTrackingInstance_7)); }
	inline Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * get_OnStartedTrackingInstance_7() const { return ___OnStartedTrackingInstance_7; }
	inline Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 ** get_address_of_OnStartedTrackingInstance_7() { return &___OnStartedTrackingInstance_7; }
	inline void set_OnStartedTrackingInstance_7(Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * value)
	{
		___OnStartedTrackingInstance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartedTrackingInstance_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnStoppedTrackingInstance_8() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___OnStoppedTrackingInstance_8)); }
	inline Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * get_OnStoppedTrackingInstance_8() const { return ___OnStoppedTrackingInstance_8; }
	inline Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 ** get_address_of_OnStoppedTrackingInstance_8() { return &___OnStoppedTrackingInstance_8; }
	inline void set_OnStoppedTrackingInstance_8(Action_1_tA51089D8CD9F499CD49AE4B8470381E758E0DCD0 * value)
	{
		___OnStoppedTrackingInstance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStoppedTrackingInstance_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisposedOfAllNativeInstances_9() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___OnDisposedOfAllNativeInstances_9)); }
	inline Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3 * get_OnDisposedOfAllNativeInstances_9() const { return ___OnDisposedOfAllNativeInstances_9; }
	inline Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3 ** get_address_of_OnDisposedOfAllNativeInstances_9() { return &___OnDisposedOfAllNativeInstances_9; }
	inline void set_OnDisposedOfAllNativeInstances_9(Action_1_t88EBF2C4E3DB1455F3246F8576F1BC8E3516B9B3 * value)
	{
		___OnDisposedOfAllNativeInstances_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisposedOfAllNativeInstances_9), (void*)value);
	}

	inline static int32_t get_offset_of_mTrackedInstances_10() { return static_cast<int32_t>(offsetof(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479, ___mTrackedInstances_10)); }
	inline Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * get_mTrackedInstances_10() const { return ___mTrackedInstances_10; }
	inline Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 ** get_address_of_mTrackedInstances_10() { return &___mTrackedInstances_10; }
	inline void set_mTrackedInstances_10(Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * value)
	{
		___mTrackedInstances_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackedInstances_10), (void*)value);
	}
};


// Vuforia.VuObservationPoseStatus
struct VuObservationPoseStatus_t31D78B594908856D6495E2D4CDBF64BBE137D4C4 
{
public:
	// System.Int32 Vuforia.VuObservationPoseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuObservationPoseStatus_t31D78B594908856D6495E2D4CDBF64BBE137D4C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.DataSetTrackableBehaviour/TargetMotionHint
struct TargetMotionHint_t29982A087ED2A6ADAD5F8243A2AC3D7821B3905B 
{
public:
	// System.Int32 Vuforia.DataSetTrackableBehaviour/TargetMotionHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetMotionHint_t29982A087ED2A6ADAD5F8243A2AC3D7821B3905B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.SessionRecorderBehaviour/CleanStorageEvent
struct CleanStorageEvent_t3BB428C36FCD0C9F07DA614683107317EDAAF7EA  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// Vuforia.SessionRecorderBehaviour/RecordingStartedEvent
struct RecordingStartedEvent_t103CAF3D69705B1EE8BF87315503FD954EFE5A02  : public UnityEvent_1_t40BAB9C363ECB4269A7B1A42634A079A858AAE7B
{
public:

public:
};


// Vuforia.SessionRecorderBehaviour/RecordingStoppedEvent
struct RecordingStoppedEvent_t61C624893E604FD6B7AA9B88D2BF289C11F9E45D  : public UnityEvent_1_t095141A97517292A02F2857E89C48496D207B4A2
{
public:

public:
};


// Vuforia.SessionRecorderBehaviour/ShareRecordingEvent
struct ShareRecordingEvent_t4FD5A6DD64EC91EEC5DFF78C19A3FC6A19A0F26C  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// Vuforia.SessionRecorderBehaviour/StartRecordingEvent
struct StartRecordingEvent_t3336B5309BBE9D92D753D6DB882A2935BA324FC4  : public UnityEvent_1_t12854B51B9F904B8C9E6FE7E4E56585ACCAAC404
{
public:

public:
};


// Vuforia.SessionRecorderBehaviour/StopRecordingEvent
struct StopRecordingEvent_tCCD621EF86F31D6BB7C3AC4B8953775035238696  : public UnityEvent_1_t12854B51B9F904B8C9E6FE7E4E56585ACCAAC404
{
public:

public:
};


// Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData
struct ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1 
{
public:
	// UnityEngine.Matrix4x4 Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::ProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___ProjectionMatrix_0;
	// UnityEngine.Matrix4x4 Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::InverseMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___InverseMatrix_1;
	// System.Single Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::HorizontalFoV
	float ___HorizontalFoV_2;
	// System.Single Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::VerticalFoV
	float ___VerticalFoV_3;
	// UnityEngine.Vector3 Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::CenterEyeRayFrom
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CenterEyeRayFrom_4;
	// UnityEngine.Vector3 Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::CenterEyeRayTo
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CenterEyeRayTo_5;
	// System.Single Vuforia.Internal.Rendering.VideoBackgroundBehaviour/ProjectionMatrixData::MaxDepth
	float ___MaxDepth_6;

public:
	inline static int32_t get_offset_of_ProjectionMatrix_0() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___ProjectionMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_ProjectionMatrix_0() const { return ___ProjectionMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_ProjectionMatrix_0() { return &___ProjectionMatrix_0; }
	inline void set_ProjectionMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___ProjectionMatrix_0 = value;
	}

	inline static int32_t get_offset_of_InverseMatrix_1() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___InverseMatrix_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_InverseMatrix_1() const { return ___InverseMatrix_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_InverseMatrix_1() { return &___InverseMatrix_1; }
	inline void set_InverseMatrix_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___InverseMatrix_1 = value;
	}

	inline static int32_t get_offset_of_HorizontalFoV_2() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___HorizontalFoV_2)); }
	inline float get_HorizontalFoV_2() const { return ___HorizontalFoV_2; }
	inline float* get_address_of_HorizontalFoV_2() { return &___HorizontalFoV_2; }
	inline void set_HorizontalFoV_2(float value)
	{
		___HorizontalFoV_2 = value;
	}

	inline static int32_t get_offset_of_VerticalFoV_3() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___VerticalFoV_3)); }
	inline float get_VerticalFoV_3() const { return ___VerticalFoV_3; }
	inline float* get_address_of_VerticalFoV_3() { return &___VerticalFoV_3; }
	inline void set_VerticalFoV_3(float value)
	{
		___VerticalFoV_3 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayFrom_4() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___CenterEyeRayFrom_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CenterEyeRayFrom_4() const { return ___CenterEyeRayFrom_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CenterEyeRayFrom_4() { return &___CenterEyeRayFrom_4; }
	inline void set_CenterEyeRayFrom_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CenterEyeRayFrom_4 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayTo_5() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___CenterEyeRayTo_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CenterEyeRayTo_5() const { return ___CenterEyeRayTo_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CenterEyeRayTo_5() { return &___CenterEyeRayTo_5; }
	inline void set_CenterEyeRayTo_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CenterEyeRayTo_5 = value;
	}

	inline static int32_t get_offset_of_MaxDepth_6() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68D61444338D327413F979D15AB98A1174610CC1, ___MaxDepth_6)); }
	inline float get_MaxDepth_6() const { return ___MaxDepth_6; }
	inline float* get_address_of_MaxDepth_6() { return &___MaxDepth_6; }
	inline void set_MaxDepth_6(float value)
	{
		___MaxDepth_6 = value;
	}
};


// Vuforia.Internal.Observers.VuMarkObserver/VuMarkObservationFilterComponent
struct VuMarkObservationFilterComponent_tC2910136BDB6F9CC234BD63B977FEEF84905C1E8  : public AObservationFilterComponent_tFA207BD54AB712F4F6EDD36FAD59762E6410F41D
{
public:
	// Vuforia.Internal.Observers.VuMarkObserver Vuforia.Internal.Observers.VuMarkObserver/VuMarkObservationFilterComponent::mObserver
	VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * ___mObserver_3;

public:
	inline static int32_t get_offset_of_mObserver_3() { return static_cast<int32_t>(offsetof(VuMarkObservationFilterComponent_tC2910136BDB6F9CC234BD63B977FEEF84905C1E8, ___mObserver_3)); }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * get_mObserver_3() const { return ___mObserver_3; }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 ** get_address_of_mObserver_3() { return &___mObserver_3; }
	inline void set_mObserver_3(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * value)
	{
		___mObserver_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObserver_3), (void*)value);
	}
};


// Vuforia.VuforiaRuntimeUtilities/DriverType
struct DriverType_tFE2F18CF0D03567B127B5E272D05858680BB9B9D 
{
public:
	// System.Int32 Vuforia.VuforiaRuntimeUtilities/DriverType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DriverType_tFE2F18CF0D03567B127B5E272D05858680BB9B9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.WebCamProfile/ProfileData
struct ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE 
{
public:
	// UnityEngine.Vector2Int Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___RequestedTextureSize_0;
	// UnityEngine.Vector2Int Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___RequestedTextureSize_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___ResampledTextureSize_1)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};


// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration/ARCoreRequirement
struct ARCoreRequirement_t61E1D646ED96CE13616C433911D6B51ED4D009BE 
{
public:
	// System.Int32 Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration/ARCoreRequirement::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARCoreRequirement_t61E1D646ED96CE13616C433911D6B51ED4D009BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.CameraDevice/AndroidDevice/CameraField/DataType
struct DataType_t9FD64BCD3E1843E96DB85A06DFC97E392316C2EF 
{
public:
	// System.Int32 Vuforia.CameraDevice/AndroidDevice/CameraField/DataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataType_t9FD64BCD3E1843E96DB85A06DFC97E392316C2EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.Internal.VuforiaDriver.CameraImage
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C 
{
public:
	// System.Int64 Vuforia.Internal.VuforiaDriver.CameraImage::Timestamp
	int64_t ___Timestamp_0;
	// System.Int64 Vuforia.Internal.VuforiaDriver.CameraImage::ExposureTime
	int64_t ___ExposureTime_1;
	// System.IntPtr Vuforia.Internal.VuforiaDriver.CameraImage::Buffer
	intptr_t ___Buffer_2;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::BufferSize
	int32_t ___BufferSize_3;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Index
	int32_t ___Index_4;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Width
	int32_t ___Width_5;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Height
	int32_t ___Height_6;
	// System.Int32 Vuforia.Internal.VuforiaDriver.CameraImage::Stride
	int32_t ___Stride_7;
	// Vuforia.DriverPixelFormat Vuforia.Internal.VuforiaDriver.CameraImage::Format
	int32_t ___Format_8;
	// Vuforia.Internal.VuforiaDriver.CameraIntrinsics Vuforia.Internal.VuforiaDriver.CameraImage::Intrinsics
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  ___Intrinsics_9;

public:
	inline static int32_t get_offset_of_Timestamp_0() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Timestamp_0)); }
	inline int64_t get_Timestamp_0() const { return ___Timestamp_0; }
	inline int64_t* get_address_of_Timestamp_0() { return &___Timestamp_0; }
	inline void set_Timestamp_0(int64_t value)
	{
		___Timestamp_0 = value;
	}

	inline static int32_t get_offset_of_ExposureTime_1() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___ExposureTime_1)); }
	inline int64_t get_ExposureTime_1() const { return ___ExposureTime_1; }
	inline int64_t* get_address_of_ExposureTime_1() { return &___ExposureTime_1; }
	inline void set_ExposureTime_1(int64_t value)
	{
		___ExposureTime_1 = value;
	}

	inline static int32_t get_offset_of_Buffer_2() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Buffer_2)); }
	inline intptr_t get_Buffer_2() const { return ___Buffer_2; }
	inline intptr_t* get_address_of_Buffer_2() { return &___Buffer_2; }
	inline void set_Buffer_2(intptr_t value)
	{
		___Buffer_2 = value;
	}

	inline static int32_t get_offset_of_BufferSize_3() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___BufferSize_3)); }
	inline int32_t get_BufferSize_3() const { return ___BufferSize_3; }
	inline int32_t* get_address_of_BufferSize_3() { return &___BufferSize_3; }
	inline void set_BufferSize_3(int32_t value)
	{
		___BufferSize_3 = value;
	}

	inline static int32_t get_offset_of_Index_4() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Index_4)); }
	inline int32_t get_Index_4() const { return ___Index_4; }
	inline int32_t* get_address_of_Index_4() { return &___Index_4; }
	inline void set_Index_4(int32_t value)
	{
		___Index_4 = value;
	}

	inline static int32_t get_offset_of_Width_5() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Width_5)); }
	inline int32_t get_Width_5() const { return ___Width_5; }
	inline int32_t* get_address_of_Width_5() { return &___Width_5; }
	inline void set_Width_5(int32_t value)
	{
		___Width_5 = value;
	}

	inline static int32_t get_offset_of_Height_6() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Height_6)); }
	inline int32_t get_Height_6() const { return ___Height_6; }
	inline int32_t* get_address_of_Height_6() { return &___Height_6; }
	inline void set_Height_6(int32_t value)
	{
		___Height_6 = value;
	}

	inline static int32_t get_offset_of_Stride_7() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Stride_7)); }
	inline int32_t get_Stride_7() const { return ___Stride_7; }
	inline int32_t* get_address_of_Stride_7() { return &___Stride_7; }
	inline void set_Stride_7(int32_t value)
	{
		___Stride_7 = value;
	}

	inline static int32_t get_offset_of_Format_8() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Format_8)); }
	inline int32_t get_Format_8() const { return ___Format_8; }
	inline int32_t* get_address_of_Format_8() { return &___Format_8; }
	inline void set_Format_8(int32_t value)
	{
		___Format_8 = value;
	}

	inline static int32_t get_offset_of_Intrinsics_9() { return static_cast<int32_t>(offsetof(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C, ___Intrinsics_9)); }
	inline CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  get_Intrinsics_9() const { return ___Intrinsics_9; }
	inline CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74 * get_address_of_Intrinsics_9() { return &___Intrinsics_9; }
	inline void set_Intrinsics_9(CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74  value)
	{
		___Intrinsics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Intrinsics_9))->___DistortionCoefficients_4), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.Internal.VuforiaDriver.CameraImage
#pragma pack(push, tp, 1)
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C_marshaled_pinvoke
{
	int64_t ___Timestamp_0;
	int64_t ___ExposureTime_1;
	intptr_t ___Buffer_2;
	int32_t ___BufferSize_3;
	int32_t ___Index_4;
	int32_t ___Width_5;
	int32_t ___Height_6;
	int32_t ___Stride_7;
	int32_t ___Format_8;
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_pinvoke ___Intrinsics_9;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.Internal.VuforiaDriver.CameraImage
#pragma pack(push, tp, 1)
struct CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C_marshaled_com
{
	int64_t ___Timestamp_0;
	int64_t ___ExposureTime_1;
	intptr_t ___Buffer_2;
	int32_t ___BufferSize_3;
	int32_t ___Index_4;
	int32_t ___Width_5;
	int32_t ___Height_6;
	int32_t ___Stride_7;
	int32_t ___Format_8;
	CameraIntrinsics_t4DAD9BA6911C8578366BB840C32CBF80B9386E74_marshaled_com ___Intrinsics_9;
};
#pragma pack(pop, tp)

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel
struct JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Required>k__BackingField
	bool ___U3CRequiredU3Ek__BackingField_0;
	// Vuforia.Newtonsoft.Json.Schema.JsonSchemaType Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;
	// System.Nullable`1<System.Int32> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<MinimumLength>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinimumLengthU3Ek__BackingField_2;
	// System.Nullable`1<System.Int32> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<MaximumLength>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMaximumLengthU3Ek__BackingField_3;
	// System.Nullable`1<System.Double> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<DivisibleBy>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CDivisibleByU3Ek__BackingField_4;
	// System.Nullable`1<System.Double> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Minimum>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CMinimumU3Ek__BackingField_5;
	// System.Nullable`1<System.Double> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Maximum>k__BackingField
	Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  ___U3CMaximumU3Ek__BackingField_6;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<ExclusiveMinimum>k__BackingField
	bool ___U3CExclusiveMinimumU3Ek__BackingField_7;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<ExclusiveMaximum>k__BackingField
	bool ___U3CExclusiveMaximumU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<MinimumItems>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMinimumItemsU3Ek__BackingField_9;
	// System.Nullable`1<System.Int32> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<MaximumItems>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CMaximumItemsU3Ek__BackingField_10;
	// System.Collections.Generic.IList`1<System.String> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Patterns>k__BackingField
	RuntimeObject* ___U3CPatternsU3Ek__BackingField_11;
	// System.Collections.Generic.IList`1<Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Items>k__BackingField
	RuntimeObject* ___U3CItemsU3Ek__BackingField_12;
	// System.Collections.Generic.IDictionary`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Properties>k__BackingField
	RuntimeObject* ___U3CPropertiesU3Ek__BackingField_13;
	// System.Collections.Generic.IDictionary`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<PatternProperties>k__BackingField
	RuntimeObject* ___U3CPatternPropertiesU3Ek__BackingField_14;
	// Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<AdditionalProperties>k__BackingField
	JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * ___U3CAdditionalPropertiesU3Ek__BackingField_15;
	// Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<AdditionalItems>k__BackingField
	JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * ___U3CAdditionalItemsU3Ek__BackingField_16;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<PositionalItemsValidation>k__BackingField
	bool ___U3CPositionalItemsValidationU3Ek__BackingField_17;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<AllowAdditionalProperties>k__BackingField
	bool ___U3CAllowAdditionalPropertiesU3Ek__BackingField_18;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<AllowAdditionalItems>k__BackingField
	bool ___U3CAllowAdditionalItemsU3Ek__BackingField_19;
	// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<UniqueItems>k__BackingField
	bool ___U3CUniqueItemsU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Enum>k__BackingField
	RuntimeObject* ___U3CEnumU3Ek__BackingField_21;
	// Vuforia.Newtonsoft.Json.Schema.JsonSchemaType Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::<Disallow>k__BackingField
	int32_t ___U3CDisallowU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CRequiredU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CRequiredU3Ek__BackingField_0)); }
	inline bool get_U3CRequiredU3Ek__BackingField_0() const { return ___U3CRequiredU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CRequiredU3Ek__BackingField_0() { return &___U3CRequiredU3Ek__BackingField_0; }
	inline void set_U3CRequiredU3Ek__BackingField_0(bool value)
	{
		___U3CRequiredU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumLengthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMinimumLengthU3Ek__BackingField_2)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMinimumLengthU3Ek__BackingField_2() const { return ___U3CMinimumLengthU3Ek__BackingField_2; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMinimumLengthU3Ek__BackingField_2() { return &___U3CMinimumLengthU3Ek__BackingField_2; }
	inline void set_U3CMinimumLengthU3Ek__BackingField_2(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMinimumLengthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumLengthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMaximumLengthU3Ek__BackingField_3)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMaximumLengthU3Ek__BackingField_3() const { return ___U3CMaximumLengthU3Ek__BackingField_3; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMaximumLengthU3Ek__BackingField_3() { return &___U3CMaximumLengthU3Ek__BackingField_3; }
	inline void set_U3CMaximumLengthU3Ek__BackingField_3(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMaximumLengthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDivisibleByU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CDivisibleByU3Ek__BackingField_4)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CDivisibleByU3Ek__BackingField_4() const { return ___U3CDivisibleByU3Ek__BackingField_4; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CDivisibleByU3Ek__BackingField_4() { return &___U3CDivisibleByU3Ek__BackingField_4; }
	inline void set_U3CDivisibleByU3Ek__BackingField_4(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CDivisibleByU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMinimumU3Ek__BackingField_5)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CMinimumU3Ek__BackingField_5() const { return ___U3CMinimumU3Ek__BackingField_5; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CMinimumU3Ek__BackingField_5() { return &___U3CMinimumU3Ek__BackingField_5; }
	inline void set_U3CMinimumU3Ek__BackingField_5(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CMinimumU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMaximumU3Ek__BackingField_6)); }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  get_U3CMaximumU3Ek__BackingField_6() const { return ___U3CMaximumU3Ek__BackingField_6; }
	inline Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 * get_address_of_U3CMaximumU3Ek__BackingField_6() { return &___U3CMaximumU3Ek__BackingField_6; }
	inline void set_U3CMaximumU3Ek__BackingField_6(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  value)
	{
		___U3CMaximumU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CExclusiveMinimumU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CExclusiveMinimumU3Ek__BackingField_7)); }
	inline bool get_U3CExclusiveMinimumU3Ek__BackingField_7() const { return ___U3CExclusiveMinimumU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CExclusiveMinimumU3Ek__BackingField_7() { return &___U3CExclusiveMinimumU3Ek__BackingField_7; }
	inline void set_U3CExclusiveMinimumU3Ek__BackingField_7(bool value)
	{
		___U3CExclusiveMinimumU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CExclusiveMaximumU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CExclusiveMaximumU3Ek__BackingField_8)); }
	inline bool get_U3CExclusiveMaximumU3Ek__BackingField_8() const { return ___U3CExclusiveMaximumU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CExclusiveMaximumU3Ek__BackingField_8() { return &___U3CExclusiveMaximumU3Ek__BackingField_8; }
	inline void set_U3CExclusiveMaximumU3Ek__BackingField_8(bool value)
	{
		___U3CExclusiveMaximumU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumItemsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMinimumItemsU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMinimumItemsU3Ek__BackingField_9() const { return ___U3CMinimumItemsU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMinimumItemsU3Ek__BackingField_9() { return &___U3CMinimumItemsU3Ek__BackingField_9; }
	inline void set_U3CMinimumItemsU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMinimumItemsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumItemsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CMaximumItemsU3Ek__BackingField_10)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CMaximumItemsU3Ek__BackingField_10() const { return ___U3CMaximumItemsU3Ek__BackingField_10; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CMaximumItemsU3Ek__BackingField_10() { return &___U3CMaximumItemsU3Ek__BackingField_10; }
	inline void set_U3CMaximumItemsU3Ek__BackingField_10(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CMaximumItemsU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPatternsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CPatternsU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CPatternsU3Ek__BackingField_11() const { return ___U3CPatternsU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CPatternsU3Ek__BackingField_11() { return &___U3CPatternsU3Ek__BackingField_11; }
	inline void set_U3CPatternsU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CPatternsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPatternsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CItemsU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CItemsU3Ek__BackingField_12() const { return ___U3CItemsU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CItemsU3Ek__BackingField_12() { return &___U3CItemsU3Ek__BackingField_12; }
	inline void set_U3CItemsU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CItemsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemsU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CPropertiesU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CPropertiesU3Ek__BackingField_13() const { return ___U3CPropertiesU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CPropertiesU3Ek__BackingField_13() { return &___U3CPropertiesU3Ek__BackingField_13; }
	inline void set_U3CPropertiesU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CPropertiesU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPatternPropertiesU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CPatternPropertiesU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CPatternPropertiesU3Ek__BackingField_14() const { return ___U3CPatternPropertiesU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CPatternPropertiesU3Ek__BackingField_14() { return &___U3CPatternPropertiesU3Ek__BackingField_14; }
	inline void set_U3CPatternPropertiesU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CPatternPropertiesU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPatternPropertiesU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdditionalPropertiesU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CAdditionalPropertiesU3Ek__BackingField_15)); }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * get_U3CAdditionalPropertiesU3Ek__BackingField_15() const { return ___U3CAdditionalPropertiesU3Ek__BackingField_15; }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC ** get_address_of_U3CAdditionalPropertiesU3Ek__BackingField_15() { return &___U3CAdditionalPropertiesU3Ek__BackingField_15; }
	inline void set_U3CAdditionalPropertiesU3Ek__BackingField_15(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * value)
	{
		___U3CAdditionalPropertiesU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdditionalPropertiesU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdditionalItemsU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CAdditionalItemsU3Ek__BackingField_16)); }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * get_U3CAdditionalItemsU3Ek__BackingField_16() const { return ___U3CAdditionalItemsU3Ek__BackingField_16; }
	inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC ** get_address_of_U3CAdditionalItemsU3Ek__BackingField_16() { return &___U3CAdditionalItemsU3Ek__BackingField_16; }
	inline void set_U3CAdditionalItemsU3Ek__BackingField_16(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * value)
	{
		___U3CAdditionalItemsU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdditionalItemsU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPositionalItemsValidationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CPositionalItemsValidationU3Ek__BackingField_17)); }
	inline bool get_U3CPositionalItemsValidationU3Ek__BackingField_17() const { return ___U3CPositionalItemsValidationU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CPositionalItemsValidationU3Ek__BackingField_17() { return &___U3CPositionalItemsValidationU3Ek__BackingField_17; }
	inline void set_U3CPositionalItemsValidationU3Ek__BackingField_17(bool value)
	{
		___U3CPositionalItemsValidationU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CAllowAdditionalPropertiesU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CAllowAdditionalPropertiesU3Ek__BackingField_18)); }
	inline bool get_U3CAllowAdditionalPropertiesU3Ek__BackingField_18() const { return ___U3CAllowAdditionalPropertiesU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CAllowAdditionalPropertiesU3Ek__BackingField_18() { return &___U3CAllowAdditionalPropertiesU3Ek__BackingField_18; }
	inline void set_U3CAllowAdditionalPropertiesU3Ek__BackingField_18(bool value)
	{
		___U3CAllowAdditionalPropertiesU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CAllowAdditionalItemsU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CAllowAdditionalItemsU3Ek__BackingField_19)); }
	inline bool get_U3CAllowAdditionalItemsU3Ek__BackingField_19() const { return ___U3CAllowAdditionalItemsU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CAllowAdditionalItemsU3Ek__BackingField_19() { return &___U3CAllowAdditionalItemsU3Ek__BackingField_19; }
	inline void set_U3CAllowAdditionalItemsU3Ek__BackingField_19(bool value)
	{
		___U3CAllowAdditionalItemsU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CUniqueItemsU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CUniqueItemsU3Ek__BackingField_20)); }
	inline bool get_U3CUniqueItemsU3Ek__BackingField_20() const { return ___U3CUniqueItemsU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CUniqueItemsU3Ek__BackingField_20() { return &___U3CUniqueItemsU3Ek__BackingField_20; }
	inline void set_U3CUniqueItemsU3Ek__BackingField_20(bool value)
	{
		___U3CUniqueItemsU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CEnumU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CEnumU3Ek__BackingField_21)); }
	inline RuntimeObject* get_U3CEnumU3Ek__BackingField_21() const { return ___U3CEnumU3Ek__BackingField_21; }
	inline RuntimeObject** get_address_of_U3CEnumU3Ek__BackingField_21() { return &___U3CEnumU3Ek__BackingField_21; }
	inline void set_U3CEnumU3Ek__BackingField_21(RuntimeObject* value)
	{
		___U3CEnumU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnumU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisallowU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC, ___U3CDisallowU3Ek__BackingField_22)); }
	inline int32_t get_U3CDisallowU3Ek__BackingField_22() const { return ___U3CDisallowU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CDisallowU3Ek__BackingField_22() { return &___U3CDisallowU3Ek__BackingField_22; }
	inline void set_U3CDisallowU3Ek__BackingField_22(int32_t value)
	{
		___U3CDisallowU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// Vuforia.PCTile
struct PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.PCTile::id
	int32_t ___id_0;
	// UnityEngine.Bounds Vuforia.PCTile::visibilityBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___visibilityBounds_1;
	// UnityEngine.Vector3 Vuforia.PCTile::relativeToRootPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___relativeToRootPosition_2;
	// System.Int32 Vuforia.PCTile::depth
	int32_t ___depth_3;
	// System.Single Vuforia.PCTile::geometricError
	float ___geometricError_4;
	// System.Single[] Vuforia.PCTile::transform
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___transform_5;
	// Vuforia.PCBoundingVolume Vuforia.PCTile::boundingVolume
	PCBoundingVolume_t9C6FC014A8B3EFBC3168D8692896421A43D02755 * ___boundingVolume_6;
	// System.String Vuforia.PCTile::refine
	String_t* ___refine_7;
	// Vuforia.PCContentUrl Vuforia.PCTile::content
	PCContentUrl_t1422ED3007A7958710FA5AC1550252453D1DA20C * ___content_8;
	// Vuforia.PCTile[] Vuforia.PCTile::children
	PCTileU5BU5D_tB67206C00A17F7F21E82E36EF0426CF921574F3D* ___children_9;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_visibilityBounds_1() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___visibilityBounds_1)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_visibilityBounds_1() const { return ___visibilityBounds_1; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_visibilityBounds_1() { return &___visibilityBounds_1; }
	inline void set_visibilityBounds_1(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___visibilityBounds_1 = value;
	}

	inline static int32_t get_offset_of_relativeToRootPosition_2() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___relativeToRootPosition_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_relativeToRootPosition_2() const { return ___relativeToRootPosition_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_relativeToRootPosition_2() { return &___relativeToRootPosition_2; }
	inline void set_relativeToRootPosition_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___relativeToRootPosition_2 = value;
	}

	inline static int32_t get_offset_of_depth_3() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___depth_3)); }
	inline int32_t get_depth_3() const { return ___depth_3; }
	inline int32_t* get_address_of_depth_3() { return &___depth_3; }
	inline void set_depth_3(int32_t value)
	{
		___depth_3 = value;
	}

	inline static int32_t get_offset_of_geometricError_4() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___geometricError_4)); }
	inline float get_geometricError_4() const { return ___geometricError_4; }
	inline float* get_address_of_geometricError_4() { return &___geometricError_4; }
	inline void set_geometricError_4(float value)
	{
		___geometricError_4 = value;
	}

	inline static int32_t get_offset_of_transform_5() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___transform_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_transform_5() const { return ___transform_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_transform_5() { return &___transform_5; }
	inline void set_transform_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___transform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_5), (void*)value);
	}

	inline static int32_t get_offset_of_boundingVolume_6() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___boundingVolume_6)); }
	inline PCBoundingVolume_t9C6FC014A8B3EFBC3168D8692896421A43D02755 * get_boundingVolume_6() const { return ___boundingVolume_6; }
	inline PCBoundingVolume_t9C6FC014A8B3EFBC3168D8692896421A43D02755 ** get_address_of_boundingVolume_6() { return &___boundingVolume_6; }
	inline void set_boundingVolume_6(PCBoundingVolume_t9C6FC014A8B3EFBC3168D8692896421A43D02755 * value)
	{
		___boundingVolume_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundingVolume_6), (void*)value);
	}

	inline static int32_t get_offset_of_refine_7() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___refine_7)); }
	inline String_t* get_refine_7() const { return ___refine_7; }
	inline String_t** get_address_of_refine_7() { return &___refine_7; }
	inline void set_refine_7(String_t* value)
	{
		___refine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refine_7), (void*)value);
	}

	inline static int32_t get_offset_of_content_8() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___content_8)); }
	inline PCContentUrl_t1422ED3007A7958710FA5AC1550252453D1DA20C * get_content_8() const { return ___content_8; }
	inline PCContentUrl_t1422ED3007A7958710FA5AC1550252453D1DA20C ** get_address_of_content_8() { return &___content_8; }
	inline void set_content_8(PCContentUrl_t1422ED3007A7958710FA5AC1550252453D1DA20C * value)
	{
		___content_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_8), (void*)value);
	}

	inline static int32_t get_offset_of_children_9() { return static_cast<int32_t>(offsetof(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC, ___children_9)); }
	inline PCTileU5BU5D_tB67206C00A17F7F21E82E36EF0426CF921574F3D* get_children_9() const { return ___children_9; }
	inline PCTileU5BU5D_tB67206C00A17F7F21E82E36EF0426CF921574F3D** get_address_of_children_9() { return &___children_9; }
	inline void set_children_9(PCTileU5BU5D_tB67206C00A17F7F21E82E36EF0426CF921574F3D* value)
	{
		___children_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_9), (void*)value);
	}
};


// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryOperator Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryExpression::<Operator>k__BackingField
	int32_t ___U3COperatorU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3COperatorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546, ___U3COperatorU3Ek__BackingField_0)); }
	inline int32_t get_U3COperatorU3Ek__BackingField_0() const { return ___U3COperatorU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3COperatorU3Ek__BackingField_0() { return &___U3COperatorU3Ek__BackingField_0; }
	inline void set_U3COperatorU3Ek__BackingField_0(int32_t value)
	{
		___U3COperatorU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Vuforia.TargetStatus
struct TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 
{
public:
	// Vuforia.Status Vuforia.TargetStatus::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_0;
	// Vuforia.StatusInfo Vuforia.TargetStatus::<StatusInfo>k__BackingField
	int32_t ___U3CStatusInfoU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1, ___U3CStatusU3Ek__BackingField_0)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_0() const { return ___U3CStatusU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_0() { return &___U3CStatusU3Ek__BackingField_0; }
	inline void set_U3CStatusU3Ek__BackingField_0(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStatusInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1, ___U3CStatusInfoU3Ek__BackingField_1)); }
	inline int32_t get_U3CStatusInfoU3Ek__BackingField_1() const { return ___U3CStatusInfoU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStatusInfoU3Ek__BackingField_1() { return &___U3CStatusInfoU3Ek__BackingField_1; }
	inline void set_U3CStatusInfoU3Ek__BackingField_1(int32_t value)
	{
		___U3CStatusInfoU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// Vuforia.Internal.Rendering.TextureDefinition
struct TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B  : public RuntimeObject
{
public:
	// System.UInt32 Vuforia.Internal.Rendering.TextureDefinition::TextureId
	uint32_t ___TextureId_0;
	// System.Int32 Vuforia.Internal.Rendering.TextureDefinition::Width
	int32_t ___Width_1;
	// System.Int32 Vuforia.Internal.Rendering.TextureDefinition::Height
	int32_t ___Height_2;
	// UnityEngine.TextureFormat Vuforia.Internal.Rendering.TextureDefinition::TextureFormat
	int32_t ___TextureFormat_3;
	// System.String Vuforia.Internal.Rendering.TextureDefinition::ShaderTextureName
	String_t* ___ShaderTextureName_4;

public:
	inline static int32_t get_offset_of_TextureId_0() { return static_cast<int32_t>(offsetof(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B, ___TextureId_0)); }
	inline uint32_t get_TextureId_0() const { return ___TextureId_0; }
	inline uint32_t* get_address_of_TextureId_0() { return &___TextureId_0; }
	inline void set_TextureId_0(uint32_t value)
	{
		___TextureId_0 = value;
	}

	inline static int32_t get_offset_of_Width_1() { return static_cast<int32_t>(offsetof(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B, ___Width_1)); }
	inline int32_t get_Width_1() const { return ___Width_1; }
	inline int32_t* get_address_of_Width_1() { return &___Width_1; }
	inline void set_Width_1(int32_t value)
	{
		___Width_1 = value;
	}

	inline static int32_t get_offset_of_Height_2() { return static_cast<int32_t>(offsetof(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B, ___Height_2)); }
	inline int32_t get_Height_2() const { return ___Height_2; }
	inline int32_t* get_address_of_Height_2() { return &___Height_2; }
	inline void set_Height_2(int32_t value)
	{
		___Height_2 = value;
	}

	inline static int32_t get_offset_of_TextureFormat_3() { return static_cast<int32_t>(offsetof(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B, ___TextureFormat_3)); }
	inline int32_t get_TextureFormat_3() const { return ___TextureFormat_3; }
	inline int32_t* get_address_of_TextureFormat_3() { return &___TextureFormat_3; }
	inline void set_TextureFormat_3(int32_t value)
	{
		___TextureFormat_3 = value;
	}

	inline static int32_t get_offset_of_ShaderTextureName_4() { return static_cast<int32_t>(offsetof(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B, ___ShaderTextureName_4)); }
	inline String_t* get_ShaderTextureName_4() const { return ___ShaderTextureName_4; }
	inline String_t** get_address_of_ShaderTextureName_4() { return &___ShaderTextureName_4; }
	inline void set_ShaderTextureName_4(String_t* value)
	{
		___ShaderTextureName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShaderTextureName_4), (void*)value);
	}
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


// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater
struct VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1  : public RuntimeObject
{
public:
	// Vuforia.IVuCameraController Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::mCameraController
	RuntimeObject* ___mCameraController_0;
	// UnityEngine.Rendering.CommandBuffer Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::mCommandBuffer
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___mCommandBuffer_6;
	// UnityEngine.Camera Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::mARCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mARCamera_7;
	// System.Action Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::mCleanupTextures
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___mCleanupTextures_8;
	// UnityEngine.RenderTexture Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::mVBRenderTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___mVBRenderTexture_9;
	// System.Action`1<System.Collections.Generic.IList`1<Vuforia.Image>> Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::mUpdateTextureAction
	Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * ___mUpdateTextureAction_12;
	// UnityEngine.Material Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::mVideoBackgroundMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mVideoBackgroundMaterial_14;

public:
	inline static int32_t get_offset_of_mCameraController_0() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1, ___mCameraController_0)); }
	inline RuntimeObject* get_mCameraController_0() const { return ___mCameraController_0; }
	inline RuntimeObject** get_address_of_mCameraController_0() { return &___mCameraController_0; }
	inline void set_mCameraController_0(RuntimeObject* value)
	{
		___mCameraController_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraController_0), (void*)value);
	}

	inline static int32_t get_offset_of_mCommandBuffer_6() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1, ___mCommandBuffer_6)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_mCommandBuffer_6() const { return ___mCommandBuffer_6; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_mCommandBuffer_6() { return &___mCommandBuffer_6; }
	inline void set_mCommandBuffer_6(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___mCommandBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCommandBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_mARCamera_7() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1, ___mARCamera_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mARCamera_7() const { return ___mARCamera_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mARCamera_7() { return &___mARCamera_7; }
	inline void set_mARCamera_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mARCamera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mARCamera_7), (void*)value);
	}

	inline static int32_t get_offset_of_mCleanupTextures_8() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1, ___mCleanupTextures_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_mCleanupTextures_8() const { return ___mCleanupTextures_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_mCleanupTextures_8() { return &___mCleanupTextures_8; }
	inline void set_mCleanupTextures_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___mCleanupTextures_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCleanupTextures_8), (void*)value);
	}

	inline static int32_t get_offset_of_mVBRenderTexture_9() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1, ___mVBRenderTexture_9)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_mVBRenderTexture_9() const { return ___mVBRenderTexture_9; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_mVBRenderTexture_9() { return &___mVBRenderTexture_9; }
	inline void set_mVBRenderTexture_9(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___mVBRenderTexture_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVBRenderTexture_9), (void*)value);
	}

	inline static int32_t get_offset_of_mUpdateTextureAction_12() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1, ___mUpdateTextureAction_12)); }
	inline Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * get_mUpdateTextureAction_12() const { return ___mUpdateTextureAction_12; }
	inline Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB ** get_address_of_mUpdateTextureAction_12() { return &___mUpdateTextureAction_12; }
	inline void set_mUpdateTextureAction_12(Action_1_t7D0EA935BD94CDF0B50A8EB4B3693787EC5D2DFB * value)
	{
		___mUpdateTextureAction_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUpdateTextureAction_12), (void*)value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundMaterial_14() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1, ___mVideoBackgroundMaterial_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_mVideoBackgroundMaterial_14() const { return ___mVideoBackgroundMaterial_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_mVideoBackgroundMaterial_14() { return &___mVideoBackgroundMaterial_14; }
	inline void set_mVideoBackgroundMaterial_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___mVideoBackgroundMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVideoBackgroundMaterial_14), (void*)value);
	}
};

struct VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1_StaticFields
{
public:
	// System.String[] Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::sShaderKeywords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___sShaderKeywords_10;
	// System.Collections.Generic.Dictionary`2<Vuforia.PixelFormat,System.String> Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::sShaderWordLookup
	Dictionary_2_tA351F61618E4EFB374D4B5E6D64F08A1303D1ED7 * ___sShaderWordLookup_13;
	// System.Collections.Generic.IDictionary`2<Vuforia.PixelFormat,System.Action`2<System.Collections.Generic.IList`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>,Vuforia.Image>> Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::mTextureUpdateActionMap
	RuntimeObject* ___mTextureUpdateActionMap_15;

public:
	inline static int32_t get_offset_of_sShaderKeywords_10() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1_StaticFields, ___sShaderKeywords_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_sShaderKeywords_10() const { return ___sShaderKeywords_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_sShaderKeywords_10() { return &___sShaderKeywords_10; }
	inline void set_sShaderKeywords_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___sShaderKeywords_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sShaderKeywords_10), (void*)value);
	}

	inline static int32_t get_offset_of_sShaderWordLookup_13() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1_StaticFields, ___sShaderWordLookup_13)); }
	inline Dictionary_2_tA351F61618E4EFB374D4B5E6D64F08A1303D1ED7 * get_sShaderWordLookup_13() const { return ___sShaderWordLookup_13; }
	inline Dictionary_2_tA351F61618E4EFB374D4B5E6D64F08A1303D1ED7 ** get_address_of_sShaderWordLookup_13() { return &___sShaderWordLookup_13; }
	inline void set_sShaderWordLookup_13(Dictionary_2_tA351F61618E4EFB374D4B5E6D64F08A1303D1ED7 * value)
	{
		___sShaderWordLookup_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sShaderWordLookup_13), (void*)value);
	}

	inline static int32_t get_offset_of_mTextureUpdateActionMap_15() { return static_cast<int32_t>(offsetof(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1_StaticFields, ___mTextureUpdateActionMap_15)); }
	inline RuntimeObject* get_mTextureUpdateActionMap_15() const { return ___mTextureUpdateActionMap_15; }
	inline RuntimeObject** get_address_of_mTextureUpdateActionMap_15() { return &___mTextureUpdateActionMap_15; }
	inline void set_mTextureUpdateActionMap_15(RuntimeObject* value)
	{
		___mTextureUpdateActionMap_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTextureUpdateActionMap_15), (void*)value);
	}
};


// Vuforia.VuPoseInfo
struct VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE 
{
public:
	// Vuforia.VuObservationPoseStatus Vuforia.VuPoseInfo::poseStatus
	int32_t ___poseStatus_0;
	// Vuforia.VuMatrix44F Vuforia.VuPoseInfo::pose
	VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  ___pose_1;

public:
	inline static int32_t get_offset_of_poseStatus_0() { return static_cast<int32_t>(offsetof(VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE, ___poseStatus_0)); }
	inline int32_t get_poseStatus_0() const { return ___poseStatus_0; }
	inline int32_t* get_address_of_poseStatus_0() { return &___poseStatus_0; }
	inline void set_poseStatus_0(int32_t value)
	{
		___poseStatus_0 = value;
	}

	inline static int32_t get_offset_of_pose_1() { return static_cast<int32_t>(offsetof(VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE, ___pose_1)); }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  get_pose_1() const { return ___pose_1; }
	inline VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8 * get_address_of_pose_1() { return &___pose_1; }
	inline void set_pose_1(VuMatrix44F_tC4B0FE94CD94ED505209404B4763F40525397BD8  value)
	{
		___pose_1 = value;
	}
};


// Vuforia.PosixPath/InvalidPathException
struct InvalidPathException_tF72EA733B957D516DCB49AE2D903B15B328D0FF2  : public Exception_t
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t94EC4C2F39D83FAB0C6BA91E4CFBA74E71AFE9F8  : public RuntimeObject
{
public:
	// Vuforia.Newtonsoft.Json.Utilities.MemberTypes Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass12_0::memberType
	int32_t ___memberType_0;

public:
	inline static int32_t get_offset_of_memberType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t94EC4C2F39D83FAB0C6BA91E4CFBA74E71AFE9F8, ___memberType_0)); }
	inline int32_t get_memberType_0() const { return ___memberType_0; }
	inline int32_t* get_address_of_memberType_0() { return &___memberType_0; }
	inline void set_memberType_0(int32_t value)
	{
		___memberType_0 = value;
	}
};


// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t9A60575263DAF1CB08CE1C6F2D14CEEBEF47159B  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass27_0::width
	int32_t ___width_0;
	// System.Int32 Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass27_0::height
	int32_t ___height_1;
	// Vuforia.PixelFormat Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass27_0::format
	int32_t ___format_2;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t9A60575263DAF1CB08CE1C6F2D14CEEBEF47159B, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t9A60575263DAF1CB08CE1C6F2D14CEEBEF47159B, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_format_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t9A60575263DAF1CB08CE1C6F2D14CEEBEF47159B, ___format_2)); }
	inline int32_t get_format_2() const { return ___format_2; }
	inline int32_t* get_address_of_format_2() { return &___format_2; }
	inline void set_format_2(int32_t value)
	{
		___format_2 = value;
	}
};


// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7  : public RuntimeObject
{
public:
	// Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0::<>4__this
	VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1 * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData> Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0::textures
	List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * ___textures_1;
	// System.Int32 Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0::imageWidth
	int32_t ___imageWidth_2;
	// System.Int32 Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0::imageHeight
	int32_t ___imageHeight_3;
	// Vuforia.PixelFormat Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0::nativePixelFormat
	int32_t ___nativePixelFormat_4;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7, ___U3CU3E4__this_0)); }
	inline VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_textures_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7, ___textures_1)); }
	inline List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * get_textures_1() const { return ___textures_1; }
	inline List_1_tE0D038D3B48FF84E86879A46038D07747742A26F ** get_address_of_textures_1() { return &___textures_1; }
	inline void set_textures_1(List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * value)
	{
		___textures_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textures_1), (void*)value);
	}

	inline static int32_t get_offset_of_imageWidth_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7, ___imageWidth_2)); }
	inline int32_t get_imageWidth_2() const { return ___imageWidth_2; }
	inline int32_t* get_address_of_imageWidth_2() { return &___imageWidth_2; }
	inline void set_imageWidth_2(int32_t value)
	{
		___imageWidth_2 = value;
	}

	inline static int32_t get_offset_of_imageHeight_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7, ___imageHeight_3)); }
	inline int32_t get_imageHeight_3() const { return ___imageHeight_3; }
	inline int32_t* get_address_of_imageHeight_3() { return &___imageHeight_3; }
	inline void set_imageHeight_3(int32_t value)
	{
		___imageHeight_3 = value;
	}

	inline static int32_t get_offset_of_nativePixelFormat_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7, ___nativePixelFormat_4)); }
	inline int32_t get_nativePixelFormat_4() const { return ___nativePixelFormat_4; }
	inline int32_t* get_address_of_nativePixelFormat_4() { return &___nativePixelFormat_4; }
	inline void set_nativePixelFormat_4(int32_t value)
	{
		___nativePixelFormat_4 = value;
	}
};


// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::autoStartTracker
	bool ___autoStartTracker_1;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration/ARCoreRequirement Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::arcoreRequirement
	int32_t ___arcoreRequirement_2;
	// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::autoImportArcore
	bool ___autoImportArcore_3;
	// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::thirdPartyARCoreClientDetected
	bool ___thirdPartyARCoreClientDetected_4;
	// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::<UseThirdPartySeethroughEyewear>k__BackingField
	bool ___U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_autoStartTracker_1() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6, ___autoStartTracker_1)); }
	inline bool get_autoStartTracker_1() const { return ___autoStartTracker_1; }
	inline bool* get_address_of_autoStartTracker_1() { return &___autoStartTracker_1; }
	inline void set_autoStartTracker_1(bool value)
	{
		___autoStartTracker_1 = value;
	}

	inline static int32_t get_offset_of_arcoreRequirement_2() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6, ___arcoreRequirement_2)); }
	inline int32_t get_arcoreRequirement_2() const { return ___arcoreRequirement_2; }
	inline int32_t* get_address_of_arcoreRequirement_2() { return &___arcoreRequirement_2; }
	inline void set_arcoreRequirement_2(int32_t value)
	{
		___arcoreRequirement_2 = value;
	}

	inline static int32_t get_offset_of_autoImportArcore_3() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6, ___autoImportArcore_3)); }
	inline bool get_autoImportArcore_3() const { return ___autoImportArcore_3; }
	inline bool* get_address_of_autoImportArcore_3() { return &___autoImportArcore_3; }
	inline void set_autoImportArcore_3(bool value)
	{
		___autoImportArcore_3 = value;
	}

	inline static int32_t get_offset_of_thirdPartyARCoreClientDetected_4() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6, ___thirdPartyARCoreClientDetected_4)); }
	inline bool get_thirdPartyARCoreClientDetected_4() const { return ___thirdPartyARCoreClientDetected_4; }
	inline bool* get_address_of_thirdPartyARCoreClientDetected_4() { return &___thirdPartyARCoreClientDetected_4; }
	inline void set_thirdPartyARCoreClientDetected_4(bool value)
	{
		___thirdPartyARCoreClientDetected_4 = value;
	}

	inline static int32_t get_offset_of_U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6, ___U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5)); }
	inline bool get_U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5() const { return ___U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5() { return &___U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5; }
	inline void set_U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5(bool value)
	{
		___U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5 = value;
	}
};


// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_3;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_4;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_5;
	// Vuforia.FocusMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraFocusModeSetting
	int32_t ___cameraFocusModeSetting_6;
	// Vuforia.CameraMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_7;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_8;
	// System.Single Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::previousVirtualSceneScaleFactor
	float ___previousVirtualSceneScaleFactor_9;
	// System.Single Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::virtualSceneScaleFactor
	float ___virtualSceneScaleFactor_10;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::modelTargetRecoWhileExtendedTracked
	bool ___modelTargetRecoWhileExtendedTracked_11;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::shareRecordingsInITunes
	bool ___shareRecordingsInITunes_12;
	// Vuforia.Internal.Utility.LogLevel Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::logLevel
	int32_t ___logLevel_13;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::version
	String_t* ___version_14;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::eulaAcceptedVersions
	String_t* ___eulaAcceptedVersions_15;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___vuforiaLicenseKey_3)); }
	inline String_t* get_vuforiaLicenseKey_3() const { return ___vuforiaLicenseKey_3; }
	inline String_t** get_address_of_vuforiaLicenseKey_3() { return &___vuforiaLicenseKey_3; }
	inline void set_vuforiaLicenseKey_3(String_t* value)
	{
		___vuforiaLicenseKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vuforiaLicenseKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___ufoLicenseKey_4)); }
	inline String_t* get_ufoLicenseKey_4() const { return ___ufoLicenseKey_4; }
	inline String_t** get_address_of_ufoLicenseKey_4() { return &___ufoLicenseKey_4; }
	inline void set_ufoLicenseKey_4(String_t* value)
	{
		___ufoLicenseKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ufoLicenseKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_delayedInitialization_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___delayedInitialization_5)); }
	inline bool get_delayedInitialization_5() const { return ___delayedInitialization_5; }
	inline bool* get_address_of_delayedInitialization_5() { return &___delayedInitialization_5; }
	inline void set_delayedInitialization_5(bool value)
	{
		___delayedInitialization_5 = value;
	}

	inline static int32_t get_offset_of_cameraFocusModeSetting_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___cameraFocusModeSetting_6)); }
	inline int32_t get_cameraFocusModeSetting_6() const { return ___cameraFocusModeSetting_6; }
	inline int32_t* get_address_of_cameraFocusModeSetting_6() { return &___cameraFocusModeSetting_6; }
	inline void set_cameraFocusModeSetting_6(int32_t value)
	{
		___cameraFocusModeSetting_6 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___cameraDeviceModeSetting_7)); }
	inline int32_t get_cameraDeviceModeSetting_7() const { return ___cameraDeviceModeSetting_7; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_7() { return &___cameraDeviceModeSetting_7; }
	inline void set_cameraDeviceModeSetting_7(int32_t value)
	{
		___cameraDeviceModeSetting_7 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___maxSimultaneousImageTargets_8)); }
	inline int32_t get_maxSimultaneousImageTargets_8() const { return ___maxSimultaneousImageTargets_8; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_8() { return &___maxSimultaneousImageTargets_8; }
	inline void set_maxSimultaneousImageTargets_8(int32_t value)
	{
		___maxSimultaneousImageTargets_8 = value;
	}

	inline static int32_t get_offset_of_previousVirtualSceneScaleFactor_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___previousVirtualSceneScaleFactor_9)); }
	inline float get_previousVirtualSceneScaleFactor_9() const { return ___previousVirtualSceneScaleFactor_9; }
	inline float* get_address_of_previousVirtualSceneScaleFactor_9() { return &___previousVirtualSceneScaleFactor_9; }
	inline void set_previousVirtualSceneScaleFactor_9(float value)
	{
		___previousVirtualSceneScaleFactor_9 = value;
	}

	inline static int32_t get_offset_of_virtualSceneScaleFactor_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___virtualSceneScaleFactor_10)); }
	inline float get_virtualSceneScaleFactor_10() const { return ___virtualSceneScaleFactor_10; }
	inline float* get_address_of_virtualSceneScaleFactor_10() { return &___virtualSceneScaleFactor_10; }
	inline void set_virtualSceneScaleFactor_10(float value)
	{
		___virtualSceneScaleFactor_10 = value;
	}

	inline static int32_t get_offset_of_modelTargetRecoWhileExtendedTracked_11() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___modelTargetRecoWhileExtendedTracked_11)); }
	inline bool get_modelTargetRecoWhileExtendedTracked_11() const { return ___modelTargetRecoWhileExtendedTracked_11; }
	inline bool* get_address_of_modelTargetRecoWhileExtendedTracked_11() { return &___modelTargetRecoWhileExtendedTracked_11; }
	inline void set_modelTargetRecoWhileExtendedTracked_11(bool value)
	{
		___modelTargetRecoWhileExtendedTracked_11 = value;
	}

	inline static int32_t get_offset_of_shareRecordingsInITunes_12() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___shareRecordingsInITunes_12)); }
	inline bool get_shareRecordingsInITunes_12() const { return ___shareRecordingsInITunes_12; }
	inline bool* get_address_of_shareRecordingsInITunes_12() { return &___shareRecordingsInITunes_12; }
	inline void set_shareRecordingsInITunes_12(bool value)
	{
		___shareRecordingsInITunes_12 = value;
	}

	inline static int32_t get_offset_of_logLevel_13() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___logLevel_13)); }
	inline int32_t get_logLevel_13() const { return ___logLevel_13; }
	inline int32_t* get_address_of_logLevel_13() { return &___logLevel_13; }
	inline void set_logLevel_13(int32_t value)
	{
		___logLevel_13 = value;
	}

	inline static int32_t get_offset_of_version_14() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___version_14)); }
	inline String_t* get_version_14() const { return ___version_14; }
	inline String_t** get_address_of_version_14() { return &___version_14; }
	inline void set_version_14(String_t* value)
	{
		___version_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_14), (void*)value);
	}

	inline static int32_t get_offset_of_eulaAcceptedVersions_15() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B, ___eulaAcceptedVersions_15)); }
	inline String_t* get_eulaAcceptedVersions_15() const { return ___eulaAcceptedVersions_15; }
	inline String_t** get_address_of_eulaAcceptedVersions_15() { return &___eulaAcceptedVersions_15; }
	inline void set_eulaAcceptedVersions_15(String_t* value)
	{
		___eulaAcceptedVersions_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eulaAcceptedVersions_15), (void*)value);
	}
};

struct GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields
{
public:
	// System.Action`2<System.Single,System.Single> Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::VirtualSceneScaleFactorUpdated
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___VirtualSceneScaleFactorUpdated_2;

public:
	inline static int32_t get_offset_of_VirtualSceneScaleFactorUpdated_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields, ___VirtualSceneScaleFactorUpdated_2)); }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * get_VirtualSceneScaleFactorUpdated_2() const { return ___VirtualSceneScaleFactorUpdated_2; }
	inline Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 ** get_address_of_VirtualSceneScaleFactorUpdated_2() { return &___VirtualSceneScaleFactorUpdated_2; }
	inline void set_VirtualSceneScaleFactorUpdated_2(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * value)
	{
		___VirtualSceneScaleFactorUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VirtualSceneScaleFactorUpdated_2), (void*)value);
	}
};


// Vuforia.VuforiaConfiguration/PlayModeConfiguration
struct PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/PlayModeConfiguration::mSequencePath
	String_t* ___mSequencePath_0;
	// Vuforia.PlayModeType Vuforia.VuforiaConfiguration/PlayModeConfiguration::playModeType
	int32_t ___playModeType_1;

public:
	inline static int32_t get_offset_of_mSequencePath_0() { return static_cast<int32_t>(offsetof(PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF, ___mSequencePath_0)); }
	inline String_t* get_mSequencePath_0() const { return ___mSequencePath_0; }
	inline String_t** get_address_of_mSequencePath_0() { return &___mSequencePath_0; }
	inline void set_mSequencePath_0(String_t* value)
	{
		___mSequencePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mSequencePath_0), (void*)value);
	}

	inline static int32_t get_offset_of_playModeType_1() { return static_cast<int32_t>(offsetof(PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF, ___playModeType_1)); }
	inline int32_t get_playModeType_1() const { return ___playModeType_1; }
	inline int32_t* get_address_of_playModeType_1() { return &___playModeType_1; }
	inline void set_playModeType_1(int32_t value)
	{
		___playModeType_1 = value;
	}
};


// Vuforia.VuforiaRuntimeUtilities/GlobalVars
struct GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6  : public RuntimeObject
{
public:

public:
};

struct GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields
{
public:
	// System.String Vuforia.VuforiaRuntimeUtilities/GlobalVars::GLTF_ASSET_LOCATION
	String_t* ___GLTF_ASSET_LOCATION_12;
	// System.String Vuforia.VuforiaRuntimeUtilities/GlobalVars::MODEL_TARGET_DEVICE_TRACKER_WARNING
	String_t* ___MODEL_TARGET_DEVICE_TRACKER_WARNING_38;
	// System.String Vuforia.VuforiaRuntimeUtilities/GlobalVars::GROUND_PLANE_DEVICE_TRACKER_ERROR
	String_t* ___GROUND_PLANE_DEVICE_TRACKER_ERROR_39;
	// System.String Vuforia.VuforiaRuntimeUtilities/GlobalVars::GROUND_PLANE_SMART_TERRAIN_ERROR
	String_t* ___GROUND_PLANE_SMART_TERRAIN_ERROR_40;

public:
	inline static int32_t get_offset_of_GLTF_ASSET_LOCATION_12() { return static_cast<int32_t>(offsetof(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields, ___GLTF_ASSET_LOCATION_12)); }
	inline String_t* get_GLTF_ASSET_LOCATION_12() const { return ___GLTF_ASSET_LOCATION_12; }
	inline String_t** get_address_of_GLTF_ASSET_LOCATION_12() { return &___GLTF_ASSET_LOCATION_12; }
	inline void set_GLTF_ASSET_LOCATION_12(String_t* value)
	{
		___GLTF_ASSET_LOCATION_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GLTF_ASSET_LOCATION_12), (void*)value);
	}

	inline static int32_t get_offset_of_MODEL_TARGET_DEVICE_TRACKER_WARNING_38() { return static_cast<int32_t>(offsetof(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields, ___MODEL_TARGET_DEVICE_TRACKER_WARNING_38)); }
	inline String_t* get_MODEL_TARGET_DEVICE_TRACKER_WARNING_38() const { return ___MODEL_TARGET_DEVICE_TRACKER_WARNING_38; }
	inline String_t** get_address_of_MODEL_TARGET_DEVICE_TRACKER_WARNING_38() { return &___MODEL_TARGET_DEVICE_TRACKER_WARNING_38; }
	inline void set_MODEL_TARGET_DEVICE_TRACKER_WARNING_38(String_t* value)
	{
		___MODEL_TARGET_DEVICE_TRACKER_WARNING_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MODEL_TARGET_DEVICE_TRACKER_WARNING_38), (void*)value);
	}

	inline static int32_t get_offset_of_GROUND_PLANE_DEVICE_TRACKER_ERROR_39() { return static_cast<int32_t>(offsetof(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields, ___GROUND_PLANE_DEVICE_TRACKER_ERROR_39)); }
	inline String_t* get_GROUND_PLANE_DEVICE_TRACKER_ERROR_39() const { return ___GROUND_PLANE_DEVICE_TRACKER_ERROR_39; }
	inline String_t** get_address_of_GROUND_PLANE_DEVICE_TRACKER_ERROR_39() { return &___GROUND_PLANE_DEVICE_TRACKER_ERROR_39; }
	inline void set_GROUND_PLANE_DEVICE_TRACKER_ERROR_39(String_t* value)
	{
		___GROUND_PLANE_DEVICE_TRACKER_ERROR_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GROUND_PLANE_DEVICE_TRACKER_ERROR_39), (void*)value);
	}

	inline static int32_t get_offset_of_GROUND_PLANE_SMART_TERRAIN_ERROR_40() { return static_cast<int32_t>(offsetof(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields, ___GROUND_PLANE_SMART_TERRAIN_ERROR_40)); }
	inline String_t* get_GROUND_PLANE_SMART_TERRAIN_ERROR_40() const { return ___GROUND_PLANE_SMART_TERRAIN_ERROR_40; }
	inline String_t** get_address_of_GROUND_PLANE_SMART_TERRAIN_ERROR_40() { return &___GROUND_PLANE_SMART_TERRAIN_ERROR_40; }
	inline void set_GROUND_PLANE_SMART_TERRAIN_ERROR_40(String_t* value)
	{
		___GROUND_PLANE_SMART_TERRAIN_ERROR_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GROUND_PLANE_SMART_TERRAIN_ERROR_40), (void*)value);
	}
};


// Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 
{
public:
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile/ProfileCollection::DefaultProfile
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData> Vuforia.WebCamProfile/ProfileCollection::Profiles
	Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3, ___DefaultProfile_0)); }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3, ___Profiles_1)); }
	inline Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Profiles_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_pinvoke
{
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___DefaultProfile_0;
	Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_com
{
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___DefaultProfile_0;
	Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___Profiles_1;
};

// Vuforia.CameraDevice/AndroidDevice/CameraField
struct CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736 
{
public:
	// Vuforia.CameraDevice/AndroidDevice/CameraField/DataType Vuforia.CameraDevice/AndroidDevice/CameraField::Type
	int32_t ___Type_0;
	// System.String Vuforia.CameraDevice/AndroidDevice/CameraField::Key
	String_t* ___Key_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736, ___Key_1)); }
	inline String_t* get_Key_1() const { return ___Key_1; }
	inline String_t** get_address_of_Key_1() { return &___Key_1; }
	inline void set_Key_1(String_t* value)
	{
		___Key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/AndroidDevice/CameraField
struct CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Key_1;
};
// Native definition for COM marshalling of Vuforia.CameraDevice/AndroidDevice/CameraField
struct CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Key_1;
};

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>
struct Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Single,System.Single>
struct Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Vuforia.WebCam
struct WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E  : public RuntimeObject
{
public:
	// Vuforia.IWebCamTexAdaptor Vuforia.WebCam::mWebCamTexture
	RuntimeObject* ___mWebCamTexture_0;
	// Vuforia.Internal.Utility.VuforiaCoroutineUtility Vuforia.WebCam::mVuforiaCoroutineUtility
	VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * ___mVuforiaCoroutineUtility_1;
	// Vuforia.Internal.Core.IEngine Vuforia.WebCam::mEngine
	RuntimeObject* ___mEngine_2;
	// System.Int32 Vuforia.WebCam::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_3;
	// UnityEngine.Camera Vuforia.WebCam::mARCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mARCamera_4;
	// System.Int32 Vuforia.WebCam::mOriginalCameraCullMask
	int32_t ___mOriginalCameraCullMask_5;
	// Vuforia.Internal.Rendering.TextureRenderer Vuforia.WebCam::mTextureRenderer
	TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * ___mTextureRenderer_6;
	// UnityEngine.Texture2D Vuforia.WebCam::mBufferReadTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___mBufferReadTexture_7;
	// UnityEngine.Rect Vuforia.WebCam::mReadPixelsRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mReadPixelsRect_8;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCam::mWebCamProfile
	ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___mWebCamProfile_9;
	// System.Boolean Vuforia.WebCam::mWebCamPlaying
	bool ___mWebCamPlaying_10;
	// Vuforia.Internal.VuforiaDriver.CameraImage Vuforia.WebCam::mCameraImage
	CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  ___mCameraImage_11;
	// System.IntPtr Vuforia.WebCam::mCameraImagePtr
	intptr_t ___mCameraImagePtr_12;
	// System.Boolean Vuforia.WebCam::mDisposed
	bool ___mDisposed_13;
	// System.Func`1<System.Boolean> Vuforia.WebCam::mOnCameraReady
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___mOnCameraReady_14;

public:
	inline static int32_t get_offset_of_mWebCamTexture_0() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamTexture_0)); }
	inline RuntimeObject* get_mWebCamTexture_0() const { return ___mWebCamTexture_0; }
	inline RuntimeObject** get_address_of_mWebCamTexture_0() { return &___mWebCamTexture_0; }
	inline void set_mWebCamTexture_0(RuntimeObject* value)
	{
		___mWebCamTexture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mWebCamTexture_0), (void*)value);
	}

	inline static int32_t get_offset_of_mVuforiaCoroutineUtility_1() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mVuforiaCoroutineUtility_1)); }
	inline VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * get_mVuforiaCoroutineUtility_1() const { return ___mVuforiaCoroutineUtility_1; }
	inline VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 ** get_address_of_mVuforiaCoroutineUtility_1() { return &___mVuforiaCoroutineUtility_1; }
	inline void set_mVuforiaCoroutineUtility_1(VuforiaCoroutineUtility_tA0B45C2C5F5B620E0F992D8DAE8D2D95773D0544 * value)
	{
		___mVuforiaCoroutineUtility_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuforiaCoroutineUtility_1), (void*)value);
	}

	inline static int32_t get_offset_of_mEngine_2() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mEngine_2)); }
	inline RuntimeObject* get_mEngine_2() const { return ___mEngine_2; }
	inline RuntimeObject** get_address_of_mEngine_2() { return &___mEngine_2; }
	inline void set_mEngine_2(RuntimeObject* value)
	{
		___mEngine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mEngine_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRenderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mRenderTextureLayer_3)); }
	inline int32_t get_mRenderTextureLayer_3() const { return ___mRenderTextureLayer_3; }
	inline int32_t* get_address_of_mRenderTextureLayer_3() { return &___mRenderTextureLayer_3; }
	inline void set_mRenderTextureLayer_3(int32_t value)
	{
		___mRenderTextureLayer_3 = value;
	}

	inline static int32_t get_offset_of_mARCamera_4() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mARCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mARCamera_4() const { return ___mARCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mARCamera_4() { return &___mARCamera_4; }
	inline void set_mARCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mARCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mARCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_mOriginalCameraCullMask_5() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mOriginalCameraCullMask_5)); }
	inline int32_t get_mOriginalCameraCullMask_5() const { return ___mOriginalCameraCullMask_5; }
	inline int32_t* get_address_of_mOriginalCameraCullMask_5() { return &___mOriginalCameraCullMask_5; }
	inline void set_mOriginalCameraCullMask_5(int32_t value)
	{
		___mOriginalCameraCullMask_5 = value;
	}

	inline static int32_t get_offset_of_mTextureRenderer_6() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mTextureRenderer_6)); }
	inline TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * get_mTextureRenderer_6() const { return ___mTextureRenderer_6; }
	inline TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 ** get_address_of_mTextureRenderer_6() { return &___mTextureRenderer_6; }
	inline void set_mTextureRenderer_6(TextureRenderer_tEE43C59D883691BA2AD269A2736C099ED4827CD6 * value)
	{
		___mTextureRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTextureRenderer_6), (void*)value);
	}

	inline static int32_t get_offset_of_mBufferReadTexture_7() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mBufferReadTexture_7)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_mBufferReadTexture_7() const { return ___mBufferReadTexture_7; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_mBufferReadTexture_7() { return &___mBufferReadTexture_7; }
	inline void set_mBufferReadTexture_7(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___mBufferReadTexture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBufferReadTexture_7), (void*)value);
	}

	inline static int32_t get_offset_of_mReadPixelsRect_8() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mReadPixelsRect_8)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mReadPixelsRect_8() const { return ___mReadPixelsRect_8; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mReadPixelsRect_8() { return &___mReadPixelsRect_8; }
	inline void set_mReadPixelsRect_8(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mReadPixelsRect_8 = value;
	}

	inline static int32_t get_offset_of_mWebCamProfile_9() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamProfile_9)); }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  get_mWebCamProfile_9() const { return ___mWebCamProfile_9; }
	inline ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE * get_address_of_mWebCamProfile_9() { return &___mWebCamProfile_9; }
	inline void set_mWebCamProfile_9(ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  value)
	{
		___mWebCamProfile_9 = value;
	}

	inline static int32_t get_offset_of_mWebCamPlaying_10() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mWebCamPlaying_10)); }
	inline bool get_mWebCamPlaying_10() const { return ___mWebCamPlaying_10; }
	inline bool* get_address_of_mWebCamPlaying_10() { return &___mWebCamPlaying_10; }
	inline void set_mWebCamPlaying_10(bool value)
	{
		___mWebCamPlaying_10 = value;
	}

	inline static int32_t get_offset_of_mCameraImage_11() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mCameraImage_11)); }
	inline CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  get_mCameraImage_11() const { return ___mCameraImage_11; }
	inline CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C * get_address_of_mCameraImage_11() { return &___mCameraImage_11; }
	inline void set_mCameraImage_11(CameraImage_t0242E27C02F07CF81E8EA9BBD63508BD11E5249C  value)
	{
		___mCameraImage_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___mCameraImage_11))->___Intrinsics_9))->___DistortionCoefficients_4), (void*)NULL);
	}

	inline static int32_t get_offset_of_mCameraImagePtr_12() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mCameraImagePtr_12)); }
	inline intptr_t get_mCameraImagePtr_12() const { return ___mCameraImagePtr_12; }
	inline intptr_t* get_address_of_mCameraImagePtr_12() { return &___mCameraImagePtr_12; }
	inline void set_mCameraImagePtr_12(intptr_t value)
	{
		___mCameraImagePtr_12 = value;
	}

	inline static int32_t get_offset_of_mDisposed_13() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mDisposed_13)); }
	inline bool get_mDisposed_13() const { return ___mDisposed_13; }
	inline bool* get_address_of_mDisposed_13() { return &___mDisposed_13; }
	inline void set_mDisposed_13(bool value)
	{
		___mDisposed_13 = value;
	}

	inline static int32_t get_offset_of_mOnCameraReady_14() { return static_cast<int32_t>(offsetof(WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E, ___mOnCameraReady_14)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_mOnCameraReady_14() const { return ___mOnCameraReady_14; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_mOnCameraReady_14() { return &___mOnCameraReady_14; }
	inline void set_mOnCameraReady_14(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___mOnCameraReady_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnCameraReady_14), (void*)value);
	}
};


// Vuforia.Voxel/MeshBuildCallback
struct MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Vuforia.Voxel
struct Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Vuforia.Voxel::Depth
	int32_t ___Depth_4;
	// Vuforia.PCTile Vuforia.Voxel::Tile
	PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC * ___Tile_5;
	// UnityEngine.Collider Vuforia.Voxel::mCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___mCollider_6;
	// UnityEngine.MeshFilter Vuforia.Voxel::mMeshFilter
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___mMeshFilter_7;
	// Vuforia.VoxelTree Vuforia.Voxel::mTreeBehaviour
	VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * ___mTreeBehaviour_8;
	// UnityEngine.MeshRenderer Vuforia.Voxel::mMeshRenderer
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___mMeshRenderer_9;
	// System.Boolean Vuforia.Voxel::mMeshRendererCanBeVisible
	bool ___mMeshRendererCanBeVisible_10;
	// UnityEngine.Mesh Vuforia.Voxel::mContentMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mContentMesh_11;
	// UnityEngine.Bounds Vuforia.Voxel::mVoxelBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___mVoxelBounds_12;
	// Vuforia.FileIOTask Vuforia.Voxel::mLoadingTask
	FileIOTask_t541B797A9D8CF19D7FD883F170A4A2E26A4D78B8 * ___mLoadingTask_13;
	// UnityEngine.Coroutine Vuforia.Voxel::mMeshConstruction
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___mMeshConstruction_14;
	// Vuforia.MeshConstructionRequest Vuforia.Voxel::mRequest
	MeshConstructionRequest_t58B5423197D1673D352D52ED996EC5FFC270430D * ___mRequest_15;
	// Vuforia.MeshState Vuforia.Voxel::mCurrentState
	int32_t ___mCurrentState_16;
	// System.Action Vuforia.Voxel::mOnLoadingDone
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___mOnLoadingDone_17;

public:
	inline static int32_t get_offset_of_Depth_4() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___Depth_4)); }
	inline int32_t get_Depth_4() const { return ___Depth_4; }
	inline int32_t* get_address_of_Depth_4() { return &___Depth_4; }
	inline void set_Depth_4(int32_t value)
	{
		___Depth_4 = value;
	}

	inline static int32_t get_offset_of_Tile_5() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___Tile_5)); }
	inline PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC * get_Tile_5() const { return ___Tile_5; }
	inline PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC ** get_address_of_Tile_5() { return &___Tile_5; }
	inline void set_Tile_5(PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC * value)
	{
		___Tile_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tile_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCollider_6() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mCollider_6)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_mCollider_6() const { return ___mCollider_6; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_mCollider_6() { return &___mCollider_6; }
	inline void set_mCollider_6(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___mCollider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCollider_6), (void*)value);
	}

	inline static int32_t get_offset_of_mMeshFilter_7() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mMeshFilter_7)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_mMeshFilter_7() const { return ___mMeshFilter_7; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_mMeshFilter_7() { return &___mMeshFilter_7; }
	inline void set_mMeshFilter_7(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___mMeshFilter_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMeshFilter_7), (void*)value);
	}

	inline static int32_t get_offset_of_mTreeBehaviour_8() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mTreeBehaviour_8)); }
	inline VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * get_mTreeBehaviour_8() const { return ___mTreeBehaviour_8; }
	inline VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 ** get_address_of_mTreeBehaviour_8() { return &___mTreeBehaviour_8; }
	inline void set_mTreeBehaviour_8(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * value)
	{
		___mTreeBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTreeBehaviour_8), (void*)value);
	}

	inline static int32_t get_offset_of_mMeshRenderer_9() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mMeshRenderer_9)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_mMeshRenderer_9() const { return ___mMeshRenderer_9; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_mMeshRenderer_9() { return &___mMeshRenderer_9; }
	inline void set_mMeshRenderer_9(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___mMeshRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMeshRenderer_9), (void*)value);
	}

	inline static int32_t get_offset_of_mMeshRendererCanBeVisible_10() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mMeshRendererCanBeVisible_10)); }
	inline bool get_mMeshRendererCanBeVisible_10() const { return ___mMeshRendererCanBeVisible_10; }
	inline bool* get_address_of_mMeshRendererCanBeVisible_10() { return &___mMeshRendererCanBeVisible_10; }
	inline void set_mMeshRendererCanBeVisible_10(bool value)
	{
		___mMeshRendererCanBeVisible_10 = value;
	}

	inline static int32_t get_offset_of_mContentMesh_11() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mContentMesh_11)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mContentMesh_11() const { return ___mContentMesh_11; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mContentMesh_11() { return &___mContentMesh_11; }
	inline void set_mContentMesh_11(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mContentMesh_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mContentMesh_11), (void*)value);
	}

	inline static int32_t get_offset_of_mVoxelBounds_12() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mVoxelBounds_12)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_mVoxelBounds_12() const { return ___mVoxelBounds_12; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_mVoxelBounds_12() { return &___mVoxelBounds_12; }
	inline void set_mVoxelBounds_12(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___mVoxelBounds_12 = value;
	}

	inline static int32_t get_offset_of_mLoadingTask_13() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mLoadingTask_13)); }
	inline FileIOTask_t541B797A9D8CF19D7FD883F170A4A2E26A4D78B8 * get_mLoadingTask_13() const { return ___mLoadingTask_13; }
	inline FileIOTask_t541B797A9D8CF19D7FD883F170A4A2E26A4D78B8 ** get_address_of_mLoadingTask_13() { return &___mLoadingTask_13; }
	inline void set_mLoadingTask_13(FileIOTask_t541B797A9D8CF19D7FD883F170A4A2E26A4D78B8 * value)
	{
		___mLoadingTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLoadingTask_13), (void*)value);
	}

	inline static int32_t get_offset_of_mMeshConstruction_14() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mMeshConstruction_14)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_mMeshConstruction_14() const { return ___mMeshConstruction_14; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_mMeshConstruction_14() { return &___mMeshConstruction_14; }
	inline void set_mMeshConstruction_14(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___mMeshConstruction_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMeshConstruction_14), (void*)value);
	}

	inline static int32_t get_offset_of_mRequest_15() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mRequest_15)); }
	inline MeshConstructionRequest_t58B5423197D1673D352D52ED996EC5FFC270430D * get_mRequest_15() const { return ___mRequest_15; }
	inline MeshConstructionRequest_t58B5423197D1673D352D52ED996EC5FFC270430D ** get_address_of_mRequest_15() { return &___mRequest_15; }
	inline void set_mRequest_15(MeshConstructionRequest_t58B5423197D1673D352D52ED996EC5FFC270430D * value)
	{
		___mRequest_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRequest_15), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentState_16() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mCurrentState_16)); }
	inline int32_t get_mCurrentState_16() const { return ___mCurrentState_16; }
	inline int32_t* get_address_of_mCurrentState_16() { return &___mCurrentState_16; }
	inline void set_mCurrentState_16(int32_t value)
	{
		___mCurrentState_16 = value;
	}

	inline static int32_t get_offset_of_mOnLoadingDone_17() { return static_cast<int32_t>(offsetof(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82, ___mOnLoadingDone_17)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_mOnLoadingDone_17() const { return ___mOnLoadingDone_17; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_mOnLoadingDone_17() { return &___mOnLoadingDone_17; }
	inline void set_mOnLoadingDone_17(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___mOnLoadingDone_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnLoadingDone_17), (void*)value);
	}
};


// Vuforia.VoxelTree
struct VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Material Vuforia.VoxelTree::ContentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___ContentMaterial_6;
	// System.Boolean Vuforia.VoxelTree::OcclusionIsOn
	bool ___OcclusionIsOn_7;
	// Vuforia.Voxel Vuforia.VoxelTree::RootVoxel
	Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * ___RootVoxel_8;
	// UnityEngine.GameObject Vuforia.VoxelTree::RootGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RootGameObject_9;
	// System.Boolean Vuforia.VoxelTree::mInitialized
	bool ___mInitialized_10;
	// UnityEngine.Transform Vuforia.VoxelTree::mRootTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mRootTransform_11;
	// UnityEngine.Transform Vuforia.VoxelTree::mAreaTargetTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___mAreaTargetTransform_12;
	// UnityEngine.Camera Vuforia.VoxelTree::mActiveCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mActiveCamera_13;
	// UnityEngine.Coroutine Vuforia.VoxelTree::mRenderingCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___mRenderingCoroutine_14;
	// System.Single Vuforia.VoxelTree::mCurrentVirtualScale
	float ___mCurrentVirtualScale_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ContentTile> Vuforia.VoxelTree::mContentTiles
	Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4 * ___mContentTiles_16;
	// Vuforia.VoxelPool Vuforia.VoxelTree::mVoxelPool
	VoxelPool_tF723316FB7BFE70D19CAB71A02340EC0CE2D8936 * ___mVoxelPool_17;
	// System.Collections.Generic.List`1<Vuforia.MeshConstructionRequest> Vuforia.VoxelTree::mMeshBuildingRequests
	List_1_t2BA761FD43F8276EAF5E60158D1F43AF4AEBE490 * ___mMeshBuildingRequests_18;
	// UnityEngine.WaitForSeconds Vuforia.VoxelTree::mVoxelCheckWait
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___mVoxelCheckWait_19;
	// System.IntPtr Vuforia.VoxelTree::<zipHandle>k__BackingField
	intptr_t ___U3CzipHandleU3Ek__BackingField_25;
	// System.Int32 Vuforia.VoxelTree::<MaxDepth>k__BackingField
	int32_t ___U3CMaxDepthU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_ContentMaterial_6() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___ContentMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_ContentMaterial_6() const { return ___ContentMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_ContentMaterial_6() { return &___ContentMaterial_6; }
	inline void set_ContentMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___ContentMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContentMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_OcclusionIsOn_7() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___OcclusionIsOn_7)); }
	inline bool get_OcclusionIsOn_7() const { return ___OcclusionIsOn_7; }
	inline bool* get_address_of_OcclusionIsOn_7() { return &___OcclusionIsOn_7; }
	inline void set_OcclusionIsOn_7(bool value)
	{
		___OcclusionIsOn_7 = value;
	}

	inline static int32_t get_offset_of_RootVoxel_8() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___RootVoxel_8)); }
	inline Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * get_RootVoxel_8() const { return ___RootVoxel_8; }
	inline Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 ** get_address_of_RootVoxel_8() { return &___RootVoxel_8; }
	inline void set_RootVoxel_8(Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * value)
	{
		___RootVoxel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RootVoxel_8), (void*)value);
	}

	inline static int32_t get_offset_of_RootGameObject_9() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___RootGameObject_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RootGameObject_9() const { return ___RootGameObject_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RootGameObject_9() { return &___RootGameObject_9; }
	inline void set_RootGameObject_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RootGameObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RootGameObject_9), (void*)value);
	}

	inline static int32_t get_offset_of_mInitialized_10() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mInitialized_10)); }
	inline bool get_mInitialized_10() const { return ___mInitialized_10; }
	inline bool* get_address_of_mInitialized_10() { return &___mInitialized_10; }
	inline void set_mInitialized_10(bool value)
	{
		___mInitialized_10 = value;
	}

	inline static int32_t get_offset_of_mRootTransform_11() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mRootTransform_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mRootTransform_11() const { return ___mRootTransform_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mRootTransform_11() { return &___mRootTransform_11; }
	inline void set_mRootTransform_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mRootTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRootTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_mAreaTargetTransform_12() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mAreaTargetTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_mAreaTargetTransform_12() const { return ___mAreaTargetTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_mAreaTargetTransform_12() { return &___mAreaTargetTransform_12; }
	inline void set_mAreaTargetTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___mAreaTargetTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAreaTargetTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveCamera_13() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mActiveCamera_13)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mActiveCamera_13() const { return ___mActiveCamera_13; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mActiveCamera_13() { return &___mActiveCamera_13; }
	inline void set_mActiveCamera_13(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mActiveCamera_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveCamera_13), (void*)value);
	}

	inline static int32_t get_offset_of_mRenderingCoroutine_14() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mRenderingCoroutine_14)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_mRenderingCoroutine_14() const { return ___mRenderingCoroutine_14; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_mRenderingCoroutine_14() { return &___mRenderingCoroutine_14; }
	inline void set_mRenderingCoroutine_14(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___mRenderingCoroutine_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRenderingCoroutine_14), (void*)value);
	}

	inline static int32_t get_offset_of_mCurrentVirtualScale_15() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mCurrentVirtualScale_15)); }
	inline float get_mCurrentVirtualScale_15() const { return ___mCurrentVirtualScale_15; }
	inline float* get_address_of_mCurrentVirtualScale_15() { return &___mCurrentVirtualScale_15; }
	inline void set_mCurrentVirtualScale_15(float value)
	{
		___mCurrentVirtualScale_15 = value;
	}

	inline static int32_t get_offset_of_mContentTiles_16() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mContentTiles_16)); }
	inline Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4 * get_mContentTiles_16() const { return ___mContentTiles_16; }
	inline Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4 ** get_address_of_mContentTiles_16() { return &___mContentTiles_16; }
	inline void set_mContentTiles_16(Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4 * value)
	{
		___mContentTiles_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mContentTiles_16), (void*)value);
	}

	inline static int32_t get_offset_of_mVoxelPool_17() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mVoxelPool_17)); }
	inline VoxelPool_tF723316FB7BFE70D19CAB71A02340EC0CE2D8936 * get_mVoxelPool_17() const { return ___mVoxelPool_17; }
	inline VoxelPool_tF723316FB7BFE70D19CAB71A02340EC0CE2D8936 ** get_address_of_mVoxelPool_17() { return &___mVoxelPool_17; }
	inline void set_mVoxelPool_17(VoxelPool_tF723316FB7BFE70D19CAB71A02340EC0CE2D8936 * value)
	{
		___mVoxelPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVoxelPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_mMeshBuildingRequests_18() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mMeshBuildingRequests_18)); }
	inline List_1_t2BA761FD43F8276EAF5E60158D1F43AF4AEBE490 * get_mMeshBuildingRequests_18() const { return ___mMeshBuildingRequests_18; }
	inline List_1_t2BA761FD43F8276EAF5E60158D1F43AF4AEBE490 ** get_address_of_mMeshBuildingRequests_18() { return &___mMeshBuildingRequests_18; }
	inline void set_mMeshBuildingRequests_18(List_1_t2BA761FD43F8276EAF5E60158D1F43AF4AEBE490 * value)
	{
		___mMeshBuildingRequests_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMeshBuildingRequests_18), (void*)value);
	}

	inline static int32_t get_offset_of_mVoxelCheckWait_19() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___mVoxelCheckWait_19)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_mVoxelCheckWait_19() const { return ___mVoxelCheckWait_19; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_mVoxelCheckWait_19() { return &___mVoxelCheckWait_19; }
	inline void set_mVoxelCheckWait_19(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___mVoxelCheckWait_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVoxelCheckWait_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CzipHandleU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___U3CzipHandleU3Ek__BackingField_25)); }
	inline intptr_t get_U3CzipHandleU3Ek__BackingField_25() const { return ___U3CzipHandleU3Ek__BackingField_25; }
	inline intptr_t* get_address_of_U3CzipHandleU3Ek__BackingField_25() { return &___U3CzipHandleU3Ek__BackingField_25; }
	inline void set_U3CzipHandleU3Ek__BackingField_25(intptr_t value)
	{
		___U3CzipHandleU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CMaxDepthU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751, ___U3CMaxDepthU3Ek__BackingField_26)); }
	inline int32_t get_U3CMaxDepthU3Ek__BackingField_26() const { return ___U3CMaxDepthU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3CMaxDepthU3Ek__BackingField_26() { return &___U3CMaxDepthU3Ek__BackingField_26; }
	inline void set_U3CMaxDepthU3Ek__BackingField_26(int32_t value)
	{
		___U3CMaxDepthU3Ek__BackingField_26 = value;
	}
};

struct VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751_StaticFields
{
public:
	// System.Int32 Vuforia.VoxelTree::RunningCoroutines
	int32_t ___RunningCoroutines_4;
	// System.Int32 Vuforia.VoxelTree::CoroutineLimit
	int32_t ___CoroutineLimit_5;

public:
	inline static int32_t get_offset_of_RunningCoroutines_4() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751_StaticFields, ___RunningCoroutines_4)); }
	inline int32_t get_RunningCoroutines_4() const { return ___RunningCoroutines_4; }
	inline int32_t* get_address_of_RunningCoroutines_4() { return &___RunningCoroutines_4; }
	inline void set_RunningCoroutines_4(int32_t value)
	{
		___RunningCoroutines_4 = value;
	}

	inline static int32_t get_offset_of_CoroutineLimit_5() { return static_cast<int32_t>(offsetof(VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751_StaticFields, ___CoroutineLimit_5)); }
	inline int32_t get_CoroutineLimit_5() const { return ___CoroutineLimit_5; }
	inline int32_t* get_address_of_CoroutineLimit_5() { return &___CoroutineLimit_5; }
	inline void set_CoroutineLimit_5(int32_t value)
	{
		___CoroutineLimit_5 = value;
	}
};


// Vuforia.VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Vuforia.ObserverBehaviour
struct ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274  : public VuforiaMonoBehaviour_t172ED03DD8996A3B90FCEDB8A62EB98DBDCB0932
{
public:
	// System.Boolean Vuforia.ObserverBehaviour::PreviewVisible
	bool ___PreviewVisible_4;
	// System.Boolean Vuforia.ObserverBehaviour::RuntimeOcclusion
	bool ___RuntimeOcclusion_5;
	// System.String Vuforia.ObserverBehaviour::mTrackableName
	String_t* ___mTrackableName_6;
	// System.Boolean Vuforia.ObserverBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// System.Action`2<Vuforia.ObserverBehaviour,Vuforia.TargetStatus> Vuforia.ObserverBehaviour::OnTargetStatusChanged
	Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * ___OnTargetStatusChanged_8;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.ObserverBehaviour::OnBehaviourDestroyed
	Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * ___OnBehaviourDestroyed_9;
	// Vuforia.Internal.Observers.IObserver Vuforia.ObserverBehaviour::mObserver
	RuntimeObject* ___mObserver_10;
	// Vuforia.TargetStatus Vuforia.ObserverBehaviour::<TargetStatus>k__BackingField
	TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ___U3CTargetStatusU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_PreviewVisible_4() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___PreviewVisible_4)); }
	inline bool get_PreviewVisible_4() const { return ___PreviewVisible_4; }
	inline bool* get_address_of_PreviewVisible_4() { return &___PreviewVisible_4; }
	inline void set_PreviewVisible_4(bool value)
	{
		___PreviewVisible_4 = value;
	}

	inline static int32_t get_offset_of_RuntimeOcclusion_5() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___RuntimeOcclusion_5)); }
	inline bool get_RuntimeOcclusion_5() const { return ___RuntimeOcclusion_5; }
	inline bool* get_address_of_RuntimeOcclusion_5() { return &___RuntimeOcclusion_5; }
	inline void set_RuntimeOcclusion_5(bool value)
	{
		___RuntimeOcclusion_5 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_6() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mTrackableName_6)); }
	inline String_t* get_mTrackableName_6() const { return ___mTrackableName_6; }
	inline String_t** get_address_of_mTrackableName_6() { return &___mTrackableName_6; }
	inline void set_mTrackableName_6(String_t* value)
	{
		___mTrackableName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableName_6), (void*)value);
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_OnTargetStatusChanged_8() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___OnTargetStatusChanged_8)); }
	inline Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * get_OnTargetStatusChanged_8() const { return ___OnTargetStatusChanged_8; }
	inline Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 ** get_address_of_OnTargetStatusChanged_8() { return &___OnTargetStatusChanged_8; }
	inline void set_OnTargetStatusChanged_8(Action_2_tBEC7B0597650F8D41DD8126DFAC07D2EA63976A4 * value)
	{
		___OnTargetStatusChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTargetStatusChanged_8), (void*)value);
	}

	inline static int32_t get_offset_of_OnBehaviourDestroyed_9() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___OnBehaviourDestroyed_9)); }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * get_OnBehaviourDestroyed_9() const { return ___OnBehaviourDestroyed_9; }
	inline Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 ** get_address_of_OnBehaviourDestroyed_9() { return &___OnBehaviourDestroyed_9; }
	inline void set_OnBehaviourDestroyed_9(Action_1_t221A5ED598F56CFD324E6E493CD7F6F9BCF68775 * value)
	{
		___OnBehaviourDestroyed_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBehaviourDestroyed_9), (void*)value);
	}

	inline static int32_t get_offset_of_mObserver_10() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___mObserver_10)); }
	inline RuntimeObject* get_mObserver_10() const { return ___mObserver_10; }
	inline RuntimeObject** get_address_of_mObserver_10() { return &___mObserver_10; }
	inline void set_mObserver_10(RuntimeObject* value)
	{
		___mObserver_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mObserver_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTargetStatusU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274, ___U3CTargetStatusU3Ek__BackingField_11)); }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  get_U3CTargetStatusU3Ek__BackingField_11() const { return ___U3CTargetStatusU3Ek__BackingField_11; }
	inline TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * get_address_of_U3CTargetStatusU3Ek__BackingField_11() { return &___U3CTargetStatusU3Ek__BackingField_11; }
	inline void set_U3CTargetStatusU3Ek__BackingField_11(TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  value)
	{
		___U3CTargetStatusU3Ek__BackingField_11 = value;
	}
};


// Vuforia.PointCloudBehaviour
struct PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0  : public VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751
{
public:
	// System.Collections.Generic.List`1<Vuforia.PointCloudMaterial> Vuforia.PointCloudBehaviour::mLevelMaterials
	List_1_tD89B43ADABB2D56ED4A6B721CB72880FC2770725 * ___mLevelMaterials_32;
	// System.Int32 Vuforia.PointCloudBehaviour::mMaxDepth
	int32_t ___mMaxDepth_33;
	// System.Single Vuforia.PointCloudBehaviour::mPointSize
	float ___mPointSize_34;
	// System.Single Vuforia.PointCloudBehaviour::mVirtualScaleFactor
	float ___mVirtualScaleFactor_35;

public:
	inline static int32_t get_offset_of_mLevelMaterials_32() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0, ___mLevelMaterials_32)); }
	inline List_1_tD89B43ADABB2D56ED4A6B721CB72880FC2770725 * get_mLevelMaterials_32() const { return ___mLevelMaterials_32; }
	inline List_1_tD89B43ADABB2D56ED4A6B721CB72880FC2770725 ** get_address_of_mLevelMaterials_32() { return &___mLevelMaterials_32; }
	inline void set_mLevelMaterials_32(List_1_tD89B43ADABB2D56ED4A6B721CB72880FC2770725 * value)
	{
		___mLevelMaterials_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLevelMaterials_32), (void*)value);
	}

	inline static int32_t get_offset_of_mMaxDepth_33() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0, ___mMaxDepth_33)); }
	inline int32_t get_mMaxDepth_33() const { return ___mMaxDepth_33; }
	inline int32_t* get_address_of_mMaxDepth_33() { return &___mMaxDepth_33; }
	inline void set_mMaxDepth_33(int32_t value)
	{
		___mMaxDepth_33 = value;
	}

	inline static int32_t get_offset_of_mPointSize_34() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0, ___mPointSize_34)); }
	inline float get_mPointSize_34() const { return ___mPointSize_34; }
	inline float* get_address_of_mPointSize_34() { return &___mPointSize_34; }
	inline void set_mPointSize_34(float value)
	{
		___mPointSize_34 = value;
	}

	inline static int32_t get_offset_of_mVirtualScaleFactor_35() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0, ___mVirtualScaleFactor_35)); }
	inline float get_mVirtualScaleFactor_35() const { return ___mVirtualScaleFactor_35; }
	inline float* get_address_of_mVirtualScaleFactor_35() { return &___mVirtualScaleFactor_35; }
	inline void set_mVirtualScaleFactor_35(float value)
	{
		___mVirtualScaleFactor_35 = value;
	}
};

struct PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0_StaticFields
{
public:
	// System.Int32 Vuforia.PointCloudBehaviour::MAX_HEIGHT_PROPERTY_ID
	int32_t ___MAX_HEIGHT_PROPERTY_ID_27;
	// System.Int32 Vuforia.PointCloudBehaviour::POINT_SIZE_PROPERTY_ID
	int32_t ___POINT_SIZE_PROPERTY_ID_28;
	// System.Int32 Vuforia.PointCloudBehaviour::USER_NORMALS_PROPERTY_ID
	int32_t ___USER_NORMALS_PROPERTY_ID_29;
	// System.Int32 Vuforia.PointCloudBehaviour::CENTER_PROPERTY_ID
	int32_t ___CENTER_PROPERTY_ID_30;
	// System.Int32 Vuforia.PointCloudBehaviour::AXISY_PROPERTY_ID
	int32_t ___AXISY_PROPERTY_ID_31;

public:
	inline static int32_t get_offset_of_MAX_HEIGHT_PROPERTY_ID_27() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0_StaticFields, ___MAX_HEIGHT_PROPERTY_ID_27)); }
	inline int32_t get_MAX_HEIGHT_PROPERTY_ID_27() const { return ___MAX_HEIGHT_PROPERTY_ID_27; }
	inline int32_t* get_address_of_MAX_HEIGHT_PROPERTY_ID_27() { return &___MAX_HEIGHT_PROPERTY_ID_27; }
	inline void set_MAX_HEIGHT_PROPERTY_ID_27(int32_t value)
	{
		___MAX_HEIGHT_PROPERTY_ID_27 = value;
	}

	inline static int32_t get_offset_of_POINT_SIZE_PROPERTY_ID_28() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0_StaticFields, ___POINT_SIZE_PROPERTY_ID_28)); }
	inline int32_t get_POINT_SIZE_PROPERTY_ID_28() const { return ___POINT_SIZE_PROPERTY_ID_28; }
	inline int32_t* get_address_of_POINT_SIZE_PROPERTY_ID_28() { return &___POINT_SIZE_PROPERTY_ID_28; }
	inline void set_POINT_SIZE_PROPERTY_ID_28(int32_t value)
	{
		___POINT_SIZE_PROPERTY_ID_28 = value;
	}

	inline static int32_t get_offset_of_USER_NORMALS_PROPERTY_ID_29() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0_StaticFields, ___USER_NORMALS_PROPERTY_ID_29)); }
	inline int32_t get_USER_NORMALS_PROPERTY_ID_29() const { return ___USER_NORMALS_PROPERTY_ID_29; }
	inline int32_t* get_address_of_USER_NORMALS_PROPERTY_ID_29() { return &___USER_NORMALS_PROPERTY_ID_29; }
	inline void set_USER_NORMALS_PROPERTY_ID_29(int32_t value)
	{
		___USER_NORMALS_PROPERTY_ID_29 = value;
	}

	inline static int32_t get_offset_of_CENTER_PROPERTY_ID_30() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0_StaticFields, ___CENTER_PROPERTY_ID_30)); }
	inline int32_t get_CENTER_PROPERTY_ID_30() const { return ___CENTER_PROPERTY_ID_30; }
	inline int32_t* get_address_of_CENTER_PROPERTY_ID_30() { return &___CENTER_PROPERTY_ID_30; }
	inline void set_CENTER_PROPERTY_ID_30(int32_t value)
	{
		___CENTER_PROPERTY_ID_30 = value;
	}

	inline static int32_t get_offset_of_AXISY_PROPERTY_ID_31() { return static_cast<int32_t>(offsetof(PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0_StaticFields, ___AXISY_PROPERTY_ID_31)); }
	inline int32_t get_AXISY_PROPERTY_ID_31() const { return ___AXISY_PROPERTY_ID_31; }
	inline int32_t* get_address_of_AXISY_PROPERTY_ID_31() { return &___AXISY_PROPERTY_ID_31; }
	inline void set_AXISY_PROPERTY_ID_31(int32_t value)
	{
		___AXISY_PROPERTY_ID_31 = value;
	}
};


// Vuforia.PointCloudVoxel
struct PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58  : public Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82
{
public:
	// Vuforia.ColoredPointCloudData Vuforia.PointCloudVoxel::mPointCache
	ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF  ___mPointCache_18;
	// System.Object Vuforia.PointCloudVoxel::mLoadingLock
	RuntimeObject * ___mLoadingLock_19;

public:
	inline static int32_t get_offset_of_mPointCache_18() { return static_cast<int32_t>(offsetof(PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58, ___mPointCache_18)); }
	inline ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF  get_mPointCache_18() const { return ___mPointCache_18; }
	inline ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * get_address_of_mPointCache_18() { return &___mPointCache_18; }
	inline void set_mPointCache_18(ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF  value)
	{
		___mPointCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mPointCache_18))->___PointPosition_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mPointCache_18))->___PointColor_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mPointCache_18))->___PointNormal_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mLoadingLock_19() { return static_cast<int32_t>(offsetof(PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58, ___mLoadingLock_19)); }
	inline RuntimeObject * get_mLoadingLock_19() const { return ___mLoadingLock_19; }
	inline RuntimeObject ** get_address_of_mLoadingLock_19() { return &___mLoadingLock_19; }
	inline void set_mLoadingLock_19(RuntimeObject * value)
	{
		___mLoadingLock_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLoadingLock_19), (void*)value);
	}
};


// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA  : public ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_13;

public:
	inline static int32_t get_offset_of_mDataSetPath_13() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA, ___mDataSetPath_13)); }
	inline String_t* get_mDataSetPath_13() const { return ___mDataSetPath_13; }
	inline String_t** get_address_of_mDataSetPath_13() { return &___mDataSetPath_13; }
	inline void set_mDataSetPath_13(String_t* value)
	{
		___mDataSetPath_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSetPath_13), (void*)value);
	}
};

struct DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA_StaticFields
{
public:
	// System.Single Vuforia.DataSetTrackableBehaviour::VirtualSceneScaleFactor
	float ___VirtualSceneScaleFactor_12;

public:
	inline static int32_t get_offset_of_VirtualSceneScaleFactor_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA_StaticFields, ___VirtualSceneScaleFactor_12)); }
	inline float get_VirtualSceneScaleFactor_12() const { return ___VirtualSceneScaleFactor_12; }
	inline float* get_address_of_VirtualSceneScaleFactor_12() { return &___VirtualSceneScaleFactor_12; }
	inline void set_VirtualSceneScaleFactor_12(float value)
	{
		___VirtualSceneScaleFactor_12 = value;
	}
};


// Vuforia.ScalableDataSetTrackableBehaviour
struct ScalableDataSetTrackableBehaviour_t4703A60B9EF85DCBEDB83ED8EE286EB319831E64  : public DataSetTrackableBehaviour_tDACD5B676DD2E9EE2943323AC60A131390E676BA
{
public:

public:
};


// Vuforia.VuMarkBehaviour
struct VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2  : public ScalableDataSetTrackableBehaviour_t4703A60B9EF85DCBEDB83ED8EE286EB319831E64
{
public:
	// Vuforia.DataSetTrackableBehaviour/TargetMotionHint Vuforia.VuMarkBehaviour::mMotionHint
	int32_t ___mMotionHint_14;
	// Vuforia.VuMarkInstanceId Vuforia.VuMarkBehaviour::<InstanceId>k__BackingField
	RuntimeObject* ___U3CInstanceIdU3Ek__BackingField_15;
	// Vuforia.Image Vuforia.VuMarkBehaviour::<InstanceImage>k__BackingField
	Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * ___U3CInstanceImageU3Ek__BackingField_16;
	// System.String Vuforia.VuMarkBehaviour::<VuMarkUserData>k__BackingField
	String_t* ___U3CVuMarkUserDataU3Ek__BackingField_17;
	// System.Single Vuforia.VuMarkBehaviour::mAspectRatio
	float ___mAspectRatio_18;
	// System.Single Vuforia.VuMarkBehaviour::mWidth
	float ___mWidth_19;
	// System.Single Vuforia.VuMarkBehaviour::mHeight
	float ___mHeight_20;
	// System.String Vuforia.VuMarkBehaviour::mPreviewImage
	String_t* ___mPreviewImage_21;
	// Vuforia.InstanceIdType Vuforia.VuMarkBehaviour::mIdType
	int32_t ___mIdType_22;
	// System.Int32 Vuforia.VuMarkBehaviour::mIdLength
	int32_t ___mIdLength_23;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mOrigin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mOrigin_24;
	// UnityEngine.Rect Vuforia.VuMarkBehaviour::mBoundingBox
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___mBoundingBox_25;
	// System.Boolean Vuforia.VuMarkBehaviour::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_26;
	// System.Nullable`1<System.Int32> Vuforia.VuMarkBehaviour::<RuntimeId>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3CRuntimeIdU3Ek__BackingField_27;
	// Vuforia.VuMarkInstancesManager Vuforia.VuMarkBehaviour::mInstancesManager
	VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F * ___mInstancesManager_28;
	// Vuforia.VuMarkPreview Vuforia.VuMarkBehaviour::mPreview
	VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2 * ___mPreview_29;
	// Vuforia.Internal.Observers.VuMarkObserver Vuforia.VuMarkBehaviour::mVuMarkObserver
	VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * ___mVuMarkObserver_30;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mLastSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mLastSize_31;

public:
	inline static int32_t get_offset_of_mMotionHint_14() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mMotionHint_14)); }
	inline int32_t get_mMotionHint_14() const { return ___mMotionHint_14; }
	inline int32_t* get_address_of_mMotionHint_14() { return &___mMotionHint_14; }
	inline void set_mMotionHint_14(int32_t value)
	{
		___mMotionHint_14 = value;
	}

	inline static int32_t get_offset_of_U3CInstanceIdU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___U3CInstanceIdU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CInstanceIdU3Ek__BackingField_15() const { return ___U3CInstanceIdU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CInstanceIdU3Ek__BackingField_15() { return &___U3CInstanceIdU3Ek__BackingField_15; }
	inline void set_U3CInstanceIdU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CInstanceIdU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceIdU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceImageU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___U3CInstanceImageU3Ek__BackingField_16)); }
	inline Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * get_U3CInstanceImageU3Ek__BackingField_16() const { return ___U3CInstanceImageU3Ek__BackingField_16; }
	inline Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 ** get_address_of_U3CInstanceImageU3Ek__BackingField_16() { return &___U3CInstanceImageU3Ek__BackingField_16; }
	inline void set_U3CInstanceImageU3Ek__BackingField_16(Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * value)
	{
		___U3CInstanceImageU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceImageU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVuMarkUserDataU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___U3CVuMarkUserDataU3Ek__BackingField_17)); }
	inline String_t* get_U3CVuMarkUserDataU3Ek__BackingField_17() const { return ___U3CVuMarkUserDataU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CVuMarkUserDataU3Ek__BackingField_17() { return &___U3CVuMarkUserDataU3Ek__BackingField_17; }
	inline void set_U3CVuMarkUserDataU3Ek__BackingField_17(String_t* value)
	{
		___U3CVuMarkUserDataU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVuMarkUserDataU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_mAspectRatio_18() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mAspectRatio_18)); }
	inline float get_mAspectRatio_18() const { return ___mAspectRatio_18; }
	inline float* get_address_of_mAspectRatio_18() { return &___mAspectRatio_18; }
	inline void set_mAspectRatio_18(float value)
	{
		___mAspectRatio_18 = value;
	}

	inline static int32_t get_offset_of_mWidth_19() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mWidth_19)); }
	inline float get_mWidth_19() const { return ___mWidth_19; }
	inline float* get_address_of_mWidth_19() { return &___mWidth_19; }
	inline void set_mWidth_19(float value)
	{
		___mWidth_19 = value;
	}

	inline static int32_t get_offset_of_mHeight_20() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mHeight_20)); }
	inline float get_mHeight_20() const { return ___mHeight_20; }
	inline float* get_address_of_mHeight_20() { return &___mHeight_20; }
	inline void set_mHeight_20(float value)
	{
		___mHeight_20 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_21() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mPreviewImage_21)); }
	inline String_t* get_mPreviewImage_21() const { return ___mPreviewImage_21; }
	inline String_t** get_address_of_mPreviewImage_21() { return &___mPreviewImage_21; }
	inline void set_mPreviewImage_21(String_t* value)
	{
		___mPreviewImage_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPreviewImage_21), (void*)value);
	}

	inline static int32_t get_offset_of_mIdType_22() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mIdType_22)); }
	inline int32_t get_mIdType_22() const { return ___mIdType_22; }
	inline int32_t* get_address_of_mIdType_22() { return &___mIdType_22; }
	inline void set_mIdType_22(int32_t value)
	{
		___mIdType_22 = value;
	}

	inline static int32_t get_offset_of_mIdLength_23() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mIdLength_23)); }
	inline int32_t get_mIdLength_23() const { return ___mIdLength_23; }
	inline int32_t* get_address_of_mIdLength_23() { return &___mIdLength_23; }
	inline void set_mIdLength_23(int32_t value)
	{
		___mIdLength_23 = value;
	}

	inline static int32_t get_offset_of_mOrigin_24() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mOrigin_24)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mOrigin_24() const { return ___mOrigin_24; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mOrigin_24() { return &___mOrigin_24; }
	inline void set_mOrigin_24(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mOrigin_24 = value;
	}

	inline static int32_t get_offset_of_mBoundingBox_25() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mBoundingBox_25)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_mBoundingBox_25() const { return ___mBoundingBox_25; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_mBoundingBox_25() { return &___mBoundingBox_25; }
	inline void set_mBoundingBox_25(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___mBoundingBox_25 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_26() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mTrackingFromRuntimeAppearance_26)); }
	inline bool get_mTrackingFromRuntimeAppearance_26() const { return ___mTrackingFromRuntimeAppearance_26; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_26() { return &___mTrackingFromRuntimeAppearance_26; }
	inline void set_mTrackingFromRuntimeAppearance_26(bool value)
	{
		___mTrackingFromRuntimeAppearance_26 = value;
	}

	inline static int32_t get_offset_of_U3CRuntimeIdU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___U3CRuntimeIdU3Ek__BackingField_27)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3CRuntimeIdU3Ek__BackingField_27() const { return ___U3CRuntimeIdU3Ek__BackingField_27; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3CRuntimeIdU3Ek__BackingField_27() { return &___U3CRuntimeIdU3Ek__BackingField_27; }
	inline void set_U3CRuntimeIdU3Ek__BackingField_27(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3CRuntimeIdU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_mInstancesManager_28() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mInstancesManager_28)); }
	inline VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F * get_mInstancesManager_28() const { return ___mInstancesManager_28; }
	inline VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F ** get_address_of_mInstancesManager_28() { return &___mInstancesManager_28; }
	inline void set_mInstancesManager_28(VuMarkInstancesManager_t901C2384A8FD62E9C62E6D18B8ED116FB9EFBC1F * value)
	{
		___mInstancesManager_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstancesManager_28), (void*)value);
	}

	inline static int32_t get_offset_of_mPreview_29() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mPreview_29)); }
	inline VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2 * get_mPreview_29() const { return ___mPreview_29; }
	inline VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2 ** get_address_of_mPreview_29() { return &___mPreview_29; }
	inline void set_mPreview_29(VuMarkPreview_t7745561F9348795064F637DD5D2E14D07F40E8E2 * value)
	{
		___mPreview_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPreview_29), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkObserver_30() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mVuMarkObserver_30)); }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * get_mVuMarkObserver_30() const { return ___mVuMarkObserver_30; }
	inline VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 ** get_address_of_mVuMarkObserver_30() { return &___mVuMarkObserver_30; }
	inline void set_mVuMarkObserver_30(VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * value)
	{
		___mVuMarkObserver_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkObserver_30), (void*)value);
	}

	inline static int32_t get_offset_of_mLastSize_31() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2, ___mLastSize_31)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mLastSize_31() const { return ___mLastSize_31; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mLastSize_31() { return &___mLastSize_31; }
	inline void set_mLastSize_31(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mLastSize_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Vuforia.Internal.Rendering.TextureDefinition[]
struct TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * m_Items[1];

public:
	inline TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Plane[]
struct PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  m_Items[1];

public:
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		m_Items[index] = value;
	}
};
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


// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method);
// TResult Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3_gshared (MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mE39A1C80BEC2977DFD0B52D5F615D9AA997A51D4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mF4194343755F31A6DED60B0D7440F095C4BD3203_gshared (UnityEvent_1_tE94A30F9AFE4AA4FC678798F316885AAF982CE71 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m8E2ACA5FA11A297206E69BAE2DC5F809D1161B4F_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisRuntimeObject_m9A9C2C960A18BA5F7E0052D765F735E9A8C907E2_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m9DD8647E4225278CC2A761B61E2242F872066918_gshared (Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>::ForEach(System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m8DD394273424AF26BE4A4516C68FC5993CB3051A_gshared (List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * __this, Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * ___action0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Single>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_gshared (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, float ___arg10, float ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Vuforia.PointCloudBehaviour::UpdateMaterial(UnityEngine.Material,System.Single,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointCloudBehaviour_UpdateMaterial_m52BA3638CE467354644473F8520B279B62ED1DF1 (PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, float ___height1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parentTransform2, const RuntimeMethod* method);
// System.Boolean Vuforia.ColoredPointCloudData::IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColoredPointCloudData_IsNull_mF4158E18F34FB3C361BD2C9145E3928226CB7A1E (ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_indexFormat(UnityEngine.Rendering.IndexFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void Vuforia.Voxel/MeshBuildCallback::Invoke(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuildCallback_Invoke_m83929F74F223F6BBC6E87CE50A01E2A4856ABC93 (MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Vuforia.PCShaderSupportUtil::IsGeometryShaderSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PCShaderSupportUtil_IsGeometryShaderSupported_m1216A7A2E00AC42EB5F271BA076492A4D75BEB53 (const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_colors32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_mCD0377083E978A3FF806CFCCD28410C042A77ECD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indices0, int32_t ___topology1, int32_t ___submesh2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_mED0ABE302F9BDD2BA845BDD96F0C2F8C5C616D48 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors_m676FFD24FC594C87CE6D23287C2FCBDA363E69B0 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Vuforia.PosixPath/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCC9BE344B32D3EE3BE981833AF83B922BDA26E1F (U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 * __this, const RuntimeMethod* method);
// System.String Vuforia.PosixPath::TrimLeadingSlashes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PosixPath_TrimLeadingSlashes_m60B2483D5E3CEF1A7AF9E84A87C8B2F59505F282 (String_t* ___subPath0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8415F679D6151AF615AD4BADA541EAC006A9D04C (U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * __this, const RuntimeMethod* method);
// System.String Vuforia.Newtonsoft.Json.Linq.JProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_m40C95EB5D7D490470847ADAB4993684AC0296991_inline (JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1 (const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_U3CU3Em__Finally2_mBB02FDCBD80B12A34E98A115C1594F37B4DE215C (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_U3CU3Em__Finally1_m70E92BC3313EABB86E62BB4B785B375458D70E50 (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method);
// Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryExpression Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter::get_Expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546 * QueryFilter_get_Expression_m950410238422D345581F41CFAF39A8A5DB0A5F1D_inline (QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_System_IDisposable_Dispose_m95F4ABCA187AA44F028C328A8D0F3211F8331B92 (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4__ctor_m080393D3ED5384B1F6280DEC81498D9042FDF859 (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::System.Collections.Generic.IEnumerable<Vuforia.Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__4_System_Collections_Generic_IEnumerableU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m6B6FD445B1FD7FC0447E6E3BBA48031DF3472ADE (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
inline RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726 (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline)(method);
}
// TResult Vuforia.Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
inline RuntimeObject * MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3 (MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3_gshared)(__this, ___target0, ___args1, method);
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5E4BF9B186671A0F19C489EB1AD74ABFE3B60581 (U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mA7E117696A43912E3C3DEDCA0C8CB114C1238271 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mE39A1C80BEC2977DFD0B52D5F615D9AA997A51D4_gshared)(___source0, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsVirtual_m2DEBBE62B4A3E7C1E8BD1277EDE437F2EDACFF28 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Reflection.MethodInfo Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetBaseDefinition_m63248A71D96BD531242D9C08301B84DB2377E5C7 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m36E5F5CEC053740C69E67E46BEDA47F9794BC94D (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_U3CU3Em__Finally1_m53856499DE5D1F70BAD63D2C1D704D0F5D561458 (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method);
// System.String Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ScanFilter_get_Name_mD4C72385C0062BCABC91AFA49A9A470A3DB07EB7_inline (ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * __this, const RuntimeMethod* method);
// Vuforia.Newtonsoft.Json.Linq.JContainer Vuforia.Newtonsoft.Json.Linq.JToken::get_Parent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * JToken_get_Parent_m0C47FA701ABB9BD601C13BBF3EA628AD5A0EF57C_inline (JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * __this, const RuntimeMethod* method);
// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * JToken_get_Next_m1414D8687D5F635F5FA98957C5EE7AD5B482858E_inline (JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * __this, const RuntimeMethod* method);
// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * JProperty_get_Value_mCBACF86FD0A5D3F43CAC597DBBB65816EE47062F (JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_System_IDisposable_Dispose_m1F3EC53088E6F3E4EA77C0F09042138C04E8142B (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4__ctor_mD450CCC6B0F45DD7DFAE19D905B15F40F3E8D7BB (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::System.Collections.Generic.IEnumerable<Vuforia.Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__4_System_Collections_Generic_IEnumerableU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mCFC8F01B7058DE4F453C27B57C5EE93887BE480E (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, const RuntimeMethod*))UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStartError>::.ctor()
inline void UnityEvent_1__ctor_m191D00CD72D1ABA62387061E4D74570C30FE8EBF (UnityEvent_1_t40BAB9C363ECB4269A7B1A42634A079A858AAE7B * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t40BAB9C363ECB4269A7B1A42634A079A858AAE7B *, const RuntimeMethod*))UnityEvent_1__ctor_mF4194343755F31A6DED60B0D7440F095C4BD3203_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStatusInfo>::.ctor()
inline void UnityEvent_1__ctor_m01F9F090C401594D981C95E4340A7838A8820DA8 (UnityEvent_1_t095141A97517292A02F2857E89C48496D207B4A2 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t095141A97517292A02F2857E89C48496D207B4A2 *, const RuntimeMethod*))UnityEvent_1__ctor_mF4194343755F31A6DED60B0D7440F095C4BD3203_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<Vuforia.RecordingStatus>::.ctor()
inline void UnityEvent_1__ctor_m302B658CB5BD327A6274EACB0FD334BBB8401648 (UnityEvent_1_t12854B51B9F904B8C9E6FE7E4E56585ACCAAC404 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t12854B51B9F904B8C9E6FE7E4E56585ACCAAC404 *, const RuntimeMethod*))UnityEvent_1__ctor_mF4194343755F31A6DED60B0D7440F095C4BD3203_gshared)(__this, method);
}
// System.Void Vuforia.Internal.Simulator.SimulatedObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3A0B742AC191763B3C625F483728DBFA4A21D086 (U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Core.StateProcessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB2945962C1C3AE2DFF7515D445AA163E1F85A115 (U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E * __this, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9293A37B7A84AAF72CE6D697796772120C8A1AF7 (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Rendering.TextureDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * __this, const RuntimeMethod* method);
// System.Void Vuforia.TileSetUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE42A54E8829AE4AA048615944B24D71CC3B94AA (U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD97617CE690207F65909EF20DB9EEA735C531030 (U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0 (Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Reflection.ParameterInfo,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_mF2CB9D79F1B0E63B8E2C540CEAC1BF23240D1669 (RuntimeObject* ___source0, Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m8E2ACA5FA11A297206E69BAE2DC5F809D1161B4F_gshared)(___source0, ___selector1, method);
}
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_SequenceEqual_TisType_t_m406A32FAC236C1B4B8A0E59BE30C932E829B175A (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_m9A9C2C960A18BA5F7E0052D765F735E9A8C907E2_gshared)(___first0, ___second1, method);
}
// Vuforia.Newtonsoft.Json.Utilities.MemberTypes Vuforia.Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_MemberType_m38785C3A1D076CD680CFC05D8D6A324FDCAA8BF9 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Void Vuforia.UnityVersionUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4C0CF894B69EDA34AD12A99AD794E38C999EEAD6 (U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 * __this, const RuntimeMethod* method);
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Version_op_GreaterThanOrEqual_m0C8A5AC72FD23D7DE3C3852C0B2259C8D546AFAE (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v10, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___v21, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Observers.ValidationAreaObserver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDF5A1E33164DDD40D97561ED7BC9B291B9F94C03 (U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VideoBackgroundConfigMigrator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10FEE19F37672B865B7678296AB127655AF8D335 (U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m867F2F12BA9928FDD4DB138C4322369495FEF259 (U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Int32 Vuforia.Image::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_Width_m183D5172A02BFED51ED219C18A82D4A69B692F6E (Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * __this, const RuntimeMethod* method);
// System.Int32 Vuforia.Image::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_Height_m434E6CBF861A627091493D1340926A2FBD1C4ACD (Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * __this, const RuntimeMethod* method);
// Vuforia.PixelFormat Vuforia.Image::get_PixelFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_PixelFormat_mBD7327BCED0C3027180A3492AD8D856DF5310B7C (Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater::UpdateTextures(System.Collections.Generic.IList`1<Vuforia.Image>,System.Collections.Generic.IList`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>,System.Int32,System.Int32,Vuforia.PixelFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundTextureUpdater_UpdateTextures_m1B00EF91F462B6FE25C9A234F28B4E0E508E8A3E (VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1 * __this, RuntimeObject* ___cameraImages0, RuntimeObject* ___textures1, int32_t ___width2, int32_t ___height3, int32_t ___format4, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DD8647E4225278CC2A761B61E2242F872066918 (Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m9DD8647E4225278CC2A761B61E2242F872066918_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData>::ForEach(System.Action`1<!0>)
inline void List_1_ForEach_m8DD394273424AF26BE4A4516C68FC5993CB3051A (List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * __this, Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE0D038D3B48FF84E86879A46038D07747742A26F *, Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 *, const RuntimeMethod*))List_1_ForEach_m8DD394273424AF26BE4A4516C68FC5993CB3051A_gshared)(__this, ___action0, method);
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData::.ctor(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureData__ctor_m5E6D94EEE81502CF641B18FFE13071F24825979C (TextureData_t844E802A25614A015B160F82144E2EE9E2C50367 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, int32_t ___bufferLength1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Vuforia.VoxelTree::CalculateFrustumPlanes(UnityEngine.Plane[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoxelTree_CalculateFrustumPlanes_m10A0556FD578C61177AC8DD48F3F33BF2923E1D7 (VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * __this, PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* ___frustumPlanes0, const RuntimeMethod* method);
// System.Void Vuforia.VoxelTree::RemoveNonVisibleVoxels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoxelTree_RemoveNonVisibleVoxels_m0C3CD71B78A978F5EDD3FD100F1AC9CD92C86C20 (VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ContentTile>::get_Count()
inline int32_t Dictionary_2_get_Count_mBF1ED5DF8DCF2E42E7411B7F895F8F60792A9487 (Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4 *, const RuntimeMethod*))Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared)(__this, method);
}
// System.Void Vuforia.VoxelTree::SearchForVisibleVoxelsAndCreateContentTiles(Vuforia.PCTile,UnityEngine.Plane[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoxelTree_SearchForVisibleVoxelsAndCreateContentTiles_m491027C1257170005C3CDE3E9FAF181BBC0A71F0 (VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * __this, PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC * ___tile0, PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* ___frustumPlanes1, const RuntimeMethod* method);
// System.Void Vuforia.VoxelTree::UpdateMeshConstructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoxelTree_UpdateMeshConstructions_m6C69F6A4D6F6B7B0B9D47F3F6D06FA00D588D74F (VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * __this, const RuntimeMethod* method);
// System.Void Vuforia.VuMarkInstancesManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2E5BD34BDBA1DA32B422AE05DC1F8A93904AA62F (U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Observers.AObservationFilterComponent::.ctor(Vuforia.Internal.Observers.IObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AObservationFilterComponent__ctor_m78CE67A72AB4752D27D5B273F0B12184E47D09F7 (AObservationFilterComponent_tFA207BD54AB712F4F6EDD36FAD59762E6410F41D * __this, RuntimeObject* ___observer0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Internal.Observers.VuMarkInstance>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mB5C82BAB68BE635BD42FB4F1EF7D5CCCC20B33CE (Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * __this, int32_t ___key0, VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 *, int32_t, VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Vuforia.Internal.Observers.AObserverComponent::.ctor(Vuforia.Internal.Observers.IObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AObserverComponent__ctor_mB42F5B5C505441FA81E8B136FB62BAD374FBC48E (AObserverComponent_t4ECCF8B7EBD52971C682CD4BF7428F54DB2E27D0 * __this, RuntimeObject* ___observer0, const RuntimeMethod* method);
// Vuforia.Internal.Observers.VuMarkInstance Vuforia.Internal.Observers.VuMarkObserver::StartTrackingInstance(Vuforia.IVuMarkObservation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * VuMarkObserver_StartTrackingInstance_m5DB77590A2BB42D43E01C6FDE65DFA1F13C439EC (VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * __this, RuntimeObject* ___observation0, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Observers.VuMarkObserver::StopTrackingInstance(Vuforia.Internal.Observers.VuMarkInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkObserver_StopTrackingInstance_m758F2F263933003A242D12B933B6CCF2B0033EDA (VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * __this, VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * ___vuMarkInstance0, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Observers.VuMarkObserver::StopTrackingAllInstances(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkObserver_StopTrackingAllInstances_mD09F31B2CE3E3CBC6099FEB36CB943ECBA320A69 (VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * __this, bool ___disposedOfNativeInstances0, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Vuforia.ObserverBehaviour::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ObserverBehaviour_get_ID_m0BFABFE2C1BB4ED405745BFE3ACAA22F101C6799 (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m5540BA8C3484C0D2A93FAEE8F080A09A9F5BB73F (const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Utility.Log::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mED2E0FC89BA0AEF73744D78796A140E628098E0B (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsUfoEnabled(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsUfoEnabled_m174F0B1BAD7EE2A4B2230B903A041D8002F79F95 (String_t* ___licenseKey0, String_t* ___ufoKey1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mFEB0CB3531393F6CBE07C6E0FCB473B3311F799A (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void System.Action`2<System.Single,System.Single>::Invoke(!0,!1)
inline void Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * __this, float ___arg10, float ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *, float, float, const RuntimeMethod*))Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaRuntimeUtilities_IsPlayMode_m23E1BDA7C739AF1E7822964AFA54BCBCA3C8E1B3 (const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3 (String_t* ___value0, const RuntimeMethod* method);
// Vuforia.IPlayModeEditorUtility Vuforia.PlayModeEditorUtility::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayModeEditorUtility_get_Instance_m0AE89324E70D461764219CB98D2BC1E9605217DB (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m52C9390086344FA8787001ED5911550D850CE515 (const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.String Vuforia.PosixPath::Join(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PosixPath_Join_m4A67CB3DFA1D7AD611414A7A50B081581E8BDAA5 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___subPaths0, const RuntimeMethod* method);
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileCollection__ctor_m27CD8D676C59FD5CED6E88715F3DB05392F7E4B5 (ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 * __this, ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___defaultProfile0, Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___profiles1, const RuntimeMethod* method);
// System.Void Vuforia.World/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFDBDB59E297883F707F00E26F25B6EE37467C207 (U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * __this, const RuntimeMethod* method);
// Vuforia.TargetStatus Vuforia.ObserverBehaviour::get_TargetStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method);
// Vuforia.Status Vuforia.TargetStatus::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline (TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * __this, const RuntimeMethod* method);
// System.Void Vuforia.Internal.Core.WorldOriginProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA6B99FA3EFB57FE7583183AFA00783F5BD0631E (U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * __this, const RuntimeMethod* method);
// System.Void Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6983785FE10F8D0D173A84D5E49F46CC4AB57045 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, const RuntimeMethod* method);
// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::get_UniqueItems()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonSchemaModel_get_UniqueItems_mD95FA018C4C58430516454E670E876D5B352E097_inline (JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>::get_Value()
inline JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_inline (KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD * __this, const RuntimeMethod* method)
{
	return ((  JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * (*) (KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel::get_Required()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonSchemaModel_get_Required_mF03089412305B3532BA80CC5219B59195E2697D2_inline (JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_inline (KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.PointCloudBehaviour/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mBEC2691E1740962CEC8A6CB9932A9F97B8F293C6 (U3CU3Ec__DisplayClass14_0_tAD1E6D898FC7AE1E21DF6C3590C5AA335946C3BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.PointCloudBehaviour/<>c__DisplayClass14_0::<UpdateHeight>b__0(Vuforia.PointCloudMaterial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CUpdateHeightU3Eb__0_m1E5CB96845C8693A8D8B96705338B75DED279007 (U3CU3Ec__DisplayClass14_0_tAD1E6D898FC7AE1E21DF6C3590C5AA335946C3BF * __this, PointCloudMaterial_t641625D84280575EBA03013E890F5DC63DAE307E * ___m0, const RuntimeMethod* method)
{
	{
		PointCloudBehaviour_tCC0506EB3623850FD52A5A7413FC51DEC67A8FA0 * L_0 = __this->get_U3CU3E4__this_0();
		PointCloudMaterial_t641625D84280575EBA03013E890F5DC63DAE307E * L_1 = ___m0;
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = L_1->get_CloudMaterial_1();
		float L_3 = __this->get_maxHeight_1();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_parentTransform_2();
		NullCheck(L_0);
		PointCloudBehaviour_UpdateMaterial_m52BA3638CE467354644473F8520B279B62ED1DF1(L_0, L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildContentMeshU3Ed__5__ctor_m91B5D7A603146493EA153B2694CFE63FCBC2808F (U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildContentMeshU3Ed__5_System_IDisposable_Dispose_m9403BCD831647E523BF27B913FB59B7C8B494D5F (U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildContentMeshU3Ed__5_MoveNext_m24517644BC89B6828A90894CA4C4DD090C01EF7D (U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * G_B8_0 = NULL;
	MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * G_B7_0 = NULL;
	MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * G_B31_0 = NULL;
	MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * G_B30_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_1 = L_0;
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_1 = __this->get_U3CU3E4__this_2();
		V_2 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0134;
			}
			case 2:
			{
				goto IL_040f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_3 = V_2;
		NullCheck(L_3);
		ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * L_4 = L_3->get_address_of_mPointCache_18();
		bool L_5;
		L_5 = ColoredPointCloudData_IsNull_mF4158E18F34FB3C361BD2C9145E3928226CB7A1E((ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0038:
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_6 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_6, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = L_6;
		NullCheck(L_7);
		Mesh_set_indexFormat_m7B5C838359D779E58CC0672E02F19E7584AB6F59(L_7, 1, /*hidden argument*/NULL);
		__this->set_U3CmeshU3E5__2_4(L_7);
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_8 = V_2;
		NullCheck(L_8);
		RuntimeObject * L_9 = L_8->get_mLoadingLock_19();
		V_3 = L_9;
		V_4 = (bool)0;
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_10 = V_3;
			Monitor_Enter_m588C16057E70F436C528A800D32546E987CAF1BD(L_10, (bool*)(&V_4), /*hidden argument*/NULL);
			PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_11 = V_2;
			NullCheck(L_11);
			ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * L_12 = L_11->get_address_of_mPointCache_18();
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_13 = L_12->get_PointPosition_0();
			NullCheck(L_13);
			__this->set_U3CpointCountU3E5__3_5(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
			int32_t L_14 = __this->get_U3CpointCountU3E5__3_5();
			if (L_14)
			{
				goto IL_0090;
			}
		}

IL_0077:
		{
			MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * L_15 = __this->get_callback_3();
			MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * L_16 = L_15;
			G_B7_0 = L_16;
			if (L_16)
			{
				G_B8_0 = L_16;
				goto IL_0083;
			}
		}

IL_0080:
		{
			goto IL_0089;
		}

IL_0083:
		{
			NullCheck(G_B8_0);
			MeshBuildCallback_Invoke_m83929F74F223F6BBC6E87CE50A01E2A4856ABC93(G_B8_0, (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL, /*hidden argument*/NULL);
		}

IL_0089:
		{
			V_0 = (bool)0;
			IL2CPP_LEAVE(0x4CC, FINALLY_0092);
		}

IL_0090:
		{
			IL2CPP_LEAVE(0x9D, FINALLY_0092);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0092;
	}

FINALLY_0092:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_4;
			if (!L_17)
			{
				goto IL_009c;
			}
		}

IL_0096:
		{
			RuntimeObject * L_18 = V_3;
			Monitor_Exit_m62365CE1CF6AD0E7396CEEB926F7B0C3FA8CABA1(L_18, /*hidden argument*/NULL);
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(146)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(146)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4CC, IL_04cc)
		IL2CPP_JUMP_TBL(0x9D, IL_009d)
	}

IL_009d:
	{
		bool L_19;
		L_19 = PCShaderSupportUtil_IsGeometryShaderSupported_m1216A7A2E00AC42EB5F271BA076492A4D75BEB53(/*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_017a;
		}
	}
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_20 = __this->get_U3CmeshU3E5__2_4();
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_21 = V_2;
		NullCheck(L_21);
		ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * L_22 = L_21->get_address_of_mPointCache_18();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_23 = L_22->get_PointPosition_0();
		NullCheck(L_20);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_20, L_23, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_24 = __this->get_U3CmeshU3E5__2_4();
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_25 = V_2;
		NullCheck(L_25);
		ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * L_26 = L_25->get_address_of_mPointCache_18();
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_27 = L_26->get_PointColor_1();
		NullCheck(L_24);
		Mesh_set_colors32_m0EA838C15BBD01710A4EE1A475DB585EB9B5BD91(L_24, L_27, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_28 = __this->get_U3CmeshU3E5__2_4();
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_29 = V_2;
		NullCheck(L_29);
		ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * L_30 = L_29->get_address_of_mPointCache_18();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_31 = L_30->get_PointNormal_2();
		NullCheck(L_28);
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_28, L_31, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_U3CpointCountU3E5__3_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_32);
		__this->set_U3CindicesU3E5__4_6(L_33);
		__this->set_U3CiU3E5__5_7(0);
		goto IL_014d;
	}

IL_0103:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = __this->get_U3CindicesU3E5__4_6();
		int32_t L_35 = __this->get_U3CiU3E5__5_7();
		int32_t L_36 = __this->get_U3CiU3E5__5_7();
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (int32_t)L_36);
		int32_t L_37 = __this->get_U3CiU3E5__5_7();
		if (((int32_t)((int32_t)L_37%(int32_t)((int32_t)2000))))
		{
			goto IL_013b;
		}
	}
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0134:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_013b:
	{
		int32_t L_38 = __this->get_U3CiU3E5__5_7();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_39 = V_5;
		__this->set_U3CiU3E5__5_7(L_39);
	}

IL_014d:
	{
		int32_t L_40 = __this->get_U3CiU3E5__5_7();
		int32_t L_41 = __this->get_U3CpointCountU3E5__3_5();
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0103;
		}
	}
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_42 = __this->get_U3CmeshU3E5__2_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = __this->get_U3CindicesU3E5__4_6();
		NullCheck(L_42);
		Mesh_SetIndices_mCD0377083E978A3FF806CFCCD28410C042A77ECD(L_42, L_43, 5, 0, /*hidden argument*/NULL);
		__this->set_U3CindicesU3E5__4_6((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
		goto IL_04b3;
	}

IL_017a:
	{
		int32_t L_44 = __this->get_U3CpointCountU3E5__3_5();
		V_6 = ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_44));
		int32_t L_45 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_46 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_45);
		__this->set_U3CquadVerticesU3E5__6_8(L_46);
		int32_t L_47 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_48 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_47);
		__this->set_U3CquadNormalsU3E5__7_9(L_48);
		int32_t L_49 = V_6;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_50 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)L_49);
		__this->set_U3CquadColorsU3E5__8_10(L_50);
		int32_t L_51 = V_6;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_52 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)L_51);
		__this->set_U3CquadUVsU3E5__9_11(L_52);
		int32_t L_53 = __this->get_U3CpointCountU3E5__3_5();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_53)));
		__this->set_U3CindicesU3E5__4_6(L_54);
		__this->set_U3CiU3E5__5_7(0);
		goto IL_0428;
	}

IL_01d7:
	{
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_55 = V_2;
		NullCheck(L_55);
		ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * L_56 = L_55->get_address_of_mPointCache_18();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_57 = L_56->get_PointPosition_0();
		int32_t L_58 = __this->get_U3CiU3E5__5_7();
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = L_60;
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_61 = V_2;
		NullCheck(L_61);
		ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * L_62 = L_61->get_address_of_mPointCache_18();
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_63 = L_62->get_PointColor_1();
		int32_t L_64 = __this->get_U3CiU3E5__5_7();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_8 = L_66;
		PointCloudVoxel_tFEA9FFCC15ACCC30CA400243E077A7912DD9DA58 * L_67 = V_2;
		NullCheck(L_67);
		ColoredPointCloudData_tA9466C53F4DBEEFB7DA7257CB2E9AF530C5B56AF * L_68 = L_67->get_address_of_mPointCache_18();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_69 = L_68->get_PointNormal_2();
		int32_t L_70 = __this->get_U3CiU3E5__5_7();
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_9 = L_72;
		int32_t L_73 = __this->get_U3CiU3E5__5_7();
		V_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_73));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_74 = __this->get_U3CquadVerticesU3E5__6_8();
		int32_t L_75 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = V_7;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_76);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_77 = __this->get_U3CquadVerticesU3E5__6_8();
		int32_t L_78 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = V_7;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_79);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_80 = __this->get_U3CquadVerticesU3E5__6_8();
		int32_t L_81 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_7;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_82);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_83 = __this->get_U3CquadVerticesU3E5__6_8();
		int32_t L_84 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85 = V_7;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_85);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_86 = __this->get_U3CquadColorsU3E5__8_10();
		int32_t L_87 = V_10;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_88 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_89;
		L_89 = Color32_op_Implicit_mED0ABE302F9BDD2BA845BDD96F0C2F8C5C616D48(L_88, /*hidden argument*/NULL);
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_89);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_90 = __this->get_U3CquadColorsU3E5__8_10();
		int32_t L_91 = V_10;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_92 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_93;
		L_93 = Color32_op_Implicit_mED0ABE302F9BDD2BA845BDD96F0C2F8C5C616D48(L_92, /*hidden argument*/NULL);
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_93);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_94 = __this->get_U3CquadColorsU3E5__8_10();
		int32_t L_95 = V_10;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_96 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_97;
		L_97 = Color32_op_Implicit_mED0ABE302F9BDD2BA845BDD96F0C2F8C5C616D48(L_96, /*hidden argument*/NULL);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)2))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_97);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_98 = __this->get_U3CquadColorsU3E5__8_10();
		int32_t L_99 = V_10;
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_100 = V_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_101;
		L_101 = Color32_op_Implicit_mED0ABE302F9BDD2BA845BDD96F0C2F8C5C616D48(L_100, /*hidden argument*/NULL);
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)3))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_101);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_102 = __this->get_U3CquadNormalsU3E5__7_9();
		int32_t L_103 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = V_9;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_104);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_105 = __this->get_U3CquadNormalsU3E5__7_9();
		int32_t L_106 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = V_9;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_107);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_108 = __this->get_U3CquadNormalsU3E5__7_9();
		int32_t L_109 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_110 = V_9;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)2))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_110);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_111 = __this->get_U3CquadNormalsU3E5__7_9();
		int32_t L_112 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = V_9;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)3))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_113);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_114 = __this->get_U3CquadUVsU3E5__9_11();
		int32_t L_115 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_116;
		memset((&L_116), 0, sizeof(L_116));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_116), (-1.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(L_115), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_116);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_117 = __this->get_U3CquadUVsU3E5__9_11();
		int32_t L_118 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_119), (-1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)1))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_119);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_120 = __this->get_U3CquadUVsU3E5__9_11();
		int32_t L_121 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_122;
		memset((&L_122), 0, sizeof(L_122));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_122), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)2))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_122);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_123 = __this->get_U3CquadUVsU3E5__9_11();
		int32_t L_124 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_125;
		memset((&L_125), 0, sizeof(L_125));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_125), (1.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)3))), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_125);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_126 = __this->get_U3CindicesU3E5__4_6();
		int32_t L_127 = __this->get_U3CiU3E5__5_7();
		int32_t L_128 = V_10;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_127))), (int32_t)L_128);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_129 = __this->get_U3CindicesU3E5__4_6();
		int32_t L_130 = __this->get_U3CiU3E5__5_7();
		int32_t L_131 = V_10;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_130)), (int32_t)1))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_131, (int32_t)1)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_132 = __this->get_U3CindicesU3E5__4_6();
		int32_t L_133 = __this->get_U3CiU3E5__5_7();
		int32_t L_134 = V_10;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_133)), (int32_t)2))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)2)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_135 = __this->get_U3CindicesU3E5__4_6();
		int32_t L_136 = __this->get_U3CiU3E5__5_7();
		int32_t L_137 = V_10;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_136)), (int32_t)3))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)2)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_138 = __this->get_U3CindicesU3E5__4_6();
		int32_t L_139 = __this->get_U3CiU3E5__5_7();
		int32_t L_140 = V_10;
		NullCheck(L_138);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_139)), (int32_t)4))), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_140, (int32_t)3)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_141 = __this->get_U3CindicesU3E5__4_6();
		int32_t L_142 = __this->get_U3CiU3E5__5_7();
		int32_t L_143 = V_10;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_142)), (int32_t)5))), (int32_t)L_143);
		int32_t L_144 = __this->get_U3CiU3E5__5_7();
		if (((int32_t)((int32_t)L_144%(int32_t)((int32_t)2000))))
		{
			goto IL_0416;
		}
	}
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_040f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0416:
	{
		int32_t L_145 = __this->get_U3CiU3E5__5_7();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)1));
		int32_t L_146 = V_5;
		__this->set_U3CiU3E5__5_7(L_146);
	}

IL_0428:
	{
		int32_t L_147 = __this->get_U3CiU3E5__5_7();
		int32_t L_148 = __this->get_U3CpointCountU3E5__3_5();
		if ((((int32_t)L_147) < ((int32_t)L_148)))
		{
			goto IL_01d7;
		}
	}
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_149 = __this->get_U3CmeshU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_150 = __this->get_U3CquadVerticesU3E5__6_8();
		NullCheck(L_149);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_149, L_150, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_151 = __this->get_U3CmeshU3E5__2_4();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_152 = __this->get_U3CquadColorsU3E5__8_10();
		NullCheck(L_151);
		Mesh_set_colors_m676FFD24FC594C87CE6D23287C2FCBDA363E69B0(L_151, L_152, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_153 = __this->get_U3CmeshU3E5__2_4();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_154 = __this->get_U3CquadUVsU3E5__9_11();
		NullCheck(L_153);
		Mesh_set_uv_mF6FED6DDACBAE3EAF28BFBF257A0D5356FCF3AAC(L_153, L_154, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_155 = __this->get_U3CmeshU3E5__2_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_156 = __this->get_U3CquadNormalsU3E5__7_9();
		NullCheck(L_155);
		Mesh_set_normals_m3D06E214B63B49788710672B71C99F2365A83130(L_155, L_156, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_157 = __this->get_U3CmeshU3E5__2_4();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_158 = __this->get_U3CindicesU3E5__4_6();
		NullCheck(L_157);
		Mesh_SetIndices_mCD0377083E978A3FF806CFCCD28410C042A77ECD(L_157, L_158, 0, 0, /*hidden argument*/NULL);
		__this->set_U3CquadVerticesU3E5__6_8((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		__this->set_U3CquadNormalsU3E5__7_9((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL);
		__this->set_U3CquadColorsU3E5__8_10((ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)NULL);
		__this->set_U3CquadUVsU3E5__9_11((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)NULL);
		__this->set_U3CindicesU3E5__4_6((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)NULL);
	}

IL_04b3:
	{
		MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * L_159 = __this->get_callback_3();
		MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * L_160 = L_159;
		G_B30_0 = L_160;
		if (L_160)
		{
			G_B31_0 = L_160;
			goto IL_04bf;
		}
	}
	{
		goto IL_04ca;
	}

IL_04bf:
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_161 = __this->get_U3CmeshU3E5__2_4();
		NullCheck(G_B31_0);
		MeshBuildCallback_Invoke_m83929F74F223F6BBC6E87CE50A01E2A4856ABC93(G_B31_0, L_161, /*hidden argument*/NULL);
	}

IL_04ca:
	{
		return (bool)0;
	}

IL_04cc:
	{
		bool L_162 = V_0;
		return L_162;
	}
}
// System.Object Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildContentMeshU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m26821F311ED47F5BDB484A3CA2B8291413C8443F (U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildContentMeshU3Ed__5_System_Collections_IEnumerator_Reset_mC0242507EE543ABB57EF5916D910EA89206CCD71 (U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildContentMeshU3Ed__5_System_Collections_IEnumerator_Reset_mC0242507EE543ABB57EF5916D910EA89206CCD71_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.PointCloudVoxel/<BuildContentMesh>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildContentMeshU3Ed__5_System_Collections_IEnumerator_get_Current_m369FB85DCD0951C0A06DE8F8DA5C4674DEF9C8F3 (U3CBuildContentMeshU3Ed__5_tB5E9AEAF4DE1E16B37628D6E67F3EC044B876BEF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Vuforia.PosixPath/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m423C361F886FF7D6AFD27CDC4F68032791A3C23B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 * L_0 = (U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 *)il2cpp_codegen_object_new(U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCC9BE344B32D3EE3BE981833AF83B922BDA26E1F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.PosixPath/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCC9BE344B32D3EE3BE981833AF83B922BDA26E1F (U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.PosixPath/<>c::<Join>b__1_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CJoinU3Eb__1_0_mEC532FB83553192A9F3B28A3FBA318E54CE3EB7F (U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___p0;
		return (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
// System.String Vuforia.PosixPath/<>c::<Join>b__1_1(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CJoinU3Eb__1_1_m4D3720D44A277FAA2E61FBD4A9B3A0EE3161BDF4 (U3CU3Ec_tC35B99D201F9EB1AD13C1A928F49F6B1F8E23FB4 * __this, String_t* ___s0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___s0;
		return L_1;
	}

IL_0006:
	{
		String_t* L_2 = ___s0;
		String_t* L_3;
		L_3 = PosixPath_TrimLeadingSlashes_m60B2483D5E3CEF1A7AF9E84A87C8B2F59505F282(L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Vuforia.PosixPath/InvalidPathException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidPathException__ctor_mB27F168026377F188DF2D323A9D0121D8800BDFC (InvalidPathException_tF72EA733B957D516DCB49AE2D903B15B328D0FF2 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.PropertyNameTable/Entry::.ctor(System.String,System.Int32,Vuforia.Newtonsoft.Json.Utilities.PropertyNameTable/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m90751B0ECA85D0884A5EA14F6548842C193A670A (Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C * __this, String_t* ___value0, int32_t ___hashCode1, Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C * ___next2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_Value_0(L_0);
		int32_t L_1 = ___hashCode1;
		__this->set_HashCode_1(L_1);
		Entry_t92DA674AE18F88A6671FE0439FAE2612D2418E1C * L_2 = ___next2;
		__this->set_Next_2(L_2);
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
// System.Void Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m65DF59F4D5AAF8C37377F883F8B8EBAEB9FD16C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * L_0 = (U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 *)il2cpp_codegen_object_new(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8415F679D6151AF615AD4BADA541EAC006A9D04C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8415F679D6151AF615AD4BADA541EAC006A9D04C (U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<ReadJson>b__2_0(Vuforia.Newtonsoft.Json.Linq.JProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CReadJsonU3Eb__2_0_m37456B9A433882B56960492908345F6769B3D18D (U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * __this, JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	{
		JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JProperty_get_Name_m40C95EB5D7D490470847ADAB4993684AC0296991_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<ReadJson>b__2_1(Vuforia.Newtonsoft.Json.Linq.JProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CReadJsonU3Eb__2_1_m8078E0F705A605EB963D6D2B0E4927223335627F (U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * __this, JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	{
		JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JProperty_get_Name_m40C95EB5D7D490470847ADAB4993684AC0296991_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<ReadJson>b__2_2(Vuforia.Newtonsoft.Json.Linq.JProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CReadJsonU3Eb__2_2_mB2FF09794ADDEFE823F11ED9914BCF825BB34359 (U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * __this, JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JProperty_get_Name_m40C95EB5D7D490470847ADAB4993684AC0296991_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<ReadJson>b__2_3(Vuforia.Newtonsoft.Json.Linq.JProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CReadJsonU3Eb__2_3_m5E1EA6E41B0DAB7A48B25BC5B5618929DE699978 (U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * __this, JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JProperty_get_Name_m40C95EB5D7D490470847ADAB4993684AC0296991_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Converters.QuaternionConverter/<>c::<ReadJson>b__2_4(Vuforia.Newtonsoft.Json.Linq.JProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CReadJsonU3Eb__2_4_m1174749817DFAD83D3F6771623F3F66EA306A0BD (U3CU3Ec_tF9E86AECBFE722851674F3539A25BE5187469228 * __this, JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15837118141CA2B68B23C553BFA6090DA353BF98);
		s_Il2CppMethodInitialized = true;
	}
	{
		JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JProperty_get_Name_m40C95EB5D7D490470847ADAB4993684AC0296991_inline(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteral15837118141CA2B68B23C553BFA6090DA353BF98, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4__ctor_m080393D3ED5384B1F6280DEC81498D9042FDF859 (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_System_IDisposable_Dispose_m95F4ABCA187AA44F028C328A8D0F3211F8331B92 (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CExecuteFilterU3Ed__4_U3CU3Em__Finally2_mBB02FDCBD80B12A34E98A115C1594F37B4DE215C(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__4_U3CU3Em__Finally1_m70E92BC3313EABB86E62BB4B785B375458D70E50(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__4_MoveNext_m06D3E59CEEC618DBC067578BEBD9E82714B839FF (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9DFF2C56D7941ACD9B62391A91351E53D4624AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9D3E713F8938CF33F827C721FDA0523EECEBC72E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * V_2 = NULL;
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * V_3 = NULL;
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_008f;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_00d6;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_4 = __this->get_current_3();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t9DFF2C56D7941ACD9B62391A91351E53D4624AC6_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3E7__wrap1_6(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00b1;
		}

IL_003e:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_6);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_7;
			L_7 = InterfaceFuncInvoker0< JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t9D3E713F8938CF33F827C721FDA0523EECEBC72E_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_8 = V_3;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t9DFF2C56D7941ACD9B62391A91351E53D4624AC6_il2cpp_TypeInfo_var, L_8);
			__this->set_U3CU3E7__wrap2_7(L_9);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_0097;
		}

IL_0060:
		{
			RuntimeObject* L_10 = __this->get_U3CU3E7__wrap2_7();
			NullCheck(L_10);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_11;
			L_11 = InterfaceFuncInvoker0< JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t9D3E713F8938CF33F827C721FDA0523EECEBC72E_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
			QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * L_12 = V_2;
			NullCheck(L_12);
			QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546 * L_13;
			L_13 = QueryFilter_get_Expression_m950410238422D345581F41CFAF39A8A5DB0A5F1D_inline(L_12, /*hidden argument*/NULL);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_14 = V_4;
			NullCheck(L_13);
			bool L_15;
			L_15 = VirtFuncInvoker1< bool, JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * >::Invoke(4 /* System.Boolean Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryExpression::IsMatch(Vuforia.Newtonsoft.Json.Linq.JToken) */, L_13, L_14);
			if (!L_15)
			{
				goto IL_0097;
			}
		}

IL_007c:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_16 = V_4;
			__this->set_U3CU3E2__current_1(L_16);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00d6;
		}

IL_008f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_0097:
		{
			RuntimeObject* L_17 = __this->get_U3CU3E7__wrap2_7();
			NullCheck(L_17);
			bool L_18;
			L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_17);
			if (L_18)
			{
				goto IL_0060;
			}
		}

IL_00a4:
		{
			U3CExecuteFilterU3Ed__4_U3CU3Em__Finally2_mBB02FDCBD80B12A34E98A115C1594F37B4DE215C(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_7((RuntimeObject*)NULL);
		}

IL_00b1:
		{
			RuntimeObject* L_19 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_19);
			bool L_20;
			L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_003e;
			}
		}

IL_00be:
		{
			U3CExecuteFilterU3Ed__4_U3CU3Em__Finally1_m70E92BC3313EABB86E62BB4B785B375458D70E50(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_00d6;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00cf;
	}

FAULT_00cf:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__4_System_IDisposable_Dispose_m95F4ABCA187AA44F028C328A8D0F3211F8331B92(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(207)
	} // end fault
	IL2CPP_CLEANUP(207)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d6:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_U3CU3Em__Finally1_m70E92BC3313EABB86E62BB4B785B375458D70E50 (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_U3CU3Em__Finally2_mBB02FDCBD80B12A34E98A115C1594F37B4DE215C (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_7();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_7();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::System.Collections.Generic.IEnumerator<Vuforia.Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * U3CExecuteFilterU3Ed__4_System_Collections_Generic_IEnumeratorU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_get_Current_mD16086D27D6931219E6DA0F6E57BCA14AB41E6F9 (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_System_Collections_IEnumerator_Reset_m7254BE4539E778F6D8CC6969D75F69244D2D473C (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__4_System_Collections_IEnumerator_Reset_m7254BE4539E778F6D8CC6969D75F69244D2D473C_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__4_System_Collections_IEnumerator_get_Current_m7166FB00036FFD46562589A17BEF2B9180F8A2DA (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::System.Collections.Generic.IEnumerable<Vuforia.Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__4_System_Collections_Generic_IEnumerableU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m6B6FD445B1FD7FC0447E6E3BBA48031DF3472ADE (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * L_3 = (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__4__ctor_m080393D3ED5384B1F6280DEC81498D9042FDF859(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * L_4 = V_0;
		QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__current_4();
		NullCheck(L_6);
		L_6->set_current_3(L_7);
		U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Vuforia.Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__4_System_Collections_IEnumerable_GetEnumerator_m1606332D9FBC729AD355AA73F3A7EA8451504932 (U3CExecuteFilterU3Ed__4_t99E659F9E37C429D54E72CCFDF0E6F1821E7A036 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__4_System_Collections_Generic_IEnumerableU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m6B6FD445B1FD7FC0447E6E3BBA48031DF3472ADE(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mD616AF9069113A071077B942D725F91478058BD2 (U3CU3Ec__DisplayClass13_0_t3D5EDC2798057A397DCCD0983DF6E938E2587FAF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::<Create>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_mEE82A01905BB2654C04A408B0372D5B460008637 (U3CU3Ec__DisplayClass13_0_t3D5EDC2798057A397DCCD0983DF6E938E2587FAF * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = __this->get_ctor_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_0, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_1__ctor_m2198730A00FD1E590E2D312D89B04FEE014D509B (U3CU3Ec__DisplayClass13_1_tE383BA4E25A9185AA714BAAA806E94FEFA7F770E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::<Create>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_mCD33C07A15FFCF9B427F7B18A9B725817BE7F92A (U3CU3Ec__DisplayClass13_1_tE383BA4E25A9185AA714BAAA806E94FEFA7F770E * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3_RuntimeMethod_var);
		return L_3;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_2__ctor_mA444C0279FE8AC4C49B5A629EDF71B77CDD01D04 (U3CU3Ec__DisplayClass13_2_t0C4261F723FC34EE395AE7D67E20174F10583A20 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::<Create>b__2(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_mEA163E9FCA6B9C7B36310714C89AB2F7607772A8 (U3CU3Ec__DisplayClass13_2_t0C4261F723FC34EE395AE7D67E20174F10583A20 * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t6521212E6214EAE9BEB8FEF3EF4B4B57115E7204 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		RuntimeObject * L_5;
		L_5 = MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3(L_0, L_1, L_3, /*hidden argument*/MethodCall_2_Invoke_mF39C93A90A165AA2FA4894332DD699A0DD54F0B3_RuntimeMethod_var);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE137BAC0CA6A06DF16D80880531F5790E867A7BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * L_0 = (U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 *)il2cpp_codegen_object_new(U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5E4BF9B186671A0F19C489EB1AD74ABFE3B60581(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5E4BF9B186671A0F19C489EB1AD74ABFE3B60581 (U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetDefaultConstructor>b__10_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_mE3A2BEC29277AE01FFD010649E667F7B4F7791F2 (U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mA7E117696A43912E3C3DEDCA0C8CB114C1238271_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2;
		L_2 = Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mA7E117696A43912E3C3DEDCA0C8CB114C1238271((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mA7E117696A43912E3C3DEDCA0C8CB114C1238271_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetFieldsAndProperties>b__29_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m0598D36489E45B4CA329297ABF4552754BC1D0FF (U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetMemberInfoFromType>b__37_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m2981E84E67CB1C839ADB2D46750D2B115101ED6F (U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetChildPrivateFields>b__39_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_mB718D98F1B49D32E2E2FB8478EAAA2FC6841BD96 (U3CU3Ec_t383B3A85DF33ECE813009FD140D8D0A72B4D5BA2 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072(L_0, /*hidden argument*/NULL);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_mF7A96C839B761D6A371C18338D82C5194F88124C (U3CU3Ec__DisplayClass42_0_tAE9057E690DB2454E11F777B44C4789EB10FAA6F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_mBF38D8CCDB59EDC5B1AF414BD6BD00818E9A3713 (U3CU3Ec__DisplayClass42_0_tAE9057E690DB2454E11F777B44C4789EB10FAA6F * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_mE693D8B3C8C7F3B1ABBEA00ACF0B917615867431 (U3CU3Ec__DisplayClass42_0_tAE9057E690DB2454E11F777B44C4789EB10FAA6F * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_mE70990A83682FED418349F5E330CDCE5B6EFC792 (U3CU3Ec__DisplayClass42_0_tAE9057E690DB2454E11F777B44C4789EB10FAA6F * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tA73BA8087E066D24C93D2FDECCC691327114647B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_tA73BA8087E066D24C93D2FDECCC691327114647B_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ReflectionUtils_IsVirtual_m2DEBBE62B4A3E7C1E8BD1277EDE437F2EDACFF28(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		PropertyInfo_t * L_7 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_tA73BA8087E066D24C93D2FDECCC691327114647B_il2cpp_TypeInfo_var);
		MethodInfo_t * L_8;
		L_8 = ReflectionUtils_GetBaseDefinition_m63248A71D96BD531242D9C08301B84DB2377E5C7(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = MethodInfo_op_Inequality_m36E5F5CEC053740C69E67E46BEDA47F9794BC94D(L_8, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		PropertyInfo_t * L_10 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_tA73BA8087E066D24C93D2FDECCC691327114647B_il2cpp_TypeInfo_var);
		MethodInfo_t * L_11;
		L_11 = ReflectionUtils_GetBaseDefinition_m63248A71D96BD531242D9C08301B84DB2377E5C7(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Type_t * L_12;
		L_12 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_11);
		PropertyInfo_t * L_13 = __this->get_subTypeProperty_0();
		MethodInfo_t * L_14;
		L_14 = ReflectionUtils_GetBaseDefinition_m63248A71D96BD531242D9C08301B84DB2377E5C7(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_14);
		NullCheck(L_12);
		bool L_16;
		L_16 = VirtFuncInvoker1< bool, Type_t * >::Invoke(116 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_12, L_15);
		return L_16;
	}

IL_004f:
	{
		return (bool)0;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m701813AB6819826992646F0CFC7B5011EFE616E1 (U3CU3Ec__DisplayClass43_0_t3965085377A2EE8001E752FCFC924E8F13BA93A7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::<IsMethodOverridden>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass43_0_U3CIsMethodOverriddenU3Eb__0_m6E88589EF4353A4666528F9711534FCE316572B0 (U3CU3Ec__DisplayClass43_0_t3965085377A2EE8001E752FCFC924E8F13BA93A7 * __this, MethodInfo_t * ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___info0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->get_method_0();
		bool L_3;
		L_3 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		MethodInfo_t * L_4 = ___info0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		Type_t * L_6 = __this->get_methodDeclaringType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		MethodInfo_t * L_8 = ___info0;
		NullCheck(L_8);
		MethodInfo_t * L_9;
		L_9 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(41 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_8);
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_9);
		Type_t * L_11 = __this->get_methodDeclaringType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Type_op_Equality_m01CE523ADAD8D6348C8247353F7C1E5FA3031732(L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003d:
	{
		return (bool)0;
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
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4__ctor_mD450CCC6B0F45DD7DFAE19D905B15F40F3E8D7BB (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_System_IDisposable_Dispose_m1F3EC53088E6F3E4EA77C0F09042138C04E8142B (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__4_U3CU3Em__Finally1_m53856499DE5D1F70BAD63D2C1D704D0F5D561458(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__4_MoveNext_m310B40A4CD6147C6C9D18EE972F71ED8883BA2C8 (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9DFF2C56D7941ACD9B62391A91351E53D4624AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9D3E713F8938CF33F827C721FDA0523EECEBC72E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * V_2 = NULL;
	JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * V_3 = NULL;
	JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_0083;
				}
				case 2:
				{
					goto IL_0160;
				}
				case 3:
				{
					goto IL_0189;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_01d8;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_3 = __this->get_current_3();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Vuforia.Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t9DFF2C56D7941ACD9B62391A91351E53D4624AC6_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_6(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_01b0;
		}

IL_0050:
		{
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_5);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_6;
			L_6 = InterfaceFuncInvoker0< JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t9D3E713F8938CF33F827C721FDA0523EECEBC72E_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CrootU3E5__3_7(L_6);
			ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = ScanFilter_get_Name_mD4C72385C0062BCABC91AFA49A9A470A3DB07EB7_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_008b;
			}
		}

IL_0069:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_9 = __this->get_U3CrootU3E5__3_7();
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_01d8;
		}

IL_0083:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_008b:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_10 = __this->get_U3CrootU3E5__3_7();
			__this->set_U3CvalueU3E5__4_8(L_10);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_11 = __this->get_U3CrootU3E5__3_7();
			V_3 = L_11;
		}

IL_009e:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_12 = V_3;
			if (!L_12)
			{
				goto IL_00c8;
			}
		}

IL_00a1:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_13 = V_3;
			NullCheck(L_13);
			bool L_14;
			L_14 = VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean Vuforia.Newtonsoft.Json.Linq.JToken::get_HasValues() */, L_13);
			if (!L_14)
			{
				goto IL_00c8;
			}
		}

IL_00a9:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_15 = V_3;
			NullCheck(L_15);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_16;
			L_16 = VirtFuncInvoker0< JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * >::Invoke(17 /* Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::get_First() */, L_15);
			__this->set_U3CvalueU3E5__4_8(L_16);
			goto IL_0123;
		}

IL_00b7:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_17 = __this->get_U3CvalueU3E5__4_8();
			NullCheck(L_17);
			JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * L_18;
			L_18 = JToken_get_Parent_m0C47FA701ABB9BD601C13BBF3EA628AD5A0EF57C_inline(L_17, /*hidden argument*/NULL);
			__this->set_U3CvalueU3E5__4_8(L_18);
		}

IL_00c8:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_19 = __this->get_U3CvalueU3E5__4_8();
			if (!L_19)
			{
				goto IL_00f6;
			}
		}

IL_00d0:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_20 = __this->get_U3CvalueU3E5__4_8();
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_21 = __this->get_U3CrootU3E5__3_7();
			if ((((RuntimeObject*)(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 *)L_20) == ((RuntimeObject*)(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 *)L_21)))
			{
				goto IL_00f6;
			}
		}

IL_00de:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_22 = __this->get_U3CvalueU3E5__4_8();
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_23 = __this->get_U3CvalueU3E5__4_8();
			NullCheck(L_23);
			JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * L_24;
			L_24 = JToken_get_Parent_m0C47FA701ABB9BD601C13BBF3EA628AD5A0EF57C_inline(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_25;
			L_25 = VirtFuncInvoker0< JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * >::Invoke(18 /* Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JToken::get_Last() */, L_24);
			if ((((RuntimeObject*)(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 *)L_22) == ((RuntimeObject*)(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 *)L_25)))
			{
				goto IL_00b7;
			}
		}

IL_00f6:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_26 = __this->get_U3CvalueU3E5__4_8();
			if (!L_26)
			{
				goto IL_01a2;
			}
		}

IL_0101:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_27 = __this->get_U3CvalueU3E5__4_8();
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_28 = __this->get_U3CrootU3E5__3_7();
			if ((((RuntimeObject*)(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 *)L_27) == ((RuntimeObject*)(JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 *)L_28)))
			{
				goto IL_01a2;
			}
		}

IL_0112:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_29 = __this->get_U3CvalueU3E5__4_8();
			NullCheck(L_29);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_30;
			L_30 = JToken_get_Next_m1414D8687D5F635F5FA98957C5EE7AD5B482858E_inline(L_29, /*hidden argument*/NULL);
			__this->set_U3CvalueU3E5__4_8(L_30);
		}

IL_0123:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_31 = __this->get_U3CvalueU3E5__4_8();
			V_4 = ((JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F *)IsInstClass((RuntimeObject*)L_31, JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F_il2cpp_TypeInfo_var));
			JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * L_32 = V_4;
			if (!L_32)
			{
				goto IL_016a;
			}
		}

IL_0134:
		{
			JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * L_33 = V_4;
			NullCheck(L_33);
			String_t* L_34;
			L_34 = JProperty_get_Name_m40C95EB5D7D490470847ADAB4993684AC0296991_inline(L_33, /*hidden argument*/NULL);
			ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * L_35 = V_2;
			NullCheck(L_35);
			String_t* L_36;
			L_36 = ScanFilter_get_Name_mD4C72385C0062BCABC91AFA49A9A470A3DB07EB7_inline(L_35, /*hidden argument*/NULL);
			bool L_37;
			L_37 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_34, L_36, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_0191;
			}
		}

IL_0148:
		{
			JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * L_38 = V_4;
			NullCheck(L_38);
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_39;
			L_39 = JProperty_get_Value_mCBACF86FD0A5D3F43CAC597DBBB65816EE47062F(L_38, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_39);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_01d8;
		}

IL_0160:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0191;
		}

IL_016a:
		{
			ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * L_40 = V_2;
			NullCheck(L_40);
			String_t* L_41;
			L_41 = ScanFilter_get_Name_mD4C72385C0062BCABC91AFA49A9A470A3DB07EB7_inline(L_40, /*hidden argument*/NULL);
			if (L_41)
			{
				goto IL_0191;
			}
		}

IL_0172:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_42 = __this->get_U3CvalueU3E5__4_8();
			__this->set_U3CU3E2__current_1(L_42);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_01d8;
		}

IL_0189:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0191:
		{
			JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_43 = __this->get_U3CvalueU3E5__4_8();
			V_3 = ((JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC *)IsInstClass((RuntimeObject*)L_43, JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC_il2cpp_TypeInfo_var));
			goto IL_009e;
		}

IL_01a2:
		{
			__this->set_U3CvalueU3E5__4_8((JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 *)NULL);
			__this->set_U3CrootU3E5__3_7((JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 *)NULL);
		}

IL_01b0:
		{
			RuntimeObject* L_44 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_44);
			bool L_45;
			L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_44);
			if (L_45)
			{
				goto IL_0050;
			}
		}

IL_01c0:
		{
			U3CExecuteFilterU3Ed__4_U3CU3Em__Finally1_m53856499DE5D1F70BAD63D2C1D704D0F5D561458(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_01d8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_01d1;
	}

FAULT_01d1:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__4_System_IDisposable_Dispose_m1F3EC53088E6F3E4EA77C0F09042138C04E8142B(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(465)
	} // end fault
	IL2CPP_CLEANUP(465)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d8:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_U3CU3Em__Finally1_m53856499DE5D1F70BAD63D2C1D704D0F5D561458 (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::System.Collections.Generic.IEnumerator<Vuforia.Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * U3CExecuteFilterU3Ed__4_System_Collections_Generic_IEnumeratorU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_get_Current_m42B3E88F0A0DC23198FA133BA1A8B01B146A272E (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__4_System_Collections_IEnumerator_Reset_m1990779C9C9EBD52F5EEBAC8351625C716653329 (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__4_System_Collections_IEnumerator_Reset_m1990779C9C9EBD52F5EEBAC8351625C716653329_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__4_System_Collections_IEnumerator_get_Current_m9D6840FDB9A2FA306E6750953EE5B9AD5A995236 (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Vuforia.Newtonsoft.Json.Linq.JToken> Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::System.Collections.Generic.IEnumerable<Vuforia.Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__4_System_Collections_Generic_IEnumerableU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mCFC8F01B7058DE4F453C27B57C5EE93887BE480E (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m3972B2C66691EA6DF91A19CEF3521B7C2679D7A1(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * L_3 = (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__4__ctor_mD450CCC6B0F45DD7DFAE19D905B15F40F3E8D7BB(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * L_4 = V_0;
		ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__current_4();
		NullCheck(L_6);
		L_6->set_current_3(L_7);
		U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Vuforia.Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__4_System_Collections_IEnumerable_GetEnumerator_mCF328E82FAD0123E7ED84EBFA8EAA954C4F53E8C (U3CExecuteFilterU3Ed__4_t5198B153721AD427921445C81F8DEAA8774BB521 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__4_System_Collections_Generic_IEnumerableU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mCFC8F01B7058DE4F453C27B57C5EE93887BE480E(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.SessionRecorderBehaviour/CleanStorageEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CleanStorageEvent__ctor_m6EAF659CC1BFE8D000BC01EC62E7D3243669524E (CleanStorageEvent_t3BB428C36FCD0C9F07DA614683107317EDAAF7EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7(__this, /*hidden argument*/UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
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
// System.Void Vuforia.SessionRecorderBehaviour/RecordingStartedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingStartedEvent__ctor_m4FDC16637FEC2A416F861C0A8155629268DB2634 (RecordingStartedEvent_t103CAF3D69705B1EE8BF87315503FD954EFE5A02 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m191D00CD72D1ABA62387061E4D74570C30FE8EBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m191D00CD72D1ABA62387061E4D74570C30FE8EBF(__this, /*hidden argument*/UnityEvent_1__ctor_m191D00CD72D1ABA62387061E4D74570C30FE8EBF_RuntimeMethod_var);
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
// System.Void Vuforia.SessionRecorderBehaviour/RecordingStoppedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingStoppedEvent__ctor_mBC0D2678C2FA3DC791A9200C0F11C1CE66DBC5A0 (RecordingStoppedEvent_t61C624893E604FD6B7AA9B88D2BF289C11F9E45D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m01F9F090C401594D981C95E4340A7838A8820DA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m01F9F090C401594D981C95E4340A7838A8820DA8(__this, /*hidden argument*/UnityEvent_1__ctor_m01F9F090C401594D981C95E4340A7838A8820DA8_RuntimeMethod_var);
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
// System.Void Vuforia.SessionRecorderBehaviour/ShareRecordingEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareRecordingEvent__ctor_mF130487B90621A28C7619682848F6449912E1FA9 (ShareRecordingEvent_t4FD5A6DD64EC91EEC5DFF78C19A3FC6A19A0F26C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7(__this, /*hidden argument*/UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
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
// System.Void Vuforia.SessionRecorderBehaviour/StartRecordingEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartRecordingEvent__ctor_m15AC738DEE74825BCE1727D194D07F6E2214E500 (StartRecordingEvent_t3336B5309BBE9D92D753D6DB882A2935BA324FC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m302B658CB5BD327A6274EACB0FD334BBB8401648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m302B658CB5BD327A6274EACB0FD334BBB8401648(__this, /*hidden argument*/UnityEvent_1__ctor_m302B658CB5BD327A6274EACB0FD334BBB8401648_RuntimeMethod_var);
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
// System.Void Vuforia.SessionRecorderBehaviour/StopRecordingEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopRecordingEvent__ctor_m76B618668B0FAF64B80E5C5C9162F7BD81CFDAD6 (StopRecordingEvent_tCCD621EF86F31D6BB7C3AC4B8953775035238696 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m302B658CB5BD327A6274EACB0FD334BBB8401648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m302B658CB5BD327A6274EACB0FD334BBB8401648(__this, /*hidden argument*/UnityEvent_1__ctor_m302B658CB5BD327A6274EACB0FD334BBB8401648_RuntimeMethod_var);
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
// System.Void Vuforia.Internal.Simulator.SimulatedObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF13481D28EB9EDBA98DCB9860B3FCA986CD5B9E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 * L_0 = (U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 *)il2cpp_codegen_object_new(U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3A0B742AC191763B3C625F483728DBFA4A21D086(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Simulator.SimulatedObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3A0B742AC191763B3C625F483728DBFA4A21D086 (U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Internal.Simulator.SimulatedObject/<>c::<IsInLineOfSight>b__11_0(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsInLineOfSightU3Eb__11_0_m94212D2E5442161BD57BD8F6502131B28C424A54 (U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 * __this, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___h0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0;
		L_0 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___h0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Vuforia.Internal.Simulator.SimulatedObject/<>c::<IsInLineOfSight>b__11_1(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CIsInLineOfSightU3Eb__11_1_m199B7F2BA7832876BFBA6C63B5C1A6007B7AA6C0 (U3CU3Ec_tAB4F9C388D52869208C23C6092D33ECDE0844E78 * __this, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___raycastHit0, const RuntimeMethod* method)
{
	{
		float L_0;
		L_0 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___raycastHit0), /*hidden argument*/NULL);
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
// System.Void Vuforia.Internal.Simulator.SimulatedObjectFactory/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m8A3A6DBB2175BA4AAAA835F0A56495BE19A023EA (U3CU3Ec__DisplayClass14_0_t5FED079403C398907C91F7078A21B865340A7BC3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.Internal.Simulator.SimulatedObjectFactory/<>c__DisplayClass14_0::<ChangeLayer>b__0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0_U3CChangeLayerU3Eb__0_m43E9339C23850ADC3E459E14A69880D89C48B7F5 (U3CU3Ec__DisplayClass14_0_t5FED079403C398907C91F7078A21B865340A7BC3 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_mask_0();
		NullCheck(L_1);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Vuforia.Internal.Core.StateProcessor/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m41964CEC7E5A714DBD2EB5D243A045005B605537 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E * L_0 = (U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E *)il2cpp_codegen_object_new(U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB2945962C1C3AE2DFF7515D445AA163E1F85A115(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Core.StateProcessor/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB2945962C1C3AE2DFF7515D445AA163E1F85A115 (U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Internal.Core.StateProcessor/<>c::<UpdateObserverOffsets>b__4_0(Vuforia.IVuObservation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateObserverOffsetsU3Eb__4_0_m245CE7C7DB9AA07E14553FDA4D5A03569E383BBF (U3CU3Ec_t42E77ADCC73CD41C8CDC5B501A8808A5DC4FA56E * __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVuObservationWithPose_t9E3EB9BF7871428D4F9EA458935951BBD477A2A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, IVuObservationWithPose_t9E3EB9BF7871428D4F9EA458935951BBD477A2A2_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m45F662CD4FBEBE9DB91530A569C268747509B484 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * L_0 = (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC *)il2cpp_codegen_object_new(U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9293A37B7A84AAF72CE6D697796772120C8A1AF7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9293A37B7A84AAF72CE6D697796772120C8A1AF7 (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition> Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<.cctor>b__5_0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_0_mAC506B4334AEAD3C7C1A1215FED83AC4541DD650 (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_0 = (TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)SZArrayNew(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var, (uint32_t)1);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_1 = L_0;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_2 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_2, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_TextureId_0(0);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_9);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition> Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<.cctor>b__5_1(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_1_mBA4F6BAE696BDC02AEA56DF8A3A939CCBAE16B65 (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_0 = (TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)SZArrayNew(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var, (uint32_t)1);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_1 = L_0;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_2 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_2, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_TextureId_0(0);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(4);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_9);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition> Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<.cctor>b__5_2(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_2_m0F6E0763DA9C0CC357DCA104716267AB3FAC8A53 (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_0 = (TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)SZArrayNew(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var, (uint32_t)1);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_1 = L_0;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_2 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_2, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_TextureId_0(0);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(3);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_9);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition> Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<.cctor>b__5_3(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_3_mC8E86C7D092C63737476D84013AD9DECBE4D69BD (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_0 = (TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)SZArrayNew(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var, (uint32_t)1);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_1 = L_0;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_2 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_2, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_TextureId_0(0);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_9);
		return (RuntimeObject*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition> Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<.cctor>b__5_4(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_4_m9786ACA853868253E78F01AD6C961737277BF07F (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_0 = (TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)SZArrayNew(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var, (uint32_t)2);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_1 = L_0;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_2 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_2, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_TextureId_0(0);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_9);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_10 = L_1;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_11 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_11, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_TextureId_0(1);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_13 = L_12;
		int32_t L_14 = ___width0;
		NullCheck(L_13);
		L_13->set_Width_1(((int32_t)((int32_t)L_14/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_15 = L_13;
		int32_t L_16 = ___height1;
		NullCheck(L_15);
		L_15->set_Height_2(((int32_t)((int32_t)L_16/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_17 = L_15;
		NullCheck(L_17);
		L_17->set_TextureFormat_3(((int32_t)62));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_ShaderTextureName_4(_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_18);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_18);
		return (RuntimeObject*)L_10;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition> Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<.cctor>b__5_5(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_5_m6D7BDFA104984138E0B4D5B55A00D8C867208C53 (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_0 = (TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)SZArrayNew(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var, (uint32_t)2);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_1 = L_0;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_2 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_2, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_TextureId_0(0);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_9);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_10 = L_1;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_11 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_11, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_TextureId_0(1);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_13 = L_12;
		int32_t L_14 = ___width0;
		NullCheck(L_13);
		L_13->set_Width_1(((int32_t)((int32_t)L_14/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_15 = L_13;
		int32_t L_16 = ___height1;
		NullCheck(L_15);
		L_15->set_Height_2(((int32_t)((int32_t)L_16/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_17 = L_15;
		NullCheck(L_17);
		L_17->set_TextureFormat_3(((int32_t)62));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_ShaderTextureName_4(_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_18);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_18);
		return (RuntimeObject*)L_10;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition> Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<.cctor>b__5_6(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_6_m8BCC7B0D94954D54D3F6325811EB254678C41F71 (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2623C9694AD5C956295C47EBBD9EA0BD437696B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_0 = (TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)SZArrayNew(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var, (uint32_t)3);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_1 = L_0;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_2 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_2, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_TextureId_0(0);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_9);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_10 = L_1;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_11 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_11, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_TextureId_0(1);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_13 = L_12;
		int32_t L_14 = ___width0;
		NullCheck(L_13);
		L_13->set_Width_1(((int32_t)((int32_t)L_14/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_15 = L_13;
		int32_t L_16 = ___height1;
		NullCheck(L_15);
		L_15->set_Height_2(((int32_t)((int32_t)L_16/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_17 = L_15;
		NullCheck(L_17);
		L_17->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_ShaderTextureName_4(_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_18);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_18);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_19 = L_10;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_20 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_20, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_21 = L_20;
		NullCheck(L_21);
		L_21->set_TextureId_0(2);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_22 = L_21;
		int32_t L_23 = ___width0;
		NullCheck(L_22);
		L_22->set_Width_1(((int32_t)((int32_t)L_23/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_24 = L_22;
		int32_t L_25 = ___height1;
		NullCheck(L_24);
		L_24->set_Height_2(((int32_t)((int32_t)L_25/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_26 = L_24;
		NullCheck(L_26);
		L_26->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_27 = L_26;
		NullCheck(L_27);
		L_27->set_ShaderTextureName_4(_stringLiteral2623C9694AD5C956295C47EBBD9EA0BD437696B7);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_27);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_27);
		return (RuntimeObject*)L_19;
	}
}
// System.Collections.Generic.IEnumerable`1<Vuforia.Internal.Rendering.TextureDefinition> Vuforia.Internal.Rendering.TextureDefinitionsProvider/<>c::<.cctor>b__5_7(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__5_7_mE2F12FB1BD84DD9C6D6E4D01293F31550BB8F8F7 (U3CU3Ec_t28DF6D9EF57B1AB1A08E12C8489C07E6A13786DC * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2623C9694AD5C956295C47EBBD9EA0BD437696B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_0 = (TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4*)SZArrayNew(TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4_il2cpp_TypeInfo_var, (uint32_t)3);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_1 = L_0;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_2 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_2, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_TextureId_0(0);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_4 = L_3;
		int32_t L_5 = ___width0;
		NullCheck(L_4);
		L_4->set_Width_1(L_5);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_6 = L_4;
		int32_t L_7 = ___height1;
		NullCheck(L_6);
		L_6->set_Height_2(L_7);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_8 = L_6;
		NullCheck(L_8);
		L_8->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_9 = L_8;
		NullCheck(L_9);
		L_9->set_ShaderTextureName_4(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_9);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_10 = L_1;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_11 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_11, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_TextureId_0(1);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_13 = L_12;
		int32_t L_14 = ___width0;
		NullCheck(L_13);
		L_13->set_Width_1(((int32_t)((int32_t)L_14/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_15 = L_13;
		int32_t L_16 = ___height1;
		NullCheck(L_15);
		L_15->set_Height_2(((int32_t)((int32_t)L_16/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_17 = L_15;
		NullCheck(L_17);
		L_17->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_ShaderTextureName_4(_stringLiteral8AFF6FB8571DE2DFA3D5EC483D7D209D90AA53F0);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_18);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_18);
		TextureDefinitionU5BU5D_t957805A2B75D833B61DFA003B939A6C84BCAC3E4* L_19 = L_10;
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_20 = (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)il2cpp_codegen_object_new(TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B_il2cpp_TypeInfo_var);
		TextureDefinition__ctor_mAFB4A0A7139494CB1691132F9D31C44B1491E44E(L_20, /*hidden argument*/NULL);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_21 = L_20;
		NullCheck(L_21);
		L_21->set_TextureId_0(2);
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_22 = L_21;
		int32_t L_23 = ___width0;
		NullCheck(L_22);
		L_22->set_Width_1(((int32_t)((int32_t)L_23/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_24 = L_22;
		int32_t L_25 = ___height1;
		NullCheck(L_24);
		L_24->set_Height_2(((int32_t)((int32_t)L_25/(int32_t)2)));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_26 = L_24;
		NullCheck(L_26);
		L_26->set_TextureFormat_3(((int32_t)63));
		TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B * L_27 = L_26;
		NullCheck(L_27);
		L_27->set_ShaderTextureName_4(_stringLiteral2623C9694AD5C956295C47EBBD9EA0BD437696B7);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_27);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (TextureDefinition_tC29B3D1BBE187DAB30B971A28FA7D9D0F8BB799B *)L_27);
		return (RuntimeObject*)L_19;
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
// System.Void Vuforia.TileSetUtil/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAB88AEE295FB316594A9C261EE7B353151B91EA0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 * L_0 = (U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 *)il2cpp_codegen_object_new(U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAE42A54E8829AE4AA048615944B24D71CC3B94AA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.TileSetUtil/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE42A54E8829AE4AA048615944B24D71CC3B94AA (U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.TileSetUtil/<>c::<GetDepth>b__3_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetDepthU3Eb__3_0_m6BA6783B63AEAD62F51A75C7052CAA88387ACB9F (U3CU3Ec_tF8B44F04CB63A9B4CDCDB7FB4557D0E2077DE7A3 * __this, int32_t ___d0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___d0;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m807EC69E991375273C3DC465365C3E0D02F17121 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 * L_0 = (U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 *)il2cpp_codegen_object_new(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD97617CE690207F65909EF20DB9EEA735C531030(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD97617CE690207F65909EF20DB9EEA735C531030 (U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c::<GetProperty>b__11_1(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetPropertyU3Eb__11_1_m026DCDDF4D40613AAA43E83D65B3E85681FAD3B8 (U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___ip0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___ip0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m18CA9A534EDBB34A6D8417BF8C4A63A1F14055A7 (U3CU3Ec__DisplayClass11_0_t6B99D7E894E0B8654328BDAB3DFDD1C4A83FE8FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass11_0::<GetProperty>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass11_0_U3CGetPropertyU3Eb__0_m145E230BE3E466562F99554CB43FB547DF5D5E24 (U3CU3Ec__DisplayClass11_0_t6B99D7E894E0B8654328BDAB3DFDD1C4A83FE8FE * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_mF2CB9D79F1B0E63B8E2C540CEAC1BF23240D1669_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisType_t_m406A32FAC236C1B4B8A0E59BE30C932E829B175A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetPropertyU3Eb__11_1_m026DCDDF4D40613AAA43E83D65B3E85681FAD3B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * G_B9_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B9_1 = NULL;
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * G_B8_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B8_1 = NULL;
	{
		String_t* L_0 = __this->get_name_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = __this->get_name_0();
		PropertyInfo_t * L_2 = ___p0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		Type_t * L_5 = __this->get_propertyType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_7 = __this->get_propertyType_1();
		PropertyInfo_t * L_8 = ___p0;
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Type_op_Inequality_m519B1E8F2F1E2101ADF863401FCAE38210395368(L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		RuntimeObject* L_11 = __this->get_indexParameters_2();
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		PropertyInfo_t * L_12 = ___p0;
		NullCheck(L_12);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_13;
		L_13 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(23 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var);
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_14 = ((U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var))->get_U3CU3E9__11_1_1();
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_15 = L_14;
		G_B8_0 = L_15;
		G_B8_1 = L_13;
		if (L_15)
		{
			G_B9_0 = L_15;
			G_B9_1 = L_13;
			goto IL_006d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var);
		U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0 * L_16 = ((U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_17 = (Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF *)il2cpp_codegen_object_new(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF_il2cpp_TypeInfo_var);
		Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec_U3CGetPropertyU3Eb__11_1_m026DCDDF4D40613AAA43E83D65B3E85681FAD3B8_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mFEE173F2E6F13D352AE7E8F0A74C3FD0230256D0_RuntimeMethod_var);
		Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * L_18 = L_17;
		((U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB0C0D52808C75674BBF89E116B4EB993C799BC0_il2cpp_TypeInfo_var))->set_U3CU3E9__11_1_1(L_18);
		G_B9_0 = L_18;
		G_B9_1 = G_B8_1;
	}

IL_006d:
	{
		RuntimeObject* L_19;
		L_19 = Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_mF2CB9D79F1B0E63B8E2C540CEAC1BF23240D1669((RuntimeObject*)(RuntimeObject*)G_B9_1, G_B9_0, /*hidden argument*/Enumerable_Select_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_TisType_t_mF2CB9D79F1B0E63B8E2C540CEAC1BF23240D1669_RuntimeMethod_var);
		RuntimeObject* L_20 = __this->get_indexParameters_2();
		bool L_21;
		L_21 = Enumerable_SequenceEqual_TisType_t_m406A32FAC236C1B4B8A0E59BE30C932E829B175A(L_19, L_20, /*hidden argument*/Enumerable_SequenceEqual_TisType_t_m406A32FAC236C1B4B8A0E59BE30C932E829B175A_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		return (bool)0;
	}

IL_0081:
	{
		return (bool)1;
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
// System.Void Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m6D4CFA905CC6F9A95A77380EE2302BAB3220EF67 (U3CU3Ec__DisplayClass12_0_t94EC4C2F39D83FAB0C6BA91E4CFBA74E71AFE9F8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Utilities.TypeExtensions/<>c__DisplayClass12_0::<GetMember>b__0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass12_0_U3CGetMemberU3Eb__0_m8C365C06B3B7DC00FEAA00C3C6F7A1C892AEDD4A (U3CU3Ec__DisplayClass12_0_t94EC4C2F39D83FAB0C6BA91E4CFBA74E71AFE9F8 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		int32_t L_1;
		L_1 = TypeExtensions_MemberType_m38785C3A1D076CD680CFC05D8D6A324FDCAA8BF9(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_memberType_0();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		return (bool)1;
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
// System.Void Vuforia.UnityVersionUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD54697B0EE8C8E2C951EAF27DA9BAF3B796BD589 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 * L_0 = (U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 *)il2cpp_codegen_object_new(U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4C0CF894B69EDA34AD12A99AD794E38C999EEAD6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.UnityVersionUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4C0CF894B69EDA34AD12A99AD794E38C999EEAD6 (U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.UnityVersionUtility/<>c::<VersionGreaterOrEqualThan>b__1_0(System.Version,System.Version)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CVersionGreaterOrEqualThanU3Eb__1_0_mA3CA13895F97EB0C01D2A69A16C99E781845FE10 (U3CU3Ec_t27D9F279CA161BFA2C6765B26D35FB514A463E84 * __this, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___ver0, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___refVer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_0 = ___ver0;
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_1 = ___refVer1;
		IL2CPP_RUNTIME_CLASS_INIT(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Version_op_GreaterThanOrEqual_m0C8A5AC72FD23D7DE3C3852C0B2259C8D546AFAE(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Vuforia.Internal.Observers.ValidationAreaObserver/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6F23FEE3845AE774CEF2A115126ECE5930B13BA1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 * L_0 = (U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 *)il2cpp_codegen_object_new(U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDF5A1E33164DDD40D97561ED7BC9B291B9F94C03(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Observers.ValidationAreaObserver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDF5A1E33164DDD40D97561ED7BC9B291B9F94C03 (U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.Internal.Observers.ValidationAreaObserver/<>c::<get_AvailableLabels>b__18_0(Vuforia.IVuValidationAreaLabel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_AvailableLabelsU3Eb__18_0_mCAEB8021770C897042A5C637FFE980A56CD3ECBC (U3CU3Ec_tEFCC7F6AC724512E9295E79DE7D7CFD36480EC82 * __this, RuntimeObject* ___label0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVuValidationAreaLabel_tCA1963A9C8BBB9768EEED31D397BC411455D49F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___label0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Vuforia.IVuValidationAreaLabel::get_Name() */, IVuValidationAreaLabel_tCA1963A9C8BBB9768EEED31D397BC411455D49F7_il2cpp_TypeInfo_var, L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VideoBackgroundConfigMigrator/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA769C4B0991CF2CD8255B5F9CDA077AFA837CE5B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 * L_0 = (U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 *)il2cpp_codegen_object_new(U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m10FEE19F37672B865B7678296AB127655AF8D335(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.VideoBackgroundConfigMigrator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10FEE19F37672B865B7678296AB127655AF8D335 (U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VideoBackgroundConfigMigrator/<>c::<MigrateAll>b__2_0(Vuforia.AMigratableVideoBackgroundConfigProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CMigrateAllU3Eb__2_0_m1D3F10BF3671FEAC7BE3C6544B587DC12EF6C7AD (U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 * __this, AMigratableVideoBackgroundConfigProperty_t00B6AEFBA2B8CC7F7447366D391A5C26D99F2861 * ___p0, const RuntimeMethod* method)
{
	{
		AMigratableVideoBackgroundConfigProperty_t00B6AEFBA2B8CC7F7447366D391A5C26D99F2861 * L_0 = ___p0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Vuforia.AMigratableVideoBackgroundConfigProperty::Migrate() */, L_0);
		return L_1;
	}
}
// System.Boolean Vuforia.VideoBackgroundConfigMigrator/<>c::<MigrateAll>b__2_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CMigrateAllU3Eb__2_1_mEC1AABA30AE127F48BB7FCDD7659ED24A435F1D2 (U3CU3Ec_tF3B25C7A471C423399AF5D817D192D1A62BBD339 * __this, bool ___migrationPerformed0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___migrationPerformed0;
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
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour::SetDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullBackgroundBehaviour_SetDirty_m249B196BD58CCE516A91E1119E1D696999B809A7 (NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour::UpdateVideoBackgroundMesh(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullBackgroundBehaviour_UpdateVideoBackgroundMesh_m845EC74C426B45C8B4FF5F8EDA15EB4D13F38264 (NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projectionMatrix0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___vbProjectionMatrix1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___fovRads2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Material Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour::get_Material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * NullBackgroundBehaviour_get_Material_m8B1E8A2D0D7734FC5DCA05678DB00D19AE86DD28 (NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B * __this, const RuntimeMethod* method)
{
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_U3CMaterialU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour::set_Material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullBackgroundBehaviour_set_Material_mE90A923B593A3EB09A9824A04B4D742FB22E2C7A (NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method)
{
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___value0;
		__this->set_U3CMaterialU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullBackgroundBehaviour_Dispose_m6286AC8D29871210B66F23B72212BBBF33918650 (NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullBackgroundBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullBackgroundBehaviour__ctor_m362B74469620560AF10D5A3CB3DDCD74314CABB3 (NullBackgroundBehaviour_tD33D052A9E017435EA4275B7770AC028C002093B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.Texture Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullTextureUpdater::get_VideoBackgroundTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * NullTextureUpdater_get_VideoBackgroundTexture_mBEE72498F7D79C5B599DA2C2C9FB87554218E894 (NullTextureUpdater_t510AEBCC3EDE757F2677773D9B577D5A56133626 * __this, const RuntimeMethod* method)
{
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = __this->get_U3CVideoBackgroundTextureU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullTextureUpdater::Update(System.Collections.Generic.IList`1<Vuforia.Image>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextureUpdater_Update_m15B19DE6795531462793C51A46E038F91A4CBD56 (NullTextureUpdater_t510AEBCC3EDE757F2677773D9B577D5A56133626 * __this, RuntimeObject* ___images0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullTextureUpdater::Init(UnityEngine.Material,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextureUpdater_Init_m608DB4985C809FE88DC5D2708CD1C4DA780A5739 (NullTextureUpdater_t510AEBCC3EDE757F2677773D9B577D5A56133626 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___vbMaterial0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___arCamera1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullTextureUpdater::Deinit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextureUpdater_Deinit_m000740AEFEA6699C2E8D56BF0406E050AED0F52C (NullTextureUpdater_t510AEBCC3EDE757F2677773D9B577D5A56133626 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundRenderer/NullTextureUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullTextureUpdater__ctor_mF26DEF8DBBD84F8485311F12E77AC4C97F93C744 (NullTextureUpdater_t510AEBCC3EDE757F2677773D9B577D5A56133626 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB84A7758D5DF6B9079BB180A5A8890BA8B875BAA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * L_0 = (U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 *)il2cpp_codegen_object_new(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m867F2F12BA9928FDD4DB138C4322369495FEF259(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m867F2F12BA9928FDD4DB138C4322369495FEF259 (U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::<.ctor>b__16_0(System.Collections.Generic.IList`1<Vuforia.Image>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__16_0_mBB1594C1B34DF881FA70CADCC7E21B9415C3E9D2 (U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * __this, RuntimeObject* ___images0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::<Deinit>b__21_0(System.Collections.Generic.IList`1<Vuforia.Image>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CDeinitU3Eb__21_0_m89CA938E5799073C923509C2DA49DB70390A9060 (U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * __this, RuntimeObject* ___textures0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c::<SetupTextureUpdating>b__28_2(Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CSetupTextureUpdatingU3Eb__28_2_m6C524097B9278DAA37D298FA7AE7740E66909D23 (U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * __this, TextureData_t844E802A25614A015B160F82144E2EE9E2C50367  ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextureData_t844E802A25614A015B160F82144E2EE9E2C50367  L_0 = ___t0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = L_0.get_Texture_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m7E408D4287F169F714A91F4D823A0BEF6090C11F(L_1, /*hidden argument*/NULL);
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
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_mEDB96D694AF2334FDC50783AA50D14EA5A5E674A (U3CU3Ec__DisplayClass27_0_t9A60575263DAF1CB08CE1C6F2D14CEEBEF47159B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass27_0::<UpdateTextures>b__0(Vuforia.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CUpdateTexturesU3Eb__0_m97A4257453E97E9248D1BC107D72B1D0F82A23DB (U3CU3Ec__DisplayClass27_0_t9A60575263DAF1CB08CE1C6F2D14CEEBEF47159B * __this, Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * ___c0, const RuntimeMethod* method)
{
	{
		Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * L_0 = ___c0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Image_get_Width_m183D5172A02BFED51ED219C18A82D4A69B692F6E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_width_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002b;
		}
	}
	{
		Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * L_3 = ___c0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Image_get_Height_m434E6CBF861A627091493D1340926A2FBD1C4ACD(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_height_1();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * L_6 = ___c0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Image_get_PixelFormat_mBD7327BCED0C3027180A3492AD8D856DF5310B7C(L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_format_2();
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass27_0::<UpdateTextures>b__1(Vuforia.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass27_0_U3CUpdateTexturesU3Eb__1_m3561E1150F50BD6708BAE7526879C7DE18FB831F (U3CU3Ec__DisplayClass27_0_t9A60575263DAF1CB08CE1C6F2D14CEEBEF47159B * __this, Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * ___c0, const RuntimeMethod* method)
{
	{
		Image_tEA90BDBB0131379427A1282935D21313F94DFDB1 * L_0 = ___c0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Image_get_PixelFormat_mBD7327BCED0C3027180A3492AD8D856DF5310B7C(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_format_2();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_mCD5609057F21197F6334D79A62F9F1190760B651 (U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0::<SetupTextureUpdating>b__0(System.Collections.Generic.IList`1<Vuforia.Image>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CSetupTextureUpdatingU3Eb__0_m1919DDF3F76F7F0223BC3860BA13ACBCAA89CC0B (U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7 * __this, RuntimeObject* ___images0, const RuntimeMethod* method)
{
	{
		VideoBackgroundTextureUpdater_tE2F46D619E70C24075279CFEB8235450B688D9B1 * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = ___images0;
		List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * L_2 = __this->get_textures_1();
		int32_t L_3 = __this->get_imageWidth_2();
		int32_t L_4 = __this->get_imageHeight_3();
		int32_t L_5 = __this->get_nativePixelFormat_4();
		NullCheck(L_0);
		VideoBackgroundTextureUpdater_UpdateTextures_m1B00EF91F462B6FE25C9A234F28B4E0E508E8A3E(L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass28_0::<SetupTextureUpdating>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0_U3CSetupTextureUpdatingU3Eb__1_m918D4E9E83450E48A1ADECF6F7A7ABA5C67757C3 (U3CU3Ec__DisplayClass28_0_tDBD80EE983AA52D199865E6A2D575C62A6E241B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9DD8647E4225278CC2A761B61E2242F872066918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m8DD394273424AF26BE4A4516C68FC5993CB3051A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetupTextureUpdatingU3Eb__28_2_m6C524097B9278DAA37D298FA7AE7740E66909D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * G_B2_0 = NULL;
	List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * G_B2_1 = NULL;
	Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * G_B1_0 = NULL;
	List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * G_B1_1 = NULL;
	{
		List_1_tE0D038D3B48FF84E86879A46038D07747742A26F * L_0 = __this->get_textures_1();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var);
		Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * L_1 = ((U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var))->get_U3CU3E9__28_2_3();
		Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var);
		U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0 * L_3 = ((U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * L_4 = (Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 *)il2cpp_codegen_object_new(Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59_il2cpp_TypeInfo_var);
		Action_1__ctor_m9DD8647E4225278CC2A761B61E2242F872066918(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CSetupTextureUpdatingU3Eb__28_2_m6C524097B9278DAA37D298FA7AE7740E66909D23_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9DD8647E4225278CC2A761B61E2242F872066918_RuntimeMethod_var);
		Action_1_t8895EAF22A5095CCE9D93CDAF4949A049E8B7B59 * L_5 = L_4;
		((U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t40D9F571AD2ABBF04C3B8D3872D3AC22E497AAD0_il2cpp_TypeInfo_var))->set_U3CU3E9__28_2_3(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		List_1_ForEach_m8DD394273424AF26BE4A4516C68FC5993CB3051A(G_B2_1, G_B2_0, /*hidden argument*/List_1_ForEach_m8DD394273424AF26BE4A4516C68FC5993CB3051A_RuntimeMethod_var);
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
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mAD5255AA513D6FA6206BFC81CF61BE738B344343 (U3CU3Ec__DisplayClass31_0_t1FD1E7DDE31A2D094BB5E6D565450E9977C8FFF4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass31_0::<EnableShaderKeyword>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CEnableShaderKeywordU3Eb__0_m675A5919220752E4C5AFEC4A29099893639BA99D (U3CU3Ec__DisplayClass31_0_t1FD1E7DDE31A2D094BB5E6D565450E9977C8FFF4 * __this, String_t* ___k0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___k0;
		String_t* L_1 = __this->get_keyword_0();
		bool L_2;
		L_2 = String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/<>c__DisplayClass31_0::<EnableShaderKeyword>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CEnableShaderKeywordU3Eb__1_m36A4007DA5E5E580B5839973F6917F8A62D0FFBC (U3CU3Ec__DisplayClass31_0_t1FD1E7DDE31A2D094BB5E6D565450E9977C8FFF4 * __this, String_t* ___k0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___k0;
		String_t* L_1 = __this->get_keyword_0();
		bool L_2;
		L_2 = String_op_Inequality_m45BEBD9C59D474454BD0F4AB6C9A8A2D05D40DBE(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// Conversion methods for marshalling of: Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData
IL2CPP_EXTERN_C void TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshal_pinvoke(const TextureData_t844E802A25614A015B160F82144E2EE9E2C50367& unmarshaled, TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Texture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Texture' of type 'TextureData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Texture_0Exception, NULL);
}
IL2CPP_EXTERN_C void TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshal_pinvoke_back(const TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshaled_pinvoke& marshaled, TextureData_t844E802A25614A015B160F82144E2EE9E2C50367& unmarshaled)
{
	Exception_t* ___Texture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Texture' of type 'TextureData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Texture_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData
IL2CPP_EXTERN_C void TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshal_pinvoke_cleanup(TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData
IL2CPP_EXTERN_C void TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshal_com(const TextureData_t844E802A25614A015B160F82144E2EE9E2C50367& unmarshaled, TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshaled_com& marshaled)
{
	Exception_t* ___Texture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Texture' of type 'TextureData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Texture_0Exception, NULL);
}
IL2CPP_EXTERN_C void TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshal_com_back(const TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshaled_com& marshaled, TextureData_t844E802A25614A015B160F82144E2EE9E2C50367& unmarshaled)
{
	Exception_t* ___Texture_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Texture' of type 'TextureData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Texture_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData
IL2CPP_EXTERN_C void TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshal_com_cleanup(TextureData_t844E802A25614A015B160F82144E2EE9E2C50367_marshaled_com& marshaled)
{
}
// System.Void Vuforia.Internal.Rendering.VideoBackgroundTextureUpdater/TextureData::.ctor(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureData__ctor_m5E6D94EEE81502CF641B18FFE13071F24825979C (TextureData_t844E802A25614A015B160F82144E2EE9E2C50367 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, int32_t ___bufferLength1, const RuntimeMethod* method)
{
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		__this->set_Texture_0(L_0);
		int32_t L_1 = ___bufferLength1;
		__this->set_BufferLength_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TextureData__ctor_m5E6D94EEE81502CF641B18FFE13071F24825979C_AdjustorThunk (RuntimeObject * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, int32_t ___bufferLength1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TextureData_t844E802A25614A015B160F82144E2EE9E2C50367 * _thisAdjusted = reinterpret_cast<TextureData_t844E802A25614A015B160F82144E2EE9E2C50367 *>(__this + _offset);
	TextureData__ctor_m5E6D94EEE81502CF641B18FFE13071F24825979C(_thisAdjusted, ___texture0, ___bufferLength1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.Voxel/<BuildContentMesh>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildContentMeshU3Ed__31__ctor_m57AE6917F4FEE3DCF02BDF377EBBDE28922BC324 (U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.Voxel/<BuildContentMesh>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildContentMeshU3Ed__31_System_IDisposable_Dispose_m758A579C5114916063B6B571026180D3263DCBE4 (U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.Voxel/<BuildContentMesh>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBuildContentMeshU3Ed__31_MoveNext_m5BD701C2C8E79CD09B169EB4D7B0218D0D394E40 (U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * V_1 = NULL;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_2 = NULL;
	MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * G_B4_0 = NULL;
	MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_3, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = L_3;
		Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * L_5 = V_1;
		NullCheck(L_5);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_6 = L_5->get_mVoxelBounds_12();
		NullCheck(L_4);
		Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A(L_4, L_6, /*hidden argument*/NULL);
		V_2 = L_4;
		MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * L_7 = __this->get_meshBuildCallback_3();
		MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_0038;
		}
	}
	{
		goto IL_003e;
	}

IL_0038:
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_9 = V_2;
		NullCheck(G_B4_0);
		MeshBuildCallback_Invoke_m83929F74F223F6BBC6E87CE50A01E2A4856ABC93(G_B4_0, L_9, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return (bool)0;
	}
}
// System.Object Vuforia.Voxel/<BuildContentMesh>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildContentMeshU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m86882C66BEFF48B0714627527AC1DBC977288CC4 (U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.Voxel/<BuildContentMesh>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBuildContentMeshU3Ed__31_System_Collections_IEnumerator_Reset_m9927F6BCB6553B94936D2E9D7BC54C1FDDA442AC (U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBuildContentMeshU3Ed__31_System_Collections_IEnumerator_Reset_m9927F6BCB6553B94936D2E9D7BC54C1FDDA442AC_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.Voxel/<BuildContentMesh>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBuildContentMeshU3Ed__31_System_Collections_IEnumerator_get_Current_m1C67174272530B7646617949E8A27742C29F6CE0 (U3CBuildContentMeshU3Ed__31_t908B7E8682EC6170B548F023F95E8366EFDD3465 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Vuforia.Voxel/MeshBuildCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuildCallback__ctor_mD2F46EA9965BBB9B133B4E9B464FA3FC6F30A2B1 (MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Vuforia.Voxel/MeshBuildCallback::Invoke(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuildCallback_Invoke_m83929F74F223F6BBC6E87CE50A01E2A4856ABC93 (MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___mesh0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___mesh0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___mesh0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___mesh0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___mesh0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___mesh0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___mesh0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(targetMethod, targetThis, ___mesh0);
					else
						GenericVirtActionInvoker1< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(targetMethod, targetThis, ___mesh0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___mesh0);
					else
						VirtActionInvoker1< Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___mesh0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___mesh0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___mesh0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Vuforia.Voxel/MeshBuildCallback::BeginInvoke(UnityEngine.Mesh,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MeshBuildCallback_BeginInvoke_m9988709DE61A46BCE72DFFE05A71A2D94787E1DD (MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___mesh0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Vuforia.Voxel/MeshBuildCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuildCallback_EndInvoke_mE8A4CB5F30A1BCCE22ED3A1D584B91F7706E7DD0 (MeshBuildCallback_t61DA9F699F3EE6781C5CEB8CDC5CE06CB8F8E95B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateVisibleTilesU3Ed__33__ctor_m945CFF1DE76F040A3F2DA5336BCCEA220B23A68E (U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateVisibleTilesU3Ed__33_System_IDisposable_Dispose_m2C754333513CAE3A26C47C336D69DCDB9CA5CD54 (U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateVisibleTilesU3Ed__33_MoveNext_mC1047BB847475ADF1AD79D2CE550636DBA669F69 (U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mBF1ED5DF8DCF2E42E7411B7F895F8F60792A9487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0099;
			}
			case 3:
			{
				goto IL_00d4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_3 = (PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD*)(PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD*)SZArrayNew(PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_U3CfrustumPlanesU3E5__2_3(L_3);
		goto IL_00db;
	}

IL_003e:
	{
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_4 = V_1;
		NullCheck(L_4);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = L_4->get_mActiveCamera_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005c:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00db;
	}

IL_0065:
	{
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_7 = V_1;
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_8 = __this->get_U3CfrustumPlanesU3E5__2_3();
		NullCheck(L_7);
		VoxelTree_CalculateFrustumPlanes_m10A0556FD578C61177AC8DD48F3F33BF2923E1D7(L_7, L_8, /*hidden argument*/NULL);
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_9 = V_1;
		NullCheck(L_9);
		VoxelTree_RemoveNonVisibleVoxels_m0C3CD71B78A978F5EDD3FD100F1AC9CD92C86C20(L_9, /*hidden argument*/NULL);
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_10 = V_1;
		NullCheck(L_10);
		Dictionary_2_t9EF62BA76F15B0F7AE79182F29142AE5671943F4 * L_11 = L_10->get_mContentTiles_16();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Dictionary_2_get_Count_mBF1ED5DF8DCF2E42E7411B7F895F8F60792A9487(L_11, /*hidden argument*/Dictionary_2_get_Count_mBF1ED5DF8DCF2E42E7411B7F895F8F60792A9487_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)5000))))
		{
			goto IL_00a2;
		}
	}
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0099:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00db;
	}

IL_00a2:
	{
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_13 = V_1;
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_14 = V_1;
		NullCheck(L_14);
		Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * L_15 = L_14->get_RootVoxel_8();
		NullCheck(L_15);
		PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC * L_16 = L_15->get_Tile_5();
		PlaneU5BU5D_t33BCF5C401A053481BF4098B8D32E6C5DD53B9FD* L_17 = __this->get_U3CfrustumPlanesU3E5__2_3();
		NullCheck(L_13);
		VoxelTree_SearchForVisibleVoxelsAndCreateContentTiles_m491027C1257170005C3CDE3E9FAF181BBC0A71F0(L_13, L_16, L_17, /*hidden argument*/NULL);
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_18 = V_1;
		NullCheck(L_18);
		VoxelTree_UpdateMeshConstructions_m6C69F6A4D6F6B7B0B9D47F3F6D06FA00D588D74F(L_18, /*hidden argument*/NULL);
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_19 = V_1;
		NullCheck(L_19);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_20 = L_19->get_mVoxelCheckWait_19();
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00d4:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00db:
	{
		VoxelTree_t7C87E3B83458C6F3D45A1305C754726031EFC751 * L_21 = V_1;
		NullCheck(L_21);
		Voxel_tB3513A50C0B843146DBCDAB4EAF9E8A371A8BA82 * L_22 = L_21->get_RootVoxel_8();
		NullCheck(L_22);
		PCTile_t54D79B50D31B7F6CBD0BF432B8C6EAB1B2437BEC * L_23 = L_22->get_Tile_5();
		if (L_23)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateVisibleTilesU3Ed__33_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m953BA1AFA315F4C224E61EA8ACE2B32D7AD132E1 (U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateVisibleTilesU3Ed__33_System_Collections_IEnumerator_Reset_m4162869E8314CADA30C2AEF650575081E53B6D3B (U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateVisibleTilesU3Ed__33_System_Collections_IEnumerator_Reset_m4162869E8314CADA30C2AEF650575081E53B6D3B_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.VoxelTree/<UpdateVisibleTiles>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUpdateVisibleTilesU3Ed__33_System_Collections_IEnumerator_get_Current_mC02489B6B922FDB53A8DFDD8EDF5770C9FF9683C (U3CUpdateVisibleTilesU3Ed__33_tEF02923AE7C461DC4E7FFEACCA86E2A019757288 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Vuforia.VuMarkInstancesManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE15CD2D88E7148F48C32E7E20B6E2A019A790158 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 * L_0 = (U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 *)il2cpp_codegen_object_new(U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2E5BD34BDBA1DA32B422AE05DC1F8A93904AA62F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.VuMarkInstancesManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2E5BD34BDBA1DA32B422AE05DC1F8A93904AA62F (U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Vuforia.VuMarkBehaviour Vuforia.VuMarkInstancesManager/<>c::<CleanUntrackedBehavioursCache>b__15_1(Vuforia.VuMarkBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * U3CU3Ec_U3CCleanUntrackedBehavioursCacheU3Eb__15_1_mF3891990A8A748C9ECD393D651F0E504ED6073EC (U3CU3Ec_t8FF545E9D148DF5771296E4A72596CCC82F00629 * __this, VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * ___b0, const RuntimeMethod* method)
{
	{
		VuMarkBehaviour_t0AA6A311FEEA9FC34EE628BE9CBB2374B68B5EB2 * L_0 = ___b0;
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
// System.Void Vuforia.Internal.Observers.VuMarkObserver/VuMarkObservationFilterComponent::.ctor(Vuforia.Internal.Observers.IObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkObservationFilterComponent__ctor_m3B426C5B4EB57753A77E75B40180CB16B69A7455 (VuMarkObservationFilterComponent_tC2910136BDB6F9CC234BD63B977FEEF84905C1E8 * __this, RuntimeObject* ___observer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___observer0;
		AObservationFilterComponent__ctor_m78CE67A72AB4752D27D5B273F0B12184E47D09F7(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___observer0;
		__this->set_mObserver_3(((VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 *)CastclassClass((RuntimeObject*)L_1, VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_il2cpp_TypeInfo_var)));
		return;
	}
}
// Vuforia.Internal.Observers.IObserver Vuforia.Internal.Observers.VuMarkObserver/VuMarkObservationFilterComponent::GetObservationHandlerInternal(Vuforia.IVuObservation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuMarkObservationFilterComponent_GetObservationHandlerInternal_mE51F57B8ED7A506384BD94B4FB2765663B9868E4 (VuMarkObservationFilterComponent_tC2910136BDB6F9CC234BD63B977FEEF84905C1E8 * __this, RuntimeObject* ___observation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB5C82BAB68BE635BD42FB4F1EF7D5CCCC20B33CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * V_1 = NULL;
	{
		RuntimeObject* L_0 = ___observation0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99_il2cpp_TypeInfo_var)));
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Vuforia.IVuMarkObservation::get_RuntimeId() */, IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99_il2cpp_TypeInfo_var)));
		V_0 = L_1;
		VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * L_2 = __this->get_mObserver_3();
		NullCheck(L_2);
		Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * L_3 = L_2->get_mTrackedInstances_10();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mB5C82BAB68BE635BD42FB4F1EF7D5CCCC20B33CE(L_3, L_4, (VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mB5C82BAB68BE635BD42FB4F1EF7D5CCCC20B33CE_RuntimeMethod_var);
		VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * L_6 = V_1;
		return L_6;
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
// System.Void Vuforia.Internal.Observers.VuMarkObserver/VuMarkPreProcessObservationComponent::.ctor(Vuforia.Internal.Observers.IObserver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkPreProcessObservationComponent__ctor_m21D81DD0DCF7F5E95A01B4DAA1CF796D5066E403 (VuMarkPreProcessObservationComponent_tDA6BEB5A2FC24E0BF612907841BC5D11CC57602F * __this, RuntimeObject* ___observer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___observer0;
		AObserverComponent__ctor_mB42F5B5C505441FA81E8B136FB62BAD374FBC48E(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___observer0;
		__this->set_mObserver_3(((VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 *)CastclassClass((RuntimeObject*)L_1, VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Vuforia.Internal.Observers.VuMarkObserver/VuMarkPreProcessObservationComponent::PreprocessObservation(Vuforia.IVuObservation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkPreProcessObservationComponent_PreprocessObservation_mC6E33561F9089DF30173AAD2653B17285D18CA8E (VuMarkPreProcessObservationComponent_tDA6BEB5A2FC24E0BF612907841BC5D11CC57602F * __this, RuntimeObject* ___observation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB5C82BAB68BE635BD42FB4F1EF7D5CCCC20B33CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVuObservationWithPose_t9E3EB9BF7871428D4F9EA458935951BBD477A2A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * V_3 = NULL;
	{
		RuntimeObject* L_0 = ___observation0;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Vuforia.IVuMarkObservation::get_RuntimeId() */, IVuMarkObservation_tDC2F7115DFBCF63ACEF70110B9331660621F8C99_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE  L_4;
		L_4 = InterfaceFuncInvoker0< VuPoseInfo_t54F649DE7709471D546DBDCC1F7D7B8CB05AC4BE  >::Invoke(0 /* Vuforia.VuPoseInfo Vuforia.IVuObservationWithPose::get_PoseInfo() */, IVuObservationWithPose_t9E3EB9BF7871428D4F9EA458935951BBD477A2A2_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = L_4.get_poseStatus_0();
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * L_6 = __this->get_mObserver_3();
		NullCheck(L_6);
		Dictionary_2_t234B69EB8BB4F62F73E0BFC3A3C14994AF098D47 * L_7 = L_6->get_mTrackedInstances_10();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_TryGetValue_mB5C82BAB68BE635BD42FB4F1EF7D5CCCC20B33CE(L_7, L_8, (VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 **)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_mB5C82BAB68BE635BD42FB4F1EF7D5CCCC20B33CE_RuntimeMethod_var);
		VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * L_10 = V_3;
		bool L_11 = V_2;
		if (!((int32_t)((int32_t)((((RuntimeObject*)(VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 *)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)&(int32_t)L_11)))
		{
			goto IL_0049;
		}
	}
	{
		VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * L_12 = __this->get_mObserver_3();
		RuntimeObject* L_13 = V_0;
		NullCheck(L_12);
		VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * L_14;
		L_14 = VuMarkObserver_StartTrackingInstance_m5DB77590A2BB42D43E01C6FDE65DFA1F13C439EC(L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
	}

IL_0049:
	{
		VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * L_15 = V_3;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_005b;
		}
	}
	{
		VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * L_17 = __this->get_mObserver_3();
		VuMarkInstance_tDC0372EA6155B56218B33D4AC3496D0EC77A9794 * L_18 = V_3;
		NullCheck(L_17);
		VuMarkObserver_StopTrackingInstance_m758F2F263933003A242D12B933B6CCF2B0033EDA(L_17, L_18, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void Vuforia.Internal.Observers.VuMarkObserver/VuMarkPreProcessObservationComponent::OnObserverDeactivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkPreProcessObservationComponent_OnObserverDeactivated_mBB49A120833423F973909EF0A54F6E9F0BC26818 (VuMarkPreProcessObservationComponent_tDA6BEB5A2FC24E0BF612907841BC5D11CC57602F * __this, const RuntimeMethod* method)
{
	{
		VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * L_0 = __this->get_mObserver_3();
		NullCheck(L_0);
		VuMarkObserver_StopTrackingAllInstances_mD09F31B2CE3E3CBC6099FEB36CB943ECBA320A69(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.Internal.Observers.VuMarkObserver/VuMarkPreProcessObservationComponent::OnObserverDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuMarkPreProcessObservationComponent_OnObserverDestroyed_m52868F3D31BA291F14025643174994B083159279 (VuMarkPreProcessObservationComponent_tDA6BEB5A2FC24E0BF612907841BC5D11CC57602F * __this, const RuntimeMethod* method)
{
	{
		VuMarkObserver_tD0936F103C0041228AD63B954C3E88815B03E479 * L_0 = __this->get_mObserver_3();
		NullCheck(L_0);
		VuMarkObserver_StopTrackingAllInstances_mD09F31B2CE3E3CBC6099FEB36CB943ECBA320A69(L_0, (bool)1, /*hidden argument*/NULL);
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
// System.Void Vuforia.VuforiaBehaviour/<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m73B8C5785154737D1D4E93AD156E3726BBA05247 (U3CU3Ec__DisplayClass37_0_tABD9FBBABBF530EEC15EA0ACA81D92A9B26D8440 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<System.Int32> Vuforia.VuforiaBehaviour/<>c__DisplayClass37_0::<SetWorldCenter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  U3CU3Ec__DisplayClass37_0_U3CSetWorldCenterU3Eb__0_m286C4DA5AFADB273C4EE5EFFF2F3C1A7AF63B2A5 (U3CU3Ec__DisplayClass37_0_tABD9FBBABBF530EEC15EA0ACA81D92A9B26D8440 * __this, const RuntimeMethod* method)
{
	{
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = __this->get_observerBehaviour_0();
		NullCheck(L_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1;
		L_1 = ObserverBehaviour_get_ID_m0BFABFE2C1BB4ED405745BFE3ACAA22F101C6799(L_0, /*hidden argument*/NULL);
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
// System.Boolean Vuforia.VuforiaConfiguration/DatabaseConfiguration::get_DisableModelExtraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseConfiguration_get_DisableModelExtraction_m16C8D49F137A490969813331DE11E3C0C3B85C9E (DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disableModelExtraction_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/DatabaseConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseConfiguration__ctor_mEF9D78BC39B35128B2C1BDD6F018821F6D3A2062 (DatabaseConfiguration_tAA9EE01F50216360C4257CC06AD4BD24D6F2E59D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::get_AutoInitAndStartTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceTrackerConfiguration_get_AutoInitAndStartTracker_mDF041BFAB5D94B24FA07A15A141EB0C439C63FA3 (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_autoStartTracker_1();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::set_AutoInitAndStartTracker(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration_set_AutoInitAndStartTracker_mC866B2DB04CFF008622BE944F81743FEE5B6A2D0 (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_autoStartTracker_1(L_0);
		return;
	}
}
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration/ARCoreRequirement Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::get_ARCoreRequirementSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceTrackerConfiguration_get_ARCoreRequirementSetting_mC520F2BC52FB9BCCB293B1AD0A8763523C0A508A (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_arcoreRequirement_2();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::set_ARCoreRequirementSetting(Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration/ARCoreRequirement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration_set_ARCoreRequirementSetting_m92044F2A491595DF2C44E0B6B08E7F849702FC82 (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_arcoreRequirement_2(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::get_AutoImportArcoreSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceTrackerConfiguration_get_AutoImportArcoreSetting_m9AAB2DE18B099F5F63BE49A61B6FF6500EAA04D7 (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_autoImportArcore_3();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::set_AutoImportArcoreSetting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration_set_AutoImportArcoreSetting_m86056CDF04CE822D7BBBA20EEBA934CC5EE3E61E (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_autoImportArcore_3(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::get_ThirdPartyARCoreClientDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceTrackerConfiguration_get_ThirdPartyARCoreClientDetected_m0A11779FE958440966B907CA1E271F9F887DB15D (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_thirdPartyARCoreClientDetected_4();
		return L_0;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::get_UseThirdPartySeethroughEyewear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceTrackerConfiguration_get_UseThirdPartySeethroughEyewear_mF482B75761E9AC6B007BA6702797A1E04CA07FFF (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::set_UseThirdPartySeethroughEyewear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration_set_UseThirdPartySeethroughEyewear_m38F3F2E1B42C59DD0A2633997E986F8E092F74CD (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUseThirdPartySeethroughEyewearU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceTrackerConfiguration__ctor_mB8904AB03D7558BC49969035E340825A74B19463 (DeviceTrackerConfiguration_tB1C0524D487A0B42FF77F652FD8841B8C3E546F6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_autoStartTracker_1((bool)1);
		__this->set_arcoreRequirement_2(1);
		__this->set_autoImportArcore_3((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::add_VirtualSceneScaleFactorUpdated(System.Action`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_add_VirtualSceneScaleFactorUpdated_m434B2994BFBE27ED97F12431F6DCCD17076E01C7 (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_1 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_2 = NULL;
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_2 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var));
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_5 = V_2;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_6 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *>((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 **)(((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_address_of_VirtualSceneScaleFactorUpdated_2()), L_5, L_6);
		V_0 = L_7;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_8 = V_0;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_8) == ((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::remove_VirtualSceneScaleFactorUpdated(System.Action`2<System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_remove_VirtualSceneScaleFactorUpdated_mCE351987310615A2E64644B3F8C693066ED0182E (Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_1 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * V_2 = NULL;
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_0 = ((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_1 = V_0;
		V_1 = L_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_2 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)CastclassSealed((RuntimeObject*)L_4, Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2_il2cpp_TypeInfo_var));
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_5 = V_2;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_6 = V_1;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *>((Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 **)(((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_address_of_VirtualSceneScaleFactorUpdated_2()), L_5, L_6);
		V_0 = L_7;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_8 = V_0;
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_8) == ((RuntimeObject*)(Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m8AA6D2ECB5A580D638BD35D85C6D493E1733FA32 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_vuforiaLicenseKey_3();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_LicenseKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_LicenseKey_m66C1F09EDAB24D3E3FE7BD7CE0E12294B822C1A3 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_vuforiaLicenseKey_3(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_UfoLicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_UfoLicenseKey_m5579BA4E4E8241A7A7D258E85D728F2CD3FBD9B1 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_ufoLicenseKey_4();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_UfoLicenseKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_UfoLicenseKey_m8EEBC96C87D419FA8D77F7EA17F69DCE77EF7CFA (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_ufoLicenseKey_4(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_DelayedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_DelayedInitialization_m0AE6E1AE86DD92C0F6588F61C18321D787C69F3B (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_delayedInitialization_5();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_DelayedInitialization(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_DelayedInitialization_m3635B9463224300B0A6FA732933560DC36C4F1E2 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_delayedInitialization_5(L_0);
		return;
	}
}
// Vuforia.FocusMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_CameraFocusMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_CameraFocusMode_mB75FFC1F15EBEC148D448EDDEC1D011375FBDF88 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_cameraFocusModeSetting_6();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_CameraFocusMode(Vuforia.FocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_CameraFocusMode_m20FF7C34BD99A558AED9E94AD63F9F311C820B78 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_cameraFocusModeSetting_6(L_0);
		return;
	}
}
// Vuforia.CameraMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_CameraDeviceMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_CameraDeviceMode_m9FE7F72DD99F8F13FA4295E404DA446542B2E551 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_cameraDeviceModeSetting_7();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_CameraDeviceMode(Vuforia.CameraMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_CameraDeviceMode_m0597FCEE4BA74E33E29C190E2BD5609FDC676C2F (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_cameraDeviceModeSetting_7(L_0);
		return;
	}
}
// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_MaxSimultaneousImageTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_MaxSimultaneousImageTargets_m463E19C52E3BB22C276EDBCCFF85A3FA940427CE (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_maxSimultaneousImageTargets_8();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_MaxSimultaneousImageTargets(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_MaxSimultaneousImageTargets_mE50E90FE1C14937BC64A63611B8D5F39C85AC333 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_maxSimultaneousImageTargets_8(L_0);
		return;
	}
}
// System.Single Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_VirtualSceneScaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GenericVuforiaConfiguration_get_VirtualSceneScaleFactor_mDE8ED9A77EF95C3D92688DF516D0FD6F71AADFFA (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED6317189EDF2D65968A72B77DFC11B4FCB322B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SystemInfo_get_deviceModel_m5540BA8C3484C0D2A93FAEE8F080A09A9F5BB73F(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_0, _stringLiteralED6317189EDF2D65968A72B77DFC11B4FCB322B8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		return (1.0f);
	}

IL_0017:
	{
		float L_2 = __this->get_virtualSceneScaleFactor_10();
		return L_2;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_VirtualSceneScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_VirtualSceneScaleFactor_mC586410BCD12E0C87352B3F3504BD8B9DEF6A230 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t54D930EBCAC78A734F3290D308385D6796983748_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A3AF7D8067F2156CDD2D54C51A7EF7D54C2C06);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Log_t54D930EBCAC78A734F3290D308385D6796983748_il2cpp_TypeInfo_var);
		Log_Error_mED2E0FC89BA0AEF73744D78796A140E628098E0B(_stringLiteralD7A3AF7D8067F2156CDD2D54C51A7EF7D54C2C06, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_ContinuousModelTargetSearch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_ContinuousModelTargetSearch_m7D7A4DD29500FDFCC92038E763A50A971EC250E3 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_modelTargetRecoWhileExtendedTracked_11();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_ContinuousModelTargetSearch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_ContinuousModelTargetSearch_mCEB78BCACD911164031139AA6BE5230B220C99E9 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_modelTargetRecoWhileExtendedTracked_11(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_ShareRecordingsInITunes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_get_ShareRecordingsInITunes_m18AB25C30EF13E0B0EDF69B9B1856CF5BB824CD9 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_shareRecordingsInITunes_12();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_ShareRecordingsInITunes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_ShareRecordingsInITunes_m3760E5AF6E73FE4835F6B2D5EE37718721F74273 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_shareRecordingsInITunes_12(L_0);
		return;
	}
}
// Vuforia.Internal.Utility.LogLevel Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericVuforiaConfiguration_get_LogLevel_m1EAE46616198D399DE1D6E91431A09BE51E9F0EF (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_logLevel_13();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_LogLevel(Vuforia.Internal.Utility.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_LogLevel_mC1E4FA044E8DAEACDBE5C2E668E7ECF8820BAC36 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_logLevel_13(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_Version_m43312F09C8080EAB50E61E473ECE21135F883239 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_version_14();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_Version_m25A27F63BDC8CCFC3400DFBAFA9C6097DD6AD830 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_version_14(L_0);
		return;
	}
}
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_EULAAcceptedVersions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_EULAAcceptedVersions_m3731D08304336B7317E1C5B562AF21D28261C7FD (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_eulaAcceptedVersions_15();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::set_EULAAcceptedVersions(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_set_EULAAcceptedVersions_m502F8BCD70DE5AA8A1055AA8FA8597AD08415BEA (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_eulaAcceptedVersions_15(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::IsUFOEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericVuforiaConfiguration_IsUFOEnabled_m3CBCCB8A0EE02325FFE3937ACF2FA4E08E974BB1 (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_vuforiaLicenseKey_3();
		String_t* L_1 = __this->get_ufoLicenseKey_4();
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = VuforiaRuntimeUtilities_IsUfoEnabled_m174F0B1BAD7EE2A4B2230B903A041D8002F79F95(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ValidateScaleChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration_ValidateScaleChange_m21D2C87FDF4A99A708E894FC8AA62F459F77794E (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B4_0 = NULL;
	Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * G_B3_0 = NULL;
	{
		float L_0 = __this->get_previousVirtualSceneScaleFactor_9();
		float L_1 = __this->get_virtualSceneScaleFactor_10();
		bool L_2;
		L_2 = Mathf_Approximately_mFEB0CB3531393F6CBE07C6E0FCB473B3311F799A(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		float L_3 = __this->get_virtualSceneScaleFactor_10();
		float L_4;
		L_4 = Mathf_Clamp_m5EA831B060853D4246B8394A30599A0021F80AFF(L_3, (9.99999997E-07f), ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		__this->set_virtualSceneScaleFactor_10(L_4);
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_5 = ((GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_StaticFields*)il2cpp_codegen_static_fields_for(GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B_il2cpp_TypeInfo_var))->get_VirtualSceneScaleFactorUpdated_2();
		Action_2_tBA82D2430D3596594262E1ACAD640A8EEB5DB2F2 * L_6 = L_5;
		G_B3_0 = L_6;
		if (L_6)
		{
			G_B4_0 = L_6;
			goto IL_003a;
		}
	}
	{
		goto IL_004b;
	}

IL_003a:
	{
		float L_7 = __this->get_previousVirtualSceneScaleFactor_9();
		float L_8 = __this->get_virtualSceneScaleFactor_10();
		NullCheck(G_B4_0);
		Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89(G_B4_0, L_7, L_8, /*hidden argument*/Action_2_Invoke_m741CB23141BE803CC8139D8C816686CD7B868D89_RuntimeMethod_var);
	}

IL_004b:
	{
		float L_9 = __this->get_virtualSceneScaleFactor_10();
		__this->set_previousVirtualSceneScaleFactor_9(L_9);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericVuforiaConfiguration__ctor_mF593EC6A709798CBB4038B11B50F2D550A51238F (GenericVuforiaConfiguration_t33494582309C865F5EB8820DB317F31BEA03D99B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral197861696CD5E89F2838E06BFD9AC2ADBA1425C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_vuforiaLicenseKey_3(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_ufoLicenseKey_4(_stringLiteral197861696CD5E89F2838E06BFD9AC2ADBA1425C6);
		__this->set_cameraFocusModeSetting_6(2);
		__this->set_cameraDeviceModeSetting_7((-1));
		__this->set_maxSimultaneousImageTargets_8(1);
		__this->set_previousVirtualSceneScaleFactor_9((1.0f));
		__this->set_virtualSceneScaleFactor_10((1.0f));
		__this->set_modelTargetRecoWhileExtendedTracked_11((bool)1);
		__this->set_version_14(_stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1);
		__this->set_eulaAcceptedVersions_15(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.VuforiaConfiguration/PackageInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageInfo__ctor_m068B565492962D347A6DB5C156918E8F38DA5A1B (PackageInfo_t7951B39E18BE00346CFB0EEC1550688B5DF3342F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_ARFoundationVersion_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.String Vuforia.VuforiaConfiguration/PlayModeConfiguration::get_SequencePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayModeConfiguration_get_SequencePath_mD53AAE4431C18EB118D396E9E627659007516837 (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mSequencePath_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/PlayModeConfiguration::set_SequencePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayModeConfiguration_set_SequencePath_m1F6B07B8ACEEB7AF7A1D22A456207D23E6CE7D22 (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_mSequencePath_0(L_0);
		return;
	}
}
// Vuforia.PlayModeType Vuforia.VuforiaConfiguration/PlayModeConfiguration::get_PlayModeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayModeConfiguration_get_PlayModeType_mE2CA1195C4FA5F05B904A18BDD462DFD3D73C0D1 (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_playModeType_1();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/PlayModeConfiguration::set_PlayModeType(Vuforia.PlayModeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayModeConfiguration_set_PlayModeType_m214DB961A0313D929A6FD5FF240961194C3ED409 (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_playModeType_1(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/PlayModeConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayModeConfiguration__ctor_mAA1D1812EAE7C41E80FD97B25FACB136CD8AE11F (PlayModeConfiguration_tE8DA42126B58D2C3350D11ACFA8E4BD48F5D42FF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.Shader Vuforia.VuforiaConfiguration/RequiredShaders::get_DepthMaskShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * RequiredShaders_get_DepthMaskShader_mC43F52CB81E6462CF2AA40E2A144D8317E46854E (RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * __this, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_depthMaskShader_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/RequiredShaders::set_DepthMaskShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredShaders_set_DepthMaskShader_mB77774EBE9E38C724AF9A881AC034E8EEE9513D7 (RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		__this->set_depthMaskShader_0(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/RequiredShaders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredShaders__ctor_m9C7A53F5BA8A9CC525F784F99C4EF8BCDE432CBD (RequiredShaders_t2CB3B1F273320A0E3F0A3D1E8BB9891BA60A6DEE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::get_NumDivisions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoBackgroundConfiguration_get_NumDivisions_mAC177EADD398AC22C04E932F1B146FB8664117B5 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_numDivisions_0();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::set_NumDivisions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_NumDivisions_m0EEE3395E01D21EAA278C90B73EACE886AE2A520 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_numDivisions_0(L_0);
		return;
	}
}
// UnityEngine.Shader Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::get_VideoBackgroundShader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * VideoBackgroundConfiguration_get_VideoBackgroundShader_m999FBC9D2853C0046485593982805B3C1D8BDB28 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = __this->get_videoBackgroundShader_1();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::set_VideoBackgroundShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_VideoBackgroundShader_m2838F80BB9637E5A2FFAAD932923A5ED41A96E52 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___value0, const RuntimeMethod* method)
{
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___value0;
		__this->set_videoBackgroundShader_1(L_0);
		return;
	}
}
// System.Boolean Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::get_VideoBackgroundEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoBackgroundConfiguration_get_VideoBackgroundEnabled_m6325CB6B7740D69F2B902CCD60C33FD387B34525 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_videoBackgroundEnabled_3();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::set_VideoBackgroundEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration_set_VideoBackgroundEnabled_mB0D079180D13A0AFAD534177D925DF4BCAF7003B (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_videoBackgroundEnabled_3(L_0);
		return;
	}
}
// System.Void Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoBackgroundConfiguration__ctor_m3FEFDDB2EBCBFA4AE651129E695FF74D9A85BC26 (VideoBackgroundConfiguration_t1A3B6D11BC9A7F560C469B00217B32D8AB38D345 * __this, const RuntimeMethod* method)
{
	{
		__this->set_numDivisions_0(2);
		__this->set_videoBackgroundEnabled_3((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::get_DeviceNameSetInEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamConfiguration_get_DeviceNameSetInEditor_mA5E560EF91EB3EF91D0A8977A84661270FDB0D09 (WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = VuforiaRuntimeUtilities_IsPlayMode_m23E1BDA7C739AF1E7822964AFA54BCBCA3C8E1B3(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_1 = __this->get_mDeviceName_1();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m57429705D977ACD5EE7E210A858EED6F348C36B3(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = __this->get_mDeviceName_1();
		return L_3;
	}

IL_001b:
	{
		RuntimeObject* L_4;
		L_4 = PlayModeEditorUtility_get_Instance_m0AE89324E70D461764219CB98D2BC1E9605217DB(/*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String Vuforia.IPlayModeEditorUtility::GetEditorPrefsString(System.String) */, IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var, L_4, _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		return L_5;
	}

IL_002b:
	{
		RuntimeObject* L_6;
		L_6 = PlayModeEditorUtility_get_Instance_m0AE89324E70D461764219CB98D2BC1E9605217DB(/*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(19 /* System.String Vuforia.IPlayModeEditorUtility::GetEditorPrefsString(System.String) */, IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var, L_6, _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		return L_7;
	}
}
// System.Void Vuforia.VuforiaConfiguration/WebCamConfiguration::set_DeviceNameSetInEditor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamConfiguration_set_DeviceNameSetInEditor_m80070DDAB7B7D793BA4F45AE1C51272C5C5A0B26 (WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntimeUtilities_tA92D66C94207AC9F9A8A252B8133D7F0ED27548C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = VuforiaRuntimeUtilities_IsPlayMode_m23E1BDA7C739AF1E7822964AFA54BCBCA3C8E1B3(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->set_mDeviceName_1(L_1);
		return;
	}

IL_000f:
	{
		RuntimeObject* L_2;
		L_2 = PlayModeEditorUtility_get_Instance_m0AE89324E70D461764219CB98D2BC1E9605217DB(/*hidden argument*/NULL);
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void Vuforia.IPlayModeEditorUtility::SetEditorPrefsString(System.String,System.String) */, IPlayModeEditorUtility_t4B63BCA81B5A9D5DB2BFC08774C23B9B3461097D_il2cpp_TypeInfo_var, L_2, _stringLiteralE727A155B2B99EDAD35ACA5C43089CFECC3EB48A, L_3);
		return;
	}
}
// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::get_RenderTextureLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamConfiguration_get_RenderTextureLayer_m1BCD29FF4E428E93E6F9F0C0DA5CB936A6C0FCC5 (WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_renderTextureLayer_2();
		return L_0;
	}
}
// System.Void Vuforia.VuforiaConfiguration/WebCamConfiguration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamConfiguration__ctor_m4AF09698E01A2909C2CC68F324B9C01F322AB9F7 (WebCamConfiguration_t825C06D4C049135F922FA8695E74F9DB5B5E0986 * __this, const RuntimeMethod* method)
{
	{
		__this->set_renderTextureLayer_2(((int32_t)30));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunCoroutineWithTimeoutU3Ed__1__ctor_mA74219097B395EB4D90B6D7B0EEDD58FE075688F (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunCoroutineWithTimeoutU3Ed__1_System_IDisposable_Dispose_m2768AB16996C63609FD82CE46069480B33812AB8 (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRunCoroutineWithTimeoutU3Ed__1_MoveNext_m373D5970CAF6DE48448D7E80B36CC8ABD9050F8D (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B10_0 = NULL;
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * G_B9_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		float L_3 = __this->get_timeout_2();
		__this->set_U3CtimerU3E5__2_5(L_3);
		goto IL_006a;
	}

IL_0025:
	{
		float L_4;
		L_4 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		__this->set_U3CstartU3E5__3_6(L_4);
		RuntimeObject* L_5 = __this->get_routine_3();
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
		float L_7 = __this->get_U3CtimerU3E5__2_5();
		float L_8;
		L_8 = Time_get_time_m52C9390086344FA8787001ED5911550D850CE515(/*hidden argument*/NULL);
		float L_9 = __this->get_U3CstartU3E5__3_6();
		__this->set_U3CtimerU3E5__2_5(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)))));
	}

IL_006a:
	{
		RuntimeObject* L_10 = __this->get_routine_3();
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
		if (!L_11)
		{
			goto IL_0084;
		}
	}
	{
		float L_12 = __this->get_U3CtimerU3E5__2_5();
		if ((((float)L_12) > ((float)(0.0f))))
		{
			goto IL_0025;
		}
	}

IL_0084:
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_13 = __this->get_onComplete_4();
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_14 = L_13;
		G_B9_0 = L_14;
		if (L_14)
		{
			G_B10_0 = L_14;
			goto IL_0090;
		}
	}
	{
		goto IL_00a5;
	}

IL_0090:
	{
		float L_15 = __this->get_U3CtimerU3E5__2_5();
		NullCheck(G_B10_0);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(G_B10_0, (bool)((((int32_t)((!(((float)L_15) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_00a5:
	{
		return (bool)0;
	}
}
// System.Object Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m32E2275B0887CA49B6A8F6D521F50E6331B96854 (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_IEnumerator_Reset_m51E8BBE94FB2AED7CE6D46F8F4EBFFD7590EB317 (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_IEnumerator_Reset_m51E8BBE94FB2AED7CE6D46F8F4EBFFD7590EB317_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.Internal.Utility.VuforiaCoroutineUtility/<RunCoroutineWithTimeout>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRunCoroutineWithTimeoutU3Ed__1_System_Collections_IEnumerator_get_Current_mC8801461F2227DCC0F2F2973A6BEE618E761CF60 (U3CRunCoroutineWithTimeoutU3Ed__1_tA93F84FA20130708ECA45E8BC87A137F09A350A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Vuforia.VuforiaRuntimeUtilities/GlobalVars::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalVars__cctor_mC9892F85D989AF814FCA493592B2313398D09DA3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22467D1C7743279C159BDA0BDE4993F22771DAB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral677774D8B69150E8300A8C0C3378D6703951B692);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF0FE0C2A4D07B1801AF0EF5433861CE13A6E123);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral91990DABEAF336AD834D412CBF8BA4DF935306D1);
		String_t* L_3;
		L_3 = PosixPath_Join_m4A67CB3DFA1D7AD611414A7A50B081581E8BDAA5(L_2, /*hidden argument*/NULL);
		((GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var))->set_GLTF_ASSET_LOCATION_12(L_3);
		((GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var))->set_MODEL_TARGET_DEVICE_TRACKER_WARNING_38(_stringLiteralBF0FE0C2A4D07B1801AF0EF5433861CE13A6E123);
		((GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var))->set_GROUND_PLANE_DEVICE_TRACKER_ERROR_39(_stringLiteral22467D1C7743279C159BDA0BDE4993F22771DAB1);
		((GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_StaticFields*)il2cpp_codegen_static_fields_for(GlobalVars_tE1FBB739565E893B7A0DCA6B14E4D240BDFB8DA6_il2cpp_TypeInfo_var))->set_GROUND_PLANE_SMART_TERRAIN_ERROR_40(_stringLiteral677774D8B69150E8300A8C0C3378D6703951B692);
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
// System.Boolean Vuforia.VuforiaShare/VuforiaShare_AndroidBridge::Share(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VuforiaShare_AndroidBridge_Share_mB8A93D56ABAC30D1694C9A3CBAC9D2066A1056B3 (String_t* ___filePath0, const RuntimeMethod* method)
{
	{
		return (bool)0;
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
// System.Void Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstWebCamFrameU3Ed__26__ctor_mEDBF9D378792DDE6CB26BC68EF8FF2FB8EF5E100 (U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstWebCamFrameU3Ed__26_System_IDisposable_Dispose_m590C623A9FCDE801B44F97195ED5C112C68196C1 (U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForFirstWebCamFrameU3Ed__26_MoveNext_mF3E59315FFD785575047842DF5E1968C753C0D79 (U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_mWebCamPlaying_10();
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->get_mWebCamTexture_0();
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Vuforia.IWebCamTexAdaptor::CheckPermissions() */, IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F_il2cpp_TypeInfo_var, L_7);
		WebCam_t09E50A79CB70DDD4F409B9E1728A67FF4221A98E * L_8 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->get_mWebCamTexture_0();
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Vuforia.IWebCamTexAdaptor::get_DidUpdateThisFrame() */, IWebCamTexAdaptor_tFDF64FA78AB851A86EE18B1B9692AA262D2A948F_il2cpp_TypeInfo_var, L_9);
		if (!L_10)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForFirstWebCamFrameU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAEDC37D1091AC66AB4E8EC01F0F687552F7A2A5E (U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForFirstWebCamFrameU3Ed__26_System_Collections_IEnumerator_Reset_m26B294C512634C1B187E85695FA4DC1BB2C6196E (U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForFirstWebCamFrameU3Ed__26_System_Collections_IEnumerator_Reset_m26B294C512634C1B187E85695FA4DC1BB2C6196E_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.WebCam/<WaitForFirstWebCamFrame>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForFirstWebCamFrameU3Ed__26_System_Collections_IEnumerator_get_Current_m8D18C9ED876B707E0F90265C166B71434C7E0C61 (U3CWaitForFirstWebCamFrameU3Ed__26_tD1F60F71D4B63516910EA8533B42EC2CC9CFF3CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_pinvoke(const ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3& unmarshaled, ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_pinvoke_back(const ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_pinvoke& marshaled, ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_pinvoke_cleanup(ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_com(const ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3& unmarshaled, ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_com& marshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_com_back(const ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_com& marshaled, ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3& unmarshaled)
{
	Exception_t* ___Profiles_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Profiles' of type 'ProfileCollection'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Profiles_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Vuforia.WebCamProfile/ProfileCollection
IL2CPP_EXTERN_C void ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshal_com_cleanup(ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3_marshaled_com& marshaled)
{
}
// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfileCollection__ctor_m27CD8D676C59FD5CED6E88715F3DB05392F7E4B5 (ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 * __this, ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___defaultProfile0, Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___profiles1, const RuntimeMethod* method)
{
	{
		ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  L_0 = ___defaultProfile0;
		__this->set_DefaultProfile_0(L_0);
		Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * L_1 = ___profiles1;
		__this->set_Profiles_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ProfileCollection__ctor_m27CD8D676C59FD5CED6E88715F3DB05392F7E4B5_AdjustorThunk (RuntimeObject * __this, ProfileData_t16189583CAC4FA1E04361485328F99B5DFDDB3FE  ___defaultProfile0, Dictionary_2_tCA9F572E4D35B13EDE03FF5D44FD8C02CB281EDB * ___profiles1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 * _thisAdjusted = reinterpret_cast<ProfileCollection_tCECB403019FE33DE49D7E21C380ED8E6EEC607A3 *>(__this + _offset);
	ProfileCollection__ctor_m27CD8D676C59FD5CED6E88715F3DB05392F7E4B5(_thisAdjusted, ___defaultProfile0, ___profiles1, method);
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
// System.Void Vuforia.World/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m21E9B670161AC3EA5C7C75DCBD21DD7E2390539A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * L_0 = (U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 *)il2cpp_codegen_object_new(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFDBDB59E297883F707F00E26F25B6EE37467C207(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.World/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFDBDB59E297883F707F00E26F25B6EE37467C207 (U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Vuforia.World/<>c::<GetTrackedObserverBehaviours>b__29_0(Vuforia.ObserverBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetTrackedObserverBehavioursU3Eb__29_0_m54314AAA5A00AE38F2A84851FA25071BF36CDB10 (U3CU3Ec_tE8095178737797CC40F0016E35288BCBCA8EAF18 * __this, ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * ___o0, const RuntimeMethod* method)
{
	TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * L_0 = ___o0;
		NullCheck(L_0);
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_1;
		L_1 = ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline((TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 *)(&V_0), /*hidden argument*/NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void Vuforia.Internal.Core.WorldOriginProvider/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA2A8CA3C932E0F146237D21BF42DDD9190DB025A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * L_0 = (U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A *)il2cpp_codegen_object_new(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFA6B99FA3EFB57FE7583183AFA00783F5BD0631E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Internal.Core.WorldOriginProvider/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA6B99FA3EFB57FE7583183AFA00783F5BD0631E (U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<System.Int32> Vuforia.Internal.Core.WorldOriginProvider/<>c::<.ctor>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  U3CU3Ec_U3C_ctorU3Eb__7_0_m80887622E26D7C2AA79804416EF4F6260DEA6133 (U3CU3Ec_t6552BA02FC788D805E34F493B02632FEB674C63A * __this, const RuntimeMethod* method)
{
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = V_0;
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
// Conversion methods for marshalling of: Vuforia.CameraDevice/AndroidDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_pinvoke(const CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736& unmarshaled, CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_pinvoke& marshaled)
{
	marshaled.___Type_0 = unmarshaled.get_Type_0();
	marshaled.___Key_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Key_1());
}
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_pinvoke_back(const CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_pinvoke& marshaled, CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736& unmarshaled)
{
	int32_t unmarshaled_Type_temp_0 = 0;
	unmarshaled_Type_temp_0 = marshaled.___Type_0;
	unmarshaled.set_Type_0(unmarshaled_Type_temp_0);
	unmarshaled.set_Key_1(il2cpp_codegen_marshal_string_result(marshaled.___Key_1));
}
// Conversion method for clean up from marshalling of: Vuforia.CameraDevice/AndroidDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_pinvoke_cleanup(CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_1);
	marshaled.___Key_1 = NULL;
}
// Conversion methods for marshalling of: Vuforia.CameraDevice/AndroidDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_com(const CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736& unmarshaled, CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_com& marshaled)
{
	marshaled.___Type_0 = unmarshaled.get_Type_0();
	marshaled.___Key_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Key_1());
}
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_com_back(const CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_com& marshaled, CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736& unmarshaled)
{
	int32_t unmarshaled_Type_temp_0 = 0;
	unmarshaled_Type_temp_0 = marshaled.___Type_0;
	unmarshaled.set_Type_0(unmarshaled_Type_temp_0);
	unmarshaled.set_Key_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Key_1));
}
// Conversion method for clean up from marshalling of: Vuforia.CameraDevice/AndroidDevice/CameraField
IL2CPP_EXTERN_C void CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshal_com_cleanup(CameraField_t05E2EE505EC7F29DDE4C49274F7DCDCA7F827736_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_1);
	marshaled.___Key_1 = NULL;
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
// System.Void Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_m73E5EDBD042B3B9589BD12419424D0F4E22AE696 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m6449647BDE3CC808205F3B85174854E25D4D8B31 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m29CA5E02B0FCEB6929EE66096EEFE27F8FFA1463 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * L_4 = V_1;
		NullCheck(L_4);
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_5 = L_4->get__token_0();
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		JPropertyList_tEEDE310F4115D19B5180C68016EBE239E6FA2EAC * L_6 = V_1;
		NullCheck(L_6);
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_7 = L_6->get__token_0();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0042:
	{
		return (bool)0;
	}
}
// Vuforia.Newtonsoft.Json.Linq.JToken Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Vuforia.Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CVuforia_Newtonsoft_Json_Linq_JTokenU3E_get_Current_mB889A6AF6C39371E916B605CB8C420CA171BA593 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m67CE78F4DFD5AF8913128B76CF3DE629EE7F8BC4 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m67CE78F4DFD5AF8913128B76CF3DE629EE7F8BC4_RuntimeMethod_var)));
	}
}
// System.Object Vuforia.Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m77B37296FBBF40890ED4794E469E32F357B13CB4 (U3CGetEnumeratorU3Ed__1_t8F7653C642543A54B46D4F26D94295DA79AEDA61 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3904514D36D092DA8AF4CEBC8F832C33A64A4B78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * L_0 = (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 *)il2cpp_codegen_object_new(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6983785FE10F8D0D173A84D5E49F46CC4AB57045(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6983785FE10F8D0D173A84D5E49F46CC4AB57045 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<.ctor>b__29_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__29_0_mAD60C4DF9CB4E3B7463BBAD46E057FFD753FA755 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___p0;
		return L_0;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<.ctor>b__29_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__29_1_mC282DF076D6C1098F311420F81EB27E81A59B878 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, String_t* ___p0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<.ctor>b__29_2(Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__29_2_mB0916DEC3A194B3F908E3F34EDE603E9E9D5A359 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * ___s0, const RuntimeMethod* method)
{
	{
		JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * L_0 = ___s0;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonSchemaModel_get_UniqueItems_mD95FA018C4C58430516454E670E876D5B352E097_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<GetRequiredProperties>b__30_0(System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetRequiredPropertiesU3Eb__30_0_m5248B69C6F291527CA331E92F348EAD88F61C99B (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * L_0;
		L_0 = KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_inline((KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD *)(&___p0), /*hidden argument*/KeyValuePair_2_get_Value_m1CD56B07A1C59E17E013B69A6362B9A338AD087B_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonSchemaModel_get_Required_mF03089412305B3532BA80CC5219B59195E2697D2_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Vuforia.Newtonsoft.Json.JsonValidatingReader/SchemaScope/<>c::<GetRequiredProperties>b__30_1(System.Collections.Generic.KeyValuePair`2<System.String,Vuforia.Newtonsoft.Json.Schema.JsonSchemaModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetRequiredPropertiesU3Eb__30_1_m1B9DBCA34048D359CF839EF895424B7A00E99A03 (U3CU3Ec_t9EEB9D1656D35F3CD0B37DD73716E7E98FA24B58 * __this, KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD  ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_inline((KeyValuePair_2_tA6A1B04C54F9ED21D69E47EA467743C02B7968DD *)(&___p0), /*hidden argument*/KeyValuePair_2_get_Key_mB2B43EF70142B4B7807291F9E97765033E849158_RuntimeMethod_var);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_m40C95EB5D7D490470847ADAB4993684AC0296991_inline (JProperty_tBF5F7C8477D937691CCE6A9B99AD4B700476661F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546 * QueryFilter_get_Expression_m950410238422D345581F41CFAF39A8A5DB0A5F1D_inline (QueryFilter_t84C29CBD562C533D4F5227C5A844A08B76EF746E * __this, const RuntimeMethod* method)
{
	{
		QueryExpression_tCBD5757EBB56DC1134CF481E33435F44860A0546 * L_0 = __this->get_U3CExpressionU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ScanFilter_get_Name_mD4C72385C0062BCABC91AFA49A9A470A3DB07EB7_inline (ScanFilter_t6752B2D798A5E94285150C88FE6F91C7A03612A5 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * JToken_get_Parent_m0C47FA701ABB9BD601C13BBF3EA628AD5A0EF57C_inline (JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * __this, const RuntimeMethod* method)
{
	{
		JContainer_t74EE39EA37572ABCE1E077EC63F1F195E6512BDC * L_0 = __this->get__parent_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * JToken_get_Next_m1414D8687D5F635F5FA98957C5EE7AD5B482858E_inline (JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * __this, const RuntimeMethod* method)
{
	{
		JToken_tE95A9ED3F711351BD17B2CC7AA5C2F6309B12426 * L_0 = __this->get__next_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  ObserverBehaviour_get_TargetStatus_m9F21B240F06DA71ED4613EB3A99ADA6E1942A499_inline (ObserverBehaviour_tE7AD12CD804A13F758F693B5A1C130E332042274 * __this, const RuntimeMethod* method)
{
	{
		TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1  L_0 = __this->get_U3CTargetStatusU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetStatus_get_Status_mD745DEB3CFE4D18A1E973178AA8CA9BB73178D5E_inline (TargetStatus_t6840B338FC8C013F0E06F9E3530E7177434C7AF1 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonSchemaModel_get_UniqueItems_mD95FA018C4C58430516454E670E876D5B352E097_inline (JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CUniqueItemsU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonSchemaModel_get_Required_mF03089412305B3532BA80CC5219B59195E2697D2_inline (JsonSchemaModel_t4C9B1DD635375EA864F59242DF5E736C12473ABC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CRequiredU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_mC23BA23E80BF8D9009F8E9D84CFFB76DAFB652CC_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
