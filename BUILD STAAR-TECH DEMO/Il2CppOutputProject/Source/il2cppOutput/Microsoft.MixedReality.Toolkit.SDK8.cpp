﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>
struct CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>>
struct Dictionary_2_t61C1B3F6308552FB1DC03AC8E98FBCDCC239CE35;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>>
struct Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<Windows.Media.SpeechSynthesis.VoiceInformation,System.Boolean>
struct Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<UnityEngine.Renderer>
struct HashSet_1_t29AE451AF3792A7A6741732B896B4D841EC86054;
// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044;
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<Windows.Media.SpeechSynthesis.VoiceInformation>
struct IEnumerable_1_t01F6403DB41E68D9B142BD07C35EE577024E8712;
// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver>
struct IEnumerator_1_tADCCA16A5F2D4C520C73F59195E50F0699A4B734;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Transform>
struct IEqualityComparer_1_t0E6626D9927A053F57788CAB540053BB41F4AA24;
// System.Collections.Generic.IReadOnlyList`1<Windows.Media.SpeechSynthesis.VoiceInformation>
struct IReadOnlyList_1_tAF87C51BB655AEB5BF954F0568B1C981E34D6A68;
// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>
struct LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66;
// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,System.Object>
struct LRUCache_2_t525C3808AB584B045E85E7B19998616444C1D197;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessPlanarObject>
struct List_1_t894DA985041C258C8E91906993264EB48D81B93E;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Transform>[]
struct SlotU5BU5D_t29DD92E1393A93D0603FB7BC5FF56A2891CC317B;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_t64ECC206DD8F8E45A688CA4FAC02A0626F676E5C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider
struct BaseMixedRealityLineDataProvider_tB1801BD24C62E70BAFCD3DD89C79EAF217271DED;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Microsoft.MixedReality.Toolkit.Utilities.CameraEventRouter
struct CameraEventRouter_t5A5817ACE27D097F657BE45B3C604D8CB7AC707B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// Microsoft.MixedReality.Toolkit.Utilities.ClippingBox
struct ClippingBox_tD8ECBBE9AB67E6CF6EFE828CF787B65C5998DDFE;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Windows.Storage.Streams.DataReader
struct DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E;
// Windows.Storage.Streams.DataReaderLoadOperation
struct DataReaderLoadOperation_t7BFE6680B141154886E08AB23401A9D3298FBCCD;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.MixedReality.Toolkit.Physics.DistorterGravity
struct DistorterGravity_tED35E799F6C0887ABB71A3247FC8637AE513EDE3;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// IActivationFactory
struct Il2CppIActivationFactory;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t5415FCC55766A20AA305652D632E50990B9CC844;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_tC92A87978B2D158C14C080F80A375226AFC0E9DB;
// Windows.Storage.Streams.IDataReaderFactory
struct IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6;
// Windows.Storage.Streams.IDataReaderStatics
struct IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct IInstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct IInstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t30769B0E5BEC9AF82820A8983DE77F98CBE98DC8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t91C9BF2FDFDF7DE443B045E25B3C1110BD56AF43;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_tD0C2AA219563F8BD3CE819D0510553BF041A90D8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver
struct IMixedRealitySpatialAwarenessMeshObserver_t43AA0F1533853F781D74D657560BD1F0480905F3;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tDD6DD841EE322261028BE6C6319D0888DF7AE153;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot
struct IMixedRealityTeleportHotspot_t8E6B11DC64E8F85AD103AB1056E32979E6D1B5D3;
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_t1D02CCBE0383C19A0DBBDD0B75C1D32AA13E55C7;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_tD3EFF5EF45786DC1BCF0A050F8F929FE63F249B7;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2;
// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable
struct NearInteractionTouchable_t8F41F8E116C356E7F0C09D7ABD5876D4AD7A3C66;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint
struct RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection
struct ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C;
// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes
struct SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer
struct TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E;
// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech
struct TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41;
// Microsoft.MixedReality.Toolkit.UI.ThemeProperty
struct ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D;
// Microsoft.MixedReality.Toolkit.UI.ThemePropertyValue
struct ThemePropertyValue_tBEEE2960BBA40D48351C4D2D963BEE04F0ADB5F8;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Windows.Media.SpeechSynthesis.VoiceInformation
struct VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.Toolkit.Utilities.WaitForUpdate
struct WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30
struct U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301;
// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204
struct U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6;
// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollEvent
struct ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2
struct U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C;
// Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo
struct SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c
struct U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286;
// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC;
// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1
struct U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752;
// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t2B1DDB4531151E0D514C55254E70F293C986CC0C;
// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tD42884BE3B0BB3F0146C3A5023D67A3987048890;
// Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t52F6DA124185D5D1D595779043A7017569D7DE5D;
// Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tA55E91D2049AD4CBA138BDB8905CAD473BBC89E8;

IL2CPP_EXTERN_C RuntimeClass* AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsExtensions_t8726C10628CC3713DAE3A14EB916578FE9C47383_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFOVChecker_t2EC59F1E93ECA5176C3E51BF016612652105AA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t02B5088D70FB251D493977058E302042360A54E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t62850A623BB1531B88A166BB1A5553ABD93090E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tADCCA16A5F2D4C520C73F59195E50F0699A4B734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE550E38280969BBCAAB36590C9700C303A82AEA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityDataProviderAccess_t218AD36B100367ABE1A6739D01A60936A872915D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessMeshObserver_t43AA0F1533853F781D74D657560BD1F0480905F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tF1869787F67469C600A75F53D1FE84AF0EC71D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6BA8B4163EE29D043FCDECF7A4BF3884B41CB8E8;
IL2CPP_EXTERN_C String_t* _stringLiteral6EFACD025244B21DBC8285768071957B3472FA28;
IL2CPP_EXTERN_C String_t* _stringLiteralB0ED8A7E7416F854147E3242F183A4192C14BFF4;
IL2CPP_EXTERN_C String_t* _stringLiteralB906F90FD60344AF7ABD67638D7D73F5243D01E3;
IL2CPP_EXTERN_C String_t* _stringLiteralF66142D57F344E825A529743B12428BA90B8D601;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A_TisU3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B_m9547B893079897EAE0718E9FD3F5EF5DA02403D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9_m89C0E6BEF71A8A4B349DBDB90762D848519A19FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m8FF6D4A029AABF03118A49EE0303AC06F4ECE4F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m3B8B5255A11F691EC34ECBFF1962A9D1301CC987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1_m7B4F124E8E66390F57EA51FF103533B4443C9D67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mB2B0BC2025F36EE769C5973165EB5DABB8336440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7_m65BDC79634A61184BC9C54EBCDA2AB02CBF2AE40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisNearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2_mB4C8E8A2657C7662CA2C377B831B45D8BF62B35D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_mD8BF5F734E0DD5466272C4EE61EA2A521B510220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_m451553584E65016EE41B8EADD2BE9DF72B0E21EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA4E3759D69954DBF4465FB0FD594CB8259F3F653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0172F4E3EDE1A1E9466FCB30A1142B94DFDB44EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mABE9CE84BCC489F861A6C0A48BA68349B90B206C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mC2F04559B3BA5D5A38A6B59AFEC81A5D2464D523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD3EC239111E47C8272C51EA2470D11EA52DD1CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mC2FACCAF836A963D13F6DE7058949947B0FD97D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m0E07DD3D1AB968CBB94F8678AEC6CD787DA828EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m36D18BE9FABFFD53367BD5ED7B267D1266B0ED57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityDataProviderAccess_GetDataProviders_TisIMixedRealitySpatialAwarenessMeshObserver_t43AA0F1533853F781D74D657560BD1F0480905F3_mDD82BA875DBC88E5BE110F3DD0707FB5394837D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityTeleportHandler_tC73058BA154F0E71DA864FCBF8B9C204572ABD9A_mD6125A744EEB41088AF69FBB4AA46D86735DB366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_Add_m8BA5CEE93111661820A64DF183D1D5CC9B36D455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_Remove_m3F9A01DE0A32D5DEBF3210F9AC7DE4EFAA1126E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LRUCache_2_TryGetValue_mCB74D54327D232032960E499D5CB2DBE8F0E5C43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_GetResult_m00671A15A3EF8A775D35655D48A459DD22376E03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleCoroutineAwaiter_1_get_IsCompleted_mC9C09ABF80C8ED2BD852B9D8A4C0B8AF5A9EEAFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA36AE89D3B83F4407EC9974294AB665C1FE3B9F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3081B9343F6D81D9154AE63CA8C857237C1E22D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateToU3Ed__204_System_Collections_IEnumerator_Reset_m0590B53D4201D074C2FE4896C16ED2DE75BE0C17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSaveInternalU3Ed__2_System_Collections_IEnumerator_Reset_m24DBDDDEB5D9393B9923123357A54209CC55D4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTrackPositionSequenceU3Ed__30_System_Collections_IEnumerator_Reset_m2F469465E2C54BB77287660F48A722D1CB861CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__49_0_mDDD3DE8EDA503FD23665EE9BF0C33C26DCAFF56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CPlaySpeechU3Eb__1_m203126723E17215E4437EC005D039D940E445A1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_1_U3CPlaySpeechU3Eb__2_m486C0DFC8B798C5B64F540D3AA4E3AF86C14610B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityObjectExtensions_IsNull_TisTeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_m200A392B1C54DA5471566567120ADE318823B338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisSpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C_m2BE5726A8AD4FD623B04FC9967C307E01B60E6A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m875970DC042A5A87245D94D5A768FD2BE0C605F3_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IDataReader_t3B076AC15B5E88F90890FB6B01A6266D5A6090B8;
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct ISpeechSynthesisStream_tFA8C7E1F51E829B22F715363FDDD74892B9DFF40;
struct ISpeechSynthesizer_t298D8B242F26F0F29CE9C1BFFA82C861AB9CF88C;
struct IVectorView_1_t77237ACE221EB05CC86F11288E076C3E0FD61795;
struct IVoiceInformation_t2E27BE76AA5A80F7989CA15FA42C1BFD7A8AE973;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct NOVTABLE IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m6EEDEF55FBB339809F0A37C221B14CD560466329(IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m8F318F58A249E654F7C48BB70641962B43B51BE7(IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m26719A728F871544E5A81D675AC0C3745DCD7053(ISpeechSynthesisStream_tFA8C7E1F51E829B22F715363FDDD74892B9DFF40** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mC7C94BF5E03D8C5AA20FF9BE77223E1ECE3B0BD4(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m27E355E8C0523DE3F33321676087FB75E057B44A(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m28613513B6F3DE14AC503BC914AFF74AEC8E4CEC(uint32_t* comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataReaderFactory
struct NOVTABLE IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderFactory_CreateDataReader_m2F8B9A3539E5AF8550015738C6CAEC791DE71825(IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2* ___inputStream0, IDataReader_t3B076AC15B5E88F90890FB6B01A6266D5A6090B8** comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataReaderStatics
struct NOVTABLE IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderStatics_FromBuffer_mA0B44A37E32C80DD11B00784540C4F693DF71139(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IDataReader_t3B076AC15B5E88F90890FB6B01A6266D5A6090B8** comReturnValue) = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct NOVTABLE IInstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_get_AllVoices_mCF8E94ADD677DD0C49CE664D2A3154E536CB763A(IVectorView_1_t77237ACE221EB05CC86F11288E076C3E0FD61795** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_get_DefaultVoice_mBD6256940EED284D9F54EC61B125651247B4CF10(IVoiceInformation_t2E27BE76AA5A80F7989CA15FA42C1BFD7A8AE973** comReturnValue) = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct NOVTABLE IInstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic2_U24__Stripped0_TrySetDefaultVoiceAsync_m7DB3D813CBD60A01BDF01C27EC172B33EC916AFE() = 0;
};

// System.Object


// System.Collections.Generic.HashSet`1<UnityEngine.Transform>
struct HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t29DD92E1393A93D0603FB7BC5FF56A2891CC317B* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D, ____slots_8)); }
	inline SlotU5BU5D_t29DD92E1393A93D0603FB7BC5FF56A2891CC317B* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t29DD92E1393A93D0603FB7BC5FF56A2891CC317B** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t29DD92E1393A93D0603FB7BC5FF56A2891CC317B* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>
struct LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<TKey,TValue>> Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::keyToEntryTable
	Dictionary_2_t61C1B3F6308552FB1DC03AC8E98FBCDCC239CE35 * ___keyToEntryTable_0;
	// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<TKey,TValue> Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::leastRecentEntry
	CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52 * ___leastRecentEntry_1;
	// Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2/CacheEntry<TKey,TValue> Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::mostRecentEntry
	CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52 * ___mostRecentEntry_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::<Capacity>k__BackingField
	int32_t ___U3CCapacityU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2::<System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.IsReadOnly>k__BackingField
	bool ___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_keyToEntryTable_0() { return static_cast<int32_t>(offsetof(LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66, ___keyToEntryTable_0)); }
	inline Dictionary_2_t61C1B3F6308552FB1DC03AC8E98FBCDCC239CE35 * get_keyToEntryTable_0() const { return ___keyToEntryTable_0; }
	inline Dictionary_2_t61C1B3F6308552FB1DC03AC8E98FBCDCC239CE35 ** get_address_of_keyToEntryTable_0() { return &___keyToEntryTable_0; }
	inline void set_keyToEntryTable_0(Dictionary_2_t61C1B3F6308552FB1DC03AC8E98FBCDCC239CE35 * value)
	{
		___keyToEntryTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyToEntryTable_0), (void*)value);
	}

	inline static int32_t get_offset_of_leastRecentEntry_1() { return static_cast<int32_t>(offsetof(LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66, ___leastRecentEntry_1)); }
	inline CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52 * get_leastRecentEntry_1() const { return ___leastRecentEntry_1; }
	inline CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52 ** get_address_of_leastRecentEntry_1() { return &___leastRecentEntry_1; }
	inline void set_leastRecentEntry_1(CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52 * value)
	{
		___leastRecentEntry_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leastRecentEntry_1), (void*)value);
	}

	inline static int32_t get_offset_of_mostRecentEntry_2() { return static_cast<int32_t>(offsetof(LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66, ___mostRecentEntry_2)); }
	inline CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52 * get_mostRecentEntry_2() const { return ___mostRecentEntry_2; }
	inline CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52 ** get_address_of_mostRecentEntry_2() { return &___mostRecentEntry_2; }
	inline void set_mostRecentEntry_2(CacheEntry_t4BCA9FC2E5110C170985529DD924B6551C64BE52 * value)
	{
		___mostRecentEntry_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mostRecentEntry_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCapacityU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66, ___U3CCapacityU3Ek__BackingField_3)); }
	inline int32_t get_U3CCapacityU3Ek__BackingField_3() const { return ___U3CCapacityU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CCapacityU3Ek__BackingField_3() { return &___U3CCapacityU3Ek__BackingField_3; }
	inline void set_U3CCapacityU3Ek__BackingField_3(int32_t value)
	{
		___U3CCapacityU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66, ___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4)); }
	inline bool get_U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4() const { return ___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4() { return &___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4; }
	inline void set_U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4(bool value)
	{
		___U3CSystem_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_IsReadOnlyU3Ek__BackingField_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>
struct SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// T Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::result
	RuntimeObject * ___result_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A, ___result_2)); }
	inline RuntimeObject * get_result_2() const { return ___result_2; }
	inline RuntimeObject ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(RuntimeObject * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A, ___U3CIsCompletedU3Ek__BackingField_3)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_3() const { return ___U3CIsCompletedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_3() { return &___U3CIsCompletedU3Ek__BackingField_3; }
	inline void set_U3CIsCompletedU3Ek__BackingField_3(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject
struct BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<GameObject>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CGameObjectU3Ek__BackingField_1;
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Renderer>k__BackingField
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___U3CRendererU3Ek__BackingField_2;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::<Filter>k__BackingField
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGameObjectU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B, ___U3CGameObjectU3Ek__BackingField_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CGameObjectU3Ek__BackingField_1() const { return ___U3CGameObjectU3Ek__BackingField_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CGameObjectU3Ek__BackingField_1() { return &___U3CGameObjectU3Ek__BackingField_1; }
	inline void set_U3CGameObjectU3Ek__BackingField_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CGameObjectU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameObjectU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRendererU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B, ___U3CRendererU3Ek__BackingField_2)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_U3CRendererU3Ek__BackingField_2() const { return ___U3CRendererU3Ek__BackingField_2; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_U3CRendererU3Ek__BackingField_2() { return &___U3CRendererU3Ek__BackingField_2; }
	inline void set_U3CRendererU3Ek__BackingField_2(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___U3CRendererU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRendererU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B, ___U3CFilterU3Ek__BackingField_3)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A, ___continuation_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_continuation_1() const { return ___continuation_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30
struct U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>4__this
	RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301, ___U3CU3E4__this_2)); }
	inline RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c
struct U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c::<>9
	U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c::<>9__49_0
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3E9__49_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__49_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_StaticFields, ___U3CU3E9__49_0_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3E9__49_0_1() const { return ___U3CU3E9__49_0_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3E9__49_0_1() { return &___U3CU3E9__49_0_1; }
	inline void set_U3CU3E9__49_0_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3E9__49_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__49_0_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0::<>4__this
	TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * ___U3CU3E4__this_0;
	// System.Func`1<Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>> Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0::speakFunc
	Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C * ___speakFunc_1;
	// System.Func`2<Windows.Media.SpeechSynthesis.VoiceInformation,System.Boolean> Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0::<>9__1
	Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * ___U3CU3E9__1_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC, ___U3CU3E4__this_0)); }
	inline TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_speakFunc_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC, ___speakFunc_1)); }
	inline Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C * get_speakFunc_1() const { return ___speakFunc_1; }
	inline Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C ** get_address_of_speakFunc_1() { return &___speakFunc_1; }
	inline void set_speakFunc_1(Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C * value)
	{
		___speakFunc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speakFunc_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC, ___U3CU3E9__1_2)); }
	inline Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * get_U3CU3E9__1_2() const { return ___U3CU3E9__1_2; }
	inline Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 ** get_address_of_U3CU3E9__1_2() { return &___U3CU3E9__1_2; }
	inline void set_U3CU3E9__1_2(Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * value)
	{
		___U3CU3E9__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1
struct U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752  : public RuntimeObject
{
public:
	// System.Single[] Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1::unityData
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___unityData_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1::sampleCount
	int32_t ___sampleCount_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1::frequency
	int32_t ___frequency_2;
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0 Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * ___CSU24U3CU3E8__locals1_3;

public:
	inline static int32_t get_offset_of_unityData_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752, ___unityData_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_unityData_0() const { return ___unityData_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_unityData_0() { return &___unityData_0; }
	inline void set_unityData_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___unityData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityData_0), (void*)value);
	}

	inline static int32_t get_offset_of_sampleCount_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752, ___sampleCount_1)); }
	inline int32_t get_sampleCount_1() const { return ___sampleCount_1; }
	inline int32_t* get_address_of_sampleCount_1() { return &___sampleCount_1; }
	inline void set_sampleCount_1(int32_t value)
	{
		___sampleCount_1 = value;
	}

	inline static int32_t get_offset_of_frequency_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752, ___frequency_2)); }
	inline int32_t get_frequency_2() const { return ___frequency_2; }
	inline int32_t* get_address_of_frequency_2() { return &___frequency_2; }
	inline void set_frequency_2(int32_t value)
	{
		___frequency_2 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752, ___CSU24U3CU3E8__locals1_3)); }
	inline U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * get_CSU24U3CU3E8__locals1_3() const { return ___CSU24U3CU3E8__locals1_3; }
	inline U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC ** get_address_of_CSU24U3CU3E8__locals1_3() { return &___CSU24U3CU3E8__locals1_3; }
	inline void set_CSU24U3CU3E8__locals1_3(U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * value)
	{
		___CSU24U3CU3E8__locals1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t2B1DDB4531151E0D514C55254E70F293C986CC0C  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass21_0::<>4__this
	TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * ___U3CU3E4__this_0;
	// System.String Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass21_0::ssml
	String_t* ___ssml_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t2B1DDB4531151E0D514C55254E70F293C986CC0C, ___U3CU3E4__this_0)); }
	inline TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_ssml_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t2B1DDB4531151E0D514C55254E70F293C986CC0C, ___ssml_1)); }
	inline String_t* get_ssml_1() const { return ___ssml_1; }
	inline String_t** get_address_of_ssml_1() { return &___ssml_1; }
	inline void set_ssml_1(String_t* value)
	{
		___ssml_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ssml_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tD42884BE3B0BB3F0146C3A5023D67A3987048890  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass22_0::<>4__this
	TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * ___U3CU3E4__this_0;
	// System.String Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass22_0::text
	String_t* ___text_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tD42884BE3B0BB3F0146C3A5023D67A3987048890, ___U3CU3E4__this_0)); }
	inline TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tD42884BE3B0BB3F0146C3A5023D67A3987048890, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t52F6DA124185D5D1D595779043A7017569D7DE5D  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass1_0::className
	String_t* ___className_0;

public:
	inline static int32_t get_offset_of_className_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t52F6DA124185D5D1D595779043A7017569D7DE5D, ___className_0)); }
	inline String_t* get_className_0() const { return ___className_0; }
	inline String_t** get_address_of_className_0() { return &___className_0; }
	inline void set_className_0(String_t* value)
	{
		___className_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___className_0), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_tA55E91D2049AD4CBA138BDB8905CAD473BBC89E8  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.UI.ThemeProperty Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass20_0::prop
	ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D * ___prop_0;

public:
	inline static int32_t get_offset_of_prop_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_tA55E91D2049AD4CBA138BDB8905CAD473BBC89E8, ___prop_0)); }
	inline ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D * get_prop_0() const { return ___prop_0; }
	inline ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D ** get_address_of_prop_0() { return &___prop_0; }
	inline void set_prop_0(ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D * value)
	{
		___prop_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prop_0), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC, ____set_0)); }
	inline HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * get__set_0() const { return ____set_0; }
	inline HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC, ____current_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__current_3() const { return ____current_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2, ___m_task_0)); }
	inline Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEC5C204610D0A97C041DBEC234A1FCEB7CE7F47B * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>
struct TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865, ___m_task_0)); }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t42D941E39CC5B9E9FA563E759A0954DD50DA5000 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// Windows.Storage.Streams.DataReader
struct DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E  : public Il2CppComObject
{
public:

public:
};

struct DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataReaderFactory
	IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6* ____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6;
	// Cached pointer to Windows.Storage.Streams.IDataReaderStatics
	IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C* ____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataReader"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6* get_____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6()
	{
		IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6* returnValue = ____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderFactory_tA5B6ABAE2AF4C0F70F96795640D438CE24C042C6;
			}
		}
		return returnValue;
	}

	inline IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C* get_____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C()
	{
		IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C* returnValue = ____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderStatics_tFE8138B86EAD9D8A90505840047FB0B8F5CB990C;
			}
		}
		return returnValue;
	}
};


// Windows.Storage.Streams.DataReaderLoadOperation
struct DataReaderLoadOperation_t7BFE6680B141154886E08AB23401A9D3298FBCCD  : public Il2CppComObject
{
public:

public:
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C  : public BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B
{
public:
	// UnityEngine.MeshCollider Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::<Collider>k__BackingField
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CColliderU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CColliderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C, ___U3CColliderU3Ek__BackingField_5)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get_U3CColliderU3Ek__BackingField_5() const { return ___U3CColliderU3Ek__BackingField_5; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of_U3CColliderU3Ek__BackingField_5() { return &___U3CColliderU3Ek__BackingField_5; }
	inline void set_U3CColliderU3Ek__BackingField_5(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		___U3CColliderU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CColliderU3Ek__BackingField_5), (void*)value);
	}
};

struct SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C_StaticFields
{
public:
	// System.Type[] Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject::RequiredMeshComponents
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___RequiredMeshComponents_4;

public:
	inline static int32_t get_offset_of_RequiredMeshComponents_4() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C_StaticFields, ___RequiredMeshComponents_4)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_RequiredMeshComponents_4() const { return ___RequiredMeshComponents_4; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_RequiredMeshComponents_4() { return &___RequiredMeshComponents_4; }
	inline void set_RequiredMeshComponents_4(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___RequiredMeshComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RequiredMeshComponents_4), (void*)value);
	}
};


// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C  : public Il2CppComObject
{
public:

public:
};


// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B  : public Il2CppComObject
{
public:

public:
};

struct SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
	IInstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2* ____iinstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
	IInstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615* ____iinstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.SpeechSynthesis.SpeechSynthesizer"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2* get_____iinstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2()
	{
		IInstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2* returnValue = ____iinstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iinstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic2_t8571C4F9A0D69E9054E2B0C4FB640451EDE0CCD2;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615* get_____iinstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615()
	{
		IInstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615* returnValue = ____iinstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iinstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic_tC6D6F7AE6B4C3C072BF98C6A5DD1B15B21368615;
			}
		}
		return returnValue;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
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


// Windows.Media.SpeechSynthesis.VoiceInformation
struct VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D  : public Il2CppComObject
{
public:

public:
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


// Microsoft.MixedReality.Toolkit.Utilities.WaitForUpdate
struct WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:

public:
};


// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
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

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t36802435A1F99C9E306AA56A04A1C3E1BCAD7C37 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t36802435A1F99C9E306AA56A04A1C3E1BCAD7C37, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Input.CursorStateEnum
struct CursorStateEnum_tDCD162254A86102EE0537C5AE4913CB2295A97B1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.CursorStateEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorStateEnum_tDCD162254A86102EE0537C5AE4913CB2295A97B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t0ECB62FD234176C49A60FCECA0D4657F0E304698 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t0ECB62FD234176C49A60FCECA0D4657F0E304698, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
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


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.QueryTriggerInteraction
struct QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t9B82FB8CCAF559F47B6B8C0ECE197515ABFA96B0, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct SceneQueryType_t39F84A08B44835750CA676DCAAC388FE7190069D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_t39F84A08B44835750CA676DCAAC388FE7190069D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes
struct SpatialAwarenessSurfaceTypes_tB1B780BBFA7966F3F6559CBD2E6B3B83DBA48C0F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessSurfaceTypes_tB1B780BBFA7966F3F6559CBD2E6B3B83DBA48C0F, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Physics.TeleportSurfaceResult
struct TeleportSurfaceResult_t63FE97D542549E18043010992D1791A6B2430F17 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.TeleportSurfaceResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TeleportSurfaceResult_t63FE97D542549E18043010992D1791A6B2430F17, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeechVoice
struct TextToSpeechVoice_tF70BB3FFCCD08CFA516796AB1EE5CE8D56FBCE2A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Audio.TextToSpeechVoice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextToSpeechVoice_tF70BB3FFCCD08CFA516796AB1EE5CE8D56FBCE2A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ThemePropertyTypes
struct ThemePropertyTypes_t49B66D58143957775CE576CB0AD7871569FD4F87 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ThemePropertyTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThemePropertyTypes_t49B66D58143957775CE576CB0AD7871569FD4F87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t46E14B9AC3907F6FD3C933D4962D05B47BE9CCF6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t46E14B9AC3907F6FD3C933D4962D05B47BE9CCF6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204
struct U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_2;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>4__this
	ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * ___U3CU3E4__this_3;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::time
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___time_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::initialPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPos_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::finalPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___finalPos_6;
	// System.Action Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_7;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<counter>5__2
	float ___U3CcounterU3E5__2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_curve_2() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___curve_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_2() const { return ___curve_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_2() { return &___curve_2; }
	inline void set_curve_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___U3CU3E4__this_3)); }
	inline ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___time_4)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_time_4() const { return ___time_4; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_initialPos_5() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___initialPos_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPos_5() const { return ___initialPos_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPos_5() { return &___initialPos_5; }
	inline void set_initialPos_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPos_5 = value;
	}

	inline static int32_t get_offset_of_finalPos_6() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___finalPos_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_finalPos_6() const { return ___finalPos_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_finalPos_6() { return &___finalPos_6; }
	inline void set_finalPos_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___finalPos_6 = value;
	}

	inline static int32_t get_offset_of_callback_7() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___callback_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_7() const { return ___callback_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_7() { return &___callback_7; }
	inline void set_callback_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcounterU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6, ___U3CcounterU3E5__2_8)); }
	inline float get_U3CcounterU3E5__2_8() const { return ___U3CcounterU3E5__2_8; }
	inline float* get_address_of_U3CcounterU3E5__2_8() { return &___U3CcounterU3E5__2_8; }
	inline void set_U3CcounterU3E5__2_8(float value)
	{
		___U3CcounterU3E5__2_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/EditMode
struct EditMode_tE3D30AD083B6C8C6075B12E6F9D80C7A57834E89 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/EditMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditMode_tE3D30AD083B6C8C6075B12E6F9D80C7A57834E89, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/PaginationMode
struct PaginationMode_t6F80BD16870A452CEE8C702273403D2E61E73784 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/PaginationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaginationMode_t6F80BD16870A452CEE8C702273403D2E61E73784, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollDirectionType
struct ScrollDirectionType_t2FA47F55758F732C0A0EC9414E4C914575354828 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollDirectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollDirectionType_t2FA47F55758F732C0A0EC9414E4C914575354828, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollEvent
struct ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31  : public UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/VelocityState
struct VelocityState_t4F27C01F6C37EB451BD2AF505FDC84730FD47E3B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/VelocityState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VelocityState_t4F27C01F6C37EB451BD2AF505FDC84730FD47E3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/VelocityType
struct VelocityType_t2337572B10E62784A57A1E0C724E96E188C323ED 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/VelocityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VelocityType_t2337572B10E62784A57A1E0C724E96E188C323ED, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2
struct U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::meshObserver
	RuntimeObject* ___meshObserver_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::consolidate
	bool ___consolidate_3;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::folderPath
	String_t* ___folderPath_4;
	// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>7__wrap1
	Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  ___U3CU3E7__wrap1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_meshObserver_2() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C, ___meshObserver_2)); }
	inline RuntimeObject* get_meshObserver_2() const { return ___meshObserver_2; }
	inline RuntimeObject** get_address_of_meshObserver_2() { return &___meshObserver_2; }
	inline void set_meshObserver_2(RuntimeObject* value)
	{
		___meshObserver_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshObserver_2), (void*)value);
	}

	inline static int32_t get_offset_of_consolidate_3() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C, ___consolidate_3)); }
	inline bool get_consolidate_3() const { return ___consolidate_3; }
	inline bool* get_address_of_consolidate_3() { return &___consolidate_3; }
	inline void set_consolidate_3(bool value)
	{
		___consolidate_3 = value;
	}

	inline static int32_t get_offset_of_folderPath_4() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C, ___folderPath_4)); }
	inline String_t* get_folderPath_4() const { return ___folderPath_4; }
	inline String_t** get_address_of_folderPath_4() { return &___folderPath_4; }
	inline void set_folderPath_4(String_t* value)
	{
		___folderPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___folderPath_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C, ___U3CU3E7__wrap1_5)); }
	inline Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_5))->____set_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_5))->____current_3), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpherePointer/GraspPointPlacement
struct GraspPointPlacement_t0045A1782E34A73BFA2C72AFF2C4C9057E5E6386 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SpherePointer/GraspPointPlacement::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraspPointPlacement_t0045A1782E34A73BFA2C72AFF2C4C9057E5E6386, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.Utilities.StabilizationPlaneModifier/StabilizationPlaneMode
struct StabilizationPlaneMode_tA3AA73D554C58D3963410E3DF7FCDBE81E6EDDF7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.Utilities.StabilizationPlaneModifier/StabilizationPlaneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StabilizationPlaneMode_tA3AA73D554C58D3963410E3DF7FCDBE81E6EDDF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode
struct OrientationMode_t106CAD51A2D886B6FC5AA33A1F31A3B6BA92254F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationMode_t106CAD51A2D886B6FC5AA33A1F31A3B6BA92254F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode
struct RaycastDirectionMode_tDF7FA0D26559F0BBED20745A1B47CDE3FA5C1DE1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionMode_tDF7FA0D26559F0BBED20745A1B47CDE3FA5C1DE1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ThemeEaseSettings/BasicEaseCurves
struct BasicEaseCurves_t9E76EC9F481AFE9DD893145FAD01E85C3BAA2F69 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ThemeEaseSettings/BasicEaseCurves::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BasicEaseCurves_t9E76EC9F481AFE9DD893145FAD01E85C3BAA2F69, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection/GridDivisions
struct GridDivisions_t7DC34768910040EE8AC3CAF8138D23D828041F3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection/GridDivisions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridDivisions_t7DC34768910040EE8AC3CAF8138D23D828041F3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ToolTipBackgroundCorners/ScaleModeEnum
struct ScaleModeEnum_t61B50FE627E7A8CE5B5C9CED797A693986BF3085 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ToolTipBackgroundCorners/ScaleModeEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleModeEnum_t61B50FE627E7A8CE5B5C9CED797A693986BF3085, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode
struct SettingsMode_t6B29B3E31C2C22541A79B0EDB1F913D3607A3849 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ToolTipSpawner/SettingsMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SettingsMode_t6B29B3E31C2C22541A79B0EDB1F913D3607A3849, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


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

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// Microsoft.MixedReality.Toolkit.UI.ThemeProperty
struct ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.UI.ThemeProperty::Name
	String_t* ___Name_0;
	// System.String Microsoft.MixedReality.Toolkit.UI.ThemeProperty::Tooltip
	String_t* ___Tooltip_1;
	// Microsoft.MixedReality.Toolkit.UI.ThemePropertyTypes Microsoft.MixedReality.Toolkit.UI.ThemeProperty::Type
	int32_t ___Type_2;
	// Microsoft.MixedReality.Toolkit.UI.ThemePropertyValue Microsoft.MixedReality.Toolkit.UI.ThemeProperty::Value
	ThemePropertyValue_tBEEE2960BBA40D48351C4D2D963BEE04F0ADB5F8 * ___Value_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Tooltip_1() { return static_cast<int32_t>(offsetof(ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D, ___Tooltip_1)); }
	inline String_t* get_Tooltip_1() const { return ___Tooltip_1; }
	inline String_t** get_address_of_Tooltip_1() { return &___Tooltip_1; }
	inline void set_Tooltip_1(String_t* value)
	{
		___Tooltip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tooltip_1), (void*)value);
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_Value_3() { return static_cast<int32_t>(offsetof(ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D, ___Value_3)); }
	inline ThemePropertyValue_tBEEE2960BBA40D48351C4D2D963BEE04F0ADB5F8 * get_Value_3() const { return ___Value_3; }
	inline ThemePropertyValue_tBEEE2960BBA40D48351C4D2D963BEE04F0ADB5F8 ** get_address_of_Value_3() { return &___Value_3; }
	inline void set_Value_3(ThemePropertyValue_tBEEE2960BBA40D48351C4D2D963BEE04F0ADB5F8 * value)
	{
		___Value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_3), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo
struct SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::numColliders
	int32_t ___numColliders_0;
	// UnityEngine.Collider[] Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::queryBuffer
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___queryBuffer_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::queryRadius
	float ___queryRadius_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::queryMinDistance
	float ___queryMinDistance_3;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::queryAngle
	float ___queryAngle_4;
	// System.Single Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::querySmoothingFactor
	float ___querySmoothingFactor_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::ignoreBoundsHandlesForQuery
	bool ___ignoreBoundsHandlesForQuery_6;
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::grabbable
	NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * ___grabbable_7;

public:
	inline static int32_t get_offset_of_numColliders_0() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32, ___numColliders_0)); }
	inline int32_t get_numColliders_0() const { return ___numColliders_0; }
	inline int32_t* get_address_of_numColliders_0() { return &___numColliders_0; }
	inline void set_numColliders_0(int32_t value)
	{
		___numColliders_0 = value;
	}

	inline static int32_t get_offset_of_queryBuffer_1() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32, ___queryBuffer_1)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_queryBuffer_1() const { return ___queryBuffer_1; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_queryBuffer_1() { return &___queryBuffer_1; }
	inline void set_queryBuffer_1(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___queryBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queryBuffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_queryRadius_2() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32, ___queryRadius_2)); }
	inline float get_queryRadius_2() const { return ___queryRadius_2; }
	inline float* get_address_of_queryRadius_2() { return &___queryRadius_2; }
	inline void set_queryRadius_2(float value)
	{
		___queryRadius_2 = value;
	}

	inline static int32_t get_offset_of_queryMinDistance_3() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32, ___queryMinDistance_3)); }
	inline float get_queryMinDistance_3() const { return ___queryMinDistance_3; }
	inline float* get_address_of_queryMinDistance_3() { return &___queryMinDistance_3; }
	inline void set_queryMinDistance_3(float value)
	{
		___queryMinDistance_3 = value;
	}

	inline static int32_t get_offset_of_queryAngle_4() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32, ___queryAngle_4)); }
	inline float get_queryAngle_4() const { return ___queryAngle_4; }
	inline float* get_address_of_queryAngle_4() { return &___queryAngle_4; }
	inline void set_queryAngle_4(float value)
	{
		___queryAngle_4 = value;
	}

	inline static int32_t get_offset_of_querySmoothingFactor_5() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32, ___querySmoothingFactor_5)); }
	inline float get_querySmoothingFactor_5() const { return ___querySmoothingFactor_5; }
	inline float* get_address_of_querySmoothingFactor_5() { return &___querySmoothingFactor_5; }
	inline void set_querySmoothingFactor_5(float value)
	{
		___querySmoothingFactor_5 = value;
	}

	inline static int32_t get_offset_of_ignoreBoundsHandlesForQuery_6() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32, ___ignoreBoundsHandlesForQuery_6)); }
	inline bool get_ignoreBoundsHandlesForQuery_6() const { return ___ignoreBoundsHandlesForQuery_6; }
	inline bool* get_address_of_ignoreBoundsHandlesForQuery_6() { return &___ignoreBoundsHandlesForQuery_6; }
	inline void set_ignoreBoundsHandlesForQuery_6(bool value)
	{
		___ignoreBoundsHandlesForQuery_6 = value;
	}

	inline static int32_t get_offset_of_grabbable_7() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32, ___grabbable_7)); }
	inline NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * get_grabbable_7() const { return ___grabbable_7; }
	inline NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** get_address_of_grabbable_7() { return &___grabbable_7; }
	inline void set_grabbable_7(NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * value)
	{
		___grabbable_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabbable_7), (void*)value);
	}
};

struct SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::TryUpdateQueryBufferForLayerMaskPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TryUpdateQueryBufferForLayerMaskPerfMarker_9;

public:
	inline static int32_t get_offset_of_TryUpdateQueryBufferForLayerMaskPerfMarker_9() { return static_cast<int32_t>(offsetof(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_StaticFields, ___TryUpdateQueryBufferForLayerMaskPerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TryUpdateQueryBufferForLayerMaskPerfMarker_9() const { return ___TryUpdateQueryBufferForLayerMaskPerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TryUpdateQueryBufferForLayerMaskPerfMarker_9() { return &___TryUpdateQueryBufferForLayerMaskPerfMarker_9; }
	inline void set_TryUpdateQueryBufferForLayerMaskPerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TryUpdateQueryBufferForLayerMaskPerfMarker_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum
struct SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum::Name
	String_t* ___Name_0;
	// Microsoft.MixedReality.Toolkit.Input.CursorStateEnum Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum::CursorState
	int32_t ___CursorState_1;
	// UnityEngine.Sprite Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum::CursorSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___CursorSprite_2;
	// UnityEngine.Color Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum::CursorColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___CursorColor_3;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_CursorState_1() { return static_cast<int32_t>(offsetof(SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1, ___CursorState_1)); }
	inline int32_t get_CursorState_1() const { return ___CursorState_1; }
	inline int32_t* get_address_of_CursorState_1() { return &___CursorState_1; }
	inline void set_CursorState_1(int32_t value)
	{
		___CursorState_1 = value;
	}

	inline static int32_t get_offset_of_CursorSprite_2() { return static_cast<int32_t>(offsetof(SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1, ___CursorSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_CursorSprite_2() const { return ___CursorSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_CursorSprite_2() { return &___CursorSprite_2; }
	inline void set_CursorSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___CursorSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CursorSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_CursorColor_3() { return static_cast<int32_t>(offsetof(SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1, ___CursorColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_CursorColor_3() const { return ___CursorColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_CursorColor_3() { return &___CursorColor_3; }
	inline void set_CursorColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___CursorColor_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum
struct SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___CursorState_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___CursorSprite_2;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___CursorColor_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum
struct SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___CursorState_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___CursorSprite_2;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___CursorColor_3;
};

// Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49
struct U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49::<>4__this
	TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7, ___U3CU3E4__this_2)); }
	inline TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// System.Func`1<Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>>
struct Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Windows.Media.SpeechSynthesis.VoiceInformation,System.Boolean>
struct Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.WSA.AppCallbackItem
struct AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C  : public MulticastDelegate_t
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


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0
struct U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::folderPath
	String_t* ___folderPath_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::consolidate
	bool ___consolidate_3;
	// System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_folderPath_2() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1, ___folderPath_2)); }
	inline String_t* get_folderPath_2() const { return ___folderPath_2; }
	inline String_t** get_address_of_folderPath_2() { return &___folderPath_2; }
	inline void set_folderPath_2(String_t* value)
	{
		___folderPath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___folderPath_2), (void*)value);
	}

	inline static int32_t get_offset_of_consolidate_3() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1, ___consolidate_3)); }
	inline bool get_consolidate_3() const { return ___consolidate_3; }
	inline bool* get_address_of_consolidate_3() { return &___consolidate_3; }
	inline void set_consolidate_3(bool value)
	{
		___consolidate_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1, ___U3CU3E7__wrap1_4)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1
struct U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::folderPath
	String_t* ___folderPath_2;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::meshObserver
	RuntimeObject* ___meshObserver_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::consolidate
	bool ___consolidate_4;
	// System.Object Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::<>u__1
	RuntimeObject * ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_folderPath_2() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B, ___folderPath_2)); }
	inline String_t* get_folderPath_2() const { return ___folderPath_2; }
	inline String_t** get_address_of_folderPath_2() { return &___folderPath_2; }
	inline void set_folderPath_2(String_t* value)
	{
		___folderPath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___folderPath_2), (void*)value);
	}

	inline static int32_t get_offset_of_meshObserver_3() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B, ___meshObserver_3)); }
	inline RuntimeObject* get_meshObserver_3() const { return ___meshObserver_3; }
	inline RuntimeObject** get_address_of_meshObserver_3() { return &___meshObserver_3; }
	inline void set_meshObserver_3(RuntimeObject* value)
	{
		___meshObserver_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshObserver_3), (void*)value);
	}

	inline static int32_t get_offset_of_consolidate_4() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B, ___consolidate_4)); }
	inline bool get_consolidate_4() const { return ___consolidate_4; }
	inline bool* get_address_of_consolidate_4() { return &___consolidate_4; }
	inline void set_consolidate_4(bool value)
	{
		___consolidate_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B, ___U3CU3Eu__1_5)); }
	inline RuntimeObject * get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(RuntimeObject * value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_5), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49
struct U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49::<>4__this
	SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9, ___U3CU3E4__this_2)); }
	inline SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d
struct U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0 Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<>4__this
	U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1 Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<>8__1
	U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * ___U3CU3E8__1_3;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<buffer>5__2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3CbufferU3E5__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream> Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<>u__1
	TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  ___U3CU3Eu__1_5;
	// Windows.Storage.Streams.IInputStream Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<inputStream>5__3
	RuntimeObject* ___U3CinputStreamU3E5__3_6;
	// Windows.Storage.Streams.DataReader Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<dataReader>5__4
	DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * ___U3CdataReaderU3E5__4_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32> Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::<>u__2
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  ___U3CU3Eu__2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CU3E4__this_2)); }
	inline U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CbufferU3E5__2_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3CbufferU3E5__2_4() const { return ___U3CbufferU3E5__2_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3CbufferU3E5__2_4() { return &___U3CbufferU3E5__2_4; }
	inline void set_U3CbufferU3E5__2_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3CbufferU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbufferU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CinputStreamU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CinputStreamU3E5__3_6)); }
	inline RuntimeObject* get_U3CinputStreamU3E5__3_6() const { return ___U3CinputStreamU3E5__3_6; }
	inline RuntimeObject** get_address_of_U3CinputStreamU3E5__3_6() { return &___U3CinputStreamU3E5__3_6; }
	inline void set_U3CinputStreamU3E5__3_6(RuntimeObject* value)
	{
		___U3CinputStreamU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputStreamU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataReaderU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CdataReaderU3E5__4_7)); }
	inline DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * get_U3CdataReaderU3E5__4_7() const { return ___U3CdataReaderU3E5__4_7; }
	inline DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E ** get_address_of_U3CdataReaderU3E5__4_7() { return &___U3CdataReaderU3E5__4_7; }
	inline void set_U3CdataReaderU3E5__4_7(DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * value)
	{
		___U3CdataReaderU3E5__4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataReaderU3E5__4_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_8() { return static_cast<int32_t>(offsetof(U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88, ___U3CU3Eu__2_8)); }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  get_U3CU3Eu__2_8() const { return ___U3CU3Eu__2_8; }
	inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * get_address_of_U3CU3Eu__2_8() { return &___U3CU3Eu__2_8; }
	inline void set_U3CU3Eu__2_8(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  value)
	{
		___U3CU3Eu__2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_8))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
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


// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable
struct NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::ShowTetherWhenManipulating
	bool ___ShowTetherWhenManipulating_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable::IsBoundsHandles
	bool ___IsBoundsHandles_5;

public:
	inline static int32_t get_offset_of_ShowTetherWhenManipulating_4() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2, ___ShowTetherWhenManipulating_4)); }
	inline bool get_ShowTetherWhenManipulating_4() const { return ___ShowTetherWhenManipulating_4; }
	inline bool* get_address_of_ShowTetherWhenManipulating_4() { return &___ShowTetherWhenManipulating_4; }
	inline void set_ShowTetherWhenManipulating_4(bool value)
	{
		___ShowTetherWhenManipulating_4 = value;
	}

	inline static int32_t get_offset_of_IsBoundsHandles_5() { return static_cast<int32_t>(offsetof(NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2, ___IsBoundsHandles_5)); }
	inline bool get_IsBoundsHandles_5() const { return ___IsBoundsHandles_5; }
	inline bool* get_address_of_IsBoundsHandles_5() { return &___IsBoundsHandles_5; }
	inline void set_IsBoundsHandles_5(bool value)
	{
		___IsBoundsHandles_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint
struct RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::centeredParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___centeredParent_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::inverseParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___inverseParent_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::pivotPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pivotPosition_6;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::duration
	float ___duration_7;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::animationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___animationCurve_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::rotationVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationVector_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::centeredParentRotate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___centeredParentRotate_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::hintPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___hintPosition_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::updatePosition
	bool ___updatePosition_12;

public:
	inline static int32_t get_offset_of_centeredParent_4() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___centeredParent_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_centeredParent_4() const { return ___centeredParent_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_centeredParent_4() { return &___centeredParent_4; }
	inline void set_centeredParent_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___centeredParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centeredParent_4), (void*)value);
	}

	inline static int32_t get_offset_of_inverseParent_5() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___inverseParent_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_inverseParent_5() const { return ___inverseParent_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_inverseParent_5() { return &___inverseParent_5; }
	inline void set_inverseParent_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___inverseParent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inverseParent_5), (void*)value);
	}

	inline static int32_t get_offset_of_pivotPosition_6() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___pivotPosition_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pivotPosition_6() const { return ___pivotPosition_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pivotPosition_6() { return &___pivotPosition_6; }
	inline void set_pivotPosition_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pivotPosition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pivotPosition_6), (void*)value);
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___duration_7)); }
	inline float get_duration_7() const { return ___duration_7; }
	inline float* get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(float value)
	{
		___duration_7 = value;
	}

	inline static int32_t get_offset_of_animationCurve_8() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___animationCurve_8)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_animationCurve_8() const { return ___animationCurve_8; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_animationCurve_8() { return &___animationCurve_8; }
	inline void set_animationCurve_8(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___animationCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationVector_9() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___rotationVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationVector_9() const { return ___rotationVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationVector_9() { return &___rotationVector_9; }
	inline void set_rotationVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationVector_9 = value;
	}

	inline static int32_t get_offset_of_centeredParentRotate_10() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___centeredParentRotate_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_centeredParentRotate_10() const { return ___centeredParentRotate_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_centeredParentRotate_10() { return &___centeredParentRotate_10; }
	inline void set_centeredParentRotate_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___centeredParentRotate_10 = value;
	}

	inline static int32_t get_offset_of_hintPosition_11() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___hintPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_hintPosition_11() const { return ___hintPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_hintPosition_11() { return &___hintPosition_11; }
	inline void set_hintPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___hintPosition_11 = value;
	}

	inline static int32_t get_offset_of_updatePosition_12() { return static_cast<int32_t>(offsetof(RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC, ___updatePosition_12)); }
	inline bool get_updatePosition_12() const { return ___updatePosition_12; }
	inline bool* get_address_of_updatePosition_12() { return &___updatePosition_12; }
	inline void set_updatePosition_12(bool value)
	{
		___updatePosition_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection
struct ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::canScroll
	bool ___canScroll_4;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/EditMode Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::maskEditMode
	int32_t ___maskEditMode_5;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/EditMode Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::colliderEditMode
	int32_t ___colliderEditMode_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::maskEnabled
	bool ___maskEnabled_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::wasMaskEnabled
	bool ___wasMaskEnabled_8;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::handDeltaScrollThreshold
	float ___handDeltaScrollThreshold_9;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::releaseThresholdFront
	float ___releaseThresholdFront_10;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::releaseThresholdBack
	float ___releaseThresholdBack_11;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::releaseThresholdLeftRight
	float ___releaseThresholdLeftRight_12;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::releaseThresholdTopBottom
	float ___releaseThresholdTopBottom_13;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::frontTouchDistance
	float ___frontTouchDistance_14;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollDirectionType Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::scrollDirection
	int32_t ___scrollDirection_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::useOnPreRender
	bool ___useOnPreRender_16;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::velocityMultiplier
	float ___velocityMultiplier_17;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::velocityDampen
	float ___velocityDampen_18;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/VelocityType Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::typeOfVelocity
	int32_t ___typeOfVelocity_19;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::paginationCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___paginationCurve_20;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::animationLength
	float ___animationLength_21;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::cellsPerTier
	int32_t ___cellsPerTier_22;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::tiersPerPage
	int32_t ___tiersPerPage_23;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::cellWidth
	float ___cellWidth_24;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::cellHeight
	float ___cellHeight_25;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::cellDepth
	float ___cellDepth_26;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::bounceMultiplier
	float ___bounceMultiplier_27;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollEvent Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::OnClick
	ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * ___OnClick_31;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollEvent Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::OnTouchStarted
	ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * ___OnTouchStarted_32;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollEvent Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::OnTouchEnded
	ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * ___OnTouchEnded_33;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::OnMomentumEnded
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMomentumEnded_34;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::OnMomentumStarted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnMomentumStarted_35;
	// Microsoft.MixedReality.Toolkit.Utilities.CameraEventRouter Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::cameraMethods
	CameraEventRouter_t5A5817ACE27D097F657BE45B3C604D8CB7AC707B * ___cameraMethods_36;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::minY
	float ___minY_37;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::maxX
	float ___maxX_38;
	// UnityEngine.Bounds Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::contentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___contentBounds_39;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::scrollingCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ___scrollingCollider_40;
	// Microsoft.MixedReality.Toolkit.Input.NearInteractionTouchable Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::scrollingTouchable
	NearInteractionTouchable_t8F41F8E116C356E7F0C09D7ABD5876D4AD7A3C66 * ___scrollingTouchable_42;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::scrollContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scrollContainer_43;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::clippingObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___clippingObject_44;
	// Microsoft.MixedReality.Toolkit.Utilities.ClippingBox Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::clipBox
	ClippingBox_tD8ECBBE9AB67E6CF6EFE828CF787B65C5998DDFE * ___clipBox_45;
	// UnityEngine.Collider Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::clippingBoundsCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___clippingBoundsCollider_46;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::contentVisibilityThresholdRatio
	float ___contentVisibilityThresholdRatio_47;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::oldIsTargetPositionLockedOnFocusLock
	bool ___oldIsTargetPositionLockedOnFocusLock_48;
	// System.Collections.Generic.HashSet`1<UnityEngine.Renderer> Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::clippedRenderers
	HashSet_1_t29AE451AF3792A7A6741732B896B4D841EC86054 * ___clippedRenderers_49;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::<IsEngaged>k__BackingField
	bool ___U3CIsEngagedU3Ek__BackingField_50;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::<IsDragging>k__BackingField
	bool ___U3CIsDraggingU3Ek__BackingField_51;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::<IsTouched>k__BackingField
	bool ___U3CIsTouchedU3Ek__BackingField_52;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::<HasMomentum>k__BackingField
	bool ___U3CHasMomentumU3Ek__BackingField_53;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::initialScrollerPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialScrollerPos_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::workingScrollerPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___workingScrollerPos_55;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::renderersToClip
	List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * ___renderersToClip_56;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::renderersToUnclip
	List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * ___renderersToUnclip_57;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::currentPointer
	RuntimeObject* ___currentPointer_58;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::initialFocusedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___initialFocusedObject_59;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::initialPointerPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPointerPos_60;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::lastPointerPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lastPointerPos_61;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::scrollVelocity
	float ___scrollVelocity_62;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::avgVelocity
	float ___avgVelocity_63;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::velocityFilterWeight
	float ___velocityFilterWeight_64;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/VelocityState Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::currentVelocityState
	int32_t ___currentVelocityState_65;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/VelocityState Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::previousVelocityState
	int32_t ___previousVelocityState_66;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::velocityDestinationPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocityDestinationPos_67;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::velocitySnapshot
	float ___velocitySnapshot_68;
	// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::animateScroller
	RuntimeObject* ___animateScroller_69;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::disableClippedGameObjects
	bool ___disableClippedGameObjects_70;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::disableClippedRenderers
	bool ___disableClippedRenderers_71;

public:
	inline static int32_t get_offset_of_canScroll_4() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___canScroll_4)); }
	inline bool get_canScroll_4() const { return ___canScroll_4; }
	inline bool* get_address_of_canScroll_4() { return &___canScroll_4; }
	inline void set_canScroll_4(bool value)
	{
		___canScroll_4 = value;
	}

	inline static int32_t get_offset_of_maskEditMode_5() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___maskEditMode_5)); }
	inline int32_t get_maskEditMode_5() const { return ___maskEditMode_5; }
	inline int32_t* get_address_of_maskEditMode_5() { return &___maskEditMode_5; }
	inline void set_maskEditMode_5(int32_t value)
	{
		___maskEditMode_5 = value;
	}

	inline static int32_t get_offset_of_colliderEditMode_6() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___colliderEditMode_6)); }
	inline int32_t get_colliderEditMode_6() const { return ___colliderEditMode_6; }
	inline int32_t* get_address_of_colliderEditMode_6() { return &___colliderEditMode_6; }
	inline void set_colliderEditMode_6(int32_t value)
	{
		___colliderEditMode_6 = value;
	}

	inline static int32_t get_offset_of_maskEnabled_7() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___maskEnabled_7)); }
	inline bool get_maskEnabled_7() const { return ___maskEnabled_7; }
	inline bool* get_address_of_maskEnabled_7() { return &___maskEnabled_7; }
	inline void set_maskEnabled_7(bool value)
	{
		___maskEnabled_7 = value;
	}

	inline static int32_t get_offset_of_wasMaskEnabled_8() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___wasMaskEnabled_8)); }
	inline bool get_wasMaskEnabled_8() const { return ___wasMaskEnabled_8; }
	inline bool* get_address_of_wasMaskEnabled_8() { return &___wasMaskEnabled_8; }
	inline void set_wasMaskEnabled_8(bool value)
	{
		___wasMaskEnabled_8 = value;
	}

	inline static int32_t get_offset_of_handDeltaScrollThreshold_9() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___handDeltaScrollThreshold_9)); }
	inline float get_handDeltaScrollThreshold_9() const { return ___handDeltaScrollThreshold_9; }
	inline float* get_address_of_handDeltaScrollThreshold_9() { return &___handDeltaScrollThreshold_9; }
	inline void set_handDeltaScrollThreshold_9(float value)
	{
		___handDeltaScrollThreshold_9 = value;
	}

	inline static int32_t get_offset_of_releaseThresholdFront_10() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___releaseThresholdFront_10)); }
	inline float get_releaseThresholdFront_10() const { return ___releaseThresholdFront_10; }
	inline float* get_address_of_releaseThresholdFront_10() { return &___releaseThresholdFront_10; }
	inline void set_releaseThresholdFront_10(float value)
	{
		___releaseThresholdFront_10 = value;
	}

	inline static int32_t get_offset_of_releaseThresholdBack_11() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___releaseThresholdBack_11)); }
	inline float get_releaseThresholdBack_11() const { return ___releaseThresholdBack_11; }
	inline float* get_address_of_releaseThresholdBack_11() { return &___releaseThresholdBack_11; }
	inline void set_releaseThresholdBack_11(float value)
	{
		___releaseThresholdBack_11 = value;
	}

	inline static int32_t get_offset_of_releaseThresholdLeftRight_12() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___releaseThresholdLeftRight_12)); }
	inline float get_releaseThresholdLeftRight_12() const { return ___releaseThresholdLeftRight_12; }
	inline float* get_address_of_releaseThresholdLeftRight_12() { return &___releaseThresholdLeftRight_12; }
	inline void set_releaseThresholdLeftRight_12(float value)
	{
		___releaseThresholdLeftRight_12 = value;
	}

	inline static int32_t get_offset_of_releaseThresholdTopBottom_13() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___releaseThresholdTopBottom_13)); }
	inline float get_releaseThresholdTopBottom_13() const { return ___releaseThresholdTopBottom_13; }
	inline float* get_address_of_releaseThresholdTopBottom_13() { return &___releaseThresholdTopBottom_13; }
	inline void set_releaseThresholdTopBottom_13(float value)
	{
		___releaseThresholdTopBottom_13 = value;
	}

	inline static int32_t get_offset_of_frontTouchDistance_14() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___frontTouchDistance_14)); }
	inline float get_frontTouchDistance_14() const { return ___frontTouchDistance_14; }
	inline float* get_address_of_frontTouchDistance_14() { return &___frontTouchDistance_14; }
	inline void set_frontTouchDistance_14(float value)
	{
		___frontTouchDistance_14 = value;
	}

	inline static int32_t get_offset_of_scrollDirection_15() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___scrollDirection_15)); }
	inline int32_t get_scrollDirection_15() const { return ___scrollDirection_15; }
	inline int32_t* get_address_of_scrollDirection_15() { return &___scrollDirection_15; }
	inline void set_scrollDirection_15(int32_t value)
	{
		___scrollDirection_15 = value;
	}

	inline static int32_t get_offset_of_useOnPreRender_16() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___useOnPreRender_16)); }
	inline bool get_useOnPreRender_16() const { return ___useOnPreRender_16; }
	inline bool* get_address_of_useOnPreRender_16() { return &___useOnPreRender_16; }
	inline void set_useOnPreRender_16(bool value)
	{
		___useOnPreRender_16 = value;
	}

	inline static int32_t get_offset_of_velocityMultiplier_17() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___velocityMultiplier_17)); }
	inline float get_velocityMultiplier_17() const { return ___velocityMultiplier_17; }
	inline float* get_address_of_velocityMultiplier_17() { return &___velocityMultiplier_17; }
	inline void set_velocityMultiplier_17(float value)
	{
		___velocityMultiplier_17 = value;
	}

	inline static int32_t get_offset_of_velocityDampen_18() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___velocityDampen_18)); }
	inline float get_velocityDampen_18() const { return ___velocityDampen_18; }
	inline float* get_address_of_velocityDampen_18() { return &___velocityDampen_18; }
	inline void set_velocityDampen_18(float value)
	{
		___velocityDampen_18 = value;
	}

	inline static int32_t get_offset_of_typeOfVelocity_19() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___typeOfVelocity_19)); }
	inline int32_t get_typeOfVelocity_19() const { return ___typeOfVelocity_19; }
	inline int32_t* get_address_of_typeOfVelocity_19() { return &___typeOfVelocity_19; }
	inline void set_typeOfVelocity_19(int32_t value)
	{
		___typeOfVelocity_19 = value;
	}

	inline static int32_t get_offset_of_paginationCurve_20() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___paginationCurve_20)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_paginationCurve_20() const { return ___paginationCurve_20; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_paginationCurve_20() { return &___paginationCurve_20; }
	inline void set_paginationCurve_20(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___paginationCurve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paginationCurve_20), (void*)value);
	}

	inline static int32_t get_offset_of_animationLength_21() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___animationLength_21)); }
	inline float get_animationLength_21() const { return ___animationLength_21; }
	inline float* get_address_of_animationLength_21() { return &___animationLength_21; }
	inline void set_animationLength_21(float value)
	{
		___animationLength_21 = value;
	}

	inline static int32_t get_offset_of_cellsPerTier_22() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___cellsPerTier_22)); }
	inline int32_t get_cellsPerTier_22() const { return ___cellsPerTier_22; }
	inline int32_t* get_address_of_cellsPerTier_22() { return &___cellsPerTier_22; }
	inline void set_cellsPerTier_22(int32_t value)
	{
		___cellsPerTier_22 = value;
	}

	inline static int32_t get_offset_of_tiersPerPage_23() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___tiersPerPage_23)); }
	inline int32_t get_tiersPerPage_23() const { return ___tiersPerPage_23; }
	inline int32_t* get_address_of_tiersPerPage_23() { return &___tiersPerPage_23; }
	inline void set_tiersPerPage_23(int32_t value)
	{
		___tiersPerPage_23 = value;
	}

	inline static int32_t get_offset_of_cellWidth_24() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___cellWidth_24)); }
	inline float get_cellWidth_24() const { return ___cellWidth_24; }
	inline float* get_address_of_cellWidth_24() { return &___cellWidth_24; }
	inline void set_cellWidth_24(float value)
	{
		___cellWidth_24 = value;
	}

	inline static int32_t get_offset_of_cellHeight_25() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___cellHeight_25)); }
	inline float get_cellHeight_25() const { return ___cellHeight_25; }
	inline float* get_address_of_cellHeight_25() { return &___cellHeight_25; }
	inline void set_cellHeight_25(float value)
	{
		___cellHeight_25 = value;
	}

	inline static int32_t get_offset_of_cellDepth_26() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___cellDepth_26)); }
	inline float get_cellDepth_26() const { return ___cellDepth_26; }
	inline float* get_address_of_cellDepth_26() { return &___cellDepth_26; }
	inline void set_cellDepth_26(float value)
	{
		___cellDepth_26 = value;
	}

	inline static int32_t get_offset_of_bounceMultiplier_27() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___bounceMultiplier_27)); }
	inline float get_bounceMultiplier_27() const { return ___bounceMultiplier_27; }
	inline float* get_address_of_bounceMultiplier_27() { return &___bounceMultiplier_27; }
	inline void set_bounceMultiplier_27(float value)
	{
		___bounceMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_OnClick_31() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___OnClick_31)); }
	inline ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * get_OnClick_31() const { return ___OnClick_31; }
	inline ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 ** get_address_of_OnClick_31() { return &___OnClick_31; }
	inline void set_OnClick_31(ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * value)
	{
		___OnClick_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClick_31), (void*)value);
	}

	inline static int32_t get_offset_of_OnTouchStarted_32() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___OnTouchStarted_32)); }
	inline ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * get_OnTouchStarted_32() const { return ___OnTouchStarted_32; }
	inline ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 ** get_address_of_OnTouchStarted_32() { return &___OnTouchStarted_32; }
	inline void set_OnTouchStarted_32(ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * value)
	{
		___OnTouchStarted_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchStarted_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnTouchEnded_33() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___OnTouchEnded_33)); }
	inline ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * get_OnTouchEnded_33() const { return ___OnTouchEnded_33; }
	inline ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 ** get_address_of_OnTouchEnded_33() { return &___OnTouchEnded_33; }
	inline void set_OnTouchEnded_33(ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * value)
	{
		___OnTouchEnded_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchEnded_33), (void*)value);
	}

	inline static int32_t get_offset_of_OnMomentumEnded_34() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___OnMomentumEnded_34)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMomentumEnded_34() const { return ___OnMomentumEnded_34; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMomentumEnded_34() { return &___OnMomentumEnded_34; }
	inline void set_OnMomentumEnded_34(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMomentumEnded_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMomentumEnded_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnMomentumStarted_35() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___OnMomentumStarted_35)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnMomentumStarted_35() const { return ___OnMomentumStarted_35; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnMomentumStarted_35() { return &___OnMomentumStarted_35; }
	inline void set_OnMomentumStarted_35(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnMomentumStarted_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMomentumStarted_35), (void*)value);
	}

	inline static int32_t get_offset_of_cameraMethods_36() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___cameraMethods_36)); }
	inline CameraEventRouter_t5A5817ACE27D097F657BE45B3C604D8CB7AC707B * get_cameraMethods_36() const { return ___cameraMethods_36; }
	inline CameraEventRouter_t5A5817ACE27D097F657BE45B3C604D8CB7AC707B ** get_address_of_cameraMethods_36() { return &___cameraMethods_36; }
	inline void set_cameraMethods_36(CameraEventRouter_t5A5817ACE27D097F657BE45B3C604D8CB7AC707B * value)
	{
		___cameraMethods_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraMethods_36), (void*)value);
	}

	inline static int32_t get_offset_of_minY_37() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___minY_37)); }
	inline float get_minY_37() const { return ___minY_37; }
	inline float* get_address_of_minY_37() { return &___minY_37; }
	inline void set_minY_37(float value)
	{
		___minY_37 = value;
	}

	inline static int32_t get_offset_of_maxX_38() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___maxX_38)); }
	inline float get_maxX_38() const { return ___maxX_38; }
	inline float* get_address_of_maxX_38() { return &___maxX_38; }
	inline void set_maxX_38(float value)
	{
		___maxX_38 = value;
	}

	inline static int32_t get_offset_of_contentBounds_39() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___contentBounds_39)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_contentBounds_39() const { return ___contentBounds_39; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_contentBounds_39() { return &___contentBounds_39; }
	inline void set_contentBounds_39(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___contentBounds_39 = value;
	}

	inline static int32_t get_offset_of_scrollingCollider_40() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___scrollingCollider_40)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get_scrollingCollider_40() const { return ___scrollingCollider_40; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of_scrollingCollider_40() { return &___scrollingCollider_40; }
	inline void set_scrollingCollider_40(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		___scrollingCollider_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollingCollider_40), (void*)value);
	}

	inline static int32_t get_offset_of_scrollingTouchable_42() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___scrollingTouchable_42)); }
	inline NearInteractionTouchable_t8F41F8E116C356E7F0C09D7ABD5876D4AD7A3C66 * get_scrollingTouchable_42() const { return ___scrollingTouchable_42; }
	inline NearInteractionTouchable_t8F41F8E116C356E7F0C09D7ABD5876D4AD7A3C66 ** get_address_of_scrollingTouchable_42() { return &___scrollingTouchable_42; }
	inline void set_scrollingTouchable_42(NearInteractionTouchable_t8F41F8E116C356E7F0C09D7ABD5876D4AD7A3C66 * value)
	{
		___scrollingTouchable_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollingTouchable_42), (void*)value);
	}

	inline static int32_t get_offset_of_scrollContainer_43() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___scrollContainer_43)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scrollContainer_43() const { return ___scrollContainer_43; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scrollContainer_43() { return &___scrollContainer_43; }
	inline void set_scrollContainer_43(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scrollContainer_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollContainer_43), (void*)value);
	}

	inline static int32_t get_offset_of_clippingObject_44() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___clippingObject_44)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_clippingObject_44() const { return ___clippingObject_44; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_clippingObject_44() { return &___clippingObject_44; }
	inline void set_clippingObject_44(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___clippingObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clippingObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_clipBox_45() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___clipBox_45)); }
	inline ClippingBox_tD8ECBBE9AB67E6CF6EFE828CF787B65C5998DDFE * get_clipBox_45() const { return ___clipBox_45; }
	inline ClippingBox_tD8ECBBE9AB67E6CF6EFE828CF787B65C5998DDFE ** get_address_of_clipBox_45() { return &___clipBox_45; }
	inline void set_clipBox_45(ClippingBox_tD8ECBBE9AB67E6CF6EFE828CF787B65C5998DDFE * value)
	{
		___clipBox_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipBox_45), (void*)value);
	}

	inline static int32_t get_offset_of_clippingBoundsCollider_46() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___clippingBoundsCollider_46)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_clippingBoundsCollider_46() const { return ___clippingBoundsCollider_46; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_clippingBoundsCollider_46() { return &___clippingBoundsCollider_46; }
	inline void set_clippingBoundsCollider_46(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___clippingBoundsCollider_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clippingBoundsCollider_46), (void*)value);
	}

	inline static int32_t get_offset_of_contentVisibilityThresholdRatio_47() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___contentVisibilityThresholdRatio_47)); }
	inline float get_contentVisibilityThresholdRatio_47() const { return ___contentVisibilityThresholdRatio_47; }
	inline float* get_address_of_contentVisibilityThresholdRatio_47() { return &___contentVisibilityThresholdRatio_47; }
	inline void set_contentVisibilityThresholdRatio_47(float value)
	{
		___contentVisibilityThresholdRatio_47 = value;
	}

	inline static int32_t get_offset_of_oldIsTargetPositionLockedOnFocusLock_48() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___oldIsTargetPositionLockedOnFocusLock_48)); }
	inline bool get_oldIsTargetPositionLockedOnFocusLock_48() const { return ___oldIsTargetPositionLockedOnFocusLock_48; }
	inline bool* get_address_of_oldIsTargetPositionLockedOnFocusLock_48() { return &___oldIsTargetPositionLockedOnFocusLock_48; }
	inline void set_oldIsTargetPositionLockedOnFocusLock_48(bool value)
	{
		___oldIsTargetPositionLockedOnFocusLock_48 = value;
	}

	inline static int32_t get_offset_of_clippedRenderers_49() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___clippedRenderers_49)); }
	inline HashSet_1_t29AE451AF3792A7A6741732B896B4D841EC86054 * get_clippedRenderers_49() const { return ___clippedRenderers_49; }
	inline HashSet_1_t29AE451AF3792A7A6741732B896B4D841EC86054 ** get_address_of_clippedRenderers_49() { return &___clippedRenderers_49; }
	inline void set_clippedRenderers_49(HashSet_1_t29AE451AF3792A7A6741732B896B4D841EC86054 * value)
	{
		___clippedRenderers_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clippedRenderers_49), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsEngagedU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___U3CIsEngagedU3Ek__BackingField_50)); }
	inline bool get_U3CIsEngagedU3Ek__BackingField_50() const { return ___U3CIsEngagedU3Ek__BackingField_50; }
	inline bool* get_address_of_U3CIsEngagedU3Ek__BackingField_50() { return &___U3CIsEngagedU3Ek__BackingField_50; }
	inline void set_U3CIsEngagedU3Ek__BackingField_50(bool value)
	{
		___U3CIsEngagedU3Ek__BackingField_50 = value;
	}

	inline static int32_t get_offset_of_U3CIsDraggingU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___U3CIsDraggingU3Ek__BackingField_51)); }
	inline bool get_U3CIsDraggingU3Ek__BackingField_51() const { return ___U3CIsDraggingU3Ek__BackingField_51; }
	inline bool* get_address_of_U3CIsDraggingU3Ek__BackingField_51() { return &___U3CIsDraggingU3Ek__BackingField_51; }
	inline void set_U3CIsDraggingU3Ek__BackingField_51(bool value)
	{
		___U3CIsDraggingU3Ek__BackingField_51 = value;
	}

	inline static int32_t get_offset_of_U3CIsTouchedU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___U3CIsTouchedU3Ek__BackingField_52)); }
	inline bool get_U3CIsTouchedU3Ek__BackingField_52() const { return ___U3CIsTouchedU3Ek__BackingField_52; }
	inline bool* get_address_of_U3CIsTouchedU3Ek__BackingField_52() { return &___U3CIsTouchedU3Ek__BackingField_52; }
	inline void set_U3CIsTouchedU3Ek__BackingField_52(bool value)
	{
		___U3CIsTouchedU3Ek__BackingField_52 = value;
	}

	inline static int32_t get_offset_of_U3CHasMomentumU3Ek__BackingField_53() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___U3CHasMomentumU3Ek__BackingField_53)); }
	inline bool get_U3CHasMomentumU3Ek__BackingField_53() const { return ___U3CHasMomentumU3Ek__BackingField_53; }
	inline bool* get_address_of_U3CHasMomentumU3Ek__BackingField_53() { return &___U3CHasMomentumU3Ek__BackingField_53; }
	inline void set_U3CHasMomentumU3Ek__BackingField_53(bool value)
	{
		___U3CHasMomentumU3Ek__BackingField_53 = value;
	}

	inline static int32_t get_offset_of_initialScrollerPos_54() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___initialScrollerPos_54)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialScrollerPos_54() const { return ___initialScrollerPos_54; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialScrollerPos_54() { return &___initialScrollerPos_54; }
	inline void set_initialScrollerPos_54(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialScrollerPos_54 = value;
	}

	inline static int32_t get_offset_of_workingScrollerPos_55() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___workingScrollerPos_55)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_workingScrollerPos_55() const { return ___workingScrollerPos_55; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_workingScrollerPos_55() { return &___workingScrollerPos_55; }
	inline void set_workingScrollerPos_55(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___workingScrollerPos_55 = value;
	}

	inline static int32_t get_offset_of_renderersToClip_56() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___renderersToClip_56)); }
	inline List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * get_renderersToClip_56() const { return ___renderersToClip_56; }
	inline List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE ** get_address_of_renderersToClip_56() { return &___renderersToClip_56; }
	inline void set_renderersToClip_56(List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * value)
	{
		___renderersToClip_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderersToClip_56), (void*)value);
	}

	inline static int32_t get_offset_of_renderersToUnclip_57() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___renderersToUnclip_57)); }
	inline List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * get_renderersToUnclip_57() const { return ___renderersToUnclip_57; }
	inline List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE ** get_address_of_renderersToUnclip_57() { return &___renderersToUnclip_57; }
	inline void set_renderersToUnclip_57(List_1_tB73BF10E0869BDB4D391E61BA46B75BECA4DCDBE * value)
	{
		___renderersToUnclip_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderersToUnclip_57), (void*)value);
	}

	inline static int32_t get_offset_of_currentPointer_58() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___currentPointer_58)); }
	inline RuntimeObject* get_currentPointer_58() const { return ___currentPointer_58; }
	inline RuntimeObject** get_address_of_currentPointer_58() { return &___currentPointer_58; }
	inline void set_currentPointer_58(RuntimeObject* value)
	{
		___currentPointer_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentPointer_58), (void*)value);
	}

	inline static int32_t get_offset_of_initialFocusedObject_59() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___initialFocusedObject_59)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_initialFocusedObject_59() const { return ___initialFocusedObject_59; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_initialFocusedObject_59() { return &___initialFocusedObject_59; }
	inline void set_initialFocusedObject_59(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___initialFocusedObject_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialFocusedObject_59), (void*)value);
	}

	inline static int32_t get_offset_of_initialPointerPos_60() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___initialPointerPos_60)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPointerPos_60() const { return ___initialPointerPos_60; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPointerPos_60() { return &___initialPointerPos_60; }
	inline void set_initialPointerPos_60(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPointerPos_60 = value;
	}

	inline static int32_t get_offset_of_lastPointerPos_61() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___lastPointerPos_61)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lastPointerPos_61() const { return ___lastPointerPos_61; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lastPointerPos_61() { return &___lastPointerPos_61; }
	inline void set_lastPointerPos_61(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lastPointerPos_61 = value;
	}

	inline static int32_t get_offset_of_scrollVelocity_62() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___scrollVelocity_62)); }
	inline float get_scrollVelocity_62() const { return ___scrollVelocity_62; }
	inline float* get_address_of_scrollVelocity_62() { return &___scrollVelocity_62; }
	inline void set_scrollVelocity_62(float value)
	{
		___scrollVelocity_62 = value;
	}

	inline static int32_t get_offset_of_avgVelocity_63() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___avgVelocity_63)); }
	inline float get_avgVelocity_63() const { return ___avgVelocity_63; }
	inline float* get_address_of_avgVelocity_63() { return &___avgVelocity_63; }
	inline void set_avgVelocity_63(float value)
	{
		___avgVelocity_63 = value;
	}

	inline static int32_t get_offset_of_velocityFilterWeight_64() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___velocityFilterWeight_64)); }
	inline float get_velocityFilterWeight_64() const { return ___velocityFilterWeight_64; }
	inline float* get_address_of_velocityFilterWeight_64() { return &___velocityFilterWeight_64; }
	inline void set_velocityFilterWeight_64(float value)
	{
		___velocityFilterWeight_64 = value;
	}

	inline static int32_t get_offset_of_currentVelocityState_65() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___currentVelocityState_65)); }
	inline int32_t get_currentVelocityState_65() const { return ___currentVelocityState_65; }
	inline int32_t* get_address_of_currentVelocityState_65() { return &___currentVelocityState_65; }
	inline void set_currentVelocityState_65(int32_t value)
	{
		___currentVelocityState_65 = value;
	}

	inline static int32_t get_offset_of_previousVelocityState_66() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___previousVelocityState_66)); }
	inline int32_t get_previousVelocityState_66() const { return ___previousVelocityState_66; }
	inline int32_t* get_address_of_previousVelocityState_66() { return &___previousVelocityState_66; }
	inline void set_previousVelocityState_66(int32_t value)
	{
		___previousVelocityState_66 = value;
	}

	inline static int32_t get_offset_of_velocityDestinationPos_67() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___velocityDestinationPos_67)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocityDestinationPos_67() const { return ___velocityDestinationPos_67; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocityDestinationPos_67() { return &___velocityDestinationPos_67; }
	inline void set_velocityDestinationPos_67(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocityDestinationPos_67 = value;
	}

	inline static int32_t get_offset_of_velocitySnapshot_68() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___velocitySnapshot_68)); }
	inline float get_velocitySnapshot_68() const { return ___velocitySnapshot_68; }
	inline float* get_address_of_velocitySnapshot_68() { return &___velocitySnapshot_68; }
	inline void set_velocitySnapshot_68(float value)
	{
		___velocitySnapshot_68 = value;
	}

	inline static int32_t get_offset_of_animateScroller_69() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___animateScroller_69)); }
	inline RuntimeObject* get_animateScroller_69() const { return ___animateScroller_69; }
	inline RuntimeObject** get_address_of_animateScroller_69() { return &___animateScroller_69; }
	inline void set_animateScroller_69(RuntimeObject* value)
	{
		___animateScroller_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animateScroller_69), (void*)value);
	}

	inline static int32_t get_offset_of_disableClippedGameObjects_70() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___disableClippedGameObjects_70)); }
	inline bool get_disableClippedGameObjects_70() const { return ___disableClippedGameObjects_70; }
	inline bool* get_address_of_disableClippedGameObjects_70() { return &___disableClippedGameObjects_70; }
	inline void set_disableClippedGameObjects_70(bool value)
	{
		___disableClippedGameObjects_70 = value;
	}

	inline static int32_t get_offset_of_disableClippedRenderers_71() { return static_cast<int32_t>(offsetof(ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3, ___disableClippedRenderers_71)); }
	inline bool get_disableClippedRenderers_71() const { return ___disableClippedRenderers_71; }
	inline bool* get_address_of_disableClippedRenderers_71() { return &___disableClippedRenderers_71; }
	inline void set_disableClippedRenderers_71(bool value)
	{
		___disableClippedRenderers_71 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes
struct SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::planesParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___planesParent_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::physicsLayer
	int32_t ___physicsLayer_5;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::defaultMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___defaultMaterial_6;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::minArea
	float ___minArea_7;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::upNormalThreshold
	float ___upNormalThreshold_8;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::floorBuffer
	float ___floorBuffer_9;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::ceilingBuffer
	float ___ceilingBuffer_10;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::planeThickness
	float ___planeThickness_11;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::drawPlanesMask
	int32_t ___drawPlanesMask_12;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessSurfaceTypes Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::destroyPlanesMask
	int32_t ___destroyPlanesMask_13;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessPlanarObject> Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::activePlanes
	List_1_t894DA985041C258C8E91906993264EB48D81B93E * ___activePlanes_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::makingPlanes
	bool ___makingPlanes_15;
	// System.Threading.CancellationTokenSource Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes::tokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___tokenSource_16;

public:
	inline static int32_t get_offset_of_planesParent_4() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___planesParent_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_planesParent_4() const { return ___planesParent_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_planesParent_4() { return &___planesParent_4; }
	inline void set_planesParent_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___planesParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___planesParent_4), (void*)value);
	}

	inline static int32_t get_offset_of_physicsLayer_5() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___physicsLayer_5)); }
	inline int32_t get_physicsLayer_5() const { return ___physicsLayer_5; }
	inline int32_t* get_address_of_physicsLayer_5() { return &___physicsLayer_5; }
	inline void set_physicsLayer_5(int32_t value)
	{
		___physicsLayer_5 = value;
	}

	inline static int32_t get_offset_of_defaultMaterial_6() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___defaultMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_defaultMaterial_6() const { return ___defaultMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_defaultMaterial_6() { return &___defaultMaterial_6; }
	inline void set_defaultMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___defaultMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_minArea_7() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___minArea_7)); }
	inline float get_minArea_7() const { return ___minArea_7; }
	inline float* get_address_of_minArea_7() { return &___minArea_7; }
	inline void set_minArea_7(float value)
	{
		___minArea_7 = value;
	}

	inline static int32_t get_offset_of_upNormalThreshold_8() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___upNormalThreshold_8)); }
	inline float get_upNormalThreshold_8() const { return ___upNormalThreshold_8; }
	inline float* get_address_of_upNormalThreshold_8() { return &___upNormalThreshold_8; }
	inline void set_upNormalThreshold_8(float value)
	{
		___upNormalThreshold_8 = value;
	}

	inline static int32_t get_offset_of_floorBuffer_9() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___floorBuffer_9)); }
	inline float get_floorBuffer_9() const { return ___floorBuffer_9; }
	inline float* get_address_of_floorBuffer_9() { return &___floorBuffer_9; }
	inline void set_floorBuffer_9(float value)
	{
		___floorBuffer_9 = value;
	}

	inline static int32_t get_offset_of_ceilingBuffer_10() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___ceilingBuffer_10)); }
	inline float get_ceilingBuffer_10() const { return ___ceilingBuffer_10; }
	inline float* get_address_of_ceilingBuffer_10() { return &___ceilingBuffer_10; }
	inline void set_ceilingBuffer_10(float value)
	{
		___ceilingBuffer_10 = value;
	}

	inline static int32_t get_offset_of_planeThickness_11() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___planeThickness_11)); }
	inline float get_planeThickness_11() const { return ___planeThickness_11; }
	inline float* get_address_of_planeThickness_11() { return &___planeThickness_11; }
	inline void set_planeThickness_11(float value)
	{
		___planeThickness_11 = value;
	}

	inline static int32_t get_offset_of_drawPlanesMask_12() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___drawPlanesMask_12)); }
	inline int32_t get_drawPlanesMask_12() const { return ___drawPlanesMask_12; }
	inline int32_t* get_address_of_drawPlanesMask_12() { return &___drawPlanesMask_12; }
	inline void set_drawPlanesMask_12(int32_t value)
	{
		___drawPlanesMask_12 = value;
	}

	inline static int32_t get_offset_of_destroyPlanesMask_13() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___destroyPlanesMask_13)); }
	inline int32_t get_destroyPlanesMask_13() const { return ___destroyPlanesMask_13; }
	inline int32_t* get_address_of_destroyPlanesMask_13() { return &___destroyPlanesMask_13; }
	inline void set_destroyPlanesMask_13(int32_t value)
	{
		___destroyPlanesMask_13 = value;
	}

	inline static int32_t get_offset_of_activePlanes_14() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___activePlanes_14)); }
	inline List_1_t894DA985041C258C8E91906993264EB48D81B93E * get_activePlanes_14() const { return ___activePlanes_14; }
	inline List_1_t894DA985041C258C8E91906993264EB48D81B93E ** get_address_of_activePlanes_14() { return &___activePlanes_14; }
	inline void set_activePlanes_14(List_1_t894DA985041C258C8E91906993264EB48D81B93E * value)
	{
		___activePlanes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePlanes_14), (void*)value);
	}

	inline static int32_t get_offset_of_makingPlanes_15() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___makingPlanes_15)); }
	inline bool get_makingPlanes_15() const { return ___makingPlanes_15; }
	inline bool* get_address_of_makingPlanes_15() { return &___makingPlanes_15; }
	inline void set_makingPlanes_15(bool value)
	{
		___makingPlanes_15 = value;
	}

	inline static int32_t get_offset_of_tokenSource_16() { return static_cast<int32_t>(offsetof(SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B, ___tokenSource_16)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_tokenSource_16() const { return ___tokenSource_16; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_tokenSource_16() { return &___tokenSource_16; }
	inline void set_tokenSource_16(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___tokenSource_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenSource_16), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Audio.TextToSpeech
struct TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_4;
	// Microsoft.MixedReality.Toolkit.Audio.TextToSpeechVoice Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::voice
	int32_t ___voice_5;
	// System.String Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::customVoice
	String_t* ___customVoice_6;
	// Windows.Media.SpeechSynthesis.SpeechSynthesizer Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::synthesizer
	SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * ___synthesizer_7;
	// Windows.Media.SpeechSynthesis.VoiceInformation Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::voiceInfo
	VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * ___voiceInfo_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::speechTextInQueue
	bool ___speechTextInQueue_9;

public:
	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41, ___audioSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_voice_5() { return static_cast<int32_t>(offsetof(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41, ___voice_5)); }
	inline int32_t get_voice_5() const { return ___voice_5; }
	inline int32_t* get_address_of_voice_5() { return &___voice_5; }
	inline void set_voice_5(int32_t value)
	{
		___voice_5 = value;
	}

	inline static int32_t get_offset_of_customVoice_6() { return static_cast<int32_t>(offsetof(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41, ___customVoice_6)); }
	inline String_t* get_customVoice_6() const { return ___customVoice_6; }
	inline String_t** get_address_of_customVoice_6() { return &___customVoice_6; }
	inline void set_customVoice_6(String_t* value)
	{
		___customVoice_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customVoice_6), (void*)value);
	}

	inline static int32_t get_offset_of_synthesizer_7() { return static_cast<int32_t>(offsetof(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41, ___synthesizer_7)); }
	inline SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * get_synthesizer_7() const { return ___synthesizer_7; }
	inline SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B ** get_address_of_synthesizer_7() { return &___synthesizer_7; }
	inline void set_synthesizer_7(SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * value)
	{
		___synthesizer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synthesizer_7), (void*)value);
	}

	inline static int32_t get_offset_of_voiceInfo_8() { return static_cast<int32_t>(offsetof(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41, ___voiceInfo_8)); }
	inline VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * get_voiceInfo_8() const { return ___voiceInfo_8; }
	inline VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D ** get_address_of_voiceInfo_8() { return &___voiceInfo_8; }
	inline void set_voiceInfo_8(VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * value)
	{
		___voiceInfo_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceInfo_8), (void*)value);
	}

	inline static int32_t get_offset_of_speechTextInQueue_9() { return static_cast<int32_t>(offsetof(TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41, ___speechTextInQueue_9)); }
	inline bool get_speechTextInQueue_9() const { return ___speechTextInQueue_9; }
	inline bool* get_address_of_speechTextInQueue_9() { return &___speechTextInQueue_9; }
	inline void set_speechTextInQueue_9(bool value)
	{
		___speechTextInQueue_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C  : public InputSystemGlobalHandlerListener_t6D199696B69A68F0DB57E685C5A0D3656F417833
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::destroyOnSourceLost
	bool ___destroyOnSourceLost_5;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::TrackingState
	int32_t ___TrackingState_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::controller
	RuntimeObject* ___controller_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseData
	bool ___useSourcePoseData_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseAsFallback
	bool ___useSourcePoseAsFallback_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseActionDetected
	bool ___poseActionDetected_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseAction
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___poseAction_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::handedness
	uint8_t ___handedness_12;

public:
	inline static int32_t get_offset_of_destroyOnSourceLost_5() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C, ___destroyOnSourceLost_5)); }
	inline bool get_destroyOnSourceLost_5() const { return ___destroyOnSourceLost_5; }
	inline bool* get_address_of_destroyOnSourceLost_5() { return &___destroyOnSourceLost_5; }
	inline void set_destroyOnSourceLost_5(bool value)
	{
		___destroyOnSourceLost_5 = value;
	}

	inline static int32_t get_offset_of_TrackingState_6() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C, ___TrackingState_6)); }
	inline int32_t get_TrackingState_6() const { return ___TrackingState_6; }
	inline int32_t* get_address_of_TrackingState_6() { return &___TrackingState_6; }
	inline void set_TrackingState_6(int32_t value)
	{
		___TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C, ___controller_7)); }
	inline RuntimeObject* get_controller_7() const { return ___controller_7; }
	inline RuntimeObject** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(RuntimeObject* value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_7), (void*)value);
	}

	inline static int32_t get_offset_of_useSourcePoseData_8() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C, ___useSourcePoseData_8)); }
	inline bool get_useSourcePoseData_8() const { return ___useSourcePoseData_8; }
	inline bool* get_address_of_useSourcePoseData_8() { return &___useSourcePoseData_8; }
	inline void set_useSourcePoseData_8(bool value)
	{
		___useSourcePoseData_8 = value;
	}

	inline static int32_t get_offset_of_useSourcePoseAsFallback_9() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C, ___useSourcePoseAsFallback_9)); }
	inline bool get_useSourcePoseAsFallback_9() const { return ___useSourcePoseAsFallback_9; }
	inline bool* get_address_of_useSourcePoseAsFallback_9() { return &___useSourcePoseAsFallback_9; }
	inline void set_useSourcePoseAsFallback_9(bool value)
	{
		___useSourcePoseAsFallback_9 = value;
	}

	inline static int32_t get_offset_of_poseActionDetected_10() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C, ___poseActionDetected_10)); }
	inline bool get_poseActionDetected_10() const { return ___poseActionDetected_10; }
	inline bool* get_address_of_poseActionDetected_10() { return &___poseActionDetected_10; }
	inline void set_poseActionDetected_10(bool value)
	{
		___poseActionDetected_10 = value;
	}

	inline static int32_t get_offset_of_poseAction_11() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C, ___poseAction_11)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_poseAction_11() const { return ___poseAction_11; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_poseAction_11() { return &___poseAction_11; }
	inline void set_poseAction_11(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___poseAction_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___poseAction_11))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_handedness_12() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C, ___handedness_12)); }
	inline uint8_t get_handedness_12() const { return ___handedness_12; }
	inline uint8_t* get_address_of_handedness_12() { return &___handedness_12; }
	inline void set_handedness_12(uint8_t value)
	{
		___handedness_12 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer
struct BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679  : public ControllerPoseSynchronizer_t91FABD548A166DCE9957B690EB40DCAB766E6B6C
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cursorPrefab_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::disableCursorOnStart
	bool ___disableCursorOnStart_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::setCursorVisibilityOnSourceDetected
	bool ___setCursorVisibilityOnSourceDetected_15;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorInstance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cursorInstance_16;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::raycastOrigin
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___raycastOrigin_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::activeHoldAction
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___activeHoldAction_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerAction
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___pointerAction_19;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::grabAction
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___grabAction_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsGrabPressed
	bool ___IsGrabPressed_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresHoldAction
	bool ___requiresHoldAction_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresActionBeforeEnabling
	bool ___requiresActionBeforeEnabling_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsSelectPressed
	bool ___IsSelectPressed_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::HasSelectPressedOnce
	bool ___HasSelectPressedOnce_25;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsHoldPressed
	bool ___IsHoldPressed_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::isCursorInstantiatedFromPrefab
	bool ___isCursorInstantiatedFromPrefab_27;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerId
	uint32_t ___pointerId_29;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::basePointerName
	String_t* ___basePointerName_30;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerName
	String_t* ___pointerName_31;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_32;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::overrideGlobalPointerExtent
	bool ___overrideGlobalPointerExtent_37;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerExtent
	float ___pointerExtent_38;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::defaultPointerExtent
	float ___defaultPointerExtent_39;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Rays>k__BackingField
	RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* ___U3CRaysU3Ek__BackingField_40;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_42;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_43;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_44;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_45;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::sphereCastRadius
	float ___sphereCastRadius_46;

public:
	inline static int32_t get_offset_of_cursorPrefab_13() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___cursorPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cursorPrefab_13() const { return ___cursorPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cursorPrefab_13() { return &___cursorPrefab_13; }
	inline void set_cursorPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cursorPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_disableCursorOnStart_14() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___disableCursorOnStart_14)); }
	inline bool get_disableCursorOnStart_14() const { return ___disableCursorOnStart_14; }
	inline bool* get_address_of_disableCursorOnStart_14() { return &___disableCursorOnStart_14; }
	inline void set_disableCursorOnStart_14(bool value)
	{
		___disableCursorOnStart_14 = value;
	}

	inline static int32_t get_offset_of_setCursorVisibilityOnSourceDetected_15() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___setCursorVisibilityOnSourceDetected_15)); }
	inline bool get_setCursorVisibilityOnSourceDetected_15() const { return ___setCursorVisibilityOnSourceDetected_15; }
	inline bool* get_address_of_setCursorVisibilityOnSourceDetected_15() { return &___setCursorVisibilityOnSourceDetected_15; }
	inline void set_setCursorVisibilityOnSourceDetected_15(bool value)
	{
		___setCursorVisibilityOnSourceDetected_15 = value;
	}

	inline static int32_t get_offset_of_cursorInstance_16() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___cursorInstance_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cursorInstance_16() const { return ___cursorInstance_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cursorInstance_16() { return &___cursorInstance_16; }
	inline void set_cursorInstance_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cursorInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorInstance_16), (void*)value);
	}

	inline static int32_t get_offset_of_raycastOrigin_17() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___raycastOrigin_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_raycastOrigin_17() const { return ___raycastOrigin_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_raycastOrigin_17() { return &___raycastOrigin_17; }
	inline void set_raycastOrigin_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___raycastOrigin_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastOrigin_17), (void*)value);
	}

	inline static int32_t get_offset_of_activeHoldAction_18() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___activeHoldAction_18)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_activeHoldAction_18() const { return ___activeHoldAction_18; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_activeHoldAction_18() { return &___activeHoldAction_18; }
	inline void set_activeHoldAction_18(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___activeHoldAction_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___activeHoldAction_18))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_pointerAction_19() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___pointerAction_19)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_pointerAction_19() const { return ___pointerAction_19; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_pointerAction_19() { return &___pointerAction_19; }
	inline void set_pointerAction_19(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___pointerAction_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pointerAction_19))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_grabAction_20() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___grabAction_20)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_grabAction_20() const { return ___grabAction_20; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_grabAction_20() { return &___grabAction_20; }
	inline void set_grabAction_20(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___grabAction_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grabAction_20))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_IsGrabPressed_21() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___IsGrabPressed_21)); }
	inline bool get_IsGrabPressed_21() const { return ___IsGrabPressed_21; }
	inline bool* get_address_of_IsGrabPressed_21() { return &___IsGrabPressed_21; }
	inline void set_IsGrabPressed_21(bool value)
	{
		___IsGrabPressed_21 = value;
	}

	inline static int32_t get_offset_of_requiresHoldAction_22() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___requiresHoldAction_22)); }
	inline bool get_requiresHoldAction_22() const { return ___requiresHoldAction_22; }
	inline bool* get_address_of_requiresHoldAction_22() { return &___requiresHoldAction_22; }
	inline void set_requiresHoldAction_22(bool value)
	{
		___requiresHoldAction_22 = value;
	}

	inline static int32_t get_offset_of_requiresActionBeforeEnabling_23() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___requiresActionBeforeEnabling_23)); }
	inline bool get_requiresActionBeforeEnabling_23() const { return ___requiresActionBeforeEnabling_23; }
	inline bool* get_address_of_requiresActionBeforeEnabling_23() { return &___requiresActionBeforeEnabling_23; }
	inline void set_requiresActionBeforeEnabling_23(bool value)
	{
		___requiresActionBeforeEnabling_23 = value;
	}

	inline static int32_t get_offset_of_IsSelectPressed_24() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___IsSelectPressed_24)); }
	inline bool get_IsSelectPressed_24() const { return ___IsSelectPressed_24; }
	inline bool* get_address_of_IsSelectPressed_24() { return &___IsSelectPressed_24; }
	inline void set_IsSelectPressed_24(bool value)
	{
		___IsSelectPressed_24 = value;
	}

	inline static int32_t get_offset_of_HasSelectPressedOnce_25() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___HasSelectPressedOnce_25)); }
	inline bool get_HasSelectPressedOnce_25() const { return ___HasSelectPressedOnce_25; }
	inline bool* get_address_of_HasSelectPressedOnce_25() { return &___HasSelectPressedOnce_25; }
	inline void set_HasSelectPressedOnce_25(bool value)
	{
		___HasSelectPressedOnce_25 = value;
	}

	inline static int32_t get_offset_of_IsHoldPressed_26() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___IsHoldPressed_26)); }
	inline bool get_IsHoldPressed_26() const { return ___IsHoldPressed_26; }
	inline bool* get_address_of_IsHoldPressed_26() { return &___IsHoldPressed_26; }
	inline void set_IsHoldPressed_26(bool value)
	{
		___IsHoldPressed_26 = value;
	}

	inline static int32_t get_offset_of_isCursorInstantiatedFromPrefab_27() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___isCursorInstantiatedFromPrefab_27)); }
	inline bool get_isCursorInstantiatedFromPrefab_27() const { return ___isCursorInstantiatedFromPrefab_27; }
	inline bool* get_address_of_isCursorInstantiatedFromPrefab_27() { return &___isCursorInstantiatedFromPrefab_27; }
	inline void set_isCursorInstantiatedFromPrefab_27(bool value)
	{
		___isCursorInstantiatedFromPrefab_27 = value;
	}

	inline static int32_t get_offset_of_pointerId_29() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___pointerId_29)); }
	inline uint32_t get_pointerId_29() const { return ___pointerId_29; }
	inline uint32_t* get_address_of_pointerId_29() { return &___pointerId_29; }
	inline void set_pointerId_29(uint32_t value)
	{
		___pointerId_29 = value;
	}

	inline static int32_t get_offset_of_basePointerName_30() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___basePointerName_30)); }
	inline String_t* get_basePointerName_30() const { return ___basePointerName_30; }
	inline String_t** get_address_of_basePointerName_30() { return &___basePointerName_30; }
	inline void set_basePointerName_30(String_t* value)
	{
		___basePointerName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___basePointerName_30), (void*)value);
	}

	inline static int32_t get_offset_of_pointerName_31() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___pointerName_31)); }
	inline String_t* get_pointerName_31() const { return ___pointerName_31; }
	inline String_t** get_address_of_pointerName_31() { return &___pointerName_31; }
	inline void set_pointerName_31(String_t* value)
	{
		___pointerName_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerName_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CBaseCursorU3Ek__BackingField_32)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_32() const { return ___U3CBaseCursorU3Ek__BackingField_32; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_32() { return &___U3CBaseCursorU3Ek__BackingField_32; }
	inline void set_U3CBaseCursorU3Ek__BackingField_32(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CCursorModifierU3Ek__BackingField_33)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_33() const { return ___U3CCursorModifierU3Ek__BackingField_33; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_33() { return &___U3CCursorModifierU3Ek__BackingField_33; }
	inline void set_U3CCursorModifierU3Ek__BackingField_33(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CIsActiveU3Ek__BackingField_34)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_34() const { return ___U3CIsActiveU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_34() { return &___U3CIsActiveU3Ek__BackingField_34; }
	inline void set_U3CIsActiveU3Ek__BackingField_34(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CIsFocusLockedU3Ek__BackingField_35)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_35() const { return ___U3CIsFocusLockedU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_35() { return &___U3CIsFocusLockedU3Ek__BackingField_35; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_35(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_overrideGlobalPointerExtent_37() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___overrideGlobalPointerExtent_37)); }
	inline bool get_overrideGlobalPointerExtent_37() const { return ___overrideGlobalPointerExtent_37; }
	inline bool* get_address_of_overrideGlobalPointerExtent_37() { return &___overrideGlobalPointerExtent_37; }
	inline void set_overrideGlobalPointerExtent_37(bool value)
	{
		___overrideGlobalPointerExtent_37 = value;
	}

	inline static int32_t get_offset_of_pointerExtent_38() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___pointerExtent_38)); }
	inline float get_pointerExtent_38() const { return ___pointerExtent_38; }
	inline float* get_address_of_pointerExtent_38() { return &___pointerExtent_38; }
	inline void set_pointerExtent_38(float value)
	{
		___pointerExtent_38 = value;
	}

	inline static int32_t get_offset_of_defaultPointerExtent_39() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___defaultPointerExtent_39)); }
	inline float get_defaultPointerExtent_39() const { return ___defaultPointerExtent_39; }
	inline float* get_address_of_defaultPointerExtent_39() { return &___defaultPointerExtent_39; }
	inline void set_defaultPointerExtent_39(float value)
	{
		___defaultPointerExtent_39 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CRaysU3Ek__BackingField_40)); }
	inline RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* get_U3CRaysU3Ek__BackingField_40() const { return ___U3CRaysU3Ek__BackingField_40; }
	inline RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA** get_address_of_U3CRaysU3Ek__BackingField_40() { return &___U3CRaysU3Ek__BackingField_40; }
	inline void set_U3CRaysU3Ek__BackingField_40(RayStepU5BU5D_t60BB177105818960BD5CF531BCBA8B1870FF3BEA* value)
	{
		___U3CRaysU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CFocusTargetU3Ek__BackingField_42)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_42() const { return ___U3CFocusTargetU3Ek__BackingField_42; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_42() { return &___U3CFocusTargetU3Ek__BackingField_42; }
	inline void set_U3CFocusTargetU3Ek__BackingField_42(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CResultU3Ek__BackingField_43)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_43() const { return ___U3CResultU3Ek__BackingField_43; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_43() { return &___U3CResultU3Ek__BackingField_43; }
	inline void set_U3CResultU3Ek__BackingField_43(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CRayStabilizerU3Ek__BackingField_44)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_44() const { return ___U3CRayStabilizerU3Ek__BackingField_44; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_44() { return &___U3CRayStabilizerU3Ek__BackingField_44; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_44(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_44), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_45() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___U3CSceneQueryTypeU3Ek__BackingField_45)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_45() const { return ___U3CSceneQueryTypeU3Ek__BackingField_45; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_45() { return &___U3CSceneQueryTypeU3Ek__BackingField_45; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_45(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_45 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_46() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679, ___sphereCastRadius_46)); }
	inline float get_sphereCastRadius_46() const { return ___sphereCastRadius_46; }
	inline float* get_address_of_sphereCastRadius_46() { return &___sphereCastRadius_46; }
	inline void set_sphereCastRadius_46(float value)
	{
		___sphereCastRadius_46 = value;
	}
};

struct BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::SetCursorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SetCursorPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPostSceneQueryPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnSourceLostPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnInputUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnInputUpPerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnInputDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnInputDownPerfMarker_50;

public:
	inline static int32_t get_offset_of_SetCursorPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679_StaticFields, ___SetCursorPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SetCursorPerfMarker_28() const { return ___SetCursorPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SetCursorPerfMarker_28() { return &___SetCursorPerfMarker_28; }
	inline void set_SetCursorPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SetCursorPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_47() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679_StaticFields, ___OnPostSceneQueryPerfMarker_47)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPostSceneQueryPerfMarker_47() const { return ___OnPostSceneQueryPerfMarker_47; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPostSceneQueryPerfMarker_47() { return &___OnPostSceneQueryPerfMarker_47; }
	inline void set_OnPostSceneQueryPerfMarker_47(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPostSceneQueryPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_48() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679_StaticFields, ___OnSourceLostPerfMarker_48)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnSourceLostPerfMarker_48() const { return ___OnSourceLostPerfMarker_48; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnSourceLostPerfMarker_48() { return &___OnSourceLostPerfMarker_48; }
	inline void set_OnSourceLostPerfMarker_48(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnSourceLostPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_OnInputUpPerfMarker_49() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679_StaticFields, ___OnInputUpPerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnInputUpPerfMarker_49() const { return ___OnInputUpPerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnInputUpPerfMarker_49() { return &___OnInputUpPerfMarker_49; }
	inline void set_OnInputUpPerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnInputUpPerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_OnInputDownPerfMarker_50() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679_StaticFields, ___OnInputDownPerfMarker_50)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnInputDownPerfMarker_50() const { return ___OnInputDownPerfMarker_50; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnInputDownPerfMarker_50() { return &___OnInputDownPerfMarker_50; }
	inline void set_OnInputDownPerfMarker_50(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnInputDownPerfMarker_50 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D  : public BaseControllerPointer_tE9D443A67774AF08CFD707763EFE4381D0B5C679
{
public:
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorSelected
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___LineColorSelected_51;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorValid
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___LineColorValid_52;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorInvalid
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___LineColorInvalid_53;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorNoTarget
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___LineColorNoTarget_54;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorLockFocus
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___LineColorLockFocus_55;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.Input.LinePointer::lineDataProvider
	BaseMixedRealityLineDataProvider_tB1801BD24C62E70BAFCD3DD89C79EAF217271DED * ___lineDataProvider_56;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.Input.LinePointer::lineRenderers
	BaseMixedRealityLineRendererU5BU5D_t64ECC206DD8F8E45A688CA4FAC02A0626F676E5C* ___lineRenderers_57;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineStartPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lineStartPoint_58;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineEndPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lineEndPoint_59;

public:
	inline static int32_t get_offset_of_LineColorSelected_51() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___LineColorSelected_51)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_LineColorSelected_51() const { return ___LineColorSelected_51; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_LineColorSelected_51() { return &___LineColorSelected_51; }
	inline void set_LineColorSelected_51(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___LineColorSelected_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorSelected_51), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorValid_52() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___LineColorValid_52)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_LineColorValid_52() const { return ___LineColorValid_52; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_LineColorValid_52() { return &___LineColorValid_52; }
	inline void set_LineColorValid_52(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___LineColorValid_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorValid_52), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorInvalid_53() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___LineColorInvalid_53)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_LineColorInvalid_53() const { return ___LineColorInvalid_53; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_LineColorInvalid_53() { return &___LineColorInvalid_53; }
	inline void set_LineColorInvalid_53(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___LineColorInvalid_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorInvalid_53), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorNoTarget_54() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___LineColorNoTarget_54)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_LineColorNoTarget_54() const { return ___LineColorNoTarget_54; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_LineColorNoTarget_54() { return &___LineColorNoTarget_54; }
	inline void set_LineColorNoTarget_54(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___LineColorNoTarget_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorNoTarget_54), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorLockFocus_55() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___LineColorLockFocus_55)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_LineColorLockFocus_55() const { return ___LineColorLockFocus_55; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_LineColorLockFocus_55() { return &___LineColorLockFocus_55; }
	inline void set_LineColorLockFocus_55(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___LineColorLockFocus_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorLockFocus_55), (void*)value);
	}

	inline static int32_t get_offset_of_lineDataProvider_56() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___lineDataProvider_56)); }
	inline BaseMixedRealityLineDataProvider_tB1801BD24C62E70BAFCD3DD89C79EAF217271DED * get_lineDataProvider_56() const { return ___lineDataProvider_56; }
	inline BaseMixedRealityLineDataProvider_tB1801BD24C62E70BAFCD3DD89C79EAF217271DED ** get_address_of_lineDataProvider_56() { return &___lineDataProvider_56; }
	inline void set_lineDataProvider_56(BaseMixedRealityLineDataProvider_tB1801BD24C62E70BAFCD3DD89C79EAF217271DED * value)
	{
		___lineDataProvider_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineDataProvider_56), (void*)value);
	}

	inline static int32_t get_offset_of_lineRenderers_57() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___lineRenderers_57)); }
	inline BaseMixedRealityLineRendererU5BU5D_t64ECC206DD8F8E45A688CA4FAC02A0626F676E5C* get_lineRenderers_57() const { return ___lineRenderers_57; }
	inline BaseMixedRealityLineRendererU5BU5D_t64ECC206DD8F8E45A688CA4FAC02A0626F676E5C** get_address_of_lineRenderers_57() { return &___lineRenderers_57; }
	inline void set_lineRenderers_57(BaseMixedRealityLineRendererU5BU5D_t64ECC206DD8F8E45A688CA4FAC02A0626F676E5C* value)
	{
		___lineRenderers_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderers_57), (void*)value);
	}

	inline static int32_t get_offset_of_lineStartPoint_58() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___lineStartPoint_58)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lineStartPoint_58() const { return ___lineStartPoint_58; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lineStartPoint_58() { return &___lineStartPoint_58; }
	inline void set_lineStartPoint_58(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lineStartPoint_58 = value;
	}

	inline static int32_t get_offset_of_lineEndPoint_59() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D, ___lineEndPoint_59)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_lineEndPoint_59() const { return ___lineEndPoint_59; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_lineEndPoint_59() { return &___lineEndPoint_59; }
	inline void set_lineEndPoint_59(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___lineEndPoint_59 = value;
	}
};

struct LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPreSceneQueryPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPostSceneQueryPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::PreUpdateLineRenderersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___PreUpdateLineRenderersPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::PostUpdateLineRenderersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___PostUpdateLineRenderersPerfMarker_63;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::UpdateRaysPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateRaysPerfMarker_64;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_60() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D_StaticFields, ___OnPreSceneQueryPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPreSceneQueryPerfMarker_60() const { return ___OnPreSceneQueryPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPreSceneQueryPerfMarker_60() { return &___OnPreSceneQueryPerfMarker_60; }
	inline void set_OnPreSceneQueryPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPreSceneQueryPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_61() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D_StaticFields, ___OnPostSceneQueryPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPostSceneQueryPerfMarker_61() const { return ___OnPostSceneQueryPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPostSceneQueryPerfMarker_61() { return &___OnPostSceneQueryPerfMarker_61; }
	inline void set_OnPostSceneQueryPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPostSceneQueryPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_PreUpdateLineRenderersPerfMarker_62() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D_StaticFields, ___PreUpdateLineRenderersPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_PreUpdateLineRenderersPerfMarker_62() const { return ___PreUpdateLineRenderersPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_PreUpdateLineRenderersPerfMarker_62() { return &___PreUpdateLineRenderersPerfMarker_62; }
	inline void set_PreUpdateLineRenderersPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___PreUpdateLineRenderersPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_PostUpdateLineRenderersPerfMarker_63() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D_StaticFields, ___PostUpdateLineRenderersPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_PostUpdateLineRenderersPerfMarker_63() const { return ___PostUpdateLineRenderersPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_PostUpdateLineRenderersPerfMarker_63() { return &___PostUpdateLineRenderersPerfMarker_63; }
	inline void set_PostUpdateLineRenderersPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___PostUpdateLineRenderersPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_UpdateRaysPerfMarker_64() { return static_cast<int32_t>(offsetof(LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D_StaticFields, ___UpdateRaysPerfMarker_64)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateRaysPerfMarker_64() const { return ___UpdateRaysPerfMarker_64; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateRaysPerfMarker_64() { return &___UpdateRaysPerfMarker_64; }
	inline void set_UpdateRaysPerfMarker_64(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateRaysPerfMarker_64 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.CurvePointer
struct CurvePointer_tDBBD611FF161E81A9867073019C1C13EB1192639  : public LinePointer_tB5B120EE3DE4E84A15857BF818B139356AC0553D
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.CurvePointer::LineCastResolution
	int32_t ___LineCastResolution_65;

public:
	inline static int32_t get_offset_of_LineCastResolution_65() { return static_cast<int32_t>(offsetof(CurvePointer_tDBBD611FF161E81A9867073019C1C13EB1192639, ___LineCastResolution_65)); }
	inline int32_t get_LineCastResolution_65() const { return ___LineCastResolution_65; }
	inline int32_t* get_address_of_LineCastResolution_65() { return &___LineCastResolution_65; }
	inline void set_LineCastResolution_65(int32_t value)
	{
		___LineCastResolution_65 = value;
	}
};

struct CurvePointer_tDBBD611FF161E81A9867073019C1C13EB1192639_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.CurvePointer::UpdateRaysPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateRaysPerfMarker_66;

public:
	inline static int32_t get_offset_of_UpdateRaysPerfMarker_66() { return static_cast<int32_t>(offsetof(CurvePointer_tDBBD611FF161E81A9867073019C1C13EB1192639_StaticFields, ___UpdateRaysPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateRaysPerfMarker_66() const { return ___UpdateRaysPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateRaysPerfMarker_66() { return &___UpdateRaysPerfMarker_66; }
	inline void set_UpdateRaysPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateRaysPerfMarker_66 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer
struct TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E  : public CurvePointer_tDBBD611FF161E81A9867073019C1C13EB1192639
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::<TeleportRequestRaised>k__BackingField
	bool ___U3CTeleportRequestRaisedU3Ek__BackingField_67;
	// Microsoft.MixedReality.Toolkit.Physics.TeleportSurfaceResult Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::<TeleportSurfaceResult>k__BackingField
	int32_t ___U3CTeleportSurfaceResultU3Ek__BackingField_68;
	// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportHotspot Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::<TeleportHotspot>k__BackingField
	RuntimeObject* ___U3CTeleportHotspotU3Ek__BackingField_69;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::teleportAction
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___teleportAction_70;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::hotSpotCursorVisibility
	bool ___hotSpotCursorVisibility_71;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::inputThreshold
	float ___inputThreshold_72;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::angleOffset
	float ___angleOffset_73;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::teleportActivationAngle
	float ___teleportActivationAngle_74;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::rotateActivationAngle
	float ___rotateActivationAngle_75;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::rotationAmount
	float ___rotationAmount_76;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::backStrafeActivationAngle
	float ___backStrafeActivationAngle_77;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::strafeAmount
	float ___strafeAmount_78;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::checkForFloorOnStrafe
	bool ___checkForFloorOnStrafe_79;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::adjustHeightOnStrafe
	bool ___adjustHeightOnStrafe_80;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::maxHeightChangeOnStrafe
	float ___maxHeightChangeOnStrafe_81;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::upDirectionThreshold
	float ___upDirectionThreshold_82;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::LineColorHotSpot
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___LineColorHotSpot_83;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::teleportRaycastLayerMasks
	LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* ___teleportRaycastLayerMasks_84;
	// UnityEngine.LayerMask Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::ValidTeleportationLayers
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___ValidTeleportationLayers_85;
	// Microsoft.MixedReality.Toolkit.Physics.DistorterGravity Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::gravityDistorter
	DistorterGravity_tED35E799F6C0887ABB71A3247FC8637AE513EDE3 * ___gravityDistorter_86;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::cachedInputThreshold
	float ___cachedInputThreshold_87;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::inputThresholdSquared
	float ___inputThresholdSquared_88;
	// UnityEngine.AudioSource Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::pointerAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___pointerAudioSource_89;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::teleportRequestedClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___teleportRequestedClip_90;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::teleportCompletedClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___teleportCompletedClip_91;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::currentInputPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___currentInputPosition_92;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::isTeleportRequestActive
	bool ___isTeleportRequestActive_93;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::lateRegisterTeleport
	bool ___lateRegisterTeleport_94;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::canTeleport
	bool ___canTeleport_95;
	// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::canMove
	bool ___canMove_96;
	// System.Single Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::pointerOrientation
	float ___pointerOrientation_97;

public:
	inline static int32_t get_offset_of_U3CTeleportRequestRaisedU3Ek__BackingField_67() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___U3CTeleportRequestRaisedU3Ek__BackingField_67)); }
	inline bool get_U3CTeleportRequestRaisedU3Ek__BackingField_67() const { return ___U3CTeleportRequestRaisedU3Ek__BackingField_67; }
	inline bool* get_address_of_U3CTeleportRequestRaisedU3Ek__BackingField_67() { return &___U3CTeleportRequestRaisedU3Ek__BackingField_67; }
	inline void set_U3CTeleportRequestRaisedU3Ek__BackingField_67(bool value)
	{
		___U3CTeleportRequestRaisedU3Ek__BackingField_67 = value;
	}

	inline static int32_t get_offset_of_U3CTeleportSurfaceResultU3Ek__BackingField_68() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___U3CTeleportSurfaceResultU3Ek__BackingField_68)); }
	inline int32_t get_U3CTeleportSurfaceResultU3Ek__BackingField_68() const { return ___U3CTeleportSurfaceResultU3Ek__BackingField_68; }
	inline int32_t* get_address_of_U3CTeleportSurfaceResultU3Ek__BackingField_68() { return &___U3CTeleportSurfaceResultU3Ek__BackingField_68; }
	inline void set_U3CTeleportSurfaceResultU3Ek__BackingField_68(int32_t value)
	{
		___U3CTeleportSurfaceResultU3Ek__BackingField_68 = value;
	}

	inline static int32_t get_offset_of_U3CTeleportHotspotU3Ek__BackingField_69() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___U3CTeleportHotspotU3Ek__BackingField_69)); }
	inline RuntimeObject* get_U3CTeleportHotspotU3Ek__BackingField_69() const { return ___U3CTeleportHotspotU3Ek__BackingField_69; }
	inline RuntimeObject** get_address_of_U3CTeleportHotspotU3Ek__BackingField_69() { return &___U3CTeleportHotspotU3Ek__BackingField_69; }
	inline void set_U3CTeleportHotspotU3Ek__BackingField_69(RuntimeObject* value)
	{
		___U3CTeleportHotspotU3Ek__BackingField_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTeleportHotspotU3Ek__BackingField_69), (void*)value);
	}

	inline static int32_t get_offset_of_teleportAction_70() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___teleportAction_70)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_teleportAction_70() const { return ___teleportAction_70; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_teleportAction_70() { return &___teleportAction_70; }
	inline void set_teleportAction_70(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___teleportAction_70 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___teleportAction_70))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_hotSpotCursorVisibility_71() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___hotSpotCursorVisibility_71)); }
	inline bool get_hotSpotCursorVisibility_71() const { return ___hotSpotCursorVisibility_71; }
	inline bool* get_address_of_hotSpotCursorVisibility_71() { return &___hotSpotCursorVisibility_71; }
	inline void set_hotSpotCursorVisibility_71(bool value)
	{
		___hotSpotCursorVisibility_71 = value;
	}

	inline static int32_t get_offset_of_inputThreshold_72() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___inputThreshold_72)); }
	inline float get_inputThreshold_72() const { return ___inputThreshold_72; }
	inline float* get_address_of_inputThreshold_72() { return &___inputThreshold_72; }
	inline void set_inputThreshold_72(float value)
	{
		___inputThreshold_72 = value;
	}

	inline static int32_t get_offset_of_angleOffset_73() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___angleOffset_73)); }
	inline float get_angleOffset_73() const { return ___angleOffset_73; }
	inline float* get_address_of_angleOffset_73() { return &___angleOffset_73; }
	inline void set_angleOffset_73(float value)
	{
		___angleOffset_73 = value;
	}

	inline static int32_t get_offset_of_teleportActivationAngle_74() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___teleportActivationAngle_74)); }
	inline float get_teleportActivationAngle_74() const { return ___teleportActivationAngle_74; }
	inline float* get_address_of_teleportActivationAngle_74() { return &___teleportActivationAngle_74; }
	inline void set_teleportActivationAngle_74(float value)
	{
		___teleportActivationAngle_74 = value;
	}

	inline static int32_t get_offset_of_rotateActivationAngle_75() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___rotateActivationAngle_75)); }
	inline float get_rotateActivationAngle_75() const { return ___rotateActivationAngle_75; }
	inline float* get_address_of_rotateActivationAngle_75() { return &___rotateActivationAngle_75; }
	inline void set_rotateActivationAngle_75(float value)
	{
		___rotateActivationAngle_75 = value;
	}

	inline static int32_t get_offset_of_rotationAmount_76() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___rotationAmount_76)); }
	inline float get_rotationAmount_76() const { return ___rotationAmount_76; }
	inline float* get_address_of_rotationAmount_76() { return &___rotationAmount_76; }
	inline void set_rotationAmount_76(float value)
	{
		___rotationAmount_76 = value;
	}

	inline static int32_t get_offset_of_backStrafeActivationAngle_77() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___backStrafeActivationAngle_77)); }
	inline float get_backStrafeActivationAngle_77() const { return ___backStrafeActivationAngle_77; }
	inline float* get_address_of_backStrafeActivationAngle_77() { return &___backStrafeActivationAngle_77; }
	inline void set_backStrafeActivationAngle_77(float value)
	{
		___backStrafeActivationAngle_77 = value;
	}

	inline static int32_t get_offset_of_strafeAmount_78() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___strafeAmount_78)); }
	inline float get_strafeAmount_78() const { return ___strafeAmount_78; }
	inline float* get_address_of_strafeAmount_78() { return &___strafeAmount_78; }
	inline void set_strafeAmount_78(float value)
	{
		___strafeAmount_78 = value;
	}

	inline static int32_t get_offset_of_checkForFloorOnStrafe_79() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___checkForFloorOnStrafe_79)); }
	inline bool get_checkForFloorOnStrafe_79() const { return ___checkForFloorOnStrafe_79; }
	inline bool* get_address_of_checkForFloorOnStrafe_79() { return &___checkForFloorOnStrafe_79; }
	inline void set_checkForFloorOnStrafe_79(bool value)
	{
		___checkForFloorOnStrafe_79 = value;
	}

	inline static int32_t get_offset_of_adjustHeightOnStrafe_80() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___adjustHeightOnStrafe_80)); }
	inline bool get_adjustHeightOnStrafe_80() const { return ___adjustHeightOnStrafe_80; }
	inline bool* get_address_of_adjustHeightOnStrafe_80() { return &___adjustHeightOnStrafe_80; }
	inline void set_adjustHeightOnStrafe_80(bool value)
	{
		___adjustHeightOnStrafe_80 = value;
	}

	inline static int32_t get_offset_of_maxHeightChangeOnStrafe_81() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___maxHeightChangeOnStrafe_81)); }
	inline float get_maxHeightChangeOnStrafe_81() const { return ___maxHeightChangeOnStrafe_81; }
	inline float* get_address_of_maxHeightChangeOnStrafe_81() { return &___maxHeightChangeOnStrafe_81; }
	inline void set_maxHeightChangeOnStrafe_81(float value)
	{
		___maxHeightChangeOnStrafe_81 = value;
	}

	inline static int32_t get_offset_of_upDirectionThreshold_82() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___upDirectionThreshold_82)); }
	inline float get_upDirectionThreshold_82() const { return ___upDirectionThreshold_82; }
	inline float* get_address_of_upDirectionThreshold_82() { return &___upDirectionThreshold_82; }
	inline void set_upDirectionThreshold_82(float value)
	{
		___upDirectionThreshold_82 = value;
	}

	inline static int32_t get_offset_of_LineColorHotSpot_83() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___LineColorHotSpot_83)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get_LineColorHotSpot_83() const { return ___LineColorHotSpot_83; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of_LineColorHotSpot_83() { return &___LineColorHotSpot_83; }
	inline void set_LineColorHotSpot_83(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		___LineColorHotSpot_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorHotSpot_83), (void*)value);
	}

	inline static int32_t get_offset_of_teleportRaycastLayerMasks_84() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___teleportRaycastLayerMasks_84)); }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* get_teleportRaycastLayerMasks_84() const { return ___teleportRaycastLayerMasks_84; }
	inline LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F** get_address_of_teleportRaycastLayerMasks_84() { return &___teleportRaycastLayerMasks_84; }
	inline void set_teleportRaycastLayerMasks_84(LayerMaskU5BU5D_tDA1C8D71ECA037E68C25AE5FE773966C0045C89F* value)
	{
		___teleportRaycastLayerMasks_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportRaycastLayerMasks_84), (void*)value);
	}

	inline static int32_t get_offset_of_ValidTeleportationLayers_85() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___ValidTeleportationLayers_85)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_ValidTeleportationLayers_85() const { return ___ValidTeleportationLayers_85; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_ValidTeleportationLayers_85() { return &___ValidTeleportationLayers_85; }
	inline void set_ValidTeleportationLayers_85(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___ValidTeleportationLayers_85 = value;
	}

	inline static int32_t get_offset_of_gravityDistorter_86() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___gravityDistorter_86)); }
	inline DistorterGravity_tED35E799F6C0887ABB71A3247FC8637AE513EDE3 * get_gravityDistorter_86() const { return ___gravityDistorter_86; }
	inline DistorterGravity_tED35E799F6C0887ABB71A3247FC8637AE513EDE3 ** get_address_of_gravityDistorter_86() { return &___gravityDistorter_86; }
	inline void set_gravityDistorter_86(DistorterGravity_tED35E799F6C0887ABB71A3247FC8637AE513EDE3 * value)
	{
		___gravityDistorter_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gravityDistorter_86), (void*)value);
	}

	inline static int32_t get_offset_of_cachedInputThreshold_87() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___cachedInputThreshold_87)); }
	inline float get_cachedInputThreshold_87() const { return ___cachedInputThreshold_87; }
	inline float* get_address_of_cachedInputThreshold_87() { return &___cachedInputThreshold_87; }
	inline void set_cachedInputThreshold_87(float value)
	{
		___cachedInputThreshold_87 = value;
	}

	inline static int32_t get_offset_of_inputThresholdSquared_88() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___inputThresholdSquared_88)); }
	inline float get_inputThresholdSquared_88() const { return ___inputThresholdSquared_88; }
	inline float* get_address_of_inputThresholdSquared_88() { return &___inputThresholdSquared_88; }
	inline void set_inputThresholdSquared_88(float value)
	{
		___inputThresholdSquared_88 = value;
	}

	inline static int32_t get_offset_of_pointerAudioSource_89() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___pointerAudioSource_89)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_pointerAudioSource_89() const { return ___pointerAudioSource_89; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_pointerAudioSource_89() { return &___pointerAudioSource_89; }
	inline void set_pointerAudioSource_89(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___pointerAudioSource_89 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerAudioSource_89), (void*)value);
	}

	inline static int32_t get_offset_of_teleportRequestedClip_90() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___teleportRequestedClip_90)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_teleportRequestedClip_90() const { return ___teleportRequestedClip_90; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_teleportRequestedClip_90() { return &___teleportRequestedClip_90; }
	inline void set_teleportRequestedClip_90(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___teleportRequestedClip_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportRequestedClip_90), (void*)value);
	}

	inline static int32_t get_offset_of_teleportCompletedClip_91() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___teleportCompletedClip_91)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_teleportCompletedClip_91() const { return ___teleportCompletedClip_91; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_teleportCompletedClip_91() { return &___teleportCompletedClip_91; }
	inline void set_teleportCompletedClip_91(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___teleportCompletedClip_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportCompletedClip_91), (void*)value);
	}

	inline static int32_t get_offset_of_currentInputPosition_92() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___currentInputPosition_92)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_currentInputPosition_92() const { return ___currentInputPosition_92; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_currentInputPosition_92() { return &___currentInputPosition_92; }
	inline void set_currentInputPosition_92(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___currentInputPosition_92 = value;
	}

	inline static int32_t get_offset_of_isTeleportRequestActive_93() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___isTeleportRequestActive_93)); }
	inline bool get_isTeleportRequestActive_93() const { return ___isTeleportRequestActive_93; }
	inline bool* get_address_of_isTeleportRequestActive_93() { return &___isTeleportRequestActive_93; }
	inline void set_isTeleportRequestActive_93(bool value)
	{
		___isTeleportRequestActive_93 = value;
	}

	inline static int32_t get_offset_of_lateRegisterTeleport_94() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___lateRegisterTeleport_94)); }
	inline bool get_lateRegisterTeleport_94() const { return ___lateRegisterTeleport_94; }
	inline bool* get_address_of_lateRegisterTeleport_94() { return &___lateRegisterTeleport_94; }
	inline void set_lateRegisterTeleport_94(bool value)
	{
		___lateRegisterTeleport_94 = value;
	}

	inline static int32_t get_offset_of_canTeleport_95() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___canTeleport_95)); }
	inline bool get_canTeleport_95() const { return ___canTeleport_95; }
	inline bool* get_address_of_canTeleport_95() { return &___canTeleport_95; }
	inline void set_canTeleport_95(bool value)
	{
		___canTeleport_95 = value;
	}

	inline static int32_t get_offset_of_canMove_96() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___canMove_96)); }
	inline bool get_canMove_96() const { return ___canMove_96; }
	inline bool* get_address_of_canMove_96() { return &___canMove_96; }
	inline void set_canMove_96(bool value)
	{
		___canMove_96 = value;
	}

	inline static int32_t get_offset_of_pointerOrientation_97() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E, ___pointerOrientation_97)); }
	inline float get_pointerOrientation_97() const { return ___pointerOrientation_97; }
	inline float* get_address_of_pointerOrientation_97() { return &___pointerOrientation_97; }
	inline void set_pointerOrientation_97(float value)
	{
		___pointerOrientation_97 = value;
	}
};

struct TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPreSceneQueryPerfMarker_98;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnPostSceneQueryPerfMarker_99;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::OnInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnInputChangedPerfMarker_100;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::OnTeleportRequestPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnTeleportRequestPerfMarker_101;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::OnTeleportStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnTeleportStartedPerfMarker_102;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::OnTeleportCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnTeleportCompletedPerfMarker_103;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::OnTeleportCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnTeleportCanceledPerfMarker_104;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_98() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_StaticFields, ___OnPreSceneQueryPerfMarker_98)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPreSceneQueryPerfMarker_98() const { return ___OnPreSceneQueryPerfMarker_98; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPreSceneQueryPerfMarker_98() { return &___OnPreSceneQueryPerfMarker_98; }
	inline void set_OnPreSceneQueryPerfMarker_98(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPreSceneQueryPerfMarker_98 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_99() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_StaticFields, ___OnPostSceneQueryPerfMarker_99)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnPostSceneQueryPerfMarker_99() const { return ___OnPostSceneQueryPerfMarker_99; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnPostSceneQueryPerfMarker_99() { return &___OnPostSceneQueryPerfMarker_99; }
	inline void set_OnPostSceneQueryPerfMarker_99(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnPostSceneQueryPerfMarker_99 = value;
	}

	inline static int32_t get_offset_of_OnInputChangedPerfMarker_100() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_StaticFields, ___OnInputChangedPerfMarker_100)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnInputChangedPerfMarker_100() const { return ___OnInputChangedPerfMarker_100; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnInputChangedPerfMarker_100() { return &___OnInputChangedPerfMarker_100; }
	inline void set_OnInputChangedPerfMarker_100(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnInputChangedPerfMarker_100 = value;
	}

	inline static int32_t get_offset_of_OnTeleportRequestPerfMarker_101() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_StaticFields, ___OnTeleportRequestPerfMarker_101)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnTeleportRequestPerfMarker_101() const { return ___OnTeleportRequestPerfMarker_101; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnTeleportRequestPerfMarker_101() { return &___OnTeleportRequestPerfMarker_101; }
	inline void set_OnTeleportRequestPerfMarker_101(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnTeleportRequestPerfMarker_101 = value;
	}

	inline static int32_t get_offset_of_OnTeleportStartedPerfMarker_102() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_StaticFields, ___OnTeleportStartedPerfMarker_102)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnTeleportStartedPerfMarker_102() const { return ___OnTeleportStartedPerfMarker_102; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnTeleportStartedPerfMarker_102() { return &___OnTeleportStartedPerfMarker_102; }
	inline void set_OnTeleportStartedPerfMarker_102(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnTeleportStartedPerfMarker_102 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCompletedPerfMarker_103() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_StaticFields, ___OnTeleportCompletedPerfMarker_103)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnTeleportCompletedPerfMarker_103() const { return ___OnTeleportCompletedPerfMarker_103; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnTeleportCompletedPerfMarker_103() { return &___OnTeleportCompletedPerfMarker_103; }
	inline void set_OnTeleportCompletedPerfMarker_103(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnTeleportCompletedPerfMarker_103 = value;
	}

	inline static int32_t get_offset_of_OnTeleportCanceledPerfMarker_104() { return static_cast<int32_t>(offsetof(TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_StaticFields, ___OnTeleportCanceledPerfMarker_104)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnTeleportCanceledPerfMarker_104() const { return ___OnTeleportCanceledPerfMarker_104; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnTeleportCanceledPerfMarker_104() { return &___OnTeleportCanceledPerfMarker_104; }
	inline void set_OnTeleportCanceledPerfMarker_104(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnTeleportCanceledPerfMarker_104 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
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


// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1_m7B4F124E8E66390F57EA51FF103533B4443C9D67_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_1_get_IsCompleted_mC9C09ABF80C8ED2BD852B9D8A4C0B8AF5A9EEAFB_gshared_inline (SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B_mD9AFC6507EB34918F218F6744B87E0F09A34714D_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B * ___stateMachine1, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SimpleCoroutineAwaiter_1_GetResult_m00671A15A3EF8A775D35655D48A459DD22376E03_gshared (SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_TryGetValue_mDE2C005B0B7EFB394EE1A6C96AD25821C5FD0799_gshared (LRUCache_2_t525C3808AB584B045E85E7B19998616444C1D197 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LRUCache_2_Add_mC42FB4028315F76C404A3826C960ACC7F5F8660C_gshared (LRUCache_2_t525C3808AB584B045E85E7B19998616444C1D197 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LRUCache_2_Remove_mC13BE22FBB1D7C980126EB71E0666C164F88E33F_gshared (LRUCache_2_t525C3808AB584B045E85E7B19998616444C1D197 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9_m98A9AE1AD9107B97043D787A9543603AC6C4BA49_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject ** ___awaiter0, U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7_mC6FC563CBDEB7D46AD7ED2E44F0E769D09D17490_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___awaiter0, U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 * ___stateMachine1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectExtensions_IsNull_TisRuntimeObject_mAB9CF24417EAC34F7ECC26A161158490BE15A463_gshared (RuntimeObject * ___interface0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mB2B0BC2025F36EE769C5973165EB5DABB8336440_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m016E64EEAC35EA6D2A28616261EA1C34A4365B4A_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mC01F0D1A25CE71042DDEC7C7F1D8CBB3B3226A2C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_mA4533DC75249C97B6C6952B1AC6F980480171F23_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mAD6E5CE8B04DDCC062F99B60A618BE4887094F0A_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.UInt32>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m875970DC042A5A87245D94D5A768FD2BE0C605F3_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_gshared (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m8FF6D4A029AABF03118A49EE0303AC06F4ECE4F6_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_gshared (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint::get_PivotPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RotateAroundPoint_get_PivotPosition_mEE6D0721D2708D7AC20E208A1B8CD075C5D6E221_inline (RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Single>::.ctor(!0)
inline void Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, float ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, float, const RuntimeMethod*))Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared)(__this, method);
}
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::get_ScrollContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ScrollingObjectCollection_get_ScrollContainer_m842E25C989E1799D0371156674D705D04810E566 (ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::GetValueOrDefault()
inline float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection::set_CurrentVelocityState(Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/VelocityState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObjectCollection_set_CurrentVelocityState_m0D0FF9349B9111080BBDFB9D530DC5B0BA257C71 (ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>::.ctor()
inline void UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB (UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t1DC2DB931FE9E53AEC9A04F4DE9B4F7B469BC78E *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter::CreateFoldersIfDoesNotExist(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialMeshExporter_CreateFoldersIfDoesNotExist_mF9884518FE3B209BA596FDCF602A1F8B360EFC2F (String_t* ___folderPath0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.CoreServices::get_SpatialAwarenessSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_SpatialAwarenessSystem_m92750AEB87A7EF642D84A825F8B5958E9ECA590F (const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter::Save(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SpatialMeshExporter_Save_m1CA1BB236FB68422402C118496C0F835D8816AE1 (RuntimeObject* ___meshObserver0, String_t* ___folderPath1, bool ___consolidate2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1_m7B4F124E8E66390F57EA51FF103533B4443C9D67 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1_m7B4F124E8E66390F57EA51FF103533B4443C9D67_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__0_MoveNext_m8839F15ADDB9FFD3863B78A2DD9AF6AFB1D00694 (U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__0_SetStateMachine_m2744EF76B6007B492B7EF9481A65C6B4ACD6ED8F (U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Collections.IEnumerator Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter::SaveInternal(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpatialMeshExporter_SaveInternal_mD9321452C0590CFB574C82C70CDA4CB6B418F03B (RuntimeObject* ___meshObserver0, String_t* ___folderPath1, bool ___consolidate2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object> Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * AwaiterExtensions_GetAwaiter_m85A1500837F7549AFB3B4D3DD53EF1D5B35925F1 (RuntimeObject* ___coroutine0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::get_IsCompleted()
inline bool SimpleCoroutineAwaiter_1_get_IsCompleted_mC9C09ABF80C8ED2BD852B9D8A4C0B8AF5A9EEAFB_inline (SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A *, const RuntimeMethod*))SimpleCoroutineAwaiter_1_get_IsCompleted_mC9C09ABF80C8ED2BD852B9D8A4C0B8AF5A9EEAFB_gshared_inline)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A_TisU3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B_m9547B893079897EAE0718E9FD3F5EF5DA02403D8 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A ** ___awaiter0, U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A **, U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B_mD9AFC6507EB34918F218F6744B87E0F09A34714D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter`1<System.Object>::GetResult()
inline RuntimeObject * SimpleCoroutineAwaiter_1_GetResult_m00671A15A3EF8A775D35655D48A459DD22376E03 (SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A *, const RuntimeMethod*))SimpleCoroutineAwaiter_1_GetResult_m00671A15A3EF8A775D35655D48A459DD22376E03_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__1_MoveNext_m16FA7A2D8ACE8B3C3943F0078CF0E2A2A8A2A802 (U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__1_SetStateMachine_m6311600F8E3D302EE714302C013CF7EDDB789363 (U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveInternalU3Ed__2_U3CU3Em__Finally1_m2E7A8A46A2E16B80D2BF3B2AF7BF4B0C5B2B610C (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Transform>::.ctor()
inline void HashSet_1__ctor_m36D18BE9FABFFD53367BD5ED7B267D1266B0ED57 (HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObject::get_GameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BaseSpatialAwarenessObject_get_GameObject_mC77417C0A63303EE19B777A44C5C8C8EFC84195F_inline (BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Transform>::Add(!0)
inline bool HashSet_1_Add_mC2FACCAF836A963D13F6DE7058949947B0FD97D1 (HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  HashSet_1_GetEnumerator_m0E07DD3D1AB968CBB94F8678AEC6CD787DA828EF (HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  (*) (HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Enumerator_get_Current_mABE9CE84BCC489F861A6C0A48BA68349B90B206C_inline (Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mBAC6F82953008479983594F7F95101F46310C32D (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.GameObjectExtensions::ExportOBJAsync(UnityEngine.GameObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * GameObjectExtensions_ExportOBJAsync_m5EE94E7F743C13E600FB1C26F7A88A2A5B1798DE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, String_t* ___filePath1, bool ___includeChildren2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_m0172F4E3EDE1A1E9466FCB30A1142B94DFDB44EB (Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveInternalU3Ed__2_System_IDisposable_Dispose_m5BF95D910FD7521380FD635FB2A6DCD51F4D48E5 (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_mA4E3759D69954DBF4465FB0FD594CB8259F3F653 (Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::IsColliderValidGrabbable(UnityEngine.Collider,System.Boolean,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable&,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpherePointerQueryInfo_IsColliderValidGrabbable_m168A4A2E0A4DF41E7E4FD4FF95D66843CEF307C7 (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider0, bool ___ignoreCollidersNotInFOV1, NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** ___currentGrabbable2, LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * ___componentCache3, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::IsColliderPositionValid(UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpherePointerQueryInfo_IsColliderPositionValid_m7A1FA2BCFADE08D2201A08091EAA3E6C01AE7C3F (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerAxis2, float ___queryAngle3, float ___queryDistance4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___closestPointToCollider5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Bounds Microsoft.MixedReality.Toolkit.BoundsExtensions::Transform(UnityEngine.Bounds,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  BoundsExtensions_Transform_mDC8653C5E4B61FC5F6018CF93FD498E0C09C88A9 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transformMatrix1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.BoundsExtensions::Volume(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BoundsExtensions_Volume_m853B81BA96E07F9A4AD8A5EC6CF9F5E4C18CBE9C (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::get_ContainsGrabbable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpherePointerQueryInfo_get_ContainsGrabbable_m05A13F1DE8544FABD456F572E5F775BCBE62F0D9 (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m6D9C2EC7EF30405BA7669BF0EC32F8339C93496F (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_m581B60F800CD970C67BE48AFA30322B4EA2D8590 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>::TryGetValue(TKey,TValue&)
inline bool LRUCache_2_TryGetValue_mCB74D54327D232032960E499D5CB2DBE8F0E5C43 (LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * __this, int32_t ___key0, NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 *, int32_t, NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **, const RuntimeMethod*))LRUCache_2_TryGetValue_mDE2C005B0B7EFB394EE1A6C96AD25821C5FD0799_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Component::TryGetComponent<Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>(!!0&)
inline bool Component_TryGetComponent_TisNearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2_mB4C8E8A2657C7662CA2C377B831B45D8BF62B35D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m409D64ADC25ED175ADC7ED4C3F7ABF5439AD63AF_gshared)(__this, ___component0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>::Add(TKey,TValue)
inline void LRUCache_2_Add_m8BA5CEE93111661820A64DF183D1D5CC9B36D455 (LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * __this, int32_t ___key0, NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 *, int32_t, NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 *, const RuntimeMethod*))LRUCache_2_Add_mC42FB4028315F76C404A3826C960ACC7F5F8660C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>::Remove(TKey)
inline bool LRUCache_2_Remove_m3F9A01DE0A32D5DEBF3210F9AC7DE4EFAA1126E1 (LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 *, int32_t, const RuntimeMethod*))LRUCache_2_Remove_mC13BE22FBB1D7C980126EB71E0666C164F88E33F_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.MeshCollider::get_convex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshCollider_get_convex_m115EB1C243F7EFD1EBAB80350E98EB3DE1A4C44C (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * __this, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * CameraCache_get_Main_m9F427B96E92787BB2CF98E10430A9E56CE360AF6 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.CameraFOVChecker::IsInFOVCached(UnityEngine.Camera,UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraFOVChecker_IsInFOVCached_m312ABE9E28C283F5ACE010AAE90F52BD1C57A7BB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___myCollider1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Collider_ClosestPoint_m7777917E298B31796DEE906B54F0102F6ED76676 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_m4EFD567EB295244D9D976A8E11AEF949471010FE (WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(Microsoft.MixedReality.Toolkit.Utilities.WaitForUpdate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * AwaiterExtensions_GetAwaiter_mA4344A65213B531D5C85190C7FACC2E9C0E52B8A (WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9_m89C0E6BEF71A8A4B349DBDB90762D848519A19FD (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A ** ___awaiter0, U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **, U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9_m98A9AE1AD9107B97043D787A9543603AC6C4BA49_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429 (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakePlanesU3Ed__49_MoveNext_m0D8B858803238017DD93A7F591ED288A57C33D71 (U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakePlanesU3Ed__49_SetStateMachine_mDC8B20540C0D551CC23EE40EF25E8A785E7E11FE (U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8035D52FFE09AFB8ECF1B5CE7F70C48A2365094E (U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Teleport.IMixedRealityTeleportSystem Microsoft.MixedReality.Toolkit.CoreServices::get_TeleportSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_TeleportSystem_mE509165672B0E7D41CCAC1F1848D6BFC776DBDF5 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportPointer_U3CU3En__0_m16C04CFC89CB1FD432F477A5C51822D74BF69599 (TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7_m65BDC79634A61184BC9C54EBCDA2AB02CBF2AE40 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A ** ___awaiter0, U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **, U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7_mC6FC563CBDEB7D46AD7ED2E44F0E769D09D17490_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.UnityObjectExtensions::IsNull<Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer>(!!0)
inline bool UnityObjectExtensions_IsNull_TisTeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_m200A392B1C54DA5471566567120ADE318823B338 (TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * ___interface0, const RuntimeMethod* method)
{
	return ((  bool (*) (TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E *, const RuntimeMethod*))UnityObjectExtensions_IsNull_TisRuntimeObject_mAB9CF24417EAC34F7ECC26A161158490BE15A463_gshared)(___interface0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__49_MoveNext_m75F7083D85909917149142C9A76AFEC95457EF92 (U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__49_SetStateMachine_m4D24F45233241AEA75C2376672B58BE69906233D (U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_m156BFD7083AC20B1EFCD990D6DA52E51928EC521 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mB2B0BC2025F36EE769C5973165EB5DABB8336440 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mB2B0BC2025F36EE769C5973165EB5DABB8336440_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.String Windows.Media.SpeechSynthesis.VoiceInformation::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VoiceInformation_get_DisplayName_mF8A88ED9E5034192CA6099E4F8E0D21C9905FC7F (VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::get_VoiceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextToSpeech_get_VoiceName_m3E15465A516226E7163DE1C696EBD9116A49C0C4 (TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::ToClip(System.String,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * TextToSpeech_ToClip_mFE3227C23CD46654D51FDB46D630B6336EFF1FA4 (String_t* ___name0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___audioData1, int32_t ___sampleCount2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream> Windows.Media.SpeechSynthesis.SpeechSynthesizer::SynthesizeSsmlToStreamAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesizer_SynthesizeSsmlToStreamAsync_mB7BB27243DF5487616E199DE08363BB561096D7E (SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * __this, String_t* ___Ssml0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream> Windows.Media.SpeechSynthesis.SpeechSynthesizer::SynthesizeTextToStreamAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesizer_SynthesizeTextToStreamAsync_m921984BD1440582009BE39983706A8C552B4D374 (SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1__ctor_m1C8359CE606FB4D529EE5D8D4727C961B4223FE4 (U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<Windows.Media.SpeechSynthesis.VoiceInformation> Windows.Media.SpeechSynthesis.SpeechSynthesizer::get_AllVoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesizer_get_AllVoices_m55EF9EA9E209D59F537ACDFF1B9D92B5DF724E0A (const RuntimeMethod* method);
// System.Void System.Func`2<Windows.Media.SpeechSynthesis.VoiceInformation,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD3EC239111E47C8272C51EA2470D11EA52DD1CFA (Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<Windows.Media.SpeechSynthesis.VoiceInformation>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_m451553584E65016EE41B8EADD2BE9DF72B0E21EC (RuntimeObject* ___source0, Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m016E64EEAC35EA6D2A28616261EA1C34A4365B4A_gshared)(___source0, ___predicate1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<Windows.Media.SpeechSynthesis.VoiceInformation>(System.Collections.Generic.IEnumerable`1<!!0>)
inline VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * Enumerable_FirstOrDefault_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_mD8BF5F734E0DD5466272C4EE61EA2A521B510220 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mC01F0D1A25CE71042DDEC7C7F1D8CBB3B3226A2C_gshared)(___source0, method);
}
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesizer::put_Voice(Windows.Media.SpeechSynthesis.VoiceInformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesizer_put_Voice_mB2652ABACA6B512821D79AF788AFE336B8CD62F7 (SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * __this, VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m92BE92B1C1EDD4B66E5D3CF9ED6480D7D3FFA0E9 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// Windows.Media.SpeechSynthesis.VoiceInformation Windows.Media.SpeechSynthesis.SpeechSynthesizer::get_DefaultVoice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * SpeechSynthesizer_get_DefaultVoice_m8A4B013A14329DA0A9B19BE505B92B7E6E066517 (const RuntimeMethod* method);
// !0 System.Func`1<Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>>::Invoke()
inline RuntimeObject* Func_1_Invoke_mC2F04559B3BA5D5A38A6B59AFEC81A5D2464D523 (Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  WindowsRuntimeSystemExtensions_GetAwaiter_TisSpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C_m2BE5726A8AD4FD623B04FC9967C307E01B60E6A6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_mA4533DC75249C97B6C6952B1AC6F980480171F23_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3081B9343F6D81D9154AE63CA8C857237C1E22D9 (TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>,Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m3B8B5255A11F691EC34ECBFF1962A9D1301CC987 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 * ___awaiter0, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 *, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mAD6E5CE8B04DDCC062F99B60A618BE4887094F0A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::GetResult()
inline SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * TaskAwaiter_1_GetResult_mA36AE89D3B83F4407EC9974294AB665C1FE3B9F2 (TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 * __this, const RuntimeMethod* method)
{
	return ((  SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * (*) (TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.UInt64 Windows.Media.SpeechSynthesis.SpeechSynthesisStream::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t SpeechSynthesisStream_get_Size_m5006CFF57B47983335874FC5214353B29E541A0E (SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * __this, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream Windows.Media.SpeechSynthesis.SpeechSynthesisStream::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechSynthesisStream_GetInputStreamAt_m9F594FE64385B34FC707C4CB6F76CC0A556C40BA (SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * __this, uint64_t ___position0, const RuntimeMethod* method);
// System.Void Windows.Media.SpeechSynthesis.SpeechSynthesisStream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechSynthesisStream_Dispose_m98042FC4C927605ABE81564A58E5B983D3952D5F (SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * __this, const RuntimeMethod* method);
// System.Void Windows.Storage.Streams.DataReader::.ctor(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader__ctor_mF2123BC23FC33A58A140ACB4C04B5007B4974360 (DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * __this, RuntimeObject* ___inputStream0, const RuntimeMethod* method);
// Windows.Storage.Streams.DataReaderLoadOperation Windows.Storage.Streams.DataReader::LoadAsync(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataReaderLoadOperation_t7BFE6680B141154886E08AB23401A9D3298FBCCD * DataReader_LoadAsync_m86C38A1B7E7A4E32A1C458692C96B63187114005 (DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * __this, uint32_t ___count0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.UInt32>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m875970DC042A5A87245D94D5A768FD2BE0C605F3 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m875970DC042A5A87245D94D5A768FD2BE0C605F3_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>,Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m8FF6D4A029AABF03118A49EE0303AC06F4ECE4F6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * ___awaiter0, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m8FF6D4A029AABF03118A49EE0303AC06F4ECE4F6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.UInt32>::GetResult()
inline uint32_t TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_gshared)(__this, method);
}
// System.Void Windows.Storage.Streams.DataReader::ReadBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReader_ReadBytes_m168DE8F805771DDEF9FA1DA403581ADC41AB1630 (DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Single[] Microsoft.MixedReality.Toolkit.Audio.TextToSpeech::ToUnityAudio(System.Byte[],System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* TextToSpeech_ToUnityAudio_m024BADF1D93F4E9503FBDB5C6D422F5743389129 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___wavAudio0, int32_t* ___sampleCount1, int32_t* ___frequency2, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.AppCallbackItem::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4 (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.WSA.Application::InvokeOnAppThread(UnityEngine.WSA.AppCallbackItem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_InvokeOnAppThread_m286125CAD73BA8C5E00DFCB95E4F60700383C5AD (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * ___item0, bool ___waitUntilDone1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CPlaySpeechU3Eb__0U3Ed_MoveNext_mAE0BECB679DB5E2E46B9BA86FE87B8D0B71C67DA (U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CPlaySpeechU3Eb__0U3Ed_SetStateMachine_mE259A3058A3C4802D6EADFCED457B4A7C757E296 (U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTrackPositionSequenceU3Ed__30__ctor_m13A75B700E7567EF539A30049AEB6C2F2BF4E4E9 (U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTrackPositionSequenceU3Ed__30_System_IDisposable_Dispose_m9FE5EEE06BDB9703D1EA3AE18E04C211242C7D0A (U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTrackPositionSequenceU3Ed__30_MoveNext_mD2565AC4E34879744B0297FF725A5F0478475032 (U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0048;
	}

IL_0020:
	{
		// hintPosition = PivotPosition.localPosition;
		RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * L_4 = V_1;
		RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = RotateAroundPoint_get_PivotPosition_mEE6D0721D2708D7AC20E208A1B8CD075C5D6E221_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_hintPosition_11(L_7);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0048:
	{
		// while (updatePosition)
		RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_updatePosition_12();
		if (L_9)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTrackPositionSequenceU3Ed__30_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFFF8430FD9D8DC27201225774A0947BBCF2CDE04 (U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTrackPositionSequenceU3Ed__30_System_Collections_IEnumerator_Reset_m2F469465E2C54BB77287660F48A722D1CB861CD6 (U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTrackPositionSequenceU3Ed__30_System_Collections_IEnumerator_Reset_m2F469465E2C54BB77287660F48A722D1CB861CD6_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTrackPositionSequenceU3Ed__30_System_Collections_IEnumerator_get_Current_mD45CE4AC25E7F461CBC0338E0768416AD0313F84 (U3CTrackPositionSequenceU3Ed__30_tDDF3B7FD06C43A9CA897D90928071D2C0BB50301 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateToU3Ed__204__ctor_mD466F3796B6AD652389004F987E9B1B27CB74686 (U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateToU3Ed__204_System_IDisposable_Dispose_m14993CC137A2EF909F2F2098BB580CF46B7108C2 (U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateToU3Ed__204_MoveNext_m25C122289F9808D85C7AAE939FC1361BE7DF3922 (U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * V_1 = NULL;
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B17_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B16_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00cd;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (curve == null)
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get_curve_2();
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		// curve = paginationCurve;
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_5 = V_1;
		NullCheck(L_5);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = L_5->get_paginationCurve_20();
		__this->set_curve_2(L_6);
	}

IL_0035:
	{
		// if (time == null)
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_7 = __this->get_address_of_time_4();
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_7, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		// time = animationLength;
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_animationLength_21();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_m32EB6B5DB3EA9B62B49C29C367AFAD991AC2A53A_RuntimeMethod_var);
		__this->set_time_4(L_11);
	}

IL_0053:
	{
		// float counter = 0.0f;
		__this->set_U3CcounterU3E5__2_8((0.0f));
		goto IL_00d4;
	}

IL_0060:
	{
		// workingScrollerPos = Vector3.Lerp(initialPos, finalPos, curve.Evaluate(counter / (float)time));
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_12 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_initialPos_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_finalPos_6();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_15 = __this->get_curve_2();
		float L_16 = __this->get_U3CcounterU3E5__2_8();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_17 = __this->get_address_of_time_4();
		float L_18;
		L_18 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_17, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		NullCheck(L_15);
		float L_19;
		L_19 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_15, ((float)((float)L_16/(float)((float)((float)L_18)))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline(L_13, L_14, L_19, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_workingScrollerPos_55(L_20);
		// ScrollContainer.transform.localPosition = workingScrollerPos;
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_21 = V_1;
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = ScrollingObjectCollection_get_ScrollContainer_m842E25C989E1799D0371156674D705D04810E566(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_24 = V_1;
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = L_24->get_workingScrollerPos_55();
		NullCheck(L_23);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_23, L_25, /*hidden argument*/NULL);
		// counter += Time.deltaTime;
		float L_26 = __this->get_U3CcounterU3E5__2_8();
		float L_27;
		L_27 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		__this->set_U3CcounterU3E5__2_8(((float)il2cpp_codegen_add((float)L_26, (float)L_27)));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00cd:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d4:
	{
		// while (counter <= time)
		float L_28 = __this->get_U3CcounterU3E5__2_8();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_29 = __this->get_time_4();
		V_2 = L_29;
		float L_30;
		L_30 = Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_RuntimeMethod_var);
		bool L_31;
		L_31 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)(&V_2), /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)((!(((float)L_28) <= ((float)L_30)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_31)))
		{
			goto IL_0060;
		}
	}
	{
		// if (scrollDirection == ScrollDirectionType.UpAndDown)
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_scrollDirection_15();
		if (L_33)
		{
			goto IL_0128;
		}
	}
	{
		// workingScrollerPos.y = initialScrollerPos.y = finalPos.y;
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_34 = V_1;
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_35 = L_34->get_address_of_workingScrollerPos_55();
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_36 = V_1;
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_37 = L_36->get_address_of_initialScrollerPos_54();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_38 = __this->get_address_of_finalPos_6();
		float L_39 = L_38->get_y_3();
		float L_40 = L_39;
		V_3 = L_40;
		L_37->set_y_3(L_40);
		float L_41 = V_3;
		L_35->set_y_3(L_41);
		// }
		goto IL_014c;
	}

IL_0128:
	{
		// workingScrollerPos.x = initialScrollerPos.x = finalPos.x;
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_42 = V_1;
		NullCheck(L_42);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_43 = L_42->get_address_of_workingScrollerPos_55();
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_44 = V_1;
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_45 = L_44->get_address_of_initialScrollerPos_54();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_46 = __this->get_address_of_finalPos_6();
		float L_47 = L_46->get_x_2();
		float L_48 = L_47;
		V_3 = L_48;
		L_45->set_x_2(L_48);
		float L_49 = V_3;
		L_43->set_x_2(L_49);
	}

IL_014c:
	{
		// if (callback != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_50 = __this->get_callback_7();
		if (!L_50)
		{
			goto IL_0165;
		}
	}
	{
		// callback?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_51 = __this->get_callback_7();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_52 = L_51;
		G_B16_0 = L_52;
		if (L_52)
		{
			G_B17_0 = L_52;
			goto IL_0160;
		}
	}
	{
		goto IL_0165;
	}

IL_0160:
	{
		NullCheck(G_B17_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B17_0, /*hidden argument*/NULL);
	}

IL_0165:
	{
		// CurrentVelocityState = VelocityState.None;
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_53 = V_1;
		NullCheck(L_53);
		ScrollingObjectCollection_set_CurrentVelocityState_m0D0FF9349B9111080BBDFB9D530DC5B0BA257C71(L_53, 0, /*hidden argument*/NULL);
		// animateScroller = null;
		ScrollingObjectCollection_t29EB050341B6A13D3F0FA51A93F896CD4696E5A3 * L_54 = V_1;
		NullCheck(L_54);
		L_54->set_animateScroller_69((RuntimeObject*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateToU3Ed__204_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA17612A6B110DAE75015B3B445A66B9BD906B6A5 (U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateToU3Ed__204_System_Collections_IEnumerator_Reset_m0590B53D4201D074C2FE4896C16ED2DE75BE0C17 (U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateToU3Ed__204_System_Collections_IEnumerator_Reset_m0590B53D4201D074C2FE4896C16ED2DE75BE0C17_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimateToU3Ed__204_System_Collections_IEnumerator_get_Current_mF4F91198CFBEDE86523C5F58778506A22402EAEE (U3CAnimateToU3Ed__204_t80A71720ADC2B00E010CC70C51D2449907C9ECA6 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/ScrollEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollEvent__ctor_mAFC0DF67146DA9C11BBA90EFA9CDBAC5804FDA35 (ScrollEvent_t6C5CF0DF7E43F7EE08660225833929543CF8BB31 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB(__this, /*hidden argument*/UnityEvent_1__ctor_mFEC498EC5642F0C80769E4D2E08EA2E3E4D3D0EB_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__0_MoveNext_m8839F15ADDB9FFD3863B78A2DD9AF6AFB1D00694 (U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1_m7B4F124E8E66390F57EA51FF103533B4443C9D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t62850A623BB1531B88A166BB1A5553ABD93090E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tADCCA16A5F2D4C520C73F59195E50F0699A4B734_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDataProviderAccess_GetDataProviders_TisIMixedRealitySpatialAwarenessMeshObserver_t43AA0F1533853F781D74D657560BD1F0480905F3_mDD82BA875DBC88E5BE110F3DD0707FB5394837D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityDataProviderAccess_t218AD36B100367ABE1A6739D01A60936A872915D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0031;
			}
		}

IL_000a:
		{
			// CreateFoldersIfDoesNotExist(folderPath);
			String_t* L_2 = __this->get_folderPath_2();
			SpatialMeshExporter_CreateFoldersIfDoesNotExist_mF9884518FE3B209BA596FDCF602A1F8B360EFC2F(L_2, /*hidden argument*/NULL);
			// var meshObservers = (CoreServices.SpatialAwarenessSystem as IMixedRealityDataProviderAccess).GetDataProviders<IMixedRealitySpatialAwarenessMeshObserver>();
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_3;
			L_3 = CoreServices_get_SpatialAwarenessSystem_m92750AEB87A7EF642D84A825F8B5958E9ECA590F(/*hidden argument*/NULL);
			NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityDataProviderAccess_t218AD36B100367ABE1A6739D01A60936A872915D_il2cpp_TypeInfo_var)));
			RuntimeObject* L_4;
			L_4 = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(IMixedRealityDataProviderAccess_GetDataProviders_TisIMixedRealitySpatialAwarenessMeshObserver_t43AA0F1533853F781D74D657560BD1F0480905F3_mDD82BA875DBC88E5BE110F3DD0707FB5394837D6_RuntimeMethod_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealityDataProviderAccess_t218AD36B100367ABE1A6739D01A60936A872915D_il2cpp_TypeInfo_var)));
			V_1 = L_4;
			// foreach (var observer in meshObservers)
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver>::GetEnumerator() */, IEnumerable_1_t62850A623BB1531B88A166BB1A5553ABD93090E2_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CU3E7__wrap1_4(L_6);
		}

IL_0031:
		{
		}

IL_0032:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_0082;
				}
			}

IL_0035:
			{
				goto IL_00a5;
			}

IL_0037:
			{
				// foreach (var observer in meshObservers)
				RuntimeObject* L_8 = __this->get_U3CU3E7__wrap1_4();
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver>::get_Current() */, IEnumerator_1_tADCCA16A5F2D4C520C73F59195E50F0699A4B734_il2cpp_TypeInfo_var, L_8);
				// await Save(observer, folderPath, consolidate);
				String_t* L_10 = __this->get_folderPath_2();
				bool L_11 = __this->get_consolidate_3();
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_12;
				L_12 = SpatialMeshExporter_Save_m1CA1BB236FB68422402C118496C0F835D8816AE1(L_9, L_10, L_11, /*hidden argument*/NULL);
				NullCheck(L_12);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13;
				L_13 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_12, /*hidden argument*/NULL);
				V_2 = L_13;
				bool L_14;
				L_14 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
				if (L_14)
				{
					goto IL_009e;
				}
			}

IL_0062:
			{
				int32_t L_15 = 0;
				V_0 = L_15;
				__this->set_U3CU3E1__state_0(L_15);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_16 = V_2;
				__this->set_U3CU3Eu__1_5(L_16);
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1_m7B4F124E8E66390F57EA51FF103533B4443C9D67((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1_m7B4F124E8E66390F57EA51FF103533B4443C9D67_RuntimeMethod_var);
				IL2CPP_LEAVE(0xFF, FINALLY_00b4);
			}

IL_0082:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_18 = __this->get_U3CU3Eu__1_5();
				V_2 = L_18;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_19 = __this->get_address_of_U3CU3Eu__1_5();
				il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_20 = (-1);
				V_0 = L_20;
				__this->set_U3CU3E1__state_0(L_20);
			}

IL_009e:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			}

IL_00a5:
			{
				// foreach (var observer in meshObservers)
				RuntimeObject* L_21 = __this->get_U3CU3E7__wrap1_4();
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_0037;
				}
			}

IL_00b2:
			{
				IL2CPP_LEAVE(0xCC, FINALLY_00b4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00b4;
		}

FINALLY_00b4:
		{ // begin finally (depth: 2)
			{
				int32_t L_23 = V_0;
				if ((((int32_t)L_23) >= ((int32_t)0)))
				{
					goto IL_00cb;
				}
			}

IL_00b8:
			{
				RuntimeObject* L_24 = __this->get_U3CU3E7__wrap1_4();
				if (!L_24)
				{
					goto IL_00cb;
				}
			}

IL_00c0:
			{
				RuntimeObject* L_25 = __this->get_U3CU3E7__wrap1_4();
				NullCheck(L_25);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
			}

IL_00cb:
			{
				IL2CPP_END_FINALLY(180)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(180)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xFF, IL_00ff)
			IL2CPP_JUMP_TBL(0xCC, IL_00cc)
		}

IL_00cc:
		{
			__this->set_U3CU3E7__wrap1_4((RuntimeObject*)NULL);
			goto IL_00ec;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_26 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_27 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_26, L_27, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ff;
	} // end catch (depth: 1)

IL_00ec:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_28 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_28, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveU3Ed__0_MoveNext_m8839F15ADDB9FFD3863B78A2DD9AF6AFB1D00694_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 * _thisAdjusted = reinterpret_cast<U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 *>(__this + _offset);
	U3CSaveU3Ed__0_MoveNext_m8839F15ADDB9FFD3863B78A2DD9AF6AFB1D00694(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__0::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__0_SetStateMachine_m2744EF76B6007B492B7EF9481A65C6B4ACD6ED8F (U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveU3Ed__0_SetStateMachine_m2744EF76B6007B492B7EF9481A65C6B4ACD6ED8F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 * _thisAdjusted = reinterpret_cast<U3CSaveU3Ed__0_t79BE369870414B954A5729028BE8F4491721CAC1 *>(__this + _offset);
	U3CSaveU3Ed__0_SetStateMachine_m2744EF76B6007B492B7EF9481A65C6B4ACD6ED8F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__1_MoveNext_m16FA7A2D8ACE8B3C3943F0078CF0E2A2A8A2A802 (U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A_TisU3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B_m9547B893079897EAE0718E9FD3F5EF5DA02403D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_GetResult_m00671A15A3EF8A775D35655D48A459DD22376E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_get_IsCompleted_mC9C09ABF80C8ED2BD852B9D8A4C0B8AF5A9EEAFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * V_1 = NULL;
	Exception_t * V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_005a;
			}
		}

IL_000a:
		{
			// CreateFoldersIfDoesNotExist(folderPath);
			String_t* L_2 = __this->get_folderPath_2();
			SpatialMeshExporter_CreateFoldersIfDoesNotExist_mF9884518FE3B209BA596FDCF602A1F8B360EFC2F(L_2, /*hidden argument*/NULL);
			// await SaveInternal(meshObserver, folderPath, consolidate);
			RuntimeObject* L_3 = __this->get_meshObserver_3();
			String_t* L_4 = __this->get_folderPath_2();
			bool L_5 = __this->get_consolidate_4();
			RuntimeObject* L_6;
			L_6 = SpatialMeshExporter_SaveInternal_mD9321452C0590CFB574C82C70CDA4CB6B418F03B(L_3, L_4, L_5, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * L_7;
			L_7 = AwaiterExtensions_GetAwaiter_m85A1500837F7549AFB3B4D3DD53EF1D5B35925F1(L_6, /*hidden argument*/NULL);
			V_1 = L_7;
			SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * L_8 = V_1;
			NullCheck(L_8);
			bool L_9;
			L_9 = SimpleCoroutineAwaiter_1_get_IsCompleted_mC9C09ABF80C8ED2BD852B9D8A4C0B8AF5A9EEAFB_inline(L_8, /*hidden argument*/SimpleCoroutineAwaiter_1_get_IsCompleted_mC9C09ABF80C8ED2BD852B9D8A4C0B8AF5A9EEAFB_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0076;
			}
		}

IL_003a:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * L_11 = V_1;
			__this->set_U3CU3Eu__1_5(L_11);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A_TisU3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B_m9547B893079897EAE0718E9FD3F5EF5DA02403D8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_12, (SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A **)(&V_1), (U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A_TisU3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B_m9547B893079897EAE0718E9FD3F5EF5DA02403D8_RuntimeMethod_var);
			goto IL_00a9;
		}

IL_005a:
		{
			RuntimeObject * L_13 = __this->get_U3CU3Eu__1_5();
			V_1 = ((SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A *)CastclassClass((RuntimeObject*)L_13, SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_5(NULL);
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0076:
		{
			SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * L_15 = V_1;
			NullCheck(L_15);
			RuntimeObject * L_16;
			L_16 = SimpleCoroutineAwaiter_1_GetResult_m00671A15A3EF8A775D35655D48A459DD22376E03(L_15, /*hidden argument*/SimpleCoroutineAwaiter_1_GetResult_m00671A15A3EF8A775D35655D48A459DD22376E03_RuntimeMethod_var);
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007f;
		}
		throw e;
	}

CATCH_007f:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_2;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a9;
	} // end catch (depth: 1)

IL_0096:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_19, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveU3Ed__1_MoveNext_m16FA7A2D8ACE8B3C3943F0078CF0E2A2A8A2A802_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B * _thisAdjusted = reinterpret_cast<U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B *>(__this + _offset);
	U3CSaveU3Ed__1_MoveNext_m16FA7A2D8ACE8B3C3943F0078CF0E2A2A8A2A802(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<Save>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__1_SetStateMachine_m6311600F8E3D302EE714302C013CF7EDDB789363 (U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveU3Ed__1_SetStateMachine_m6311600F8E3D302EE714302C013CF7EDDB789363_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B * _thisAdjusted = reinterpret_cast<U3CSaveU3Ed__1_tAA645C451A92F75EAE41916F29388978C84B779B *>(__this + _offset);
	U3CSaveU3Ed__1_SetStateMachine_m6311600F8E3D302EE714302C013CF7EDDB789363(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveInternalU3Ed__2__ctor_m85AD82EB11C392DFBC8F385DB27998AE80440FFF (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveInternalU3Ed__2_System_IDisposable_Dispose_m5BF95D910FD7521380FD635FB2A6DCD51F4D48E5 (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, const RuntimeMethod* method)
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
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CSaveInternalU3Ed__2_U3CU3Em__Finally1_m2E7A8A46A2E16B80D2BF3B2AF7BF4B0C5B2B610C(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSaveInternalU3Ed__2_MoveNext_mDDB905FBB62301A47EA94A754D3E2734D1932568 (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0172F4E3EDE1A1E9466FCB30A1142B94DFDB44EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mABE9CE84BCC489F861A6C0A48BA68349B90B206C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mC2FACCAF836A963D13F6DE7058949947B0FD97D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m0E07DD3D1AB968CBB94F8678AEC6CD787DA828EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m36D18BE9FABFFD53367BD5ED7B267D1266B0ED57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t02B5088D70FB251D493977058E302042360A54E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE550E38280969BBCAAB36590C9700C303A82AEA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessMeshObserver_t43AA0F1533853F781D74D657560BD1F0480905F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyDictionary_2_tF1869787F67469C600A75F53D1FE84AF0EC71D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BA8B4163EE29D043FCDECF7A4BF3884B41CB8E8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * V_4 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_5 = NULL;
	String_t* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * G_B7_0 = NULL;
	HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * G_B6_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B8_0 = NULL;
	HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * G_B8_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0018;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_00e8;
			}
		}

IL_0011:
		{
			V_0 = (bool)0;
			goto IL_011a;
		}

IL_0018:
		{
			__this->set_U3CU3E1__state_0((-1));
			// var targets = new HashSet<Transform>();
			HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * L_3 = (HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D *)il2cpp_codegen_object_new(HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D_il2cpp_TypeInfo_var);
			HashSet_1__ctor_m36D18BE9FABFFD53367BD5ED7B267D1266B0ED57(L_3, /*hidden argument*/HashSet_1__ctor_m36D18BE9FABFFD53367BD5ED7B267D1266B0ED57_RuntimeMethod_var);
			V_2 = L_3;
			// foreach (SpatialAwarenessMeshObject meshObject in meshObserver.Meshes.Values)
			RuntimeObject* L_4 = __this->get_meshObserver_2();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::get_Meshes() */, IMixedRealitySpatialAwarenessMeshObserver_t43AA0F1533853F781D74D657560BD1F0480905F3_il2cpp_TypeInfo_var, L_4);
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.Generic.IEnumerable`1<!1> System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Values() */, IReadOnlyDictionary_2_tF1869787F67469C600A75F53D1FE84AF0EC71D0F_il2cpp_TypeInfo_var, L_5);
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::GetEnumerator() */, IEnumerable_1_t02B5088D70FB251D493977058E302042360A54E5_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
		}

IL_003b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0073;
			}

IL_003d:
			{
				// foreach (SpatialAwarenessMeshObject meshObject in meshObserver.Meshes.Values)
				RuntimeObject* L_8 = V_3;
				NullCheck(L_8);
				SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * L_9;
				L_9 = InterfaceFuncInvoker0< SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::get_Current() */, IEnumerator_1_tE550E38280969BBCAAB36590C9700C303A82AEA4_il2cpp_TypeInfo_var, L_8);
				V_4 = L_9;
				// targets.Add(consolidate ? meshObject.GameObject.transform.parent : meshObject.GameObject.transform);
				HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * L_10 = V_2;
				bool L_11 = __this->get_consolidate_3();
				G_B6_0 = L_10;
				if (L_11)
				{
					G_B7_0 = L_10;
					goto IL_005c;
				}
			}

IL_004e:
			{
				SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * L_12 = V_4;
				NullCheck(L_12);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
				L_13 = BaseSpatialAwarenessObject_get_GameObject_mC77417C0A63303EE19B777A44C5C8C8EFC84195F_inline(L_12, /*hidden argument*/NULL);
				NullCheck(L_13);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
				L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
				G_B8_0 = L_14;
				G_B8_1 = G_B6_0;
				goto IL_006d;
			}

IL_005c:
			{
				SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * L_15 = V_4;
				NullCheck(L_15);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
				L_16 = BaseSpatialAwarenessObject_get_GameObject_mC77417C0A63303EE19B777A44C5C8C8EFC84195F_inline(L_15, /*hidden argument*/NULL);
				NullCheck(L_16);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
				L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
				NullCheck(L_17);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
				L_18 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_17, /*hidden argument*/NULL);
				G_B8_0 = L_18;
				G_B8_1 = G_B7_0;
			}

IL_006d:
			{
				NullCheck(G_B8_1);
				bool L_19;
				L_19 = HashSet_1_Add_mC2FACCAF836A963D13F6DE7058949947B0FD97D1(G_B8_1, G_B8_0, /*hidden argument*/HashSet_1_Add_mC2FACCAF836A963D13F6DE7058949947B0FD97D1_RuntimeMethod_var);
			}

IL_0073:
			{
				// foreach (SpatialAwarenessMeshObject meshObject in meshObserver.Meshes.Values)
				RuntimeObject* L_20 = V_3;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_003d;
				}
			}

IL_007b:
			{
				IL2CPP_LEAVE(0x87, FINALLY_007d);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007d;
		}

FINALLY_007d:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_22 = V_3;
				if (!L_22)
				{
					goto IL_0086;
				}
			}

IL_0080:
			{
				RuntimeObject* L_23 = V_3;
				NullCheck(L_23);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_23);
			}

IL_0086:
			{
				IL2CPP_END_FINALLY(125)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(125)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x87, IL_0087)
		}

IL_0087:
		{
			// foreach (var target in targets)
			HashSet_1_tC4D9B46D70A70330F7FF6E89ADE3D83222BF660D * L_24 = V_2;
			NullCheck(L_24);
			Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC  L_25;
			L_25 = HashSet_1_GetEnumerator_m0E07DD3D1AB968CBB94F8678AEC6CD787DA828EF(L_24, /*hidden argument*/HashSet_1_GetEnumerator_m0E07DD3D1AB968CBB94F8678AEC6CD787DA828EF_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_5(L_25);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00f0;
		}

IL_009d:
		{
			// foreach (var target in targets)
			Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * L_26 = __this->get_address_of_U3CU3E7__wrap1_5();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
			L_27 = Enumerator_get_Current_mABE9CE84BCC489F861A6C0A48BA68349B90B206C_inline((Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC *)L_26, /*hidden argument*/Enumerator_get_Current_mABE9CE84BCC489F861A6C0A48BA68349B90B206C_RuntimeMethod_var);
			V_5 = L_27;
			// string filePath = Path.Combine(folderPath, target.name + ".obj");
			String_t* L_28 = __this->get_folderPath_4();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = V_5;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_29, /*hidden argument*/NULL);
			String_t* L_31;
			L_31 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(L_30, _stringLiteral6BA8B4163EE29D043FCDECF7A4BF3884B41CB8E8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_32;
			L_32 = Path_Combine_mBAC6F82953008479983594F7F95101F46310C32D(L_28, L_31, /*hidden argument*/NULL);
			V_6 = L_32;
			// yield return target.gameObject.ExportOBJAsync(filePath, true);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_5;
			NullCheck(L_33);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
			L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
			String_t* L_35 = V_6;
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_36;
			L_36 = GameObjectExtensions_ExportOBJAsync_m5EE94E7F743C13E600FB1C26F7A88A2A5B1798DE(L_34, L_35, (bool)1, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_36);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_011a;
		}

IL_00e8:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_00f0:
		{
			// foreach (var target in targets)
			Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * L_37 = __this->get_address_of_U3CU3E7__wrap1_5();
			bool L_38;
			L_38 = Enumerator_MoveNext_m0172F4E3EDE1A1E9466FCB30A1142B94DFDB44EB((Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC *)L_37, /*hidden argument*/Enumerator_MoveNext_m0172F4E3EDE1A1E9466FCB30A1142B94DFDB44EB_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_009d;
			}
		}

IL_00fd:
		{
			U3CSaveInternalU3Ed__2_U3CU3Em__Finally1_m2E7A8A46A2E16B80D2BF3B2AF7BF4B0C5B2B610C(__this, /*hidden argument*/NULL);
			Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * L_39 = __this->get_address_of_U3CU3E7__wrap1_5();
			il2cpp_codegen_initobj(L_39, sizeof(Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC ));
			// }
			V_0 = (bool)0;
			goto IL_011a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0113;
	}

FAULT_0113:
	{ // begin fault (depth: 1)
		U3CSaveInternalU3Ed__2_System_IDisposable_Dispose_m5BF95D910FD7521380FD635FB2A6DCD51F4D48E5(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(275)
	} // end fault
	IL2CPP_CLEANUP(275)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011a:
	{
		bool L_40 = V_0;
		return L_40;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveInternalU3Ed__2_U3CU3Em__Finally1_m2E7A8A46A2E16B80D2BF3B2AF7BF4B0C5B2B610C (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA4E3759D69954DBF4465FB0FD594CB8259F3F653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC * L_0 = __this->get_address_of_U3CU3E7__wrap1_5();
		Enumerator_Dispose_mA4E3759D69954DBF4465FB0FD594CB8259F3F653((Enumerator_t00EAF05B3B5149A9E24C58014150ABA469FD91CC *)L_0, /*hidden argument*/Enumerator_Dispose_mA4E3759D69954DBF4465FB0FD594CB8259F3F653_RuntimeMethod_var);
		return;
	}
}
// System.Object Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSaveInternalU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE88FAC52EF72EF63B3A67FAEDB3F7324652C3223 (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveInternalU3Ed__2_System_Collections_IEnumerator_Reset_m24DBDDDEB5D9393B9923123357A54209CC55D4A1 (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSaveInternalU3Ed__2_System_Collections_IEnumerator_Reset_m24DBDDDEB5D9393B9923123357A54209CC55D4A1_RuntimeMethod_var)));
	}
}
// System.Object Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities.SpatialMeshExporter/<SaveInternal>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSaveInternalU3Ed__2_System_Collections_IEnumerator_get_Current_mC1A2E7C0E9C98CB407166269EBBD2FC1E7283450 (U3CSaveInternalU3Ed__2_t7786423331DDAD7D51C0E2FC5C858D21D3EE669C * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::.ctor(System.Int32,System.Single,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpherePointerQueryInfo__ctor_m725FC284A5DF14B77272386C6584F35B89D22154 (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, int32_t ___bufferSize0, float ___radius1, float ___angle2, float ___minDistance3, float ___smoothingFactor4, bool ___ignoreBoundsHandles5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SpherePointerQueryInfo(int bufferSize, float radius, float angle, float minDistance, float smoothingFactor, bool ignoreBoundsHandles = false)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// numColliders = 0;
		__this->set_numColliders_0(0);
		// queryBuffer = new Collider[bufferSize];
		int32_t L_0 = ___bufferSize0;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_1 = (ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486*)(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486*)SZArrayNew(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_queryBuffer_1(L_1);
		// queryRadius = radius;
		float L_2 = ___radius1;
		__this->set_queryRadius_2(L_2);
		// queryMinDistance = minDistance;
		float L_3 = ___minDistance3;
		__this->set_queryMinDistance_3(L_3);
		// queryAngle = angle * 0.5f;
		float L_4 = ___angle2;
		__this->set_queryAngle_4(((float)il2cpp_codegen_multiply((float)L_4, (float)(0.5f))));
		// querySmoothingFactor = smoothingFactor;
		float L_5 = ___smoothingFactor4;
		__this->set_querySmoothingFactor_5(L_5);
		// ignoreBoundsHandlesForQuery = ignoreBoundsHandles;
		bool L_6 = ___ignoreBoundsHandles5;
		__this->set_ignoreBoundsHandlesForQuery_6(L_6);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::HasValidGrabbable(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpherePointerQueryInfo_HasValidGrabbable_m0430CF0F60AC022A868ABE25B94E392A81FC5B6C (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerAxis1, bool ___ignoreCollidersNotInFOV2, LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * ___componentCache3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_1 = NULL;
	NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// for (int i = 0; i < numColliders; i++)
		V_0 = 0;
		goto IL_004a;
	}

IL_0004:
	{
		// Collider collider = queryBuffer[i];
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_0 = __this->get_queryBuffer_1();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// if (IsColliderValidGrabbable(collider, ignoreCollidersNotInFOV, out NearInteractionGrabbable currentGrabbable, componentCache)
		//     && IsColliderPositionValid(collider, pointerPosition, pointerAxis, queryAngle, queryMinDistance, out _))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = V_1;
		bool L_5 = ___ignoreCollidersNotInFOV2;
		LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * L_6 = ___componentCache3;
		bool L_7;
		L_7 = SpherePointerQueryInfo_IsColliderValidGrabbable_m168A4A2E0A4DF41E7E4FD4FF95D66843CEF307C7(__this, L_4, L_5, (NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)(&V_2), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_8 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___pointerPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___pointerAxis1;
		float L_11 = __this->get_queryAngle_4();
		float L_12 = __this->get_queryMinDistance_3();
		bool L_13;
		L_13 = SpherePointerQueryInfo_IsColliderPositionValid_m7A1FA2BCFADE08D2201A08091EAA3E6C01AE7C3F(__this, L_8, L_9, L_10, L_11, L_12, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		// if (currentGrabbable != null)
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_14 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0046;
		}
	}
	{
		// grabbable = currentGrabbable;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_16 = V_2;
		__this->set_grabbable_7(L_16);
		// return true;
		return (bool)1;
	}

IL_0046:
	{
		// for (int i = 0; i < numColliders; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < numColliders; i++)
		int32_t L_18 = V_0;
		int32_t L_19 = __this->get_numColliders_0();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::GetClosestValidGrabbable(UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean,UnityEngine.Vector3&,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * SpherePointerQueryInfo_GetClosestValidGrabbable_m773EA19C894889E594B2F08B1FFF53BD3A8E38DD (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerAxis1, bool ___ignoreCollidersNotInFOV2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___hitPosition3, LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * ___componentCache4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsExtensions_t8726C10628CC3713DAE3A14EB916578FE9C47383_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * V_5 = NULL;
	NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * V_6 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// NearInteractionGrabbable closestGrabbable = null;
		V_0 = (NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 *)NULL;
		// Vector3 closestColliderHitPosition = pointerPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pointerPosition0;
		V_1 = L_0;
		// float closestDistance = Mathf.Infinity;
		V_2 = (std::numeric_limits<float>::infinity());
		// float closestVolume = Mathf.Infinity;
		V_3 = (std::numeric_limits<float>::infinity());
		// for (int i = 0; i < numColliders; i++)
		V_4 = 0;
		goto IL_00b2;
	}

IL_0018:
	{
		// Collider collider = queryBuffer[i];
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_1 = __this->get_queryBuffer_1();
		int32_t L_2 = V_4;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_5 = L_4;
		// if (IsColliderValidGrabbable(collider, ignoreCollidersNotInFOV, out NearInteractionGrabbable currentGrabbable, componentCache)
		//     && IsColliderPositionValid(collider, pointerPosition, pointerAxis, queryAngle, queryMinDistance, out Vector3 colliderHitPoint))
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = V_5;
		bool L_6 = ___ignoreCollidersNotInFOV2;
		LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * L_7 = ___componentCache4;
		bool L_8;
		L_8 = SpherePointerQueryInfo_IsColliderValidGrabbable_m168A4A2E0A4DF41E7E4FD4FF95D66843CEF307C7(__this, L_5, L_6, (NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)(&V_6), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_9 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___pointerPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___pointerAxis1;
		float L_12 = __this->get_queryAngle_4();
		float L_13 = __this->get_queryMinDistance_3();
		bool L_14;
		L_14 = SpherePointerQueryInfo_IsColliderPositionValid_m7A1FA2BCFADE08D2201A08091EAA3E6C01AE7C3F(__this, L_9, L_10, L_11, L_12, L_13, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00ac;
		}
	}
	{
		// float currentDistance = (pointerPosition - colliderHitPoint).sqrMagnitude;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___pointerPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline(L_15, L_16, /*hidden argument*/NULL);
		V_11 = L_17;
		float L_18;
		L_18 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_11), /*hidden argument*/NULL);
		V_8 = L_18;
		// float currentVolume = collider.bounds.Transform(collider.transform.localToWorldMatrix).Volume();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_19 = V_5;
		NullCheck(L_19);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_20;
		L_20 = Collider_get_bounds_mE341D29E1DA184ADD53A474D57D9082A3550EACB(L_19, /*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_21 = V_5;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_23;
		L_23 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BoundsExtensions_t8726C10628CC3713DAE3A14EB916578FE9C47383_il2cpp_TypeInfo_var);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_24;
		L_24 = BoundsExtensions_Transform_mDC8653C5E4B61FC5F6018CF93FD498E0C09C88A9(L_20, L_23, /*hidden argument*/NULL);
		float L_25;
		L_25 = BoundsExtensions_Volume_m853B81BA96E07F9A4AD8A5EC6CF9F5E4C18CBE9C(L_24, /*hidden argument*/NULL);
		V_9 = L_25;
		// float distanceDiff = closestDistance - currentDistance;
		float L_26 = V_2;
		float L_27 = V_8;
		V_10 = ((float)il2cpp_codegen_subtract((float)L_26, (float)L_27));
		// if (distanceDiff > MIN_DIST_DIFF || (Mathf.Abs(distanceDiff) < MIN_DIST_DIFF && currentVolume < closestVolume))
		float L_28 = V_10;
		if ((((float)L_28) > ((float)(9.99999975E-06f))))
		{
			goto IL_00a0;
		}
	}
	{
		float L_29 = V_10;
		float L_30;
		L_30 = fabsf(L_29);
		if ((!(((float)L_30) < ((float)(9.99999975E-06f)))))
		{
			goto IL_00ac;
		}
	}
	{
		float L_31 = V_9;
		float L_32 = V_3;
		if ((!(((float)L_31) < ((float)L_32))))
		{
			goto IL_00ac;
		}
	}

IL_00a0:
	{
		// closestDistance = currentDistance;
		float L_33 = V_8;
		V_2 = L_33;
		// closestVolume = currentVolume;
		float L_34 = V_9;
		V_3 = L_34;
		// closestGrabbable = currentGrabbable;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_35 = V_6;
		V_0 = L_35;
		// closestColliderHitPosition = colliderHitPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_7;
		V_1 = L_36;
	}

IL_00ac:
	{
		// for (int i = 0; i < numColliders; i++)
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00b2:
	{
		// for (int i = 0; i < numColliders; i++)
		int32_t L_38 = V_4;
		int32_t L_39 = __this->get_numColliders_0();
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0018;
		}
	}
	{
		// hitPosition = closestColliderHitPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_40 = ___hitPosition3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_1;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_40 = L_41;
		// if (closestGrabbable != null)
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_42 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_42, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00de;
		}
	}
	{
		// grabbable = closestGrabbable;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_44 = V_0;
		__this->set_grabbable_7(L_44);
		// return closestGrabbable.gameObject;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_45 = V_0;
		NullCheck(L_45);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_45, /*hidden argument*/NULL);
		return L_46;
	}

IL_00de:
	{
		// return null;
		return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::TryUpdateQueryBufferForLayerMask(UnityEngine.LayerMask,UnityEngine.Vector3,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpherePointerQueryInfo_TryUpdateQueryBufferForLayerMask_m0CBC865F95BCA9C4B02F01F4A09EB3DCF8F381B4 (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerPosition1, int32_t ___triggerInteraction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB906F90FD60344AF7ABD67638D7D73F5243D01E3);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (TryUpdateQueryBufferForLayerMaskPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_StaticFields*)il2cpp_codegen_static_fields_for(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_il2cpp_TypeInfo_var))->get_TryUpdateQueryBufferForLayerMaskPerfMarker_9();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (ContainsGrabbable)
			bool L_2;
			L_2 = SpherePointerQueryInfo_get_ContainsGrabbable_m05A13F1DE8544FABD456F572E5F775BCBE62F0D9(__this, /*hidden argument*/NULL);
			if (!L_2)
			{
				goto IL_002c;
			}
		}

IL_0016:
		{
			// radius = queryRadius * (1 + querySmoothingFactor);
			float L_3 = __this->get_queryRadius_2();
			float L_4 = __this->get_querySmoothingFactor_5();
			V_2 = ((float)il2cpp_codegen_multiply((float)L_3, (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_4))));
			// }
			goto IL_0033;
		}

IL_002c:
		{
			// radius = queryRadius;
			float L_5 = __this->get_queryRadius_2();
			V_2 = L_5;
		}

IL_0033:
		{
			// grabbable = null;
			__this->set_grabbable_7((NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 *)NULL);
			// numColliders = UnityEngine.Physics.OverlapSphereNonAlloc(
			//     pointerPosition,
			//     radius,
			//     queryBuffer,
			//     layerMask,
			//     triggerInteraction);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___pointerPosition1;
			float L_7 = V_2;
			ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_8 = __this->get_queryBuffer_1();
			LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_9 = ___layerMask0;
			int32_t L_10;
			L_10 = LayerMask_op_Implicit_m6D9C2EC7EF30405BA7669BF0EC32F8339C93496F(L_9, /*hidden argument*/NULL);
			int32_t L_11 = ___triggerInteraction2;
			int32_t L_12;
			L_12 = Physics_OverlapSphereNonAlloc_m581B60F800CD970C67BE48AFA30322B4EA2D8590(L_6, L_7, L_8, L_10, L_11, /*hidden argument*/NULL);
			__this->set_numColliders_0(L_12);
			// if (numColliders == queryBuffer.Length)
			int32_t L_13 = __this->get_numColliders_0();
			ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_14 = __this->get_queryBuffer_1();
			NullCheck(L_14);
			if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))))
			{
				goto IL_007e;
			}
		}

IL_0064:
		{
			// Debug.LogWarning($"Maximum number of {numColliders} colliders found in SpherePointer overlap query. Consider increasing the query buffer size in the pointer profile.");
			int32_t L_15 = __this->get_numColliders_0();
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
			String_t* L_18;
			L_18 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteralB906F90FD60344AF7ABD67638D7D73F5243D01E3, L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(L_18, /*hidden argument*/NULL);
		}

IL_007e:
		{
			// }
			IL2CPP_LEAVE(0x8E, FINALLY_0080);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0080;
	}

FINALLY_0080:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(128)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(128)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::IsColliderValidGrabbable(UnityEngine.Collider,System.Boolean,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable&,Microsoft.MixedReality.Toolkit.Utilities.LRUCache`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.NearInteractionGrabbable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpherePointerQueryInfo_IsColliderValidGrabbable_m168A4A2E0A4DF41E7E4FD4FF95D66843CEF307C7 (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider0, bool ___ignoreCollidersNotInFOV1, NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** ___currentGrabbable2, LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * ___componentCache3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFOVChecker_t2EC59F1E93ECA5176C3E51BF016612652105AA7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisNearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2_mB4C8E8A2657C7662CA2C377B831B45D8BF62B35D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_Add_m8BA5CEE93111661820A64DF183D1D5CC9B36D455_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_Remove_m3F9A01DE0A32D5DEBF3210F9AC7DE4EFAA1126E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LRUCache_2_TryGetValue_mCB74D54327D232032960E499D5CB2DBE8F0E5C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * V_2 = NULL;
	bool G_B7_0 = false;
	bool G_B4_0 = false;
	bool G_B6_0 = false;
	bool G_B5_0 = false;
	int32_t G_B8_0 = 0;
	bool G_B8_1 = false;
	{
		// bool isValidGrabbable = true;
		V_0 = (bool)1;
		// int instanceId = collider.gameObject.GetInstanceID();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collider0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// if (!componentCache.TryGetValue(instanceId, out currentGrabbable))
		LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * L_3 = ___componentCache3;
		int32_t L_4 = V_1;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** L_5 = ___currentGrabbable2;
		NullCheck(L_3);
		bool L_6;
		L_6 = LRUCache_2_TryGetValue_mCB74D54327D232032960E499D5CB2DBE8F0E5C43(L_3, L_4, (NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)L_5, /*hidden argument*/LRUCache_2_TryGetValue_mCB74D54327D232032960E499D5CB2DBE8F0E5C43_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		// isValidGrabbable &= collider.TryGetComponent(out currentGrabbable);
		bool L_7 = V_0;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_8 = ___collider0;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** L_9 = ___currentGrabbable2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Component_TryGetComponent_TisNearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2_mB4C8E8A2657C7662CA2C377B831B45D8BF62B35D(L_8, (NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)L_9, /*hidden argument*/Component_TryGetComponent_TisNearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2_mB4C8E8A2657C7662CA2C377B831B45D8BF62B35D_RuntimeMethod_var);
		V_0 = (bool)((int32_t)((int32_t)L_7&(int32_t)L_10));
		// if (currentGrabbable != null)
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** L_11 = ___currentGrabbable2;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_12 = *((NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0037;
		}
	}
	{
		// componentCache.Add(instanceId, currentGrabbable);
		LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * L_14 = ___componentCache3;
		int32_t L_15 = V_1;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** L_16 = ___currentGrabbable2;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_17 = *((NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)L_16);
		NullCheck(L_14);
		LRUCache_2_Add_m8BA5CEE93111661820A64DF183D1D5CC9B36D455(L_14, L_15, L_17, /*hidden argument*/LRUCache_2_Add_m8BA5CEE93111661820A64DF183D1D5CC9B36D455_RuntimeMethod_var);
	}

IL_0037:
	{
		// isValidGrabbable &= (currentGrabbable != null) && !(ignoreBoundsHandlesForQuery && currentGrabbable.IsBoundsHandles);
		bool L_18 = V_0;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** L_19 = ___currentGrabbable2;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_20 = *((NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_20, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B4_0 = L_18;
		if (!L_21)
		{
			G_B7_0 = L_18;
			goto IL_0059;
		}
	}
	{
		bool L_22 = __this->get_ignoreBoundsHandlesForQuery_6();
		G_B5_0 = G_B4_0;
		if (!L_22)
		{
			G_B6_0 = G_B4_0;
			goto IL_0056;
		}
	}
	{
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** L_23 = ___currentGrabbable2;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_24 = *((NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)L_23);
		NullCheck(L_24);
		bool L_25 = L_24->get_IsBoundsHandles_5();
		G_B8_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		G_B8_1 = G_B5_0;
		goto IL_005a;
	}

IL_0056:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_005a;
	}

IL_0059:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_005a:
	{
		V_0 = (bool)((int32_t)((int32_t)G_B8_1&(int32_t)G_B8_0));
		// if (!isValidGrabbable)
		bool L_26 = V_0;
		if (L_26)
		{
			goto IL_0074;
		}
	}
	{
		// if (currentGrabbable == null)
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 ** L_27 = ___currentGrabbable2;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_28 = *((NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 **)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0072;
		}
	}
	{
		// _ = componentCache.Remove(instanceId);
		LRUCache_2_t6656C29E520601FCFD868890F3714C40A13FAB66 * L_30 = ___componentCache3;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		bool L_32;
		L_32 = LRUCache_2_Remove_m3F9A01DE0A32D5DEBF3210F9AC7DE4EFAA1126E1(L_30, L_31, /*hidden argument*/LRUCache_2_Remove_m3F9A01DE0A32D5DEBF3210F9AC7DE4EFAA1126E1_RuntimeMethod_var);
	}

IL_0072:
	{
		// return false;
		return (bool)0;
	}

IL_0074:
	{
		// MeshCollider meshCollider = collider as MeshCollider;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_33 = ___collider0;
		V_2 = ((MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *)IsInstClass((RuntimeObject*)L_33, MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_il2cpp_TypeInfo_var));
		// if (meshCollider != null && meshCollider.convex == false)
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_34, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_008e;
		}
	}
	{
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_36 = V_2;
		NullCheck(L_36);
		bool L_37;
		L_37 = MeshCollider_get_convex_m115EB1C243F7EFD1EBAB80350E98EB3DE1A4C44C(L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_008e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_008e:
	{
		// if (ignoreCollidersNotInFOV && !CameraCache.Main.IsInFOVCached(collider))
		bool L_38 = ___ignoreCollidersNotInFOV1;
		if (!L_38)
		{
			goto IL_00a0;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_39;
		L_39 = CameraCache_get_Main_m9F427B96E92787BB2CF98E10430A9E56CE360AF6(/*hidden argument*/NULL);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_40 = ___collider0;
		IL2CPP_RUNTIME_CLASS_INIT(CameraFOVChecker_t2EC59F1E93ECA5176C3E51BF016612652105AA7E_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = CameraFOVChecker_IsInFOVCached_m312ABE9E28C283F5ACE010AAE90F52BD1C57A7BB(L_39, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00a0;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00a0:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::IsColliderPositionValid(UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpherePointerQueryInfo_IsColliderPositionValid_m7A1FA2BCFADE08D2201A08091EAA3E6C01AE7C3F (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collider0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerPosition1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointerAxis2, float ___queryAngle3, float ___queryDistance4, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___closestPointToCollider5, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// closestPointToCollider = collider.ClosestPoint(pointerPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___closestPointToCollider5;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_1 = ___collider0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___pointerPosition1;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Collider_ClosestPoint_m7777917E298B31796DEE906B54F0102F6ED76676(L_1, L_2, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0 = L_3;
		// Vector3 relativeColliderPosition = closestPointToCollider - pointerPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = ___closestPointToCollider5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___pointerPosition1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// float queryAngleRadians = queryAngle * Mathf.Deg2Rad;
		float L_8 = ___queryAngle3;
		V_1 = ((float)il2cpp_codegen_multiply((float)L_8, (float)(0.0174532924f)));
		// bool inAngle = Vector3.Dot(pointerAxis, relativeColliderPosition.normalized) >= Mathf.Cos(queryAngleRadians) || queryAngle >= 180.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___pointerAxis2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_11;
		L_11 = Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline(L_9, L_10, /*hidden argument*/NULL);
		float L_12 = V_1;
		float L_13;
		L_13 = cosf(L_12);
		if ((((float)L_11) >= ((float)L_13)))
		{
			goto IL_0048;
		}
	}
	{
		float L_14 = ___queryAngle3;
		G_B3_0 = ((((int32_t)((!(((float)L_14) >= ((float)(180.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0048:
	{
		G_B3_0 = 1;
	}

IL_0049:
	{
		V_2 = (bool)G_B3_0;
		// bool pastMinDistance = relativeColliderPosition.sqrMagnitude >= queryMinDistance * queryMinDistance;
		float L_15;
		L_15 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_16 = __this->get_queryMinDistance_3();
		float L_17 = __this->get_queryMinDistance_3();
		// if (!pastMinDistance || !inAngle)
		if (!((((int32_t)((!(((float)L_15) >= ((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)))))? 1 : 0)) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0068;
		}
	}
	{
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_006a;
		}
	}

IL_0068:
	{
		// return false;
		return (bool)0;
	}

IL_006a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::get_ContainsGrabbable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpherePointerQueryInfo_get_ContainsGrabbable_m05A13F1DE8544FABD456F572E5F775BCBE62F0D9 (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool ContainsGrabbable => grabbable != null;
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_0 = __this->get_grabbable_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::get_NearObjectDetected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpherePointerQueryInfo_get_NearObjectDetected_mFDEE9F4CCD6807D624B30F52171656C50D4D8854 (SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32 * __this, const RuntimeMethod* method)
{
	{
		// public bool NearObjectDetected => ContainsGrabbable && !grabbable.IsBoundsHandles;
		bool L_0;
		L_0 = SpherePointerQueryInfo_get_ContainsGrabbable_m05A13F1DE8544FABD456F572E5F775BCBE62F0D9(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		NearInteractionGrabbable_tA637B756676B49E5BCE8A3B4C8A0AF1FD94A41A2 * L_1 = __this->get_grabbable_7();
		NullCheck(L_1);
		bool L_2 = L_1->get_IsBoundsHandles_5();
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.SpherePointer/SpherePointerQueryInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpherePointerQueryInfo__cctor_m15A07130061EAE5F50F9AEC0A6D3B4B9CB5EA6CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EFACD025244B21DBC8285768071957B3472FA28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker TryUpdateQueryBufferForLayerMaskPerfMarker = new ProfilerMarker("[MRTK] SpherePointerQueryInfo.TryUpdateQueryBufferForLayerMask");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral6EFACD025244B21DBC8285768071957B3472FA28, /*hidden argument*/NULL);
		((SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_StaticFields*)il2cpp_codegen_static_fields_for(SpherePointerQueryInfo_t52C147C6DBDFD3F532BE47AE3C94B22C8EA5DC32_il2cpp_TypeInfo_var))->set_TryUpdateQueryBufferForLayerMaskPerfMarker_9(L_0);
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum
IL2CPP_EXTERN_C void SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshal_pinvoke(const SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1& unmarshaled, SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___CursorSprite_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CursorSprite' of type 'SpriteCursorDatum': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CursorSprite_2Exception, NULL);
}
IL2CPP_EXTERN_C void SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshal_pinvoke_back(const SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshaled_pinvoke& marshaled, SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1& unmarshaled)
{
	Exception_t* ___CursorSprite_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CursorSprite' of type 'SpriteCursorDatum': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CursorSprite_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum
IL2CPP_EXTERN_C void SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshal_pinvoke_cleanup(SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum
IL2CPP_EXTERN_C void SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshal_com(const SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1& unmarshaled, SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshaled_com& marshaled)
{
	Exception_t* ___CursorSprite_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CursorSprite' of type 'SpriteCursorDatum': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CursorSprite_2Exception, NULL);
}
IL2CPP_EXTERN_C void SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshal_com_back(const SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshaled_com& marshaled, SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1& unmarshaled)
{
	Exception_t* ___CursorSprite_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'CursorSprite' of type 'SpriteCursorDatum': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___CursorSprite_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.Input.SpriteCursor/SpriteCursorDatum
IL2CPP_EXTERN_C void SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshal_com_cleanup(SpriteCursorDatum_t11C35CE03FC8F8849E94BD1CB5E73310DD6E31C1_marshaled_com& marshaled)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakePlanesU3Ed__49_MoveNext_m0D8B858803238017DD93A7F591ED288A57C33D71 (U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9_m89C0E6BEF71A8A4B349DBDB90762D848519A19FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B * V_1 = NULL;
	SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0044;
			}
		}

IL_0011:
		{
			// await new WaitForUpdate();
			WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF * L_3 = (WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF *)il2cpp_codegen_object_new(WaitForUpdate_t1141AB30A1E971C8D8062BE937FB9F219A51A4DF_il2cpp_TypeInfo_var);
			WaitForUpdate__ctor_m4EFD567EB295244D9D976A8E11AEF949471010FE(L_3, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_4;
			L_4 = AwaiterExtensions_GetAwaiter_mA4344A65213B531D5C85190C7FACC2E9C0E52B8A(L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_5 = V_2;
			NullCheck(L_5);
			bool L_6;
			L_6 = SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline(L_5, /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0060;
			}
		}

IL_0024:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9_m89C0E6BEF71A8A4B349DBDB90762D848519A19FD((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_9, (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **)(&V_2), (U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9_m89C0E6BEF71A8A4B349DBDB90762D848519A19FD_RuntimeMethod_var);
			goto IL_0099;
		}

IL_0044:
		{
			RuntimeObject * L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A *)CastclassClass((RuntimeObject*)L_10, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0060:
		{
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_12 = V_2;
			NullCheck(L_12);
			SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429(L_12, /*hidden argument*/NULL);
			// makingPlanes = false;
			SurfaceMeshesToPlanes_t22F4ED386CF8E5F8C1F3D279918D59861554104B * L_13 = V_1;
			NullCheck(L_13);
			L_13->set_makingPlanes_15((bool)0);
			goto IL_0086;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006f;
		}
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_14, L_15, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0099;
	} // end catch (depth: 1)

IL_0086:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, /*hidden argument*/NULL);
	}

IL_0099:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CMakePlanesU3Ed__49_MoveNext_m0D8B858803238017DD93A7F591ED288A57C33D71_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 * _thisAdjusted = reinterpret_cast<U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 *>(__this + _offset);
	U3CMakePlanesU3Ed__49_MoveNext_m0D8B858803238017DD93A7F591ED288A57C33D71(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness.SurfaceMeshesToPlanes/<MakePlanes>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakePlanesU3Ed__49_SetStateMachine_mDC8B20540C0D551CC23EE40EF25E8A785E7E11FE (U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CMakePlanesU3Ed__49_SetStateMachine_mDC8B20540C0D551CC23EE40EF25E8A785E7E11FE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 * _thisAdjusted = reinterpret_cast<U3CMakePlanesU3Ed__49_t37A7C9F67BD1FE9AB0471912C76B52222268A2E9 *>(__this + _offset);
	U3CMakePlanesU3Ed__49_SetStateMachine_mDC8B20540C0D551CC23EE40EF25E8A785E7E11FE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9AD01D72160DF81CFFA58E6AF50D9A394EEB59EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 * L_0 = (U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 *)il2cpp_codegen_object_new(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8035D52FFE09AFB8ECF1B5CE7F70C48A2365094E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8035D52FFE09AFB8ECF1B5CE7F70C48A2365094E (U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<>c::<Start>b__49_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__49_0_mDDD3DE8EDA503FD23665EE9BF0C33C26DCAFF56D (U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => CoreServices.TeleportSystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_get_TeleportSystem_mE509165672B0E7D41CCAC1F1848D6BFC776DBDF5(/*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__49_MoveNext_m75F7083D85909917149142C9A76AFEC95457EF92 (U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7_m65BDC79634A61184BC9C54EBCDA2AB02CBF2AE40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityTeleportHandler_tC73058BA154F0E71DA864FCBF8B9C204572ABD9A_mD6125A744EEB41088AF69FBB4AA46D86735DB366_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__49_0_mDDD3DE8EDA503FD23665EE9BF0C33C26DCAFF56D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityObjectExtensions_IsNull_TisTeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_m200A392B1C54DA5471566567120ADE318823B338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * V_1 = NULL;
	SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B6_0 = NULL;
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * G_B5_0 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0081;
			}
		}

IL_0011:
		{
			// base.Start();
			TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * L_3 = V_1;
			NullCheck(L_3);
			TeleportPointer_U3CU3En__0_m16C04CFC89CB1FD432F477A5C51822D74BF69599(L_3, /*hidden argument*/NULL);
			// if (lateRegisterTeleport)
			TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * L_4 = V_1;
			NullCheck(L_4);
			bool L_5 = L_4->get_lateRegisterTeleport_94();
			if (!L_5)
			{
				goto IL_00da;
			}
		}

IL_0022:
		{
			// if (CoreServices.TeleportSystem == null)
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_6;
			L_6 = CoreServices_get_TeleportSystem_mE509165672B0E7D41CCAC1F1848D6BFC776DBDF5(/*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_00c2;
			}
		}

IL_002c:
		{
			// await new WaitUntil(() => CoreServices.TeleportSystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_7 = ((U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var))->get_U3CU3E9__49_0_1();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_8 = L_7;
			G_B5_0 = L_8;
			if (L_8)
			{
				G_B6_0 = L_8;
				goto IL_004b;
			}
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var);
			U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286 * L_9 = ((U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_10 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__49_0_mDDD3DE8EDA503FD23665EE9BF0C33C26DCAFF56D_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_11 = L_10;
			((U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t04EB99C1926CE3F10FDC54D05CA960B804ECE286_il2cpp_TypeInfo_var))->set_U3CU3E9__49_0_1(L_11);
			G_B6_0 = L_11;
		}

IL_004b:
		{
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_12 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_12, G_B6_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_13;
			L_13 = AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37(L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_14 = V_2;
			NullCheck(L_14);
			bool L_15;
			L_15 = SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline(L_14, /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_009d;
			}
		}

IL_005e:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_17 = V_2;
			__this->set_U3CU3Eu__1_3(L_17);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7_m65BDC79634A61184BC9C54EBCDA2AB02CBF2AE40((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_18, (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **)(&V_2), (U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7_m65BDC79634A61184BC9C54EBCDA2AB02CBF2AE40_RuntimeMethod_var);
			goto IL_0106;
		}

IL_0081:
		{
			RuntimeObject * L_19 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A *)CastclassClass((RuntimeObject*)L_19, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
		}

IL_009d:
		{
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_21 = V_2;
			NullCheck(L_21);
			SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429(L_21, /*hidden argument*/NULL);
			// if (this.IsNull())
			TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * L_22 = V_1;
			bool L_23;
			L_23 = UnityObjectExtensions_IsNull_TisTeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_m200A392B1C54DA5471566567120ADE318823B338(L_22, /*hidden argument*/UnityObjectExtensions_IsNull_TisTeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E_m200A392B1C54DA5471566567120ADE318823B338_RuntimeMethod_var);
			if (!L_23)
			{
				goto IL_00ad;
			}
		}

IL_00ab:
		{
			// return;
			goto IL_00f3;
		}

IL_00ad:
		{
			// if (Controller == null)
			TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * L_24 = V_1;
			NullCheck(L_24);
			RuntimeObject* L_25;
			L_25 = VirtFuncInvoker0< RuntimeObject* >::Invoke(32 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::get_Controller() */, L_24);
			if (L_25)
			{
				goto IL_00c2;
			}
		}

IL_00b5:
		{
			// Destroy(gameObject);
			TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * L_26 = V_1;
			NullCheck(L_26);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
			L_27 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_mBDC17991A372E11E2E485EFC5C72F58972CBEC0F(L_27, /*hidden argument*/NULL);
			// return;
			goto IL_00f3;
		}

IL_00c2:
		{
			// lateRegisterTeleport = false;
			TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * L_28 = V_1;
			NullCheck(L_28);
			L_28->set_lateRegisterTeleport_94((bool)0);
			// CoreServices.TeleportSystem?.RegisterHandler<IMixedRealityTeleportHandler>(this);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_29;
			L_29 = CoreServices_get_TeleportSystem_mE509165672B0E7D41CCAC1F1848D6BFC776DBDF5(/*hidden argument*/NULL);
			RuntimeObject* L_30 = L_29;
			G_B14_0 = L_30;
			if (L_30)
			{
				G_B15_0 = L_30;
				goto IL_00d4;
			}
		}

IL_00d1:
		{
			goto IL_00da;
		}

IL_00d4:
		{
			TeleportPointer_t3A07748036E3AFCEA3A7B953F34235CFA9EAC76E * L_31 = V_1;
			NullCheck(G_B15_0);
			GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityTeleportHandler_tC73058BA154F0E71DA864FCBF8B9C204572ABD9A_mD6125A744EEB41088AF69FBB4AA46D86735DB366_RuntimeMethod_var, G_B15_0, L_31);
		}

IL_00da:
		{
			goto IL_00f3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00dc;
		}
		throw e;
	}

CATCH_00dc:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_33 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0106;
	} // end catch (depth: 1)

IL_00f3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_34, /*hidden argument*/NULL);
	}

IL_0106:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__49_MoveNext_m75F7083D85909917149142C9A76AFEC95457EF92_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 *>(__this + _offset);
	U3CStartU3Ed__49_MoveNext_m75F7083D85909917149142C9A76AFEC95457EF92(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Teleport.TeleportPointer/<Start>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__49_SetStateMachine_m4D24F45233241AEA75C2376672B58BE69906233D (U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__49_SetStateMachine_m4D24F45233241AEA75C2376672B58BE69906233D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__49_t06D2177E960CA8C5E50BC8E3515EBD1E45A703B7 *>(__this + _offset);
	U3CStartU3Ed__49_SetStateMachine_m4D24F45233241AEA75C2376672B58BE69906233D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mCFABF759E535F255364E531647F9E23D4A338573 (U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0::<PlaySpeech>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * U3CU3Ec__DisplayClass19_0_U3CPlaySpeechU3Eb__0_m0B6E801DC76352C9816868BB173C05E4AFA8AC0C (U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mB2B0BC2025F36EE769C5973165EB5DABB8336440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m156BFD7083AC20B1EFCD990D6DA52E51928EC521(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mB2B0BC2025F36EE769C5973165EB5DABB8336440((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_mB2B0BC2025F36EE769C5973165EB5DABB8336440_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0::<PlaySpeech>b__1(Windows.Media.SpeechSynthesis.VoiceInformation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CPlaySpeechU3Eb__1_m203126723E17215E4437EC005D039D940E445A1D (U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * __this, VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * ___v0, const RuntimeMethod* method)
{
	{
		// voiceInfo = SpeechSynthesizer.AllVoices.Where(v => v.DisplayName.Contains(VoiceName)).FirstOrDefault();
		VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * L_0 = ___v0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VoiceInformation_get_DisplayName_mF8A88ED9E5034192CA6099E4F8E0D21C9905FC7F(L_0, /*hidden argument*/NULL);
		TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TextToSpeech_get_VoiceName_m3E15465A516226E7163DE1C696EBD9116A49C0C4(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1__ctor_m1C8359CE606FB4D529EE5D8D4727C961B4223FE4 (U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_1::<PlaySpeech>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1_U3CPlaySpeechU3Eb__2_m486C0DFC8B798C5B64F540D3AA4E3AF86C14610B (U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0ED8A7E7416F854147E3242F183A4192C14BFF4);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_0 = NULL;
	{
		// var clip = ToClip("Speech", unityData, sampleCount, frequency);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_unityData_0();
		int32_t L_1 = __this->get_sampleCount_1();
		int32_t L_2 = __this->get_frequency_2();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3;
		L_3 = TextToSpeech_ToClip_mFE3227C23CD46654D51FDB46D630B6336EFF1FA4(_stringLiteralB0ED8A7E7416F854147E3242F183A4192C14BFF4, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// audioSource.clip = clip;
		U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_4 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_4);
		TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_5 = L_4->get_U3CU3E4__this_0();
		NullCheck(L_5);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5->get_audioSource_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = V_0;
		NullCheck(L_6);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_6, L_7, /*hidden argument*/NULL);
		// audioSource.Play();
		U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_8 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_8);
		TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_9 = L_8->get_U3CU3E4__this_0();
		NullCheck(L_9);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = L_9->get_audioSource_4();
		NullCheck(L_10);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_10, /*hidden argument*/NULL);
		// speechTextInQueue = false;
		U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_11 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_11);
		TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_12 = L_11->get_U3CU3E4__this_0();
		NullCheck(L_12);
		L_12->set_speechTextInQueue_9((bool)0);
		// }, false);
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
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m17D7C10A38E23B1259780C30F26D89AFD4D18334 (U3CU3Ec__DisplayClass21_0_t2B1DDB4531151E0D514C55254E70F293C986CC0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream> Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass21_0::<SpeakSsml>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass21_0_U3CSpeakSsmlU3Eb__0_m60EC071960C589F4BB65CAB97D1A8FBB3FCB1B65 (U3CU3Ec__DisplayClass21_0_t2B1DDB4531151E0D514C55254E70F293C986CC0C * __this, const RuntimeMethod* method)
{
	{
		// PlaySpeech(ssml, () => synthesizer.SynthesizeSsmlToStreamAsync(ssml));
		TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * L_1 = L_0->get_synthesizer_7();
		String_t* L_2 = __this->get_ssml_1();
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = SpeechSynthesizer_SynthesizeSsmlToStreamAsync_mB7BB27243DF5487616E199DE08363BB561096D7E(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m799F3D756C311DF6741B7FBF3546918455FD0E41 (U3CU3Ec__DisplayClass22_0_tD42884BE3B0BB3F0146C3A5023D67A3987048890 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream> Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass22_0::<StartSpeaking>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass22_0_U3CStartSpeakingU3Eb__0_mD23C4A9CBABCB91D55579688780C0649A06E3159 (U3CU3Ec__DisplayClass22_0_tD42884BE3B0BB3F0146C3A5023D67A3987048890 * __this, const RuntimeMethod* method)
{
	{
		// PlaySpeech(text, ()=> synthesizer.SynthesizeTextToStreamAsync(text));
		TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * L_1 = L_0->get_synthesizer_7();
		String_t* L_2 = __this->get_text_1();
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = SpeechSynthesizer_SynthesizeTextToStreamAsync_m921984BD1440582009BE39983706A8C552B4D374(L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mF9388AB5C35105AB3BA9E67A4C699D1AF863E3DF (U3CU3Ec__DisplayClass1_0_t52F6DA124185D5D1D595779043A7017569D7DE5D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass1_0::<get_ThemeType>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3Cget_ThemeTypeU3Eb__0_mBBB472586EAE2A01BE64C0DC500A53FD726B0F98 (U3CU3Ec__DisplayClass1_0_t52F6DA124185D5D1D595779043A7017569D7DE5D * __this, Type_t * ___s0, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		// var correctType = TypeCacheUtility.GetSubClasses<ReceiverBase>().Where(s => s?.Name == className);
		Type_t * L_0 = ___s0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		Type_t * L_1 = ___s0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		String_t* L_3 = __this->get_className_0();
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(G_B3_0, L_3, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mD30B8981CBC443328BF016587125EA568F94C9A1 (U3CU3Ec__DisplayClass20_0_tA55E91D2049AD4CBA138BDB8905CAD473BBC89E8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.UI.ThemeDefinition/<>c__DisplayClass20_0::<UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize>b__0(Microsoft.MixedReality.Toolkit.UI.ThemeProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass20_0_U3CUnityEngine_ISerializationCallbackReceiver_OnBeforeSerializeU3Eb__0_m0EBA610F3E7C3B0F384AB253AD8C8D1C008F50BD (U3CU3Ec__DisplayClass20_0_tA55E91D2049AD4CBA138BDB8905CAD473BBC89E8 * __this, ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D * ___p0, const RuntimeMethod* method)
{
	{
		// if (!CustomProperties.Exists(p => p.Name == prop.Name))
		ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_Name_0();
		ThemeProperty_tD45801CF8F897803C1D80560C400801B3424256D * L_2 = __this->get_prop_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_Name_0();
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, L_3, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CPlaySpeechU3Eb__0U3Ed_MoveNext_mAE0BECB679DB5E2E46B9BA86FE87B8D0B71C67DA (U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m8FF6D4A029AABF03118A49EE0303AC06F4ECE4F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m3B8B5255A11F691EC34ECBFF1962A9D1301CC987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_mD8BF5F734E0DD5466272C4EE61EA2A521B510220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_m451553584E65016EE41B8EADD2BE9DF72B0E21EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mC2F04559B3BA5D5A38A6B59AFEC81A5D2464D523_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mD3EC239111E47C8272C51EA2470D11EA52DD1CFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA36AE89D3B83F4407EC9974294AB665C1FE3B9F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3081B9343F6D81D9154AE63CA8C857237C1E22D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CPlaySpeechU3Eb__1_m203126723E17215E4437EC005D039D940E445A1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_1_U3CPlaySpeechU3Eb__2_m486C0DFC8B798C5B64F540D3AA4E3AF86C14610B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisSpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C_m2BE5726A8AD4FD623B04FC9967C307E01B60E6A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m875970DC042A5A87245D94D5A768FD2BE0C605F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66142D57F344E825A529743B12428BA90B8D601);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * V_1 = NULL;
	SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * V_2 = NULL;
	uint64_t V_3 = 0;
	Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * V_4 = NULL;
	TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * G_B8_2 = NULL;
	Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * G_B7_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_014d;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0194;
			}
		}

IL_001b:
		{
			U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * L_4 = (U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass19_1__ctor_m1C8359CE606FB4D529EE5D8D4727C961B4223FE4(L_4, /*hidden argument*/NULL);
			__this->set_U3CU3E8__1_3(L_4);
			U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * L_5 = __this->get_U3CU3E8__1_3();
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_6 = V_1;
			NullCheck(L_5);
			L_5->set_CSU24U3CU3E8__locals1_3(L_6);
			// if (voice != TextToSpeechVoice.Default)
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_7 = V_1;
			NullCheck(L_7);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_8 = L_7->get_U3CU3E4__this_0();
			NullCheck(L_8);
			int32_t L_9 = L_8->get_voice_5();
			if (!L_9)
			{
				goto IL_00f9;
			}
		}

IL_0042:
		{
			// if ((voiceInfo == null) || (!voiceInfo.DisplayName.Contains(VoiceName)))
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_10 = V_1;
			NullCheck(L_10);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_11 = L_10->get_U3CU3E4__this_0();
			NullCheck(L_11);
			VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * L_12 = L_11->get_voiceInfo_8();
			if (!L_12)
			{
				goto IL_0074;
			}
		}

IL_004f:
		{
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_13 = V_1;
			NullCheck(L_13);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_14 = L_13->get_U3CU3E4__this_0();
			NullCheck(L_14);
			VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * L_15 = L_14->get_voiceInfo_8();
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VoiceInformation_get_DisplayName_mF8A88ED9E5034192CA6099E4F8E0D21C9905FC7F(L_15, /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_17 = V_1;
			NullCheck(L_17);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_18 = L_17->get_U3CU3E4__this_0();
			NullCheck(L_18);
			String_t* L_19;
			L_19 = TextToSpeech_get_VoiceName_m3E15465A516226E7163DE1C696EBD9116A49C0C4(L_18, /*hidden argument*/NULL);
			NullCheck(L_16);
			bool L_20;
			L_20 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_16, L_19, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_010e;
			}
		}

IL_0074:
		{
			// voiceInfo = SpeechSynthesizer.AllVoices.Where(v => v.DisplayName.Contains(VoiceName)).FirstOrDefault();
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_21 = V_1;
			NullCheck(L_21);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_22 = L_21->get_U3CU3E4__this_0();
			RuntimeObject* L_23;
			L_23 = SpeechSynthesizer_get_AllVoices_m55EF9EA9E209D59F537ACDFF1B9D92B5DF724E0A(/*hidden argument*/NULL);
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_24 = V_1;
			NullCheck(L_24);
			Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * L_25 = L_24->get_U3CU3E9__1_2();
			Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * L_26 = L_25;
			G_B7_0 = L_26;
			G_B7_1 = L_23;
			G_B7_2 = L_22;
			if (L_26)
			{
				G_B8_0 = L_26;
				G_B8_1 = L_23;
				G_B8_2 = L_22;
				goto IL_00a0;
			}
		}

IL_0088:
		{
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_27 = V_1;
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_28 = V_1;
			Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * L_29 = (Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 *)il2cpp_codegen_object_new(Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86_il2cpp_TypeInfo_var);
			Func_2__ctor_mD3EC239111E47C8272C51EA2470D11EA52DD1CFA(L_29, L_28, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_0_U3CPlaySpeechU3Eb__1_m203126723E17215E4437EC005D039D940E445A1D_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD3EC239111E47C8272C51EA2470D11EA52DD1CFA_RuntimeMethod_var);
			Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * L_30 = L_29;
			V_4 = L_30;
			NullCheck(L_27);
			L_27->set_U3CU3E9__1_2(L_30);
			Func_2_t94D24DEAAB9E90481B81A93DA47A65FDADAC7D86 * L_31 = V_4;
			G_B8_0 = L_31;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
		}

IL_00a0:
		{
			RuntimeObject* L_32;
			L_32 = Enumerable_Where_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_m451553584E65016EE41B8EADD2BE9DF72B0E21EC(G_B8_1, G_B8_0, /*hidden argument*/Enumerable_Where_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_m451553584E65016EE41B8EADD2BE9DF72B0E21EC_RuntimeMethod_var);
			VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * L_33;
			L_33 = Enumerable_FirstOrDefault_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_mD8BF5F734E0DD5466272C4EE61EA2A521B510220(L_32, /*hidden argument*/Enumerable_FirstOrDefault_TisVoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D_mD8BF5F734E0DD5466272C4EE61EA2A521B510220_RuntimeMethod_var);
			NullCheck(G_B8_2);
			G_B8_2->set_voiceInfo_8(L_33);
			// if (voiceInfo != null)
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_34 = V_1;
			NullCheck(L_34);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_35 = L_34->get_U3CU3E4__this_0();
			NullCheck(L_35);
			VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * L_36 = L_35->get_voiceInfo_8();
			if (!L_36)
			{
				goto IL_00d9;
			}
		}

IL_00bc:
		{
			// synthesizer.Voice = voiceInfo;
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_37 = V_1;
			NullCheck(L_37);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_38 = L_37->get_U3CU3E4__this_0();
			NullCheck(L_38);
			SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * L_39 = L_38->get_synthesizer_7();
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_40 = V_1;
			NullCheck(L_40);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_41 = L_40->get_U3CU3E4__this_0();
			NullCheck(L_41);
			VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * L_42 = L_41->get_voiceInfo_8();
			NullCheck(L_39);
			SpeechSynthesizer_put_Voice_mB2652ABACA6B512821D79AF788AFE336B8CD62F7(L_39, L_42, /*hidden argument*/NULL);
			// }
			goto IL_010e;
		}

IL_00d9:
		{
			// Debug.LogErrorFormat("TTS voice {0} could not be found.", VoiceName);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_44 = L_43;
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_45 = V_1;
			NullCheck(L_45);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_46 = L_45->get_U3CU3E4__this_0();
			NullCheck(L_46);
			String_t* L_47;
			L_47 = TextToSpeech_get_VoiceName_m3E15465A516226E7163DE1C696EBD9116A49C0C4(L_46, /*hidden argument*/NULL);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_47);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_47);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogErrorFormat_m92BE92B1C1EDD4B66E5D3CF9ED6480D7D3FFA0E9(_stringLiteralF66142D57F344E825A529743B12428BA90B8D601, L_44, /*hidden argument*/NULL);
			// }
			goto IL_010e;
		}

IL_00f9:
		{
			// synthesizer.Voice = SpeechSynthesizer.DefaultVoice;
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_48 = V_1;
			NullCheck(L_48);
			TextToSpeech_t502E5C94BD270DDC49DF8111B72895CBBF758B41 * L_49 = L_48->get_U3CU3E4__this_0();
			NullCheck(L_49);
			SpeechSynthesizer_tD3FAAE50F4569E9B6E1D0141C3EFEB83EF90081B * L_50 = L_49->get_synthesizer_7();
			VoiceInformation_tC62902AA10C37822040544FB2D38B50C0267E18D * L_51;
			L_51 = SpeechSynthesizer_get_DefaultVoice_m8A4B013A14329DA0A9B19BE505B92B7E6E066517(/*hidden argument*/NULL);
			NullCheck(L_50);
			SpeechSynthesizer_put_Voice_mB2652ABACA6B512821D79AF788AFE336B8CD62F7(L_50, L_51, /*hidden argument*/NULL);
		}

IL_010e:
		{
			// var speechStream = await speakFunc();
			U3CU3Ec__DisplayClass19_0_tC057F8247A4BFD3A8AAEE1DDCB9C802E14D7F6CC * L_52 = V_1;
			NullCheck(L_52);
			Func_1_t323875A0FAB3476FB201F2D8D0E694FC6958A28C * L_53 = L_52->get_speakFunc_1();
			NullCheck(L_53);
			RuntimeObject* L_54;
			L_54 = Func_1_Invoke_mC2F04559B3BA5D5A38A6B59AFEC81A5D2464D523(L_53, /*hidden argument*/Func_1_Invoke_mC2F04559B3BA5D5A38A6B59AFEC81A5D2464D523_RuntimeMethod_var);
			TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  L_55;
			L_55 = WindowsRuntimeSystemExtensions_GetAwaiter_TisSpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C_m2BE5726A8AD4FD623B04FC9967C307E01B60E6A6(L_54, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisSpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C_m2BE5726A8AD4FD623B04FC9967C307E01B60E6A6_RuntimeMethod_var);
			V_5 = L_55;
			bool L_56;
			L_56 = TaskAwaiter_1_get_IsCompleted_m3081B9343F6D81D9154AE63CA8C857237C1E22D9((TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3081B9343F6D81D9154AE63CA8C857237C1E22D9_RuntimeMethod_var);
			if (L_56)
			{
				goto IL_016a;
			}
		}

IL_0129:
		{
			int32_t L_57 = 0;
			V_0 = L_57;
			__this->set_U3CU3E1__state_0(L_57);
			TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  L_58 = V_5;
			__this->set_U3CU3Eu__1_5(L_58);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_59 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m3B8B5255A11F691EC34ECBFF1962A9D1301CC987((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_59, (TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 *)(&V_5), (U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m3B8B5255A11F691EC34ECBFF1962A9D1301CC987_RuntimeMethod_var);
			goto IL_0313;
		}

IL_014d:
		{
			TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2  L_60 = __this->get_U3CU3Eu__1_5();
			V_5 = L_60;
			TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 * L_61 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_61, sizeof(TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 ));
			int32_t L_62 = (-1);
			V_0 = L_62;
			__this->set_U3CU3E1__state_0(L_62);
		}

IL_016a:
		{
			SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * L_63;
			L_63 = TaskAwaiter_1_GetResult_mA36AE89D3B83F4407EC9974294AB665C1FE3B9F2((TaskAwaiter_1_tDB173E8F7CC694D4C34E5A8C5137B36A9C3BFBD2 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_mA36AE89D3B83F4407EC9974294AB665C1FE3B9F2_RuntimeMethod_var);
			V_2 = L_63;
			// var size = speechStream.Size;
			SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * L_64 = V_2;
			NullCheck(L_64);
			uint64_t L_65;
			L_65 = SpeechSynthesisStream_get_Size_m5006CFF57B47983335874FC5214353B29E541A0E(L_64, /*hidden argument*/NULL);
			V_3 = L_65;
			// byte[] buffer = new byte[(int)size];
			uint64_t L_66 = V_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_67 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_66)));
			__this->set_U3CbufferU3E5__2_4(L_67);
			// using (var inputStream = speechStream.GetInputStreamAt(0))
			SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * L_68 = V_2;
			NullCheck(L_68);
			RuntimeObject* L_69;
			L_69 = SpeechSynthesisStream_GetInputStreamAt_m9F594FE64385B34FC707C4CB6F76CC0A556C40BA(L_68, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
			__this->set_U3CinputStreamU3E5__3_6(L_69);
		}

IL_0194:
		{
		}

IL_0195:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_70 = V_0;
				if ((((int32_t)L_70) == ((int32_t)1)))
				{
					goto IL_01b0;
				}
			}

IL_0199:
			{
				// speechStream.Dispose();
				SpeechSynthesisStream_t68F103196F753585F2787363DEBC6A164F7B8D0C * L_71 = V_2;
				NullCheck(L_71);
				SpeechSynthesisStream_Dispose_m98042FC4C927605ABE81564A58E5B983D3952D5F(L_71, /*hidden argument*/NULL);
				// using (var dataReader = new DataReader(inputStream))
				RuntimeObject* L_72 = __this->get_U3CinputStreamU3E5__3_6();
				DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * L_73 = (DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E *)il2cpp_codegen_object_new(DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E_il2cpp_TypeInfo_var);
				DataReader__ctor_mF2123BC23FC33A58A140ACB4C04B5007B4974360(L_73, L_72, /*hidden argument*/NULL);
				__this->set_U3CdataReaderU3E5__4_7(L_73);
			}

IL_01b0:
			{
			}

IL_01b1:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_74 = V_0;
					if ((((int32_t)L_74) == ((int32_t)1)))
					{
						goto IL_01f6;
					}
				}

IL_01b5:
				{
					// await dataReader.LoadAsync((uint)size);
					DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * L_75 = __this->get_U3CdataReaderU3E5__4_7();
					uint64_t L_76 = V_3;
					NullCheck(L_75);
					DataReaderLoadOperation_t7BFE6680B141154886E08AB23401A9D3298FBCCD * L_77;
					L_77 = DataReader_LoadAsync_m86C38A1B7E7A4E32A1C458692C96B63187114005(L_75, ((int32_t)((uint32_t)L_76)), /*hidden argument*/NULL);
					TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_78;
					L_78 = WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m875970DC042A5A87245D94D5A768FD2BE0C605F3(L_77, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m875970DC042A5A87245D94D5A768FD2BE0C605F3_RuntimeMethod_var);
					V_6 = L_78;
					bool L_79;
					L_79 = TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mA797F62620E70FBAD3BB7DB064718033CA9F62BD_RuntimeMethod_var);
					if (L_79)
					{
						goto IL_0213;
					}
				}

IL_01d2:
				{
					int32_t L_80 = 1;
					V_0 = L_80;
					__this->set_U3CU3E1__state_0(L_80);
					TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_81 = V_6;
					__this->set_U3CU3Eu__2_8(L_81);
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_82 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m8FF6D4A029AABF03118A49EE0303AC06F4ECE4F6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_82, (TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_6), (U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865_TisU3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88_m8FF6D4A029AABF03118A49EE0303AC06F4ECE4F6_RuntimeMethod_var);
					IL2CPP_LEAVE(0x313, FINALLY_022e);
				}

IL_01f6:
				{
					TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865  L_83 = __this->get_U3CU3Eu__2_8();
					V_6 = L_83;
					TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 * L_84 = __this->get_address_of_U3CU3Eu__2_8();
					il2cpp_codegen_initobj(L_84, sizeof(TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 ));
					int32_t L_85 = (-1);
					V_0 = L_85;
					__this->set_U3CU3E1__state_0(L_85);
				}

IL_0213:
				{
					uint32_t L_86;
					L_86 = TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C((TaskAwaiter_1_t4345BA3E35463B8EA49EA7DAB94D36713CAEE865 *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m07F8E70F041A3A9CCE7D32BB65D4B0CAB1152B6C_RuntimeMethod_var);
					// dataReader.ReadBytes(buffer);
					DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * L_87 = __this->get_U3CdataReaderU3E5__4_7();
					ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_88 = __this->get_U3CbufferU3E5__2_4();
					NullCheck(L_87);
					DataReader_ReadBytes_m168DE8F805771DDEF9FA1DA403581ADC41AB1630(L_87, L_88, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x246, FINALLY_022e);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_022e;
			}

FINALLY_022e:
			{ // begin finally (depth: 3)
				{
					int32_t L_89 = V_0;
					if ((((int32_t)L_89) >= ((int32_t)0)))
					{
						goto IL_0245;
					}
				}

IL_0232:
				{
					DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * L_90 = __this->get_U3CdataReaderU3E5__4_7();
					if (!L_90)
					{
						goto IL_0245;
					}
				}

IL_023a:
				{
					DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E * L_91 = __this->get_U3CdataReaderU3E5__4_7();
					NullCheck(L_91);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_91);
				}

IL_0245:
				{
					IL2CPP_END_FINALLY(558)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(558)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_END_CLEANUP(0x313, FINALLY_024f);
				IL2CPP_JUMP_TBL(0x246, IL_0246)
			}

IL_0246:
			{
				__this->set_U3CdataReaderU3E5__4_7((DataReader_t4A094541B2D5B4A553FF361D79C8DCDD181D142E *)NULL);
				// }
				IL2CPP_LEAVE(0x267, FINALLY_024f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_024f;
		}

FINALLY_024f:
		{ // begin finally (depth: 2)
			{
				int32_t L_92 = V_0;
				if ((((int32_t)L_92) >= ((int32_t)0)))
				{
					goto IL_0266;
				}
			}

IL_0253:
			{
				RuntimeObject* L_93 = __this->get_U3CinputStreamU3E5__3_6();
				if (!L_93)
				{
					goto IL_0266;
				}
			}

IL_025b:
			{
				RuntimeObject* L_94 = __this->get_U3CinputStreamU3E5__3_6();
				NullCheck(L_94);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_94);
			}

IL_0266:
			{
				IL2CPP_END_FINALLY(591)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(591)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x313, IL_0313)
			IL2CPP_JUMP_TBL(0x267, IL_0267)
		}

IL_0267:
		{
			__this->set_U3CinputStreamU3E5__3_6((RuntimeObject*)NULL);
			// int sampleCount = 0;
			U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * L_95 = __this->get_U3CU3E8__1_3();
			NullCheck(L_95);
			L_95->set_sampleCount_1(0);
			// int frequency = 0;
			U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * L_96 = __this->get_U3CU3E8__1_3();
			NullCheck(L_96);
			L_96->set_frequency_2(0);
			// var unityData = ToUnityAudio(buffer, out sampleCount, out frequency);
			U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * L_97 = __this->get_U3CU3E8__1_3();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_98 = __this->get_U3CbufferU3E5__2_4();
			U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * L_99 = __this->get_U3CU3E8__1_3();
			NullCheck(L_99);
			int32_t* L_100 = L_99->get_address_of_sampleCount_1();
			U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * L_101 = __this->get_U3CU3E8__1_3();
			NullCheck(L_101);
			int32_t* L_102 = L_101->get_address_of_frequency_2();
			SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_103;
			L_103 = TextToSpeech_ToUnityAudio_m024BADF1D93F4E9503FBDB5C6D422F5743389129(L_98, (int32_t*)L_100, (int32_t*)L_102, /*hidden argument*/NULL);
			NullCheck(L_97);
			L_97->set_unityData_0(L_103);
			// UnityEngine.WSA.Application.InvokeOnAppThread(() =>
			// {
			//     // Convert to an audio clip
			//     var clip = ToClip("Speech", unityData, sampleCount, frequency);
			// 
			//     // Set the source on the audio clip
			//     audioSource.clip = clip;
			// 
			//     // Play audio
			//     audioSource.Play();
			//     speechTextInQueue = false;
			// }, false);
			U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 * L_104 = __this->get_U3CU3E8__1_3();
			AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C * L_105 = (AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C *)il2cpp_codegen_object_new(AppCallbackItem_t64C87B105C09D7D56E812214436AF86CEEBFE29C_il2cpp_TypeInfo_var);
			AppCallbackItem__ctor_m87EC22B203716A10F85F21E155D3CE3745F49FF4(L_105, L_104, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_1_U3CPlaySpeechU3Eb__2_m486C0DFC8B798C5B64F540D3AA4E3AF86C14610B_RuntimeMethod_var), /*hidden argument*/NULL);
			Application_InvokeOnAppThread_m286125CAD73BA8C5E00DFCB95E4F60700383C5AD(L_105, (bool)0, /*hidden argument*/NULL);
			goto IL_02f2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02cb;
		}
		throw e;
	}

CATCH_02cb:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_3((U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 *)NULL);
		__this->set_U3CbufferU3E5__2_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_106 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_107 = V_7;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_106, L_107, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0313;
	} // end catch (depth: 1)

IL_02f2:
	{
		// });
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CU3E8__1_3((U3CU3Ec__DisplayClass19_1_t8631BFAD629BD7F6EC559D2F57D4EC9B21ED0752 *)NULL);
		__this->set_U3CbufferU3E5__2_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_108 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_108, /*hidden argument*/NULL);
	}

IL_0313:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CPlaySpeechU3Eb__0U3Ed_MoveNext_mAE0BECB679DB5E2E46B9BA86FE87B8D0B71C67DA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * _thisAdjusted = reinterpret_cast<U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 *>(__this + _offset);
	U3CU3CPlaySpeechU3Eb__0U3Ed_MoveNext_mAE0BECB679DB5E2E46B9BA86FE87B8D0B71C67DA(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Audio.TextToSpeech/<>c__DisplayClass19_0/<<PlaySpeech>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CPlaySpeechU3Eb__0U3Ed_SetStateMachine_mE259A3058A3C4802D6EADFCED457B4A7C757E296 (U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CPlaySpeechU3Eb__0U3Ed_SetStateMachine_mE259A3058A3C4802D6EADFCED457B4A7C757E296_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 * _thisAdjusted = reinterpret_cast<U3CU3CPlaySpeechU3Eb__0U3Ed_tEBD2FF9F2B17C96BBF21A9D0B0D09EADCABA9B88 *>(__this + _offset);
	U3CU3CPlaySpeechU3Eb__0U3Ed_SetStateMachine_mE259A3058A3C4802D6EADFCED457B4A7C757E296(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RotateAroundPoint_get_PivotPosition_mEE6D0721D2708D7AC20E208A1B8CD075C5D6E221_inline (RotateAroundPoint_tC287FB2B6F9DF3E65E7C45CB676AE078C9E3E5CC * __this, const RuntimeMethod* method)
{
	{
		// return pivotPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_pivotPosition_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m5E223DB365EAC8F6625C169E927527FFB8CC88DB_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m831CBA1D198C3CDE660E8172A67A4E41BD0D0171(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BaseSpatialAwarenessObject_get_GameObject_mC77417C0A63303EE19B777A44C5C8C8EFC84195F_inline (BaseSpatialAwarenessObject_t95404429A24A2476F67AC9AEBB87675EBC0CB26B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject GameObject { get; set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CGameObjectU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m81A33FB5E8269E1A21554ECCB1639019C708A1CF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___lhs0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rhs1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___lhs0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___rhs1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___lhs0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___rhs1;
		float L_11 = L_10.get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = __this->get_U3CIsCompletedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Nullable_1_GetValueOrDefault_mD05253A5EFE2AA2575CC36BD681FFB5638B9F560_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_value_0();
		return (float)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_1_get_IsCompleted_mC9C09ABF80C8ED2BD852B9D8A4C0B8AF5A9EEAFB_gshared_inline (SimpleCoroutineAwaiter_1_t32A343EB6E67CFC1F002541C3AB452FC3A56790A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsCompleted { get; private set; }
		bool L_0 = (bool)__this->get_U3CIsCompletedU3Ek__BackingField_3();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
