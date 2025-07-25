﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tF1176E7049F5EF66F15D13259DBDFA885A179B99;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tFB70008137617CC7583F8B8BB03CC5741A8FDCC3;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_tE21D58669390AD07C9F09215C76B32DF667B721F;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t6D4AA7D5E98520B142113290B80207BCEF74C53F;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t32B6ECB71AD113C204EAB2D11514F2D409CD3AF9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_tCD83C7B52619A860FD5247BFEA261EDBA126C979;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.GameObject>>
struct Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D;
// System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_tB362F5B220262126425E449514B973C33DAB89C8;
// System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813;
// System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct IDictionary_2_t00C9B5F2CC48E236650AFE4CAADE51D9EB00E353;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver>
struct IReadOnlyList_1_tEFE118276600500A25D51D08D7DBAD180C3D1584;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D;
// System.Collections.Generic.List`1<UnityEngine.Ray>
struct List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_t97B4A2F1A73AEF20A43923F1AF405C59559B183D;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.GameObject>
struct TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56;
// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationSetting[]
struct MixedRealityControllerVisualizationSettingU5BU5D_tBBD8957A196E5401D96CA18CA9BBEC00964936F8;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t615B218FFCA57E21197044E606FAD90CC0B30BE6;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_t96C36DBA3559DA499815B9575DA4028A53995309;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t6DDAC779279FBEF72C8ED23D61B272C188C3391E;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController
struct HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3;
// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t5B9CD5904E1FAB32B2C0A42428E728DCB152A0E3;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273;
// Windows.Perception.People.HeadPose
struct HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.Input.IHandRay
struct IHandRay_tCB166A65BE25902E31F371DE60DE8BCEB7D7320E;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_t298B5F2D20488F54F9C8145E133876F5855565D3;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t2AF17162D234B326EFD3D32357191F1E83197512;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider
struct IMixedRealityEyeSaccadeProvider_tCC8E6E112949E19237F26CBC222893CCC7323CE9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_tAB1EB10B2EA456CB8C74EA4B7D04053D44E2D8E6;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t3BE4DEE2B9A2B52798B355A7D3C80B3359393E9C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_tD01F9D0C1E47A13CA240E9019528B8F55D656B37;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tFAE6F5C891649FAE841C5EF7F45A34B0064A6616;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tDD6DD841EE322261028BE6C6319D0888DF7AE153;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_t160B6E0F0CA1C1C6E42F6DD93C87EF2DBD20A25E;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
struct ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_tA6AC2A2960497D34C90F3A92924BFC329FA94168;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t8D952EE33438BEE5944C136BF192063CA9DBE635;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition
struct SimpleHandDefinition_t96427670B317B134AD65F9A253B39E26D2266227;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB;
// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F;
// Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
struct SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199;
// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tF1B06877A2F26D3044C6C59152FC9FE6BE74334D;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tA82FB0DEEADBCE3C09FAE194C17F0950CFE41F5C;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider
struct WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t688C063FD77A3EEF5E588B5CD9169A2298A6A594;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3;
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB362F5B220262126425E449514B973C33DAB89C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionControllerDefinition_t5B9CD5904E1FAB32B2C0A42428E728DCB152A0E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_tAB1EB10B2EA456CB8C74EA4B7D04053D44E2D8E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSource_t3BE4DEE2B9A2B52798B355A7D3C80B3359393E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityControllerModelHelpers_tF017226A5B6A8A09057814E373C26AA8BE4B156A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleHandDefinition_t96427670B317B134AD65F9A253B39E26D2266227_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_tD326291637E738F5D7C09F6D1F2D3F61CB792636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerDefinition_tA82FB0DEEADBCE3C09FAE194C17F0950CFE41F5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0226F08F1363B72919374BC9F1AABA0AF07295F0;
IL2CPP_EXTERN_C String_t* _stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E;
IL2CPP_EXTERN_C String_t* _stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75;
IL2CPP_EXTERN_C String_t* _stringLiteral4BFFEE199866CCFED288228943213B9868A52461;
IL2CPP_EXTERN_C String_t* _stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478;
IL2CPP_EXTERN_C String_t* _stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9;
IL2CPP_EXTERN_C String_t* _stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6;
IL2CPP_EXTERN_C String_t* _stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B;
IL2CPP_EXTERN_C String_t* _stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE;
IL2CPP_EXTERN_C String_t* _stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163;
IL2CPP_EXTERN_C String_t* _stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_mD79C89C6DC93D4F70249293DF81E2D4A901697B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_m28C2F24D301DB62BEABDD86A1A1307BC743BF405_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mA30A9D7AFC9D486B98B669F9B0B5553C3F31C83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_mE6F0801CCB94CC179ED8B8CDC9BE90DA350B2C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m8C0AD3EDBD12585FB15C1C31A7A5D508F4861D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_mA7F5398C85F721C481833F7483E010A329202EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mCBE6F9CB6636AD8B23E2FE3ACAAEF1DB047FF0BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_m94EDEC2DE06D09289BD856EAEB4DD3CADE12D5C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m231EA47CC1CE11ABE3BD58C217349CD8B4DFE4E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2__ctor_m549CC0DF215A77A2D52B024C4EDD31BC3C13393F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mA91EB04CA7E6F2D2FCB4B857413A9CA7D4C68651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityDeviceManager_SpatialInteractionManager_SourcePressed_m0EAEFC4CEFE6DBE9A6DF4E59A1EA98111F995EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mD842D13D83B7AAF17EFAC71FA2D672CFFA73F0A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m0D2058B65700347D467D2BED479E6A8EFE6A0C14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mD583389B2306EC4B206347ECBCCC7CD2E3A7E837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m7E182418AA269F88565E7E67FB6845E4ED0DD14E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsMixedRealityEyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__23_0_m324074274264994948E3D8CB3D95DE797A6D08B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_m28B193FCE386C3217B44FC36CE092D610616FD7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_mC253CD8EFDD989B8058E121205E0E4E291C9E7DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IHeadPose_t160C8BC4B0FEC9737493F4B89485C47A49459F30;
struct IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3;
struct ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A;
struct ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38;
struct ISpatialInteractionSourceEventArgs_t906CBE18966E164D53240A3C27EAAD459451AE9C;
struct ISpatialInteractionSourceState_t4A049FFC25A0197F3EF96AD7E1DC41AAECEC7F4B;
struct ISpatialInteractionSource_tC311B80858A5F034D4E8B4EEA2A2DCC57E2A4C7A;
struct ISpatialPointerPose_t3977905DE3C4E3EDEF1DAFF3D640067463318239;

struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6;
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F;
struct IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3;
struct MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249;
struct MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCB1DA182FDE789CD2B261A211BE16940ACC63BE0 
{
public:

public:
};

// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct NOVTABLE ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics_GetForCurrentView_m3412258991A14AC020F84B6E14E93B0957E94B5B(ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct NOVTABLE ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialPointerPoseStatics_TryGetAtTimestamp_m8807730474721435338F5275EDA4D05D4A02A927(ISpatialCoordinateSystem_t0B599CF4D7B3B14DA13D87C3A231F9981F3A491A* ___coordinateSystem0, IPerceptionTimestamp_tB7CFF1E415D1247560EE56A6CB790872EF02BBD3* ___timestamp1, ISpatialPointerPose_t3977905DE3C4E3EDEF1DAFF3D640067463318239** comReturnValue) = 0;
};

// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____items_1)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__items_1() const { return ____items_1; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_StaticFields, ____emptyArray_5)); }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* ___localJointPoses_2;

public:
	inline static int32_t get_offset_of_localJointPoses_2() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D, ___localJointPoses_2)); }
	inline MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* get_localJointPoses_2() const { return ___localJointPoses_2; }
	inline MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D** get_address_of_localJointPoses_2() { return &___localJointPoses_2; }
	inline void set_localJointPoses_2(MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* value)
	{
		___localJointPoses_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localJointPoses_2), (void*)value);
	}
};

struct ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::Joints
	TrackedHandJointU5BU5D_t615B218FFCA57E21197044E606FAD90CC0B30BE6* ___Joints_0;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::<JointCount>k__BackingField
	int32_t ___U3CJointCountU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_tCD83C7B52619A860FD5247BFEA261EDBA126C979 * ___handPoses_3;

public:
	inline static int32_t get_offset_of_Joints_0() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_StaticFields, ___Joints_0)); }
	inline TrackedHandJointU5BU5D_t615B218FFCA57E21197044E606FAD90CC0B30BE6* get_Joints_0() const { return ___Joints_0; }
	inline TrackedHandJointU5BU5D_t615B218FFCA57E21197044E606FAD90CC0B30BE6** get_address_of_Joints_0() { return &___Joints_0; }
	inline void set_Joints_0(TrackedHandJointU5BU5D_t615B218FFCA57E21197044E606FAD90CC0B30BE6* value)
	{
		___Joints_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joints_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CJointCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_StaticFields, ___U3CJointCountU3Ek__BackingField_1)); }
	inline int32_t get_U3CJointCountU3Ek__BackingField_1() const { return ___U3CJointCountU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CJointCountU3Ek__BackingField_1() { return &___U3CJointCountU3Ek__BackingField_1; }
	inline void set_U3CJointCountU3Ek__BackingField_1(int32_t value)
	{
		___U3CJointCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_handPoses_3() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_StaticFields, ___handPoses_3)); }
	inline Dictionary_2_tCD83C7B52619A860FD5247BFEA261EDBA126C979 * get_handPoses_3() const { return ___handPoses_3; }
	inline Dictionary_2_tCD83C7B52619A860FD5247BFEA261EDBA126C979 ** get_address_of_handPoses_3() { return &___handPoses_3; }
	inline void set_handPoses_3(Dictionary_2_tCD83C7B52619A860FD5247BFEA261EDBA126C979 * value)
	{
		___handPoses_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPoses_3), (void*)value);
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

// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider
struct WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9  : public RuntimeObject
{
public:
	// Windows.UI.Input.Spatial.SpatialInteractionSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::spatialInteractionSource
	SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * ___spatialInteractionSource_0;

public:
	inline static int32_t get_offset_of_spatialInteractionSource_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9, ___spatialInteractionSource_0)); }
	inline SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * get_spatialInteractionSource_0() const { return ___spatialInteractionSource_0; }
	inline SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F ** get_address_of_spatialInteractionSource_0() { return &___spatialInteractionSource_0; }
	inline void set_spatialInteractionSource_0(SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * value)
	{
		___spatialInteractionSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialInteractionSource_0), (void*)value);
	}
};

struct WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::ControllerModelDictionary
	Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * ___ControllerModelDictionary_1;

public:
	inline static int32_t get_offset_of_ControllerModelDictionary_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9_StaticFields, ___ControllerModelDictionary_1)); }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * get_ControllerModelDictionary_1() const { return ___ControllerModelDictionary_1; }
	inline Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C ** get_address_of_ControllerModelDictionary_1() { return &___ControllerModelDictionary_1; }
	inline void set_ControllerModelDictionary_1(Dictionary_2_tADDBF4C67A82C92CD16099CD166D7F72E8DCB13C * value)
	{
		___ControllerModelDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ControllerModelDictionary_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3  : public RuntimeObject
{
public:

public:
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


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
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


// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>
struct TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B, ___m_task_0)); }
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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

// UnityEngine.XR.Bone
struct Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
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


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.XR.Hand
struct Hand_tB64007EC8D01384426C93432737BA9C5F636A690 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// Windows.Perception.People.HeadPose
struct HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D  : public Il2CppComObject
{
public:

public:
};


// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
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


// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC  : public Il2CppComObject
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs
struct SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC  : public Il2CppComObject
{
public:

public:
};

struct SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
	ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialPointerPose"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* get_____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004()
	{
		ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004* returnValue = ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialPointerPoseStatics_tECBC6A5E958BFB6CFE23ADC177EBBADAF2E3E004;
			}
		}
		return returnValue;
	}
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


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
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

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_t557B0DD32BA70C83524EEB853E05FF084422364D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t557B0DD32BA70C83524EEB853E05FF084422364D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.String[] Microsoft.MixedReality.Toolkit.BaseService::typeName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___typeName_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_9;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_11;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_typeName_5() { return static_cast<int32_t>(offsetof(BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17, ___typeName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_typeName_5() const { return ___typeName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_typeName_5() { return &___typeName_5; }
	inline void set_typeName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___typeName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_5), (void*)value);
	}

	inline static int32_t get_offset_of_isEnabled_9() { return static_cast<int32_t>(offsetof(BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17, ___isEnabled_9)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_9() const { return ___isEnabled_9; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_9() { return &___isEnabled_9; }
	inline void set_isEnabled_9(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_9 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_10() { return static_cast<int32_t>(offsetof(BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17, ___isMarkedDestroyed_10)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_10() const { return ___isMarkedDestroyed_10; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_10() { return &___isMarkedDestroyed_10; }
	inline void set_isMarkedDestroyed_10(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
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


// UnityEngine.XR.CommonUsages
struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE  : public RuntimeObject
{
public:

public:
};

struct CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___PointerRotation_1;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
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

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_t778F503756C180859772A614AFDA113A8896DC69 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t778F503756C180859772A614AFDA113A8896DC69, ___value___2)); }
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

// UnityEngine.XR.HandFinger
struct HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35 
{
public:
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_t0C0578569185231091572E3FC18271614FB46B25 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t0C0578569185231091572E3FC18271614FB46B25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct MixedRealityCapability_t4CAF3BEF56E9015009CEA454A9ECA0DC739C6D62 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_t4CAF3BEF56E9015009CEA454A9ECA0DC739C6D62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
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


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel
struct RecognitionConfidenceLevel_t3BAAD42DF3975ECF47295CC02D8DCEDA4E9C3B2C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t3BAAD42DF3975ECF47295CC02D8DCEDA4E9C3B2C, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_t76E11217BB09B37C089508854550C0B66DD25B4A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t76E11217BB09B37C089508854550C0B66DD25B4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t1808DF6C6EBBC8F83A4D7C235EEB31FDB3BC14E3 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t1808DF6C6EBBC8F83A4D7C235EEB31FDB3BC14E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t812D8C730AA19BAA0BDA6CA4DA60B61AF7E88CF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct SupportedControllerType_tE79604C04F7A75BDFC7012F84169091B06FA8DE4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_tE79604C04F7A75BDFC7012F84169091B06FA8DE4, ___value___2)); }
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


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_t8011BEA623DCF50714BD712817FEBE0CFD6EEE32 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_t8011BEA623DCF50714BD712817FEBE0CFD6EEE32, ___value___2)); }
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


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_tD326291637E738F5D7C09F6D1F2D3F61CB792636 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_tD326291637E738F5D7C09F6D1F2D3F61CB792636, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// Windows.UI.Input.Spatial.SpatialInteractionManager Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialInteractionManager
	SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * ___spatialInteractionManager_1;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_2;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___spatialCoordinateSystem_3;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_spatialInteractionManager_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_StaticFields, ___spatialInteractionManager_1)); }
	inline SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * get_spatialInteractionManager_1() const { return ___spatialInteractionManager_1; }
	inline SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 ** get_address_of_spatialInteractionManager_1() { return &___spatialInteractionManager_1; }
	inline void set_spatialInteractionManager_1(SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * value)
	{
		___spatialInteractionManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialInteractionManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_StaticFields, ___currentSpatialCoordinateSystemPtr_2)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_2() const { return ___currentSpatialCoordinateSystemPtr_2; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_2() { return &___currentSpatialCoordinateSystemPtr_2; }
	inline void set_currentSpatialCoordinateSystemPtr_2(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_2 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_StaticFields, ___spatialCoordinateSystem_3)); }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * get_spatialCoordinateSystem_3() const { return ___spatialCoordinateSystem_3; }
	inline SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB ** get_address_of_spatialCoordinateSystem_3() { return &___spatialCoordinateSystem_3; }
	inline void set_spatialCoordinateSystem_3(SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * value)
	{
		___spatialCoordinateSystem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_3), (void*)value);
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


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_t2E7050D7CA57DB9461C20F21B374CF953CD80539  : public BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t2E7050D7CA57DB9461C20F21B374CF953CD80539, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t2E7050D7CA57DB9461C20F21B374CF953CD80539, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_tF1176E7049F5EF66F15D13259DBDFA885A179B99  : public BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tF1176E7049F5EF66F15D13259DBDFA885A179B99, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tF1176E7049F5EF66F15D13259DBDFA885A179B99, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_t17EAB76403D7EB3D0A774798B559519358CBA059  : public BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t17EAB76403D7EB3D0A774798B559519358CBA059, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t17EAB76403D7EB3D0A774798B559519358CBA059, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_tFB70008137617CC7583F8B8BB03CC5741A8FDCC3  : public BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_12;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tFB70008137617CC7583F8B8BB03CC5741A8FDCC3, ___U3CRegistrarU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_12() const { return ___U3CRegistrarU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_12() { return &___U3CRegistrarU3Ek__BackingField_12; }
	inline void set_U3CRegistrarU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tFB70008137617CC7583F8B8BB03CC5741A8FDCC3, ___U3CServiceU3Ek__BackingField_13)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_13() const { return ___U3CServiceU3Ek__BackingField_13; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_13() { return &___U3CServiceU3Ek__BackingField_13; }
	inline void set_U3CServiceU3Ek__BackingField_13(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_13), (void*)value);
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// System.Nullable`1<UnityEngine.Ray>
struct Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 
{
public:
	// T System.Nullable`1::value
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963, ___value_0)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_value_0() const { return ___value_0; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C, ___m_result_40)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_result_40() const { return ___m_result_40; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CDefinitionU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CDefinitionU3Ek__BackingField_0() const { return ___U3CDefinitionU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CDefinitionU3Ek__BackingField_0() { return &___U3CDefinitionU3Ek__BackingField_0; }
	inline void set_U3CDefinitionU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CDefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CTrackingStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_2() const { return ___U3CTrackingStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_2() { return &___U3CTrackingStateU3Ek__BackingField_2; }
	inline void set_U3CTrackingStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CControllerHandednessU3Ek__BackingField_3)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_3() const { return ___U3CControllerHandednessU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_3() { return &___U3CControllerHandednessU3Ek__BackingField_3; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_3(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CInputSourceU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_4() const { return ___U3CInputSourceU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_4() { return &___U3CInputSourceU3Ek__BackingField_4; }
	inline void set_U3CInputSourceU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CVisualizerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_5() const { return ___U3CVisualizerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_5() { return &___U3CVisualizerU3Ek__BackingField_5; }
	inline void set_U3CVisualizerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CIsPositionAvailableU3Ek__BackingField_6)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_6() const { return ___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return &___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_6(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CIsPositionApproximateU3Ek__BackingField_7)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_7() const { return ___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return &___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_7(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CIsRotationAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_8() const { return ___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return &___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CInteractionsU3Ek__BackingField_9)); }
	inline MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* get_U3CInteractionsU3Ek__BackingField_9() const { return ___U3CInteractionsU3Ek__BackingField_9; }
	inline MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249** get_address_of_U3CInteractionsU3Ek__BackingField_9() { return &___U3CInteractionsU3Ek__BackingField_9; }
	inline void set_U3CInteractionsU3Ek__BackingField_9(MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* value)
	{
		___U3CInteractionsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CAngularVelocityU3Ek__BackingField_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_10() const { return ___U3CAngularVelocityU3Ek__BackingField_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_10() { return &___U3CAngularVelocityU3Ek__BackingField_10; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316, ___U3CVelocityU3Ek__BackingField_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_11() const { return ___U3CVelocityU3Ek__BackingField_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_11() { return &___U3CVelocityU3Ek__BackingField_11; }
	inline void set_U3CVelocityU3Ek__BackingField_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition
struct BaseInputSourceDefinition_tD7D2B761C1708F688EF028A6000FF74A8F01558B  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseInputSourceDefinition_tD7D2B761C1708F688EF028A6000FF74A8F01558B, ___U3CHandednessU3Ek__BackingField_0)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_0() const { return ___U3CHandednessU3Ek__BackingField_0; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_0() { return &___U3CHandednessU3Ek__BackingField_0; }
	inline void set_U3CHandednessU3Ek__BackingField_0(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
struct NOVTABLE ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics2_IsSourceKindSupported_mB329D0CA72CC404B2BCBAE8624A9CF69581DA243(int32_t ___kind0, bool* comReturnValue) = 0;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
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


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handedness
	uint8_t ___handedness_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::inputSource
	RuntimeObject* ___inputSource_3;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshObserver
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * ___handMeshObserver_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshModelId
	int32_t ___handMeshModelId_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::neutralPoseVersion
	int32_t ___neutralPoseVersion_7;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndices
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___handMeshTriangleIndices_8;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::vertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___vertexAndNormals_9;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshVerticesUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshVerticesUnity_10;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshNormalsUnity
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___handMeshNormalsUnity_11;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndicesUnity
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___handMeshTriangleIndicesUnity_12;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshUVsUnity
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___handMeshUVsUnity_13;
	// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshInfo
	HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636 * ___handMeshInfo_15;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::neutralPoseVertices
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___neutralPoseVertices_16;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::neutralVertexAndNormals
	HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* ___neutralVertexAndNormals_17;

public:
	inline static int32_t get_offset_of_handedness_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handedness_2)); }
	inline uint8_t get_handedness_2() const { return ___handedness_2; }
	inline uint8_t* get_address_of_handedness_2() { return &___handedness_2; }
	inline void set_handedness_2(uint8_t value)
	{
		___handedness_2 = value;
	}

	inline static int32_t get_offset_of_inputSource_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___inputSource_3)); }
	inline RuntimeObject* get_inputSource_3() const { return ___inputSource_3; }
	inline RuntimeObject** get_address_of_inputSource_3() { return &___inputSource_3; }
	inline void set_inputSource_3(RuntimeObject* value)
	{
		___inputSource_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_3), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handMeshObserver_4)); }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * get_handMeshObserver_4() const { return ___handMeshObserver_4; }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 ** get_address_of_handMeshObserver_4() { return &___handMeshObserver_4; }
	inline void set_handMeshObserver_4(HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * value)
	{
		___handMeshObserver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___hasRequestedHandMeshObserver_5)); }
	inline bool get_hasRequestedHandMeshObserver_5() const { return ___hasRequestedHandMeshObserver_5; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_5() { return &___hasRequestedHandMeshObserver_5; }
	inline void set_hasRequestedHandMeshObserver_5(bool value)
	{
		___hasRequestedHandMeshObserver_5 = value;
	}

	inline static int32_t get_offset_of_handMeshModelId_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handMeshModelId_6)); }
	inline int32_t get_handMeshModelId_6() const { return ___handMeshModelId_6; }
	inline int32_t* get_address_of_handMeshModelId_6() { return &___handMeshModelId_6; }
	inline void set_handMeshModelId_6(int32_t value)
	{
		___handMeshModelId_6 = value;
	}

	inline static int32_t get_offset_of_neutralPoseVersion_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___neutralPoseVersion_7)); }
	inline int32_t get_neutralPoseVersion_7() const { return ___neutralPoseVersion_7; }
	inline int32_t* get_address_of_neutralPoseVersion_7() { return &___neutralPoseVersion_7; }
	inline void set_neutralPoseVersion_7(int32_t value)
	{
		___neutralPoseVersion_7 = value;
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handMeshTriangleIndices_8)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_handMeshTriangleIndices_8() const { return ___handMeshTriangleIndices_8; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_handMeshTriangleIndices_8() { return &___handMeshTriangleIndices_8; }
	inline void set_handMeshTriangleIndices_8(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___handMeshTriangleIndices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_8), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___vertexAndNormals_9)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_vertexAndNormals_9() const { return ___vertexAndNormals_9; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_vertexAndNormals_9() { return &___vertexAndNormals_9; }
	inline void set_vertexAndNormals_9(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___vertexAndNormals_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_9), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_10() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handMeshVerticesUnity_10)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshVerticesUnity_10() const { return ___handMeshVerticesUnity_10; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshVerticesUnity_10() { return &___handMeshVerticesUnity_10; }
	inline void set_handMeshVerticesUnity_10(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshVerticesUnity_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_10), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_11() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handMeshNormalsUnity_11)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_handMeshNormalsUnity_11() const { return ___handMeshNormalsUnity_11; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_handMeshNormalsUnity_11() { return &___handMeshNormalsUnity_11; }
	inline void set_handMeshNormalsUnity_11(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___handMeshNormalsUnity_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_11), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_12() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handMeshTriangleIndicesUnity_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_handMeshTriangleIndicesUnity_12() const { return ___handMeshTriangleIndicesUnity_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_handMeshTriangleIndicesUnity_12() { return &___handMeshTriangleIndicesUnity_12; }
	inline void set_handMeshTriangleIndicesUnity_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___handMeshTriangleIndicesUnity_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_12), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_13() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handMeshUVsUnity_13)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_handMeshUVsUnity_13() const { return ___handMeshUVsUnity_13; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_handMeshUVsUnity_13() { return &___handMeshUVsUnity_13; }
	inline void set_handMeshUVsUnity_13(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___handMeshUVsUnity_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_13), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInfo_15() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___handMeshInfo_15)); }
	inline HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636 * get_handMeshInfo_15() const { return ___handMeshInfo_15; }
	inline HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636 ** get_address_of_handMeshInfo_15() { return &___handMeshInfo_15; }
	inline void set_handMeshInfo_15(HandMeshInfo_tD99A773B6804BA0497422760646D27DF9A5EB636 * value)
	{
		___handMeshInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_neutralPoseVertices_16() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___neutralPoseVertices_16)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_neutralPoseVertices_16() const { return ___neutralPoseVertices_16; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_neutralPoseVertices_16() { return &___neutralPoseVertices_16; }
	inline void set_neutralPoseVertices_16(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___neutralPoseVertices_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralPoseVertices_16), (void*)value);
	}

	inline static int32_t get_offset_of_neutralVertexAndNormals_17() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352, ___neutralVertexAndNormals_17)); }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* get_neutralVertexAndNormals_17() const { return ___neutralVertexAndNormals_17; }
	inline HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1** get_address_of_neutralVertexAndNormals_17() { return &___neutralVertexAndNormals_17; }
	inline void set_neutralVertexAndNormals_17(HandMeshVertexU5BU5D_t57CFD5A9C11B49FCEAE81E2B6F441C47967175A1* value)
	{
		___neutralVertexAndNormals_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neutralVertexAndNormals_17), (void*)value);
	}
};

struct WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::<Left>k__BackingField
	WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * ___U3CLeftU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::<Right>k__BackingField
	WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * ___U3CRightU3Ek__BackingField_1;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandMeshPerfMarker_14;

public:
	inline static int32_t get_offset_of_U3CLeftU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_StaticFields, ___U3CLeftU3Ek__BackingField_0)); }
	inline WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * get_U3CLeftU3Ek__BackingField_0() const { return ___U3CLeftU3Ek__BackingField_0; }
	inline WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 ** get_address_of_U3CLeftU3Ek__BackingField_0() { return &___U3CLeftU3Ek__BackingField_0; }
	inline void set_U3CLeftU3Ek__BackingField_0(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * value)
	{
		___U3CLeftU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLeftU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_StaticFields, ___U3CRightU3Ek__BackingField_1)); }
	inline WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * get_U3CRightU3Ek__BackingField_1() const { return ___U3CRightU3Ek__BackingField_1; }
	inline WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 ** get_address_of_U3CRightU3Ek__BackingField_1() { return &___U3CRightU3Ek__BackingField_1; }
	inline void set_U3CRightU3Ek__BackingField_1(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * value)
	{
		___U3CRightU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRightU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_14() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_StaticFields, ___UpdateHandMeshPerfMarker_14)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandMeshPerfMarker_14() const { return ___UpdateHandMeshPerfMarker_14; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandMeshPerfMarker_14() { return &___UpdateHandMeshPerfMarker_14; }
	inline void set_UpdateHandMeshPerfMarker_14(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandMeshPerfMarker_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4
struct U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::<>4__this
	WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4
struct U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>4__this
	WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23
struct U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::<>4__this
	WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Eu__1_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8
struct U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>4__this
	WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::<>u__1
	TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51, ___U3CU3E4__this_2)); }
	inline WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3  : public MulticastDelegate_t
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


// System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct Func_2_tB362F5B220262126425E449514B973C33DAB89C8  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>
struct ITypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(ISpatialInteractionManager_tA0453F2820EB92D241A526B968100EC3B07BFE38* ___sender0, ISpatialInteractionSourceEventArgs_t906CBE18966E164D53240A3C27EAAD459451AE9C* ___args1) = 0;
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E  : public BaseInputSourceDefinition_tD7D2B761C1708F688EF028A6000FF74A8F01558B
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoseDictionary
	RuntimeObject* ___unityJointPoseDictionary_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* ___unityJointPoses_5;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___currentIndexPose_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentPalmNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPalmNormal_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_15;
	// Microsoft.MixedReality.Toolkit.Input.IHandRay Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<HandRay>k__BackingField
	RuntimeObject* ___U3CHandRayU3Ek__BackingField_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isIndexGrabbing
	bool ___isIndexGrabbing_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isMiddleGrabbing
	bool ___isMiddleGrabbing_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isThumbGrabbing
	bool ___isThumbGrabbing_20;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::deltaTimeStart
	float ___deltaTimeStart_21;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::frameOn
	int32_t ___frameOn_23;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::velocityPositionsCache
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___velocityPositionsCache_24;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::velocityNormalsCache
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___velocityNormalsCache_25;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::velocityPositionsSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocityPositionsSum_26;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::velocityNormalsSum
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocityNormalsSum_27;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<AngularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CAngularVelocityU3Ek__BackingField_28;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<Velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CVelocityU3Ek__BackingField_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::previousReadyToTeleport
	bool ___previousReadyToTeleport_32;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::teleportPointer
	RuntimeObject* ___teleportPointer_33;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___U3CInputSourceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_1() const { return ___U3CInputSourceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_1() { return &___U3CInputSourceU3Ek__BackingField_1; }
	inline void set_U3CInputSourceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoseDictionary_4() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___unityJointPoseDictionary_4)); }
	inline RuntimeObject* get_unityJointPoseDictionary_4() const { return ___unityJointPoseDictionary_4; }
	inline RuntimeObject** get_address_of_unityJointPoseDictionary_4() { return &___unityJointPoseDictionary_4; }
	inline void set_unityJointPoseDictionary_4(RuntimeObject* value)
	{
		___unityJointPoseDictionary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoseDictionary_4), (void*)value);
	}

	inline static int32_t get_offset_of_unityJointPoses_5() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___unityJointPoses_5)); }
	inline MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* get_unityJointPoses_5() const { return ___unityJointPoses_5; }
	inline MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D** get_address_of_unityJointPoses_5() { return &___unityJointPoses_5; }
	inline void set_unityJointPoses_5(MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* value)
	{
		___unityJointPoses_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_6() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___currentIndexPose_6)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_currentIndexPose_6() const { return ___currentIndexPose_6; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_currentIndexPose_6() { return &___currentIndexPose_6; }
	inline void set_currentIndexPose_6(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___currentIndexPose_6 = value;
	}

	inline static int32_t get_offset_of_currentPalmNormal_7() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___currentPalmNormal_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPalmNormal_7() const { return ___currentPalmNormal_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPalmNormal_7() { return &___currentPalmNormal_7; }
	inline void set_currentPalmNormal_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPalmNormal_7 = value;
	}

	inline static int32_t get_offset_of_enterPinchDistance_14() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___enterPinchDistance_14)); }
	inline float get_enterPinchDistance_14() const { return ___enterPinchDistance_14; }
	inline float* get_address_of_enterPinchDistance_14() { return &___enterPinchDistance_14; }
	inline void set_enterPinchDistance_14(float value)
	{
		___enterPinchDistance_14 = value;
	}

	inline static int32_t get_offset_of_exitPinchDistance_15() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___exitPinchDistance_15)); }
	inline float get_exitPinchDistance_15() const { return ___exitPinchDistance_15; }
	inline float* get_address_of_exitPinchDistance_15() { return &___exitPinchDistance_15; }
	inline void set_exitPinchDistance_15(float value)
	{
		___exitPinchDistance_15 = value;
	}

	inline static int32_t get_offset_of_U3CHandRayU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___U3CHandRayU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CHandRayU3Ek__BackingField_16() const { return ___U3CHandRayU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CHandRayU3Ek__BackingField_16() { return &___U3CHandRayU3Ek__BackingField_16; }
	inline void set_U3CHandRayU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CHandRayU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandRayU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_isPinching_17() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___isPinching_17)); }
	inline bool get_isPinching_17() const { return ___isPinching_17; }
	inline bool* get_address_of_isPinching_17() { return &___isPinching_17; }
	inline void set_isPinching_17(bool value)
	{
		___isPinching_17 = value;
	}

	inline static int32_t get_offset_of_isIndexGrabbing_18() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___isIndexGrabbing_18)); }
	inline bool get_isIndexGrabbing_18() const { return ___isIndexGrabbing_18; }
	inline bool* get_address_of_isIndexGrabbing_18() { return &___isIndexGrabbing_18; }
	inline void set_isIndexGrabbing_18(bool value)
	{
		___isIndexGrabbing_18 = value;
	}

	inline static int32_t get_offset_of_isMiddleGrabbing_19() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___isMiddleGrabbing_19)); }
	inline bool get_isMiddleGrabbing_19() const { return ___isMiddleGrabbing_19; }
	inline bool* get_address_of_isMiddleGrabbing_19() { return &___isMiddleGrabbing_19; }
	inline void set_isMiddleGrabbing_19(bool value)
	{
		___isMiddleGrabbing_19 = value;
	}

	inline static int32_t get_offset_of_isThumbGrabbing_20() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___isThumbGrabbing_20)); }
	inline bool get_isThumbGrabbing_20() const { return ___isThumbGrabbing_20; }
	inline bool* get_address_of_isThumbGrabbing_20() { return &___isThumbGrabbing_20; }
	inline void set_isThumbGrabbing_20(bool value)
	{
		___isThumbGrabbing_20 = value;
	}

	inline static int32_t get_offset_of_deltaTimeStart_21() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___deltaTimeStart_21)); }
	inline float get_deltaTimeStart_21() const { return ___deltaTimeStart_21; }
	inline float* get_address_of_deltaTimeStart_21() { return &___deltaTimeStart_21; }
	inline void set_deltaTimeStart_21(float value)
	{
		___deltaTimeStart_21 = value;
	}

	inline static int32_t get_offset_of_frameOn_23() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___frameOn_23)); }
	inline int32_t get_frameOn_23() const { return ___frameOn_23; }
	inline int32_t* get_address_of_frameOn_23() { return &___frameOn_23; }
	inline void set_frameOn_23(int32_t value)
	{
		___frameOn_23 = value;
	}

	inline static int32_t get_offset_of_velocityPositionsCache_24() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___velocityPositionsCache_24)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_velocityPositionsCache_24() const { return ___velocityPositionsCache_24; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_velocityPositionsCache_24() { return &___velocityPositionsCache_24; }
	inline void set_velocityPositionsCache_24(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___velocityPositionsCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___velocityPositionsCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_velocityNormalsCache_25() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___velocityNormalsCache_25)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_velocityNormalsCache_25() const { return ___velocityNormalsCache_25; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_velocityNormalsCache_25() { return &___velocityNormalsCache_25; }
	inline void set_velocityNormalsCache_25(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___velocityNormalsCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___velocityNormalsCache_25), (void*)value);
	}

	inline static int32_t get_offset_of_velocityPositionsSum_26() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___velocityPositionsSum_26)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocityPositionsSum_26() const { return ___velocityPositionsSum_26; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocityPositionsSum_26() { return &___velocityPositionsSum_26; }
	inline void set_velocityPositionsSum_26(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocityPositionsSum_26 = value;
	}

	inline static int32_t get_offset_of_velocityNormalsSum_27() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___velocityNormalsSum_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocityNormalsSum_27() const { return ___velocityNormalsSum_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocityNormalsSum_27() { return &___velocityNormalsSum_27; }
	inline void set_velocityNormalsSum_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocityNormalsSum_27 = value;
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___U3CAngularVelocityU3Ek__BackingField_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CAngularVelocityU3Ek__BackingField_28() const { return ___U3CAngularVelocityU3Ek__BackingField_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CAngularVelocityU3Ek__BackingField_28() { return &___U3CAngularVelocityU3Ek__BackingField_28; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___U3CVelocityU3Ek__BackingField_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CVelocityU3Ek__BackingField_29() const { return ___U3CVelocityU3Ek__BackingField_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CVelocityU3Ek__BackingField_29() { return &___U3CVelocityU3Ek__BackingField_29; }
	inline void set_U3CVelocityU3Ek__BackingField_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CVelocityU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_previousReadyToTeleport_32() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___previousReadyToTeleport_32)); }
	inline bool get_previousReadyToTeleport_32() const { return ___previousReadyToTeleport_32; }
	inline bool* get_address_of_previousReadyToTeleport_32() { return &___previousReadyToTeleport_32; }
	inline void set_previousReadyToTeleport_32(bool value)
	{
		___previousReadyToTeleport_32 = value;
	}

	inline static int32_t get_offset_of_teleportPointer_33() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E, ___teleportPointer_33)); }
	inline RuntimeObject* get_teleportPointer_33() const { return ___teleportPointer_33; }
	inline RuntimeObject** get_address_of_teleportPointer_33() { return &___teleportPointer_33; }
	inline void set_teleportPointer_33(RuntimeObject* value)
	{
		___teleportPointer_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportPointer_33), (void*)value);
	}
};

struct ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandJointsPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentIndexPosePerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPosePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateCurrentTeleportPosePerfMarker_34;

public:
	inline static int32_t get_offset_of_UpdateHandJointsPerfMarker_30() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E_StaticFields, ___UpdateHandJointsPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandJointsPerfMarker_30() const { return ___UpdateHandJointsPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandJointsPerfMarker_30() { return &___UpdateHandJointsPerfMarker_30; }
	inline void set_UpdateHandJointsPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandJointsPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentIndexPosePerfMarker_31() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E_StaticFields, ___UpdateCurrentIndexPosePerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentIndexPosePerfMarker_31() const { return ___UpdateCurrentIndexPosePerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentIndexPosePerfMarker_31() { return &___UpdateCurrentIndexPosePerfMarker_31; }
	inline void set_UpdateCurrentIndexPosePerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentIndexPosePerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentTeleportPosePerfMarker_34() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E_StaticFields, ___UpdateCurrentTeleportPosePerfMarker_34)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateCurrentTeleportPosePerfMarker_34() const { return ___UpdateCurrentTeleportPosePerfMarker_34; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateCurrentTeleportPosePerfMarker_34() { return &___UpdateCurrentTeleportPosePerfMarker_34; }
	inline void set_UpdateCurrentTeleportPosePerfMarker_34(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateCurrentTeleportPosePerfMarker_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t6A03D774CDC92A8B2F408B6CFEDDC61A892E0A7F  : public BaseDataProvider_1_t2E7050D7CA57DB9461C20F21B374CF953CD80539
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t6A03D774CDC92A8B2F408B6CFEDDC61A892E0A7F, ___U3CIsOpaqueU3Ek__BackingField_14)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_14() const { return ___U3CIsOpaqueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_14() { return &___U3CIsOpaqueU3Ek__BackingField_14; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_14(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_14 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3  : public BaseDataProvider_1_tF1176E7049F5EF66F15D13259DBDFA885A179B99
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_14;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_t96C36DBA3559DA499815B9575DA4028A53995309* ___pointerConfigurations_15;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_tE21D58669390AD07C9F09215C76B32DF667B721F * ___activePointersToConfig_17;

public:
	inline static int32_t get_offset_of_enablePointerCache_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3, ___enablePointerCache_14)); }
	inline bool get_enablePointerCache_14() const { return ___enablePointerCache_14; }
	inline bool* get_address_of_enablePointerCache_14() { return &___enablePointerCache_14; }
	inline void set_enablePointerCache_14(bool value)
	{
		___enablePointerCache_14 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3, ___pointerConfigurations_15)); }
	inline PointerConfigU5BU5D_t96C36DBA3559DA499815B9575DA4028A53995309* get_pointerConfigurations_15() const { return ___pointerConfigurations_15; }
	inline PointerConfigU5BU5D_t96C36DBA3559DA499815B9575DA4028A53995309** get_address_of_pointerConfigurations_15() { return &___pointerConfigurations_15; }
	inline void set_pointerConfigurations_15(PointerConfigU5BU5D_t96C36DBA3559DA499815B9575DA4028A53995309* value)
	{
		___pointerConfigurations_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_15), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_17() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3, ___activePointersToConfig_17)); }
	inline Dictionary_2_tE21D58669390AD07C9F09215C76B32DF667B721F * get_activePointersToConfig_17() const { return ___activePointersToConfig_17; }
	inline Dictionary_2_tE21D58669390AD07C9F09215C76B32DF667B721F ** get_address_of_activePointersToConfig_17() { return &___activePointersToConfig_17; }
	inline void set_activePointersToConfig_17(Dictionary_2_tE21D58669390AD07C9F09215C76B32DF667B721F * value)
	{
		___activePointersToConfig_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_17), (void*)value);
	}
};

struct BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestPointersPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RecyclePointersPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CreatePointerPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___CleanActivePointersPerfMarker_20;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3_StaticFields, ___RequestPointersPerfMarker_16)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestPointersPerfMarker_16() const { return ___RequestPointersPerfMarker_16; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestPointersPerfMarker_16() { return &___RequestPointersPerfMarker_16; }
	inline void set_RequestPointersPerfMarker_16(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestPointersPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_18() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3_StaticFields, ___RecyclePointersPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RecyclePointersPerfMarker_18() const { return ___RecyclePointersPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RecyclePointersPerfMarker_18() { return &___RecyclePointersPerfMarker_18; }
	inline void set_RecyclePointersPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RecyclePointersPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_19() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3_StaticFields, ___CreatePointerPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CreatePointerPerfMarker_19() const { return ___CreatePointerPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CreatePointerPerfMarker_19() { return &___CreatePointerPerfMarker_19; }
	inline void set_CreatePointerPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CreatePointerPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_20() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3_StaticFields, ___CleanActivePointersPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_CleanActivePointersPerfMarker_20() const { return ___CleanActivePointersPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_CleanActivePointersPerfMarker_20() { return &___CleanActivePointersPerfMarker_20; }
	inline void set_CleanActivePointersPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___CleanActivePointersPerfMarker_20 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB  : public BaseDataProvider_1_t17EAB76403D7EB3D0A774798B559519358CBA059
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::observedObjectParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___observedObjectParent_15;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_16;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_21;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CObserverRotationU3Ek__BackingField_22;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObserverOriginU3Ek__BackingField_23;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_24;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CObservationExtentsU3Ek__BackingField_25;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_observedObjectParent_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___observedObjectParent_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_observedObjectParent_15() const { return ___observedObjectParent_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_observedObjectParent_15() { return &___observedObjectParent_15; }
	inline void set_observedObjectParent_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___observedObjectParent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CSourceIdU3Ek__BackingField_16)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_16() const { return ___U3CSourceIdU3Ek__BackingField_16; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_16() { return &___U3CSourceIdU3Ek__BackingField_16; }
	inline void set_U3CSourceIdU3Ek__BackingField_16(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CSourceNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_17() const { return ___U3CSourceNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_17() { return &___U3CSourceNameU3Ek__BackingField_17; }
	inline void set_U3CSourceNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CStartupBehaviorU3Ek__BackingField_18)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_18() const { return ___U3CStartupBehaviorU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_18() { return &___U3CStartupBehaviorU3Ek__BackingField_18; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_18(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CDefaultPhysicsLayerU3Ek__BackingField_19)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_19() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_19() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_19; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_19(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CIsRunningU3Ek__BackingField_20)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_20() const { return ___U3CIsRunningU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_20() { return &___U3CIsRunningU3Ek__BackingField_20; }
	inline void set_U3CIsRunningU3Ek__BackingField_20(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CIsStationaryObserverU3Ek__BackingField_21)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_21() const { return ___U3CIsStationaryObserverU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_21() { return &___U3CIsStationaryObserverU3Ek__BackingField_21; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_21(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CObserverRotationU3Ek__BackingField_22)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CObserverRotationU3Ek__BackingField_22() const { return ___U3CObserverRotationU3Ek__BackingField_22; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CObserverRotationU3Ek__BackingField_22() { return &___U3CObserverRotationU3Ek__BackingField_22; }
	inline void set_U3CObserverRotationU3Ek__BackingField_22(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CObserverRotationU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CObserverOriginU3Ek__BackingField_23)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObserverOriginU3Ek__BackingField_23() const { return ___U3CObserverOriginU3Ek__BackingField_23; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObserverOriginU3Ek__BackingField_23() { return &___U3CObserverOriginU3Ek__BackingField_23; }
	inline void set_U3CObserverOriginU3Ek__BackingField_23(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObserverOriginU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CObserverVolumeTypeU3Ek__BackingField_24)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_24() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_24() { return &___U3CObserverVolumeTypeU3Ek__BackingField_24; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_24(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CObservationExtentsU3Ek__BackingField_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CObservationExtentsU3Ek__BackingField_25() const { return ___U3CObservationExtentsU3Ek__BackingField_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CObservationExtentsU3Ek__BackingField_25() { return &___U3CObservationExtentsU3Ek__BackingField_25; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB, ___U3CUpdateIntervalU3Ek__BackingField_26)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_26() const { return ___U3CUpdateIntervalU3Ek__BackingField_26; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_26() { return &___U3CUpdateIntervalU3Ek__BackingField_26; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_26(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_26 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother
struct EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A  : public RuntimeObject
{
public:
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_0;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_1;
	// System.Action Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::smoothFactorNormalized
	float ___smoothFactorNormalized_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccadeThreshInDegree
	float ___saccadeThreshInDegree_4;
	// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::oldGaze
	Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  ___oldGaze_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::confidenceOfSaccade
	int32_t ___confidenceOfSaccade_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::confidenceOfSaccadeThreshold
	int32_t ___confidenceOfSaccadeThreshold_7;
	// UnityEngine.Ray Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccade_initialGazePoint
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___saccade_initialGazePoint_8;
	// System.Collections.Generic.List`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::saccade_newGazeCluster
	List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * ___saccade_newGazeCluster_9;

public:
	inline static int32_t get_offset_of_OnSaccade_0() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___OnSaccade_0)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_0() const { return ___OnSaccade_0; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_0() { return &___OnSaccade_0; }
	inline void set_OnSaccade_0(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_1() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___OnSaccadeX_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_1() const { return ___OnSaccadeX_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_1() { return &___OnSaccadeX_1; }
	inline void set_OnSaccadeX_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_2() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___OnSaccadeY_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_2() const { return ___OnSaccadeY_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_2() { return &___OnSaccadeY_2; }
	inline void set_OnSaccadeY_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_2), (void*)value);
	}

	inline static int32_t get_offset_of_smoothFactorNormalized_3() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___smoothFactorNormalized_3)); }
	inline float get_smoothFactorNormalized_3() const { return ___smoothFactorNormalized_3; }
	inline float* get_address_of_smoothFactorNormalized_3() { return &___smoothFactorNormalized_3; }
	inline void set_smoothFactorNormalized_3(float value)
	{
		___smoothFactorNormalized_3 = value;
	}

	inline static int32_t get_offset_of_saccadeThreshInDegree_4() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___saccadeThreshInDegree_4)); }
	inline float get_saccadeThreshInDegree_4() const { return ___saccadeThreshInDegree_4; }
	inline float* get_address_of_saccadeThreshInDegree_4() { return &___saccadeThreshInDegree_4; }
	inline void set_saccadeThreshInDegree_4(float value)
	{
		___saccadeThreshInDegree_4 = value;
	}

	inline static int32_t get_offset_of_oldGaze_5() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___oldGaze_5)); }
	inline Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  get_oldGaze_5() const { return ___oldGaze_5; }
	inline Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963 * get_address_of_oldGaze_5() { return &___oldGaze_5; }
	inline void set_oldGaze_5(Nullable_1_tCE70D5232DA58B57AD93CA774181BD1FAA49A963  value)
	{
		___oldGaze_5 = value;
	}

	inline static int32_t get_offset_of_confidenceOfSaccade_6() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___confidenceOfSaccade_6)); }
	inline int32_t get_confidenceOfSaccade_6() const { return ___confidenceOfSaccade_6; }
	inline int32_t* get_address_of_confidenceOfSaccade_6() { return &___confidenceOfSaccade_6; }
	inline void set_confidenceOfSaccade_6(int32_t value)
	{
		___confidenceOfSaccade_6 = value;
	}

	inline static int32_t get_offset_of_confidenceOfSaccadeThreshold_7() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___confidenceOfSaccadeThreshold_7)); }
	inline int32_t get_confidenceOfSaccadeThreshold_7() const { return ___confidenceOfSaccadeThreshold_7; }
	inline int32_t* get_address_of_confidenceOfSaccadeThreshold_7() { return &___confidenceOfSaccadeThreshold_7; }
	inline void set_confidenceOfSaccadeThreshold_7(int32_t value)
	{
		___confidenceOfSaccadeThreshold_7 = value;
	}

	inline static int32_t get_offset_of_saccade_initialGazePoint_8() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___saccade_initialGazePoint_8)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_saccade_initialGazePoint_8() const { return ___saccade_initialGazePoint_8; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_saccade_initialGazePoint_8() { return &___saccade_initialGazePoint_8; }
	inline void set_saccade_initialGazePoint_8(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___saccade_initialGazePoint_8 = value;
	}

	inline static int32_t get_offset_of_saccade_newGazeCluster_9() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A, ___saccade_newGazeCluster_9)); }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * get_saccade_newGazeCluster_9() const { return ___saccade_newGazeCluster_9; }
	inline List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B ** get_address_of_saccade_newGazeCluster_9() { return &___saccade_newGazeCluster_9; }
	inline void set_saccade_newGazeCluster_9(List_1_tDBBF8003D7BAC756EE5262C1DF03096EB730DF2B * value)
	{
		___saccade_newGazeCluster_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saccade_newGazeCluster_9), (void*)value);
	}
};

struct EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::SmoothGazePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SmoothGazePerfMarker_10;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::IsSaccadingPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___IsSaccadingPerfMarker_11;

public:
	inline static int32_t get_offset_of_SmoothGazePerfMarker_10() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A_StaticFields, ___SmoothGazePerfMarker_10)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SmoothGazePerfMarker_10() const { return ___SmoothGazePerfMarker_10; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SmoothGazePerfMarker_10() { return &___SmoothGazePerfMarker_10; }
	inline void set_SmoothGazePerfMarker_10(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SmoothGazePerfMarker_10 = value;
	}

	inline static int32_t get_offset_of_IsSaccadingPerfMarker_11() { return static_cast<int32_t>(offsetof(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A_StaticFields, ___IsSaccadingPerfMarker_11)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_IsSaccadingPerfMarker_11() const { return ___IsSaccadingPerfMarker_11; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_IsSaccadingPerfMarker_11() { return &___IsSaccadingPerfMarker_11; }
	inline void set_IsSaccadingPerfMarker_11(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___IsSaccadingPerfMarker_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8  : public BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___CurrentControllerPose_12;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___LastControllerPose_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___CurrentControllerPosition_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___CurrentControllerRotation_15;
	// UnityEngine.XR.InputDevice Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::lastInputDevice
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___lastInputDevice_16;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_12() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8, ___CurrentControllerPose_12)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_CurrentControllerPose_12() const { return ___CurrentControllerPose_12; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_CurrentControllerPose_12() { return &___CurrentControllerPose_12; }
	inline void set_CurrentControllerPose_12(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___CurrentControllerPose_12 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_13() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8, ___LastControllerPose_13)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_LastControllerPose_13() const { return ___LastControllerPose_13; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_LastControllerPose_13() { return &___LastControllerPose_13; }
	inline void set_LastControllerPose_13(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___LastControllerPose_13 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8, ___CurrentControllerPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_CurrentControllerPosition_14() const { return ___CurrentControllerPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_CurrentControllerPosition_14() { return &___CurrentControllerPosition_14; }
	inline void set_CurrentControllerPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___CurrentControllerPosition_14 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8, ___CurrentControllerRotation_15)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_CurrentControllerRotation_15() const { return ___CurrentControllerRotation_15; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_CurrentControllerRotation_15() { return &___CurrentControllerRotation_15; }
	inline void set_CurrentControllerRotation_15(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___CurrentControllerRotation_15 = value;
	}

	inline static int32_t get_offset_of_lastInputDevice_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8, ___lastInputDevice_16)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_lastInputDevice_16() const { return ___lastInputDevice_16; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_lastInputDevice_16() { return &___lastInputDevice_16; }
	inline void set_lastInputDevice_16(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___lastInputDevice_16 = value;
	}
};

struct GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSourceDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateSourceDataPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateVelocityPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateVelocityPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateSingleAxisDataPerfMarker_21;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_23;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_StaticFields, ___UpdateControllerPerfMarker_17)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_17() const { return ___UpdateControllerPerfMarker_17; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_17() { return &___UpdateControllerPerfMarker_17; }
	inline void set_UpdateControllerPerfMarker_17(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_UpdateSourceDataPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_StaticFields, ___UpdateSourceDataPerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateSourceDataPerfMarker_18() const { return ___UpdateSourceDataPerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateSourceDataPerfMarker_18() { return &___UpdateSourceDataPerfMarker_18; }
	inline void set_UpdateSourceDataPerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateSourceDataPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateVelocityPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_StaticFields, ___UpdateVelocityPerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateVelocityPerfMarker_19() const { return ___UpdateVelocityPerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateVelocityPerfMarker_19() { return &___UpdateVelocityPerfMarker_19; }
	inline void set_UpdateVelocityPerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateVelocityPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_StaticFields, ___UpdateButtonDataPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_20() const { return ___UpdateButtonDataPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_20() { return &___UpdateButtonDataPerfMarker_20; }
	inline void set_UpdateButtonDataPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_21() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_StaticFields, ___UpdateSingleAxisDataPerfMarker_21)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateSingleAxisDataPerfMarker_21() const { return ___UpdateSingleAxisDataPerfMarker_21; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateSingleAxisDataPerfMarker_21() { return &___UpdateSingleAxisDataPerfMarker_21; }
	inline void set_UpdateSingleAxisDataPerfMarker_21(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateSingleAxisDataPerfMarker_21 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_22() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_StaticFields, ___UpdateDualAxisDataPerfMarker_22)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_22() const { return ___UpdateDualAxisDataPerfMarker_22; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_22() { return &___UpdateDualAxisDataPerfMarker_22; }
	inline void set_UpdateDualAxisDataPerfMarker_22(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_23() { return static_cast<int32_t>(offsetof(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_StaticFields, ___UpdatePoseDataPerfMarker_23)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_23() const { return ___UpdatePoseDataPerfMarker_23; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_23() { return &___UpdatePoseDataPerfMarker_23; }
	inline void set_UpdatePoseDataPerfMarker_23(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t5B9CD5904E1FAB32B2C0A42428E728DCB152A0E3  : public BaseInputSourceDefinition_tD7D2B761C1708F688EF028A6000FF74A8F01558B
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___inputAction_4)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055, ___poseData_17)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition
struct SimpleHandDefinition_t96427670B317B134AD65F9A253B39E26D2266227  : public BaseInputSourceDefinition_tD7D2B761C1708F688EF028A6000FF74A8F01558B
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5  : public Il2CppComObject
{
public:

public:
};

struct SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2
	ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
	ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialInteractionManager"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* get_____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E()
	{
		ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E* returnValue = ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics2_t9DDFC353F831F2C1D7101483B79BE4805AC4F95E;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* get_____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836()
	{
		ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836* returnValue = ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics_t28ED87B156C3E787B060B5301ECB67C04F7AE836;
			}
		}
		return returnValue;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizationKey
	String_t* ___localizationKey_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::localizedKeyword
	String_t* ___localizedKeyword_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyword
	String_t* ___keyword_2;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.SpeechCommands::keyCode
	int32_t ___keyCode_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.SpeechCommands::action
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___action_4;

public:
	inline static int32_t get_offset_of_localizationKey_0() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___localizationKey_0)); }
	inline String_t* get_localizationKey_0() const { return ___localizationKey_0; }
	inline String_t** get_address_of_localizationKey_0() { return &___localizationKey_0; }
	inline void set_localizationKey_0(String_t* value)
	{
		___localizationKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizationKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_localizedKeyword_1() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___localizedKeyword_1)); }
	inline String_t* get_localizedKeyword_1() const { return ___localizedKeyword_1; }
	inline String_t** get_address_of_localizedKeyword_1() { return &___localizedKeyword_1; }
	inline void set_localizedKeyword_1(String_t* value)
	{
		___localizedKeyword_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localizedKeyword_1), (void*)value);
	}

	inline static int32_t get_offset_of_keyword_2() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___keyword_2)); }
	inline String_t* get_keyword_2() const { return ___keyword_2; }
	inline String_t** get_address_of_keyword_2() { return &___keyword_2; }
	inline void set_keyword_2(String_t* value)
	{
		___keyword_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyword_2), (void*)value);
	}

	inline static int32_t get_offset_of_keyCode_3() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___keyCode_3)); }
	inline int32_t get_keyCode_3() const { return ___keyCode_3; }
	inline int32_t* get_address_of_keyCode_3() { return &___keyCode_3; }
	inline void set_keyCode_3(int32_t value)
	{
		___keyCode_3 = value;
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25, ___action_4)); }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  get_action_4() const { return ___action_4; }
	inline MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC * get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___action_4))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25_marshaled_pinvoke
{
	char* ___localizationKey_0;
	char* ___localizedKeyword_1;
	char* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_marshaled_pinvoke ___action_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.SpeechCommands
struct SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25_marshaled_com
{
	Il2CppChar* ___localizationKey_0;
	Il2CppChar* ___localizedKeyword_1;
	Il2CppChar* ___keyword_2;
	int32_t ___keyCode_3;
	MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_marshaled_com ___action_4;
};

// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tA82FB0DEEADBCE3C09FAE194C17F0950CFE41F5C  : public BaseInputSourceDefinition_tD7D2B761C1708F688EF028A6000FF74A8F01558B
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63  : public IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t6DDAC779279FBEF72C8ED23D61B272C188C3391E  : public BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195  : public BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_t97B4A2F1A73AEF20A43923F1AF405C59559B183D * ___meshEventData_27;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_37;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_38;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t32B6ECB71AD113C204EAB2D11514F2D409CD3AF9 * ___meshes_39;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_40;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_41;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___occlusionMaterial_43;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * ___physicsMaterial_44;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___visibleMaterial_45;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___runtimeSpatialMeshPrefab_46;

public:
	inline static int32_t get_offset_of_meshEventData_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___meshEventData_27)); }
	inline MixedRealitySpatialAwarenessEventData_1_t97B4A2F1A73AEF20A43923F1AF405C59559B183D * get_meshEventData_27() const { return ___meshEventData_27; }
	inline MixedRealitySpatialAwarenessEventData_1_t97B4A2F1A73AEF20A43923F1AF405C59559B183D ** get_address_of_meshEventData_27() { return &___meshEventData_27; }
	inline void set_meshEventData_27(MixedRealitySpatialAwarenessEventData_1_t97B4A2F1A73AEF20A43923F1AF405C59559B183D * value)
	{
		___meshEventData_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_27), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___displayOption_37)); }
	inline int32_t get_displayOption_37() const { return ___displayOption_37; }
	inline int32_t* get_address_of_displayOption_37() { return &___displayOption_37; }
	inline void set_displayOption_37(int32_t value)
	{
		___displayOption_37 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___levelOfDetail_38)); }
	inline int32_t get_levelOfDetail_38() const { return ___levelOfDetail_38; }
	inline int32_t* get_address_of_levelOfDetail_38() { return &___levelOfDetail_38; }
	inline void set_levelOfDetail_38(int32_t value)
	{
		___levelOfDetail_38 = value;
	}

	inline static int32_t get_offset_of_meshes_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___meshes_39)); }
	inline Dictionary_2_t32B6ECB71AD113C204EAB2D11514F2D409CD3AF9 * get_meshes_39() const { return ___meshes_39; }
	inline Dictionary_2_t32B6ECB71AD113C204EAB2D11514F2D409CD3AF9 ** get_address_of_meshes_39() { return &___meshes_39; }
	inline void set_meshes_39(Dictionary_2_t32B6ECB71AD113C204EAB2D11514F2D409CD3AF9 * value)
	{
		___meshes_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_39), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___meshPhysicsLayer_40)); }
	inline int32_t get_meshPhysicsLayer_40() const { return ___meshPhysicsLayer_40; }
	inline int32_t* get_address_of_meshPhysicsLayer_40() { return &___meshPhysicsLayer_40; }
	inline void set_meshPhysicsLayer_40(int32_t value)
	{
		___meshPhysicsLayer_40 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___U3CRecalculateNormalsU3Ek__BackingField_41)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_41() const { return ___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_41() { return &___U3CRecalculateNormalsU3Ek__BackingField_41; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_41(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_42() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_42; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_42(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_43() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___occlusionMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_occlusionMaterial_43() const { return ___occlusionMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_occlusionMaterial_43() { return &___occlusionMaterial_43; }
	inline void set_occlusionMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___occlusionMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_44() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___physicsMaterial_44)); }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * get_physicsMaterial_44() const { return ___physicsMaterial_44; }
	inline PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 ** get_address_of_physicsMaterial_44() { return &___physicsMaterial_44; }
	inline void set_physicsMaterial_44(PhysicMaterial_tD3D9C84806E95BABF076A74331DF8D9A4B03E3C2 * value)
	{
		___physicsMaterial_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_44), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_45() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___visibleMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_visibleMaterial_45() const { return ___visibleMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_visibleMaterial_45() { return &___visibleMaterial_45; }
	inline void set_visibleMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___visibleMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_46() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195, ___runtimeSpatialMeshPrefab_46)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_runtimeSpatialMeshPrefab_46() const { return ___runtimeSpatialMeshPrefab_46; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_runtimeSpatialMeshPrefab_46() { return &___runtimeSpatialMeshPrefab_46; }
	inline void set_runtimeSpatialMeshPrefab_46(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___runtimeSpatialMeshPrefab_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_46), (void*)value);
	}
};

struct BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshDisplayOptionPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedMeshPhysicsPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplyUpdatedPhysicsLayerPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshAddedPerfMarker_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * ___OnMeshAdded_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshUpdatedPerfMarker_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * ___OnMeshUpdated_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnMeshRemovedPerfMarker_35;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * ___OnMeshRemoved_36;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshDisplayOptionPerfMarker_28() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_28() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_28; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedMeshPhysicsPerfMarker_29() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_29() { return &___ApplyUpdatedMeshPhysicsPerfMarker_29; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_30)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplyUpdatedPhysicsLayerPerfMarker_30() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_30() { return &___ApplyUpdatedPhysicsLayerPerfMarker_30; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_30(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___OnMeshAddedPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshAddedPerfMarker_31() const { return ___OnMeshAddedPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshAddedPerfMarker_31() { return &___OnMeshAddedPerfMarker_31; }
	inline void set_OnMeshAddedPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshAddedPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___OnMeshAdded_32)); }
	inline EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * get_OnMeshAdded_32() const { return ___OnMeshAdded_32; }
	inline EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C ** get_address_of_OnMeshAdded_32() { return &___OnMeshAdded_32; }
	inline void set_OnMeshAdded_32(EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * value)
	{
		___OnMeshAdded_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_32), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___OnMeshUpdatedPerfMarker_33)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshUpdatedPerfMarker_33() const { return ___OnMeshUpdatedPerfMarker_33; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshUpdatedPerfMarker_33() { return &___OnMeshUpdatedPerfMarker_33; }
	inline void set_OnMeshUpdatedPerfMarker_33(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshUpdatedPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___OnMeshUpdated_34)); }
	inline EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * get_OnMeshUpdated_34() const { return ___OnMeshUpdated_34; }
	inline EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C ** get_address_of_OnMeshUpdated_34() { return &___OnMeshUpdated_34; }
	inline void set_OnMeshUpdated_34(EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * value)
	{
		___OnMeshUpdated_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_34), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___OnMeshRemovedPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnMeshRemovedPerfMarker_35() const { return ___OnMeshRemovedPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnMeshRemovedPerfMarker_35() { return &___OnMeshRemovedPerfMarker_35; }
	inline void set_OnMeshRemovedPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnMeshRemovedPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195_StaticFields, ___OnMeshRemoved_36)); }
	inline EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * get_OnMeshRemoved_36() const { return ___OnMeshRemoved_36; }
	inline EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C ** get_address_of_OnMeshRemoved_36() { return &___OnMeshRemoved_36; }
	inline void set_OnMeshRemoved_36(EventFunction_1_t4B6BBB89C5FDB6DE686A9063BBBD2D458F88257C * value)
	{
		___OnMeshRemoved_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_36), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214  : public BaseCameraSettingsProvider_t6A03D774CDC92A8B2F408B6CFEDDC61A892E0A7F
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t688C063FD77A3EEF5E588B5CD9169A2298A6A594 * ___reprojectionUpdater_16;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::projectionOverride
	ProjectionOverride_t8D952EE33438BEE5944C136BF192063CA9DBE635 * ___projectionOverride_17;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_16() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214, ___reprojectionUpdater_16)); }
	inline WindowsMixedRealityReprojectionUpdater_t688C063FD77A3EEF5E588B5CD9169A2298A6A594 * get_reprojectionUpdater_16() const { return ___reprojectionUpdater_16; }
	inline WindowsMixedRealityReprojectionUpdater_t688C063FD77A3EEF5E588B5CD9169A2298A6A594 ** get_address_of_reprojectionUpdater_16() { return &___reprojectionUpdater_16; }
	inline void set_reprojectionUpdater_16(WindowsMixedRealityReprojectionUpdater_t688C063FD77A3EEF5E588B5CD9169A2298A6A594 * value)
	{
		___reprojectionUpdater_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_16), (void*)value);
	}

	inline static int32_t get_offset_of_projectionOverride_17() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214, ___projectionOverride_17)); }
	inline ProjectionOverride_t8D952EE33438BEE5944C136BF192063CA9DBE635 * get_projectionOverride_17() const { return ___projectionOverride_17; }
	inline ProjectionOverride_t8D952EE33438BEE5944C136BF192063CA9DBE635 ** get_address_of_projectionOverride_17() { return &___projectionOverride_17; }
	inline void set_projectionOverride_17(ProjectionOverride_t8D952EE33438BEE5944C136BF192063CA9DBE635 * value)
	{
		___projectionOverride_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionOverride_17), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_15;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_15() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214_StaticFields, ___isTryGetViewConfigurationSupported_15)); }
	inline bool get_isTryGetViewConfigurationSupported_15() const { return ___isTryGetViewConfigurationSupported_15; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_15() { return &___isTryGetViewConfigurationSupported_15; }
	inline void set_isTryGetViewConfigurationSupported_15(bool value)
	{
		___isTryGetViewConfigurationSupported_15 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2  : public GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___currentPointerPosition_24;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___currentPointerRotation_25;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPose
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___currentPointerPose_26;

public:
	inline static int32_t get_offset_of_currentPointerPosition_24() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2, ___currentPointerPosition_24)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_currentPointerPosition_24() const { return ___currentPointerPosition_24; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_currentPointerPosition_24() { return &___currentPointerPosition_24; }
	inline void set_currentPointerPosition_24(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___currentPointerPosition_24 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_25() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2, ___currentPointerRotation_25)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_currentPointerRotation_25() const { return ___currentPointerRotation_25; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_currentPointerRotation_25() { return &___currentPointerRotation_25; }
	inline void set_currentPointerRotation_25(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___currentPointerRotation_25 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_26() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2, ___currentPointerPose_26)); }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  get_currentPointerPose_26() const { return ___currentPointerPose_26; }
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * get_address_of_currentPointerPose_26() { return &___currentPointerPose_26; }
	inline void set_currentPointerPose_26(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		___currentPointerPose_26 = value;
	}
};

struct BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePoseDataPerfMarker_27;

public:
	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_27() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_StaticFields, ___UpdatePoseDataPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePoseDataPerfMarker_27() const { return ___UpdatePoseDataPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePoseDataPerfMarker_27() { return &___UpdatePoseDataPerfMarker_27; }
	inline void set_UpdatePoseDataPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePoseDataPerfMarker_27 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC  : public BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::renderMotionControllers
	bool ___renderMotionControllers_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::defaultControllerVisualizationType
	SystemType_tF1B06877A2F26D3044C6C59152FC9FE6BE74334D * ___defaultControllerVisualizationType_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::usePlatformModels
	bool ___usePlatformModels_7;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::platformModelMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___platformModelMaterial_8;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalLeftControllerModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalLeftControllerModel_9;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalRightControllerModel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalRightControllerModel_10;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalLeftHandVisualizer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalLeftHandVisualizer_11;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::globalRightHandVisualizer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___globalRightHandVisualizer_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationSetting[] Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::controllerVisualizationSettings
	MixedRealityControllerVisualizationSettingU5BU5D_tBBD8957A196E5401D96CA18CA9BBEC00964936F8* ___controllerVisualizationSettings_13;

public:
	inline static int32_t get_offset_of_renderMotionControllers_5() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___renderMotionControllers_5)); }
	inline bool get_renderMotionControllers_5() const { return ___renderMotionControllers_5; }
	inline bool* get_address_of_renderMotionControllers_5() { return &___renderMotionControllers_5; }
	inline void set_renderMotionControllers_5(bool value)
	{
		___renderMotionControllers_5 = value;
	}

	inline static int32_t get_offset_of_defaultControllerVisualizationType_6() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___defaultControllerVisualizationType_6)); }
	inline SystemType_tF1B06877A2F26D3044C6C59152FC9FE6BE74334D * get_defaultControllerVisualizationType_6() const { return ___defaultControllerVisualizationType_6; }
	inline SystemType_tF1B06877A2F26D3044C6C59152FC9FE6BE74334D ** get_address_of_defaultControllerVisualizationType_6() { return &___defaultControllerVisualizationType_6; }
	inline void set_defaultControllerVisualizationType_6(SystemType_tF1B06877A2F26D3044C6C59152FC9FE6BE74334D * value)
	{
		___defaultControllerVisualizationType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultControllerVisualizationType_6), (void*)value);
	}

	inline static int32_t get_offset_of_usePlatformModels_7() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___usePlatformModels_7)); }
	inline bool get_usePlatformModels_7() const { return ___usePlatformModels_7; }
	inline bool* get_address_of_usePlatformModels_7() { return &___usePlatformModels_7; }
	inline void set_usePlatformModels_7(bool value)
	{
		___usePlatformModels_7 = value;
	}

	inline static int32_t get_offset_of_platformModelMaterial_8() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___platformModelMaterial_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_platformModelMaterial_8() const { return ___platformModelMaterial_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_platformModelMaterial_8() { return &___platformModelMaterial_8; }
	inline void set_platformModelMaterial_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___platformModelMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformModelMaterial_8), (void*)value);
	}

	inline static int32_t get_offset_of_globalLeftControllerModel_9() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___globalLeftControllerModel_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalLeftControllerModel_9() const { return ___globalLeftControllerModel_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalLeftControllerModel_9() { return &___globalLeftControllerModel_9; }
	inline void set_globalLeftControllerModel_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalLeftControllerModel_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalLeftControllerModel_9), (void*)value);
	}

	inline static int32_t get_offset_of_globalRightControllerModel_10() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___globalRightControllerModel_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalRightControllerModel_10() const { return ___globalRightControllerModel_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalRightControllerModel_10() { return &___globalRightControllerModel_10; }
	inline void set_globalRightControllerModel_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalRightControllerModel_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalRightControllerModel_10), (void*)value);
	}

	inline static int32_t get_offset_of_globalLeftHandVisualizer_11() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___globalLeftHandVisualizer_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalLeftHandVisualizer_11() const { return ___globalLeftHandVisualizer_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalLeftHandVisualizer_11() { return &___globalLeftHandVisualizer_11; }
	inline void set_globalLeftHandVisualizer_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalLeftHandVisualizer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalLeftHandVisualizer_11), (void*)value);
	}

	inline static int32_t get_offset_of_globalRightHandVisualizer_12() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___globalRightHandVisualizer_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_globalRightHandVisualizer_12() const { return ___globalRightHandVisualizer_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_globalRightHandVisualizer_12() { return &___globalRightHandVisualizer_12; }
	inline void set_globalRightHandVisualizer_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___globalRightHandVisualizer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___globalRightHandVisualizer_12), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationSettings_13() { return static_cast<int32_t>(offsetof(MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC, ___controllerVisualizationSettings_13)); }
	inline MixedRealityControllerVisualizationSettingU5BU5D_tBBD8957A196E5401D96CA18CA9BBEC00964936F8* get_controllerVisualizationSettings_13() const { return ___controllerVisualizationSettings_13; }
	inline MixedRealityControllerVisualizationSettingU5BU5D_tBBD8957A196E5401D96CA18CA9BBEC00964936F8** get_address_of_controllerVisualizationSettings_13() { return &___controllerVisualizationSettings_13; }
	inline void set_controllerVisualizationSettings_13(MixedRealityControllerVisualizationSettingU5BU5D_tBBD8957A196E5401D96CA18CA9BBEC00964936F8* value)
	{
		___controllerVisualizationSettings_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationSettings_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider
struct WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36  : public BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::<SmoothEyeTracking>k__BackingField
	bool ___U3CSmoothEyeTrackingU3Ek__BackingField_21;
	// Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::gazeSmoother
	EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * ___gazeSmoother_22;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccade
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccade_23;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeX
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeX_24;
	// System.Action Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::OnSaccadeY
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSaccadeY_25;

public:
	inline static int32_t get_offset_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36, ___U3CSmoothEyeTrackingU3Ek__BackingField_21)); }
	inline bool get_U3CSmoothEyeTrackingU3Ek__BackingField_21() const { return ___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CSmoothEyeTrackingU3Ek__BackingField_21() { return &___U3CSmoothEyeTrackingU3Ek__BackingField_21; }
	inline void set_U3CSmoothEyeTrackingU3Ek__BackingField_21(bool value)
	{
		___U3CSmoothEyeTrackingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_gazeSmoother_22() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36, ___gazeSmoother_22)); }
	inline EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * get_gazeSmoother_22() const { return ___gazeSmoother_22; }
	inline EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A ** get_address_of_gazeSmoother_22() { return &___gazeSmoother_22; }
	inline void set_gazeSmoother_22(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * value)
	{
		___gazeSmoother_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeSmoother_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccade_23() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36, ___OnSaccade_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccade_23() const { return ___OnSaccade_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccade_23() { return &___OnSaccade_23; }
	inline void set_OnSaccade_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccade_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccade_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeX_24() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36, ___OnSaccadeX_24)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeX_24() const { return ___OnSaccadeX_24; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeX_24() { return &___OnSaccadeX_24; }
	inline void set_OnSaccadeX_24(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeX_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeX_24), (void*)value);
	}

	inline static int32_t get_offset_of_OnSaccadeY_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36, ___OnSaccadeY_25)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSaccadeY_25() const { return ___OnSaccadeY_25; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSaccadeY_25() { return &___OnSaccadeY_25; }
	inline void set_OnSaccadeY_25(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSaccadeY_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSaccadeY_25), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19  : public BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t6D4AA7D5E98520B142113290B80207BCEF74C53F * ___ActiveControllers_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevicesSubset_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___lastInputDevices_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_ActiveControllers_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19, ___ActiveControllers_21)); }
	inline Dictionary_2_t6D4AA7D5E98520B142113290B80207BCEF74C53F * get_ActiveControllers_21() const { return ___ActiveControllers_21; }
	inline Dictionary_2_t6D4AA7D5E98520B142113290B80207BCEF74C53F ** get_address_of_ActiveControllers_21() { return &___ActiveControllers_21; }
	inline void set_ActiveControllers_21(Dictionary_2_t6D4AA7D5E98520B142113290B80207BCEF74C53F * value)
	{
		___ActiveControllers_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_21), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevices_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19, ___inputDevices_22)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevices_22() const { return ___inputDevices_22; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevices_22() { return &___inputDevices_22; }
	inline void set_inputDevices_22(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevices_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_22), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19, ___inputDevicesSubset_23)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_inputDevicesSubset_23() const { return ___inputDevicesSubset_23; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_inputDevicesSubset_23() { return &___inputDevicesSubset_23; }
	inline void set_inputDevicesSubset_23(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___inputDevicesSubset_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_23), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19, ___lastInputDevices_24)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_lastInputDevices_24() const { return ___lastInputDevices_24; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_lastInputDevices_24() { return &___lastInputDevices_24; }
	inline void set_lastInputDevices_24(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___lastInputDevices_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25)); }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_25() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_25; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_25(List_1_tD812850D83CCFFD34E9A310E2AE62B198E513F2C * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_25), (void*)value);
	}
};

struct XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___GetOrAddControllerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveControllerPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19_StaticFields, ___GetOrAddControllerPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_GetOrAddControllerPerfMarker_27() const { return ___GetOrAddControllerPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_GetOrAddControllerPerfMarker_27() { return &___GetOrAddControllerPerfMarker_27; }
	inline void set_GetOrAddControllerPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___GetOrAddControllerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_28() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19_StaticFields, ___RemoveControllerPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveControllerPerfMarker_28() const { return ___RemoveControllerPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveControllerPerfMarker_28() { return &___RemoveControllerPerfMarker_28; }
	inline void set_RemoveControllerPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveControllerPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD  : public BaseSpatialMeshObserver_tFF580ABF0D1E7187D985589AEA2789FFD6285195
{
public:
	// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::observersCache
	RuntimeObject* ___observersCache_47;
	// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshSubsystem
	XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * ___meshSubsystem_48;
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * ___meshWorkQueue_50;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * ___meshInfos_51;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * ___outstandingMeshObject_52;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * ___spareMeshObject_53;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_54;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_63;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_64;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_65;

public:
	inline static int32_t get_offset_of_observersCache_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___observersCache_47)); }
	inline RuntimeObject* get_observersCache_47() const { return ___observersCache_47; }
	inline RuntimeObject** get_address_of_observersCache_47() { return &___observersCache_47; }
	inline void set_observersCache_47(RuntimeObject* value)
	{
		___observersCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observersCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_meshSubsystem_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___meshSubsystem_48)); }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * get_meshSubsystem_48() const { return ___meshSubsystem_48; }
	inline XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 ** get_address_of_meshSubsystem_48() { return &___meshSubsystem_48; }
	inline void set_meshSubsystem_48(XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * value)
	{
		___meshSubsystem_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshSubsystem_48), (void*)value);
	}

	inline static int32_t get_offset_of_meshWorkQueue_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___meshWorkQueue_50)); }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * get_meshWorkQueue_50() const { return ___meshWorkQueue_50; }
	inline Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B ** get_address_of_meshWorkQueue_50() { return &___meshWorkQueue_50; }
	inline void set_meshWorkQueue_50(Queue_1_t5444887607C926D74BF49AFF18829466A23A9D3B * value)
	{
		___meshWorkQueue_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_50), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___meshInfos_51)); }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * get_meshInfos_51() const { return ___meshInfos_51; }
	inline List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D ** get_address_of_meshInfos_51() { return &___meshInfos_51; }
	inline void set_meshInfos_51(List_1_t053E82C4FE1FEB4EF0149CCADF601193CE96CB4D * value)
	{
		___meshInfos_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_51), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___outstandingMeshObject_52)); }
	inline SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * get_outstandingMeshObject_52() const { return ___outstandingMeshObject_52; }
	inline SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C ** get_address_of_outstandingMeshObject_52() { return &___outstandingMeshObject_52; }
	inline void set_outstandingMeshObject_52(SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * value)
	{
		___outstandingMeshObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___spareMeshObject_53)); }
	inline SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * get_spareMeshObject_53() const { return ___spareMeshObject_53; }
	inline SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C ** get_address_of_spareMeshObject_53() { return &___spareMeshObject_53; }
	inline void set_spareMeshObject_53(SpatialAwarenessMeshObject_t2B371962EC736218D797F085A8EF94CFA0A8649C * value)
	{
		___spareMeshObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___lastUpdated_54)); }
	inline float get_lastUpdated_54() const { return ___lastUpdated_54; }
	inline float* get_address_of_lastUpdated_54() { return &___lastUpdated_54; }
	inline void set_lastUpdated_54(float value)
	{
		___lastUpdated_54 = value;
	}

	inline static int32_t get_offset_of_oldObserverOrigin_63() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___oldObserverOrigin_63)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_63() const { return ___oldObserverOrigin_63; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_63() { return &___oldObserverOrigin_63; }
	inline void set_oldObserverOrigin_63(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_63 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_64() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___oldObservationExtents_64)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_64() const { return ___oldObservationExtents_64; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_64() { return &___oldObservationExtents_64; }
	inline void set_oldObservationExtents_64(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_64 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_65() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD, ___oldObserverVolumeType_65)); }
	inline int32_t get_oldObserverVolumeType_65() const { return ___oldObserverVolumeType_65; }
	inline int32_t* get_address_of_oldObserverVolumeType_65() { return &___oldObserverVolumeType_65; }
	inline void set_oldObserverVolumeType_65(int32_t value)
	{
		___oldObserverVolumeType_65 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_49;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ResumePerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___SuspendPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ClearObservationsPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateObserverPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RequestMeshPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RemoveMeshObjectPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ReclaimMeshObjectPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateMeshesPerfMarker_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___MeshGenerationActionPerfMarker_67;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___UpdatePerfMarker_49)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_49() const { return ___UpdatePerfMarker_49; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_49() { return &___UpdatePerfMarker_49; }
	inline void set_UpdatePerfMarker_49(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_49 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___ResumePerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ResumePerfMarker_55() const { return ___ResumePerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ResumePerfMarker_55() { return &___ResumePerfMarker_55; }
	inline void set_ResumePerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ResumePerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___SuspendPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_SuspendPerfMarker_56() const { return ___SuspendPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_SuspendPerfMarker_56() { return &___SuspendPerfMarker_56; }
	inline void set_SuspendPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___SuspendPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___ClearObservationsPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ClearObservationsPerfMarker_57() const { return ___ClearObservationsPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ClearObservationsPerfMarker_57() { return &___ClearObservationsPerfMarker_57; }
	inline void set_ClearObservationsPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ClearObservationsPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___UpdateObserverPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateObserverPerfMarker_58() const { return ___UpdateObserverPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateObserverPerfMarker_58() { return &___UpdateObserverPerfMarker_58; }
	inline void set_UpdateObserverPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateObserverPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___RequestMeshPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RequestMeshPerfMarker_59() const { return ___RequestMeshPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RequestMeshPerfMarker_59() { return &___RequestMeshPerfMarker_59; }
	inline void set_RequestMeshPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RequestMeshPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_60() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___RemoveMeshObjectPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RemoveMeshObjectPerfMarker_60() const { return ___RemoveMeshObjectPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RemoveMeshObjectPerfMarker_60() { return &___RemoveMeshObjectPerfMarker_60; }
	inline void set_RemoveMeshObjectPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RemoveMeshObjectPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_61() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___ReclaimMeshObjectPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ReclaimMeshObjectPerfMarker_61() const { return ___ReclaimMeshObjectPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ReclaimMeshObjectPerfMarker_61() { return &___ReclaimMeshObjectPerfMarker_61; }
	inline void set_ReclaimMeshObjectPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ReclaimMeshObjectPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_62() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___ConfigureObserverVolumePerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_62() const { return ___ConfigureObserverVolumePerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_62() { return &___ConfigureObserverVolumePerfMarker_62; }
	inline void set_ConfigureObserverVolumePerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_66() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___UpdateMeshesPerfMarker_66)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateMeshesPerfMarker_66() const { return ___UpdateMeshesPerfMarker_66; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateMeshesPerfMarker_66() { return &___UpdateMeshesPerfMarker_66; }
	inline void set_UpdateMeshesPerfMarker_66(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateMeshesPerfMarker_66 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_67() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_StaticFields, ___MeshGenerationActionPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_MeshGenerationActionPerfMarker_67() const { return ___MeshGenerationActionPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_MeshGenerationActionPerfMarker_67() { return &___MeshGenerationActionPerfMarker_67; }
	inline void set_MeshGenerationActionPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___MeshGenerationActionPerfMarker_67 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027  : public BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A  : public XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_29;
	// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::voiceController
	WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * ___voiceController_30;
	// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::shouldSendVoiceEvents
	bool ___shouldSendVoiceEvents_31;

public:
	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A, ___mixedRealityGazeProviderHeadOverride_29)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_29() const { return ___mixedRealityGazeProviderHeadOverride_29; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_29() { return &___mixedRealityGazeProviderHeadOverride_29; }
	inline void set_mixedRealityGazeProviderHeadOverride_29(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_29), (void*)value);
	}

	inline static int32_t get_offset_of_voiceController_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A, ___voiceController_30)); }
	inline WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * get_voiceController_30() const { return ___voiceController_30; }
	inline WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 ** get_address_of_voiceController_30() { return &___voiceController_30; }
	inline void set_voiceController_30(WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * value)
	{
		___voiceController_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___voiceController_30), (void*)value);
	}

	inline static int32_t get_offset_of_shouldSendVoiceEvents_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A, ___shouldSendVoiceEvents_31)); }
	inline bool get_shouldSendVoiceEvents_31() const { return ___shouldSendVoiceEvents_31; }
	inline bool* get_address_of_shouldSendVoiceEvents_31() { return &___shouldSendVoiceEvents_31; }
	inline void set_shouldSendVoiceEvents_31(bool value)
	{
		___shouldSendVoiceEvents_31 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC  : public BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2
{
public:
	// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handDefinition
	ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * ___handDefinition_28;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handMeshProvider
	WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * ___handMeshProvider_29;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::jointPoses
	MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* ___jointPoses_30;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::fingerBones
	List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___fingerBones_32;

public:
	inline static int32_t get_offset_of_handDefinition_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC, ___handDefinition_28)); }
	inline ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * get_handDefinition_28() const { return ___handDefinition_28; }
	inline ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E ** get_address_of_handDefinition_28() { return &___handDefinition_28; }
	inline void set_handDefinition_28(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * value)
	{
		___handDefinition_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDefinition_28), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshProvider_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC, ___handMeshProvider_29)); }
	inline WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * get_handMeshProvider_29() const { return ___handMeshProvider_29; }
	inline WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 ** get_address_of_handMeshProvider_29() { return &___handMeshProvider_29; }
	inline void set_handMeshProvider_29(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * value)
	{
		___handMeshProvider_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshProvider_29), (void*)value);
	}

	inline static int32_t get_offset_of_jointPoses_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC, ___jointPoses_30)); }
	inline MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* get_jointPoses_30() const { return ___jointPoses_30; }
	inline MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D** get_address_of_jointPoses_30() { return &___jointPoses_30; }
	inline void set_jointPoses_30(MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* value)
	{
		___jointPoses_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoses_30), (void*)value);
	}

	inline static int32_t get_offset_of_fingerBones_32() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC, ___fingerBones_32)); }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * get_fingerBones_32() const { return ___fingerBones_32; }
	inline List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 ** get_address_of_fingerBones_32() { return &___fingerBones_32; }
	inline void set_fingerBones_32(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * value)
	{
		___fingerBones_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerBones_32), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields
{
public:
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handFingers
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* ___handFingers_31;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::rightPalmOffset
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rightPalmOffset_33;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::leftPalmOffset
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___leftPalmOffset_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_35;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateHandDataPerfMarker_36;

public:
	inline static int32_t get_offset_of_handFingers_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields, ___handFingers_31)); }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* get_handFingers_31() const { return ___handFingers_31; }
	inline HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F** get_address_of_handFingers_31() { return &___handFingers_31; }
	inline void set_handFingers_31(HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* value)
	{
		___handFingers_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handFingers_31), (void*)value);
	}

	inline static int32_t get_offset_of_rightPalmOffset_33() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields, ___rightPalmOffset_33)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rightPalmOffset_33() const { return ___rightPalmOffset_33; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rightPalmOffset_33() { return &___rightPalmOffset_33; }
	inline void set_rightPalmOffset_33(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rightPalmOffset_33 = value;
	}

	inline static int32_t get_offset_of_leftPalmOffset_34() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields, ___leftPalmOffset_34)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_leftPalmOffset_34() const { return ___leftPalmOffset_34; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_leftPalmOffset_34() { return &___leftPalmOffset_34; }
	inline void set_leftPalmOffset_34(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___leftPalmOffset_34 = value;
	}

	inline static int32_t get_offset_of_UpdateControllerPerfMarker_35() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields, ___UpdateControllerPerfMarker_35)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_35() const { return ___UpdateControllerPerfMarker_35; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_35() { return &___UpdateControllerPerfMarker_35; }
	inline void set_UpdateControllerPerfMarker_35(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_35 = value;
	}

	inline static int32_t get_offset_of_UpdateHandDataPerfMarker_36() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields, ___UpdateHandDataPerfMarker_36)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateHandDataPerfMarker_36() const { return ___UpdateHandDataPerfMarker_36; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateHandDataPerfMarker_36() { return &___UpdateHandDataPerfMarker_36; }
	inline void set_UpdateHandDataPerfMarker_36(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateHandDataPerfMarker_36 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3  : public BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1  : public BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::controllerModelProvider
	WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 * ___controllerModelProvider_30;

public:
	inline static int32_t get_offset_of_controllerModelProvider_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1, ___controllerModelProvider_30)); }
	inline WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 * get_controllerModelProvider_30() const { return ___controllerModelProvider_30; }
	inline WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 ** get_address_of_controllerModelProvider_30() { return &___controllerModelProvider_30; }
	inline void set_controllerModelProvider_30(WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 * value)
	{
		___controllerModelProvider_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerModelProvider_30), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateButtonDataPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateDualAxisDataPerfMarker_29;

public:
	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_StaticFields, ___UpdateButtonDataPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateButtonDataPerfMarker_28() const { return ___UpdateButtonDataPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateButtonDataPerfMarker_28() { return &___UpdateButtonDataPerfMarker_28; }
	inline void set_UpdateButtonDataPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateButtonDataPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_StaticFields, ___UpdateDualAxisDataPerfMarker_29)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateDualAxisDataPerfMarker_29() const { return ___UpdateDualAxisDataPerfMarker_29; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateDualAxisDataPerfMarker_29() { return &___UpdateDualAxisDataPerfMarker_29; }
	inline void set_UpdateDualAxisDataPerfMarker_29(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateDualAxisDataPerfMarker_29 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController
struct HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3  : public WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1
{
public:

public:
};

struct HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::UpdateControllerPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateControllerPerfMarker_31;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_31() { return static_cast<int32_t>(offsetof(HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_StaticFields, ___UpdateControllerPerfMarker_31)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateControllerPerfMarker_31() const { return ___UpdateControllerPerfMarker_31; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateControllerPerfMarker_31() { return &___UpdateControllerPerfMarker_31; }
	inline void set_UpdateControllerPerfMarker_31(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateControllerPerfMarker_31 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917  : public GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverOrigin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObserverOrigin_69;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObservationExtents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldObservationExtents_70;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::oldObserverVolumeType
	int32_t ___oldObserverVolumeType_71;

public:
	inline static int32_t get_offset_of_oldObserverOrigin_69() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917, ___oldObserverOrigin_69)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObserverOrigin_69() const { return ___oldObserverOrigin_69; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObserverOrigin_69() { return &___oldObserverOrigin_69; }
	inline void set_oldObserverOrigin_69(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObserverOrigin_69 = value;
	}

	inline static int32_t get_offset_of_oldObservationExtents_70() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917, ___oldObservationExtents_70)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldObservationExtents_70() const { return ___oldObservationExtents_70; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldObservationExtents_70() { return &___oldObservationExtents_70; }
	inline void set_oldObservationExtents_70(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldObservationExtents_70 = value;
	}

	inline static int32_t get_offset_of_oldObserverVolumeType_71() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917, ___oldObserverVolumeType_71)); }
	inline int32_t get_oldObserverVolumeType_71() const { return ___oldObserverVolumeType_71; }
	inline int32_t* get_address_of_oldObserverVolumeType_71() { return &___oldObserverVolumeType_71; }
	inline void set_oldObserverVolumeType_71(int32_t value)
	{
		___oldObserverVolumeType_71 = value;
	}
};

struct WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ConfigureObserverVolumePerfMarker_68;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_68() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_StaticFields, ___ConfigureObserverVolumePerfMarker_68)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ConfigureObserverVolumePerfMarker_68() const { return ___ConfigureObserverVolumePerfMarker_68; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ConfigureObserverVolumePerfMarker_68() { return &___ConfigureObserverVolumePerfMarker_68; }
	inline void set_ConfigureObserverVolumePerfMarker_68(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ConfigureObserverVolumePerfMarker_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  m_Items[1];

public:
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F  : public RuntimeArray
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
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  m_Items[1];

public:
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_gshared (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mCBE6F9CB6636AD8B23E2FE3ACAAEF1DB047FF0BA_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * ___stateMachine0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m56EB7A59E8A1E9BA78E127EB6432D892B4295B4A_gshared_inline (BaseDataProvider_1_tFB70008137617CC7583F8B8BB03CC5741A8FDCC3 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF8F6D577870A85934643309F5131312E767837DE_gshared (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_gshared (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2__ctor_m8F2F90B9242AB317F1CD9228A1220F9B14CC1782_gshared (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<System.Object>(System.Func`2<!!0,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_m104D492D24EAB7C7FB6EAF4D5F8A3B4F2F14EB3A_gshared (Func_2_t5650431F2BFFD75382D3BA01D19E366CD1DA1813 * ___addMethod0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, RuntimeObject * ___handler2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_mA7F5398C85F721C481833F7483E010A329202EDA_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::RemoveEventHandler<System.Object>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeMarshal_RemoveEventHandler_TisRuntimeObject_mE0BC24518B7795D76C59977465646056F96A9A43_gshared (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod0, RuntimeObject * ___handler1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m8C0AD3EDBD12585FB15C1C31A7A5D508F4861D70_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_m94EDEC2DE06D09289BD856EAEB4DD3CADE12D5C6_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_m2A41350F53B723708DC05867A571698D567963A1_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_m8EE4D9689EE688D6D7FEB1C78557A91D29889B5F_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m9003EEC2ADBF661605E7A1CA2081AD43E649E9FD_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_mD37D650512001555D1C214D6F98557522EC7F197_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  MixedRealityPose_get_ZeroIdentity_m12710B3A247440479DB96616366FE061B2626FF9_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_mF1921E35C95946D812F0D13F69D4BE6889D0A6AC (GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mF07AF36BF7F6ED7AC4A053D99B1D2E92718EA120_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___usage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_TransformPoint_m8EFBEFDC9C39D4949CF8D19075DB3CAD06986502 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mD1A6A1945943E607BEC73C70C17863AE562F763A_inline (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPlayspace_get_Rotation_mDA6E3B52D4C05450A909582156C3977993F52430 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_mA5FD288B815D9C1B59C7B26AA1942A85ACE94153 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m1387B9E9A45101106950767989AC33BAC018C02C_inline (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_mAC9C7F7F98DFC7214B724190D030DF36A3CB21AF (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m1A22FC4F9DF5C556A1C82BD81DB8BC2A58FE2BE0 (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  MixedRealityInteractionMapping_get_MixedRealityInputAction_m0CCA19BDAA0B0DB3E88B731B9DBBC35F057DB4FD_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  MixedRealityInteractionMapping_get_PoseData_mA9ECDFDBEA165CDAF72DDB969E3AAD55513CFA3B_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_m32309C511242555F9F562B6A15184D2AA50AFC81 (GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8 * __this, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionControllerDefinition__ctor_m0789D1C7CABB2AA58A6BDFA91258BFD4A699B048 (HPMotionControllerDefinition_t5B9CD5904E1FAB32B2C0A42428E728DCB152A0E3 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_mEC145A92A6C5894B6AA5B463EA0A5E7F4EE0D3CD (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions4, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_mA38F39BAD5C74A8CECB807B1BB13BCFD6979348A_inline (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_m3DBED83FB08C4D1D6B878ACE8124E7E033E3BCE2 (GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m1333292BD70DC07159D1314B00C808E2D41EAA6D (BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t6DDAC779279FBEF72C8ED23D61B272C188C3391E * ___profile3, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, bool, const RuntimeMethod*))Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared)(__this, ___value0, method);
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityCameraSettings_get_IsActiveLoader_mFF7F4E00A37EC0A85D4EE45011AE7B1AA4F01CED (WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings_EnableIfLoaderBecomesActive_m9100F97BD0A0EA2AA6A08014D61AC24F4E6EC3F2 (WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378 (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Enable_mADE0A398DB74D040161B002BDB2B51934DF6FEDF (BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mCBE6F9CB6636AD8B23E2FE3ACAAEF1DB047FF0BA (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mCBE6F9CB6636AD8B23E2FE3ACAAEF1DB047FF0BA_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * XRSubsystemHelpers_get_DisplaySubsystem_m77D364C52D87A953EF6C2AA1C6C24760D02BAD98 (const RuntimeMethod* method);
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2 (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_m2A854962B3C34204106FD1E4A13CB1CE9B280272 (XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * ___profile3, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityDeviceManager_get_IsActiveLoader_m1A2612FF7A1BFFFC68E89A701DF29106B59DC07A (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_EnableIfLoaderBecomesActive_mEA7627A378E49595698C4DACE37FC9F47C45A5CA (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m4B0FD07AA4FE56C55EF700A4059B8827630333CC_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m21596313DDB2A9CBD0F52D86583E889B1AE550B2 (XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m6AADDF4B898857DA0C833C111025E257BFF208E8_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_inline (BaseDataProvider_1_tF1176E7049F5EF66F15D13259DBDFA885A179B99 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_tF1176E7049F5EF66F15D13259DBDFA885A179B99 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m56EB7A59E8A1E9BA78E127EB6432D892B4295B4A_gshared_inline)(__this, method);
}
// Windows.UI.Input.Spatial.SpatialInteractionManager Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialInteractionManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * WindowsMixedRealityUtilities_get_SpatialInteractionManager_mA46209DF9B8A250CEB563D09ABB5E24D44F8977F (const RuntimeMethod* method);
// System.Void System.Func`2<Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m231EA47CC1CE11ABE3BD58C217349CD8B4DFE4E9 (Func_2_tB362F5B220262126425E449514B973C33DAB89C8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB362F5B220262126425E449514B973C33DAB89C8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF8F6D577870A85934643309F5131312E767837DE_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>::.ctor(System.Object,System.IntPtr)
inline void TypedEventHandler_2__ctor_m549CC0DF215A77A2D52B024C4EDD31BC3C13393F (TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 *, RuntimeObject *, intptr_t, const RuntimeMethod*))TypedEventHandler_2__ctor_m8F2F90B9242AB317F1CD9228A1220F9B14CC1782_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::AddEventHandler<Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>>(System.Func`2<!!0,System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
inline void WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_m28B193FCE386C3217B44FC36CE092D610616FD7A (Func_2_tB362F5B220262126425E449514B973C33DAB89C8 * ___addMethod0, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod1, TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 * ___handler2, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB362F5B220262126425E449514B973C33DAB89C8 *, Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 *, const RuntimeMethod*))WindowsRuntimeMarshal_AddEventHandler_TisRuntimeObject_m104D492D24EAB7C7FB6EAF4D5F8A3B4F2F14EB3A_gshared)(___addMethod0, ___removeMethod1, ___handler2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Enable_mD3BE87DD63DC72307A681C0E31E1DCAB8F37490B (XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_mA7F5398C85F721C481833F7483E010A329202EDA (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_mA7F5398C85F721C481833F7483E010A329202EDA_gshared)(__this, ___stateMachine0, method);
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m5A0B1F5EA9B0070ED34E736BE87DE6469578B234 (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_get_Now_m625CFF49FC7FF31BDB407747FE0E9B9BA5198F30 (const RuntimeMethod* method);
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * PerceptionTimestampHelper_FromHistoricalTargetTime_mE5EDD492B369B34E3FBC77E694A972A221D06E6B (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___targetTime0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialPointerPose Windows.UI.Input.Spatial.SpatialPointerPose::TryGetAtTimestamp(Windows.Perception.Spatial.SpatialCoordinateSystem,Windows.Perception.PerceptionTimestamp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * SpatialPointerPose_TryGetAtTimestamp_m09745662DE8E5ACDF2EE624ACF76FAF592B7EF86 (SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * ___coordinateSystem0, PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * ___timestamp1, const RuntimeMethod* method);
// Windows.Perception.People.HeadPose Windows.UI.Input.Spatial.SpatialPointerPose::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * SpatialPointerPose_get_Head_mC788CD23770CD682FC645D987F6C91B9768AC60A (SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * __this, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  HeadPose_get_Position_m06A502BCF1C798A30D4AE9AF5CC1F173E166117E (HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SystemNumericsExtensions_ToUnityVector3_mE2C79A2291D1195DDBC63FC071E0BC9F9A5E38F4 (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___vector0, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_ForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  HeadPose_get_ForwardDirection_mA44E69DA5FB2AD26B29A168CF8715CC70B798A0E (HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetOrAddVoiceController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * WindowsMixedRealityDeviceManager_GetOrAddVoiceController_m21F86604D9A5D69B55D32841EFA388EAD5C20233 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::UpdateVoiceState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand_UpdateVoiceState_m67B804E264946F2FA5ED97ED7B31FFDD8BD96165 (WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * __this, bool ___isPressed0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mDC71803EA6776DD66EA7477CDCCD62191726B478 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_None()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  MixedRealityInputAction_get_None_m6F2B10042303E1F456F501B9E6BB804C1EEC4CA2_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SpeechCommands::.ctor(System.String,UnityEngine.KeyCode,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechCommands__ctor_m1DB4C785A27EFD1AFF3F42B122FE8760EA7BF4DE (SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25 * __this, String_t* ___keyword0, int32_t ___keyCode1, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  ___action2, String_t* ___localizationKey3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_mDD12D80F61485C11911C5CF9B2B98BD563320C74 (XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::RemoveEventHandler<Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs>>(System.Action`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>,!!0)
inline void WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_mC253CD8EFDD989B8058E121205E0E4E291C9E7DA (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * ___removeMethod0, TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 * ___handler1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *, TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 *, const RuntimeMethod*))WindowsRuntimeMarshal_RemoveEventHandler_TisRuntimeObject_mE0BC24518B7795D76C59977465646056F96A9A43_gshared)(___removeMethod0, ___handler1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerFromScene(Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_RemoveControllerFromScene_m885982EBE3FEE755D3A51B05A7AC58390C9FEC41 (XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19 * __this, GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8 * ___controller0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Disable_m060238EBDB72425C4864CEA14B9B43656677A8CC (XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_mACD3CA4CAE035B83E3624EB196412C7F184868F3 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Boolean Windows.UI.Input.Spatial.SpatialInteractionManager::IsSourceKindSupported(Windows.UI.Input.Spatial.SpatialInteractionSourceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialInteractionManager_IsSourceKindSupported_m3C9C45FE30F13335A98657836A1292915859AD05 (int32_t ___kind0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_m80B70669CD501D97BEFDAACEB7C10E1E1F8AF3B1 (XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mDD9B9F7E039B0CDAB7D8E82C5F4AFB06B170CDE2 (XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.FlagsExtensions::IsMaskSet(UnityEngine.XR.InputDeviceCharacteristics,UnityEngine.XR.InputDeviceCharacteristics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlagsExtensions_IsMaskSet_mAA31629C8A3C0140D8A49DDD508D19041C3E8D0B (uint32_t ___a0, uint32_t ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___usage0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___value1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_m4DB2C78785C7F329165FDA91C724E47475659836 (XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionSourceState Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * SpatialInteractionSourceEventArgs_get_State_m11C6E166161803A0AC473BB5930930A6D9F59E01 (SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF * __this, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionSource Windows.UI.Input.Spatial.SpatialInteractionSourceState::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * SpatialInteractionSourceState_get_Source_mDFBB7ECDC326D42075DCF0B8D5779B7D11EAFD8F (SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * __this, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionSourceKind Windows.UI.Input.Spatial.SpatialInteractionSource::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialInteractionSource_get_Kind_mB837C9DC9D8F931CF39DDD57BF2BA08A67B71563 (SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand__ctor_mBC57420CBC8321418EF5D0017E2044958FA66CB1 (WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions3, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputDeviceManager__ctor_m4BD69E108F8A5070DDB437D33EBE0EF6C4826B28 (BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother__ctor_mC575BE11E4957C895C0F10E966CE472897A8BE93 (EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccade_m0AB4BC65A75A4D1D32CA854AE4579CF0AFFF7F27 (EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccadeX_m638AEDC212F3388788AAABF6F6AE85563425CC1C (EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.EyeGazeSmoother::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EyeGazeSmoother_add_OnSaccadeY_mD3DB90819CBE61B845EAAC0907EAE40FD4900387 (EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_m39BECDEAC511037E21F7CF3498561872C4052737 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_EnableIfLoaderBecomesActive_mEC24EC70ED78D84D62494678E31DFCF54229059B (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m9E4B58C03CC9A702A4938AADBABDFBD9F11E9531 (BaseService_tFBD69E39214698BB0A91DAA102EFBB8B593EFA17 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m8C0AD3EDBD12585FB15C1C31A7A5D508F4861D70 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m8C0AD3EDBD12585FB15C1C31A7A5D508F4861D70_gshared)(__this, ___stateMachine0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_mBE9925C2C7532ABA8BF5B2C6EF0A90BEB231CBF8 (GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * XRSubsystemHelpers_get_MeshSubsystem_m9FC5E569B04F662B1C62697BB3E28316008DE20A (const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_m22B83CE7FFF3515A7A101B1E5A2255A58348F607_inline (BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_mC4089533E55F3846A2E556B655D39B25ACD63F14_inline (BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m85B3C63586D0D3078DB74B852A088FA48B325069_inline (BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityPlayspace_InverseTransformPoint_m9B44BC9E3C6C9029E8FD10A89643FE3B41F36754 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92 (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___extents1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_mFF3EC80319B1A35DE235143886E1A3B8475D4F3C (ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_mAD22F208A98ADEBD004AF7FC7FD9E261EAA8A481 (BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * WindowsMixedRealityHandMeshProvider_get_Right_m6B2FBBF5E699D48F7806A95A4F30020657B8BB44_inline (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * WindowsMixedRealityHandMeshProvider_get_Left_mF44C248411D5A22B533F5A7E0433BB4E0AFF04AB_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::SetInputSource(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_SetInputSource_mE31C1F13BCD341C4D25C585384A6C575B7B54C82 (WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * __this, RuntimeObject* ___inputSource0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::op_Inequality(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityPose_op_Inequality_m27F804A9212BB4CE2E1008EF2C201919220F6CFD (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___left0, MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  ___right1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_m892166398DBAA4CA61AA35407EFF5F8245C51EA5 (ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m28BDCE7EBCE6AFEE64E49AAA76E51922AD21CC88 (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* BaseController_get_Interactions_m34A9D825A44CA3153C0F354DAE9D23D52E110C84_inline (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_mFF552AF7F950170623B082C76304F4E1ACE06B8A (ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * __this, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * ___interactionMapping0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentTeleportPose_mDD08C67A8744D43B5EAF1E31EDC2E9840AE7698A (ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * __this, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * ___interactionMapping0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___usage0, Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * ___value1, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::get_JointCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArticulatedHandPose_get_JointCount_mD216D8BBB999CA55652BDA391D3462507735B4AC_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, int32_t ___finger0, List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * ___bonesOut1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, int32_t, const RuntimeMethod*))List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToArrayIndex(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToArrayIndex_m63890CD6A7881B5719F7949BE45E9B3E89E8223F (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_mCB0573EAA88DBE88FABF4D5E1D8CB165392690E0 (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *, const RuntimeMethod*))List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_m4F32A5FE103D399290226F23D2A2D0AFCC1F332D_inline (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_m1744AA7AE2742E22815C0744F3ED5051AF9C73C7 (ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * __this, MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* ___jointPoses0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m6A159A71A6FEAA80D37B65ECBD566AA078ADFA58 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleHandDefinition__ctor_mF94C751121016D3C029D4899ED97CB6C1FD39110 (SimpleHandDefinition_t96427670B317B134AD65F9A253B39E26D2266227 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mAEF66F69990EBF4A445469D118AC6E0CDD3A02FF_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_m8A9E73300A92A0423E576A780DD9E6EE8841ADF2 (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m3105F21601C32387966B1DF076274C20034225D6_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerDefinition__ctor_m26FDD65F1EA0EC7C1EC97131870D973F3E7640A6 (WindowsMixedRealityControllerDefinition_tA82FB0DEEADBCE3C09FAE194C17F0950CFE41F5C * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_mE28B8CDD12D63E93F8DBAB5025D6797376C22D9B (GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8 * __this, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_mCB361EB2E941BB3C038E6EC0B01049286B19C55D (GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8 * __this, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m0A273664D1E1BD11CE84D04D7EA0EBFC82EB3334 (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_m666DAB155596B3FA917C80AF8040171F128AD033_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.BaseController::GetControllerVisualizationProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC * BaseController_GetControllerVisualizationProfile_mED067AFCDE8AD021DF4302F6317BDF733DEDBDD3 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile::GetUsePlatformModelsOverride(System.Type,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityControllerVisualizationProfile_GetUsePlatformModelsOverride_mCEF6CB7F56A979A6E2DB9AA1D7798EAECD474558 (MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC * __this, Type_t * ___controllerType0, uint8_t ___hand1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::TryRenderControllerModel(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseController_TryRenderControllerModel_m48F2939EB864D97B5BA473C757CB57394D288F83 (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModelWithModelProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_m065563D873F8873E92AE1390C609993814898FE2 (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_m94EDEC2DE06D09289BD856EAEB4DD3CADE12D5C6 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_m94EDEC2DE06D09289BD856EAEB4DD3CADE12D5C6_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37 (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mA30A9D7AFC9D486B98B669F9B0B5553C3F31C83A (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **, U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_m2A41350F53B723708DC05867A571698D567963A1_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429 (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m9A90A8290239E49DFE5908A31E393505AB8604F5 (U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m1CE6237A8482D64E63A118616E18CE5FF9AC8237 (U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_m28C2F24D301DB62BEABDD86A1A1307BC743BF405 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **, U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_m8EE4D9689EE688D6D7FEB1C78557A91D29889B5F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m924511FE3A7ABC2D9C24594ECB6D348937062FD7 (U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m67DE3827AD9E5120292BA17DD4004A3C24EBD45B (U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Utilities.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_mD79C89C6DC93D4F70249293DF81E2D4A901697B1 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A ** ___awaiter0, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **, U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m9003EEC2ADBF661605E7A1CA2081AD43E649E9FD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__23_MoveNext_m715E38AE6544AF25F9852EBC1DB8704C8F63EC8A (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__23_SetStateMachine_mA4BBC6F94BE999AA10A9699C851117E493A0EBEE (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerModelProvider__ctor_m65B1F0CD5339BEC885E78331E1809653DD6F730F (WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityControllerModelProvider::TryGenerateControllerModelFromPlatformSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * WindowsMixedRealityControllerModelProvider_TryGenerateControllerModelFromPlatformSDK_m5F27390BF37F33EF66AB212C252D12E4E50D4F43 (WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<UnityEngine.GameObject>::GetAwaiter()
inline TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631 (Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  (*) (Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>,Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_mE6F0801CCB94CC179ED8B8CDC9BE90DA350B2C15 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * ___awaiter0, U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_mD37D650512001555D1C214D6F98557522EC7F197_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.GameObject>::GetResult()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2 (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerModelHelpers::TryAddVisualizationScript(UnityEngine.GameObject,System.Type,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityControllerModelHelpers_TryAddVisualizationScript_m32DB2B398644445EE4DA6899774BE27BA8BFD03C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controllerModel0, Type_t * ___controllerType1, uint8_t ___handedness2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::TryAddControllerModelToSceneHierarchy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseController_TryAddControllerModelToSceneHierarchy_m987ED29A8C97E69F03BFBA1B6FC4BB5C695CDCF7 (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controllerObject0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::<>n__0(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_U3CU3En__0_mD8B51C85A8DE663D73DF60B1F56152D30118C44C (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_mDDE2996834FB55828125BC65AE626F570931514D (U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_m499466B52B2899D6DE5674608FC5A389692822D3 (U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m2A9C5852FDDF2F191716E29F8BD5E5478E1EEA87 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC2227A5AAC0C2D1C5F2C97BB3A5937B8CE368ACA (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mDA03BFD5DF47FFF880309A31A2DC8454EDFAB08B (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_mAD22F208A98ADEBD004AF7FC7FD9E261EAA8A481 (BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_24(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mB872ACF032ACC4D32EE3472D98A9694205AE2C8D(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_25(L_1);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var);
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_2;
		L_2 = MixedRealityPose_get_ZeroIdentity_m12710B3A247440479DB96616366FE061B2626FF9_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_26(L_2);
		// : base(trackingState, sourceHandedness, inputSource, interactions, definition)
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___sourceHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_6 = ___interactions3;
		RuntimeObject* L_7 = ___definition4;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_mF1921E35C95946D812F0D13F69D4BE6889D0A6AC(__this, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_m7006FDFC969DED6E736765F3CC9769F6E09C6958 (BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2 * __this, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_27();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mF07AF36BF7F6ED7AC4A053D99B1D2E92718EA120_inline(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)3))))
			{
				goto IL_00b1;
			}
		}

IL_001a:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_4 = ((CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_il2cpp_TypeInfo_var))->get_PointerPosition_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_currentPointerPosition_24();
			bool L_6;
			L_6 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
			MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * L_7 = __this->get_address_of_currentPointerPose_26();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_currentPointerPosition_24();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
			L_9 = MixedRealityPlayspace_TransformPoint_m8EFBEFDC9C39D4949CF8D19075DB3CAD06986502(L_8, /*hidden argument*/NULL);
			MixedRealityPose_set_Position_mD1A6A1945943E607BEC73C70C17863AE562F763A_inline((MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B *)L_7, L_9, /*hidden argument*/NULL);
		}

IL_0044:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_10 = ((CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_t90400C6E55D5B1F14C847CE3A917918C57E410CE_il2cpp_TypeInfo_var))->get_PointerRotation_1();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_11 = __this->get_address_of_currentPointerRotation_25();
			bool L_12;
			L_12 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0073;
			}
		}

IL_0058:
		{
			// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
			MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * L_13 = __this->get_address_of_currentPointerPose_26();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
			L_14 = MixedRealityPlayspace_get_Rotation_mDA6E3B52D4C05450A909582156C3977993F52430(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = __this->get_currentPointerRotation_25();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
			L_16 = Quaternion_op_Multiply_mA5FD288B815D9C1B59C7B26AA1942A85ACE94153(L_14, L_15, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m1387B9E9A45101106950767989AC33BAC018C02C_inline((MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B *)L_13, L_16, /*hidden argument*/NULL);
		}

IL_0073:
		{
			// interactionMapping.PoseData = currentPointerPose;
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_17 = ___interactionMapping0;
			MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_18 = __this->get_currentPointerPose_26();
			NullCheck(L_17);
			MixedRealityInteractionMapping_set_PoseData_mAC9C7F7F98DFC7214B724190D030DF36A3CB21AF(L_17, L_18, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_19 = ___interactionMapping0;
			NullCheck(L_19);
			bool L_20;
			L_20 = MixedRealityInteractionMapping_get_Changed_m1A22FC4F9DF5C556A1C82BD81DB8BC2A58FE2BE0(L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00b9;
			}
		}

IL_0087:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_21;
			L_21 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
			RuntimeObject* L_22 = L_21;
			G_B8_0 = L_22;
			if (L_22)
			{
				G_B9_0 = L_22;
				goto IL_0092;
			}
		}

IL_008f:
		{
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_0092:
		{
			RuntimeObject* L_23;
			L_23 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(__this, /*hidden argument*/NULL);
			uint8_t L_24;
			L_24 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_25 = ___interactionMapping0;
			NullCheck(L_25);
			MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_26;
			L_26 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m0CCA19BDAA0B0DB3E88B731B9DBBC35F057DB4FD_inline(L_25, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_27 = ___interactionMapping0;
			NullCheck(L_27);
			MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_28;
			L_28 = MixedRealityInteractionMapping_get_PoseData_mA9ECDFDBEA165CDAF72DDB969E3AAD55513CFA3B_inline(L_27, /*hidden argument*/NULL);
			NullCheck(G_B9_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC , MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  >::Invoke(45 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B9_0, L_23, L_24, L_26, L_28);
			// break;
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}

IL_00b1:
		{
			// base.UpdatePoseData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_29 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_30 = ___inputDevice1;
			GenericXRSDKController_UpdatePoseData_m32309C511242555F9F562B6A15184D2AA50AFC81(__this, L_29, L_30, /*hidden argument*/NULL);
		}

IL_00b9:
		{
			// }
			IL2CPP_LEAVE(0xC9, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__cctor_mD96A54FBE20912EB14D74839403DF656B865DA4E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] BaseWindowsMixedRealityXRSDKSource.UpdatePoseData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral5A5BE3D9EC03D84AA06ACF74FA1941F878D4B478, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_27(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController__ctor_mE3365F8CDDFD8059539B04B39D6EAB29913BF4D1 (HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionControllerDefinition_t5B9CD5904E1FAB32B2C0A42428E728DCB152A0E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, new HPMotionControllerDefinition(controllerHandedness), inputSource, interactions)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		uint8_t L_2 = ___controllerHandedness1;
		HPMotionControllerDefinition_t5B9CD5904E1FAB32B2C0A42428E728DCB152A0E3 * L_3 = (HPMotionControllerDefinition_t5B9CD5904E1FAB32B2C0A42428E728DCB152A0E3 *)il2cpp_codegen_object_new(HPMotionControllerDefinition_t5B9CD5904E1FAB32B2C0A42428E728DCB152A0E3_il2cpp_TypeInfo_var);
		HPMotionControllerDefinition__ctor_m0789D1C7CABB2AA58A6BDFA91258BFD4A699B048(L_3, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_5 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var);
		WindowsMixedRealityXRSDKMotionController__ctor_mEC145A92A6C5894B6AA5B463EA0A5E7F4EE0D3CD(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController_UpdateController_m91FBDCF1FEB59BCB869CCEB766C0E191DE502DF8 (HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_StaticFields*)il2cpp_codegen_static_fields_for(HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_31();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (!Enabled) { return; }
			bool L_2;
			L_2 = BaseController_get_Enabled_mA38F39BAD5C74A8CECB807B1BB13BCFD6979348A_inline(__this, /*hidden argument*/NULL);
			if (L_2)
			{
				goto IL_0018;
			}
		}

IL_0016:
		{
			// if (!Enabled) { return; }
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}

IL_0018:
		{
			// base.UpdateController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m3DBED83FB08C4D1D6B878ACE8124E7E033E3BCE2(__this, L_3, /*hidden argument*/NULL);
			// }
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController__cctor_m7EBC435F690D6D61F479FA67364EC8986259EF5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] HPController.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral2D17FEBF4804F05DE32748DA39E72ABF808EAB75, /*hidden argument*/NULL);
		((HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_StaticFields*)il2cpp_codegen_static_fields_for(HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_31(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings__ctor_m4A56A2C9B1C8C5A064C507D492DB45D666E52EAE (WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t6DDAC779279FBEF72C8ED23D61B272C188C3391E * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t6DDAC779279FBEF72C8ED23D61B272C188C3391E * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_t799394FB4D87F82A241F45CD5B7D9945F5C3E214_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityCameraSettings__ctor_m1333292BD70DC07159D1314B00C808E2D41EAA6D(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityCameraSettings_get_IsActiveLoader_mFF7F4E00A37EC0A85D4EE45011AE7B1AA4F01CED (WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings_Enable_mAAED3E595387D96B52D2BCF315F7FF434BA5289E (WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityCameraSettings_get_IsActiveLoader_mFF7F4E00A37EC0A85D4EE45011AE7B1AA4F01CED(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		WindowsMixedRealityCameraSettings_EnableIfLoaderBecomesActive_m9100F97BD0A0EA2AA6A08014D61AC24F4E6EC3F2(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_2;
		L_2 = WindowsMixedRealityCameraSettings_get_IsActiveLoader_mFF7F4E00A37EC0A85D4EE45011AE7B1AA4F01CED(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// base.Enable();
		BaseWindowsMixedRealityCameraSettings_Enable_mADE0A398DB74D040161B002BDB2B51934DF6FEDF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings_EnableIfLoaderBecomesActive_m9100F97BD0A0EA2AA6A08014D61AC24F4E6EC3F2 (WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mCBE6F9CB6636AD8B23E2FE3ACAAEF1DB047FF0BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mCBE6F9CB6636AD8B23E2FE3ACAAEF1DB047FF0BA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mCBE6F9CB6636AD8B23E2FE3ACAAEF1DB047FF0BA_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_get_IsOpaque_mD318F11E2DB69D7441B97B896457233446CF808B (WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRSubsystemHelpers.DisplaySubsystem == null
		// || !XRSubsystemHelpers.DisplaySubsystem.running
		// || XRSubsystemHelpers.DisplaySubsystem.displayOpaque;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_0;
		L_0 = XRSubsystemHelpers_get_DisplaySubsystem_m77D364C52D87A953EF6C2AA1C6C24760D02BAD98(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_1;
		L_1 = XRSubsystemHelpers_get_DisplaySubsystem_m77D364C52D87A953EF6C2AA1C6C24760D02BAD98(/*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = IntegratedSubsystem_get_running_m3C6870588AA0F9816A3947F045BCB8F5662A9EC2(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_3;
		L_3 = XRSubsystemHelpers_get_DisplaySubsystem_m77D364C52D87A953EF6C2AA1C6C24760D02BAD98(/*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::<EnableIfLoaderBecomesActive>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mA91EB04CA7E6F2D2FCB4B857413A9CA7D4C68651 (WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityCameraSettings_get_IsActiveLoader_mFF7F4E00A37EC0A85D4EE45011AE7B1AA4F01CED(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager__ctor_mF065413E3159665AD9FB6F4220829CDE99FBE7D0 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_t223D446B8205043257A6236097507F8EDC28CA19_il2cpp_TypeInfo_var);
		XRSDKDeviceManager__ctor_m2A854962B3C34204106FD1E4A13CB1CE9B280272(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityDeviceManager_get_IsActiveLoader_m1A2612FF7A1BFFFC68E89A701DF29106B59DC07A (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Enable_m072631F1C8B707756BEB5C8DF3C1ACF7D9478CA0 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m231EA47CC1CE11ABE3BD58C217349CD8B4DFE4E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB362F5B220262126425E449514B973C33DAB89C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_tAB1EB10B2EA456CB8C74EA4B7D04053D44E2D8E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2__ctor_m549CC0DF215A77A2D52B024C4EDD31BC3C13393F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityDeviceManager_SpatialInteractionManager_SourcePressed_m0EAEFC4CEFE6DBE9A6DF4E59A1EA98111F995EA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_m28B193FCE386C3217B44FC36CE092D610616FD7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * V_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * G_B8_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * G_B7_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * G_B9_1 = NULL;
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m1A2612FF7A1BFFFC68E89A701DF29106B59DC07A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		WindowsMixedRealityDeviceManager_EnableIfLoaderBecomesActive_mEA7627A378E49595698C4DACE37FC9F47C45A5CA(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// else if (!IsActiveLoader.Value)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_2;
		L_2 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m1A2612FF7A1BFFFC68E89A701DF29106B59DC07A(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// if (WindowsMixedRealityUtilities.UtilitiesProvider == null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m4B0FD07AA4FE56C55EF700A4059B8827630333CC_inline(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		// WindowsMixedRealityUtilities.UtilitiesProvider = new XRSDKWindowsMixedRealityUtilitiesProvider();
		XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3 * L_5 = (XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3 *)il2cpp_codegen_object_new(XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3_il2cpp_TypeInfo_var);
		XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m21596313DDB2A9CBD0F52D86583E889B1AE550B2(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		WindowsMixedRealityUtilities_set_UtilitiesProvider_m6AADDF4B898857DA0C833C111025E257BFF208E8_inline(L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// mixedRealityGazeProviderHeadOverride = Service?.GazeProvider as IMixedRealityGazeProviderHeadOverride;
		RuntimeObject* L_6;
		L_6 = BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_RuntimeMethod_var);
		RuntimeObject* L_7 = L_6;
		G_B7_0 = L_7;
		G_B7_1 = __this;
		if (L_7)
		{
			G_B8_0 = L_7;
			G_B8_1 = __this;
			goto IL_0055;
		}
	}
	{
		G_B9_0 = ((RuntimeObject*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_005a;
	}

IL_0055:
	{
		NullCheck(G_B8_0);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B8_0);
		G_B9_0 = L_8;
		G_B9_1 = G_B8_1;
	}

IL_005a:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_mixedRealityGazeProviderHeadOverride_29(((RuntimeObject*)IsInst((RuntimeObject*)G_B9_0, IMixedRealityGazeProviderHeadOverride_tAB1EB10B2EA456CB8C74EA4B7D04053D44E2D8E6_il2cpp_TypeInfo_var)));
		// WindowsMixedRealityUtilities.SpatialInteractionManager.SourcePressed += SpatialInteractionManager_SourcePressed;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_9;
		L_9 = WindowsMixedRealityUtilities_get_SpatialInteractionManager_mA46209DF9B8A250CEB563D09ABB5E24D44F8977F(/*hidden argument*/NULL);
		V_1 = L_9;
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_10 = V_1;
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_11 = L_10;
		Func_2_tB362F5B220262126425E449514B973C33DAB89C8 * L_12 = (Func_2_tB362F5B220262126425E449514B973C33DAB89C8 *)il2cpp_codegen_object_new(Func_2_tB362F5B220262126425E449514B973C33DAB89C8_il2cpp_TypeInfo_var);
		Func_2__ctor_m231EA47CC1CE11ABE3BD58C217349CD8B4DFE4E9(L_12, L_11, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_11, 4)), /*hidden argument*/Func_2__ctor_m231EA47CC1CE11ABE3BD58C217349CD8B4DFE4E9_RuntimeMethod_var);
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_13 = V_1;
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_14 = L_13;
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_15 = (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)il2cpp_codegen_object_new(Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F(L_15, L_14, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_14, 5)), /*hidden argument*/Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 * L_16 = (TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 *)il2cpp_codegen_object_new(TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_il2cpp_TypeInfo_var);
		TypedEventHandler_2__ctor_m549CC0DF215A77A2D52B024C4EDD31BC3C13393F(L_16, __this, (intptr_t)((intptr_t)WindowsMixedRealityDeviceManager_SpatialInteractionManager_SourcePressed_m0EAEFC4CEFE6DBE9A6DF4E59A1EA98111F995EA3_RuntimeMethod_var), /*hidden argument*/TypedEventHandler_2__ctor_m549CC0DF215A77A2D52B024C4EDD31BC3C13393F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_m28B193FCE386C3217B44FC36CE092D610616FD7A(L_12, L_15, L_16, /*hidden argument*/WindowsRuntimeMarshal_AddEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_m28B193FCE386C3217B44FC36CE092D610616FD7A_RuntimeMethod_var);
		// base.Enable();
		XRSDKDeviceManager_Enable_mD3BE87DD63DC72307A681C0E31E1DCAB8F37490B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_EnableIfLoaderBecomesActive_mEA7627A378E49595698C4DACE37FC9F47C45A5CA (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_mA7F5398C85F721C481833F7483E010A329202EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_mA7F5398C85F721C481833F7483E010A329202EDA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_mA7F5398C85F721C481833F7483E010A329202EDA_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Update_m3020228D85D1F0F36F1B5323D27C5DE68A538364 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityGazeProviderHeadOverride_tAB1EB10B2EA456CB8C74EA4B7D04053D44E2D8E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0226F08F1363B72919374BC9F1AABA0AF07295F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * V_0 = NULL;
	HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * V_1 = NULL;
	WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * V_2 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// if (!IsEnabled)
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (mixedRealityGazeProviderHeadOverride != null && mixedRealityGazeProviderHeadOverride.UseHeadGazeOverride && WindowsMixedRealityUtilities.SpatialCoordinateSystem != null)
		RuntimeObject* L_1 = __this->get_mixedRealityGazeProviderHeadOverride_29();
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_mixedRealityGazeProviderHeadOverride_29();
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_tAB1EB10B2EA456CB8C74EA4B7D04053D44E2D8E6_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_4;
		L_4 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m5A0B1F5EA9B0070ED34E736BE87DE6469578B234(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		// SpatialPointerPose pointerPose = SpatialPointerPose.TryGetAtTimestamp(WindowsMixedRealityUtilities.SpatialCoordinateSystem, PerceptionTimestampHelper.FromHistoricalTargetTime(DateTimeOffset.Now));
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_tE725D75CEA43BDDBAED4C82E5D07CD995207ABAB * L_5;
		L_5 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m5A0B1F5EA9B0070ED34E736BE87DE6469578B234(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_6;
		L_6 = DateTimeOffset_get_Now_m625CFF49FC7FF31BDB407747FE0E9B9BA5198F30(/*hidden argument*/NULL);
		PerceptionTimestamp_t127CA82E41EFF8B63EFD0DB25B78EA2947E3DCBC * L_7;
		L_7 = PerceptionTimestampHelper_FromHistoricalTargetTime_mE5EDD492B369B34E3FBC77E694A972A221D06E6B(L_6, /*hidden argument*/NULL);
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_8;
		L_8 = SpatialPointerPose_TryGetAtTimestamp_m09745662DE8E5ACDF2EE624ACF76FAF592B7EF86(L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// if (pointerPose != null)
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		// HeadPose head = pointerPose.Head;
		SpatialPointerPose_t93E56D80B6F36578FDB0C4FE0DAC5D1E5878F5EC * L_10 = V_0;
		NullCheck(L_10);
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_11;
		L_11 = SpatialPointerPose_get_Head_mC788CD23770CD682FC645D987F6C91B9768AC60A(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (head != null)
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_12 = V_1;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// mixedRealityGazeProviderHeadOverride.OverrideHeadGaze(head.Position.ToUnityVector3(), head.ForwardDirection.ToUnityVector3());
		RuntimeObject* L_13 = __this->get_mixedRealityGazeProviderHeadOverride_29();
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_14 = V_1;
		NullCheck(L_14);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_15;
		L_15 = HeadPose_get_Position_m06A502BCF1C798A30D4AE9AF5CC1F173E166117E(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = SystemNumericsExtensions_ToUnityVector3_mE2C79A2291D1195DDBC63FC071E0BC9F9A5E38F4(L_15, /*hidden argument*/NULL);
		HeadPose_t53F93F0FB48D1E3CBE5685BB50CB34E07153915D * L_17 = V_1;
		NullCheck(L_17);
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_18;
		L_18 = HeadPose_get_ForwardDirection_mA44E69DA5FB2AD26B29A168CF8715CC70B798A0E(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = SystemNumericsExtensions_ToUnityVector3_mE2C79A2291D1195DDBC63FC071E0BC9F9A5E38F4(L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::OverrideHeadGaze(UnityEngine.Vector3,UnityEngine.Vector3) */, IMixedRealityGazeProviderHeadOverride_tAB1EB10B2EA456CB8C74EA4B7D04053D44E2D8E6_il2cpp_TypeInfo_var, L_13, L_16, L_19);
	}

IL_0068:
	{
		// if (shouldSendVoiceEvents)
		bool L_20 = __this->get_shouldSendVoiceEvents_31();
		if (!L_20)
		{
			goto IL_00c7;
		}
	}
	{
		// WindowsMixedRealityXRSDKGGVHand controller = GetOrAddVoiceController();
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_21;
		L_21 = WindowsMixedRealityDeviceManager_GetOrAddVoiceController_m21F86604D9A5D69B55D32841EFA388EAD5C20233(__this, /*hidden argument*/NULL);
		V_2 = L_21;
		// if (controller != null)
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_22 = V_2;
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		// controller.UpdateVoiceState(true);
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_23 = V_2;
		NullCheck(L_23);
		WindowsMixedRealityXRSDKGGVHand_UpdateVoiceState_m67B804E264946F2FA5ED97ED7B31FFDD8BD96165(L_23, (bool)1, /*hidden argument*/NULL);
		// controller.UpdateVoiceState(false);
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_24 = V_2;
		NullCheck(L_24);
		WindowsMixedRealityXRSDKGGVHand_UpdateVoiceState_m67B804E264946F2FA5ED97ED7B31FFDD8BD96165(L_24, (bool)0, /*hidden argument*/NULL);
		// Service?.RaiseSpeechCommandRecognized(controller.InputSource, RecognitionConfidenceLevel.High, TimeSpan.MinValue, DateTime.Now, new SpeechCommands("select", KeyCode.Alpha1, MixedRealityInputAction.None));
		RuntimeObject* L_25;
		L_25 = BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_RuntimeMethod_var);
		RuntimeObject* L_26 = L_25;
		G_B11_0 = L_26;
		if (L_26)
		{
			G_B12_0 = L_26;
			goto IL_0094;
		}
	}
	{
		goto IL_00c0;
	}

IL_0094:
	{
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_27 = V_2;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_29 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_MinValue_21();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_30;
		L_30 = DateTime_get_Now_mDC71803EA6776DD66EA7477CDCCD62191726B478(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_31;
		L_31 = MixedRealityInputAction_get_None_m6F2B10042303E1F456F501B9E6BB804C1EEC4CA2_inline(/*hidden argument*/NULL);
		SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25  L_32;
		memset((&L_32), 0, sizeof(L_32));
		SpeechCommands__ctor_m1DB4C785A27EFD1AFF3F42B122FE8760EA7BF4DE((&L_32), _stringLiteral0226F08F1363B72919374BC9F1AABA0AF07295F0, ((int32_t)49), L_31, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(G_B12_0);
		InterfaceActionInvoker5< RuntimeObject*, int32_t, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 , DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , SpeechCommands_t6759FDF9C449C09996B73FE46FBB308795450C25  >::Invoke(58 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSpeechCommandRecognized(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.RecognitionConfidenceLevel,System.TimeSpan,System.DateTime,Microsoft.MixedReality.Toolkit.Input.SpeechCommands) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B12_0, L_28, 0, L_29, L_30, L_32);
	}

IL_00c0:
	{
		// shouldSendVoiceEvents = false;
		__this->set_shouldSendVoiceEvents_31((bool)0);
	}

IL_00c7:
	{
		// base.Update();
		XRSDKDeviceManager_Update_mDD12D80F61485C11911C5CF9B2B98BD563320C74(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Disable_m71334A906AC2A6F0EFFEF18CCAA47BF7EA5280CA (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2__ctor_m549CC0DF215A77A2D52B024C4EDD31BC3C13393F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityDeviceManager_SpatialInteractionManager_SourcePressed_m0EAEFC4CEFE6DBE9A6DF4E59A1EA98111F995EA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_mC253CD8EFDD989B8058E121205E0E4E291C9E7DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WindowsMixedRealityUtilities.SpatialInteractionManager.SourcePressed -= SpatialInteractionManager_SourcePressed;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_0;
		L_0 = WindowsMixedRealityUtilities_get_SpatialInteractionManager_mA46209DF9B8A250CEB563D09ABB5E24D44F8977F(/*hidden argument*/NULL);
		SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * L_1 = L_0;
		Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 * L_2 = (Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3 *)il2cpp_codegen_object_new(Action_1_t91FC536003CAB9AB56B84E901AE08156372856E3_il2cpp_TypeInfo_var);
		Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F(L_2, L_1, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_1, 5)), /*hidden argument*/Action_1__ctor_mD0267F7A639E3D0942B0F857B2E1504CE4D6D83F_RuntimeMethod_var);
		TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 * L_3 = (TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67 *)il2cpp_codegen_object_new(TypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_il2cpp_TypeInfo_var);
		TypedEventHandler_2__ctor_m549CC0DF215A77A2D52B024C4EDD31BC3C13393F(L_3, __this, (intptr_t)((intptr_t)WindowsMixedRealityDeviceManager_SpatialInteractionManager_SourcePressed_m0EAEFC4CEFE6DBE9A6DF4E59A1EA98111F995EA3_RuntimeMethod_var), /*hidden argument*/TypedEventHandler_2__ctor_m549CC0DF215A77A2D52B024C4EDD31BC3C13393F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeMarshal_tAE4E67BE9C94FAC1EED224E7B5EEF8AF9FF95C0D_il2cpp_TypeInfo_var);
		WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_mC253CD8EFDD989B8058E121205E0E4E291C9E7DA(L_2, L_3, /*hidden argument*/WindowsRuntimeMarshal_RemoveEventHandler_TisTypedEventHandler_2_t7FFCF378843CF21E5467B1E4BE1B7215C518DC67_mC253CD8EFDD989B8058E121205E0E4E291C9E7DA_RuntimeMethod_var);
		// if (voiceController != null)
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_4 = __this->get_voiceController_30();
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// RemoveControllerFromScene(voiceController);
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_5 = __this->get_voiceController_30();
		XRSDKDeviceManager_RemoveControllerFromScene_m885982EBE3FEE755D3A51B05A7AC58390C9FEC41(__this, L_5, /*hidden argument*/NULL);
		// voiceController = null;
		__this->set_voiceController_30((WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 *)NULL);
	}

IL_003d:
	{
		// base.Disable();
		XRSDKDeviceManager_Disable_m060238EBDB72425C4864CEA14B9B43656677A8CC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_CheckCapability_m93EDF67F22D49816724BE952CF2985B1E81E1302 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WindowsApiChecker.IsMethodAvailable(
		//     "Windows.UI.Input.Spatial",
		//     "SpatialInteractionManager",
		//     "IsSourceKindSupported"))
		bool L_0;
		L_0 = WindowsApiChecker_IsMethodAvailable_mACD3CA4CAE035B83E3624EB196412C7F184868F3(_stringLiteral81F8D5A2B14C55B9620FD335C1C81C032F2D97AE, _stringLiteral8F991A577B59807EF90D8A8D94880C28E92D7D4E, _stringLiteral128270CB9B422C506B33DF7B8F1F3DC8C29B370E, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_1 = ___capability0;
		if ((!(((uint32_t)L_1) > ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___capability0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004b;
	}

IL_0020:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Hand);
		bool L_3;
		L_3 = SpatialInteractionManager_IsSourceKindSupported_m3C9C45FE30F13335A98657836A1292915859AD05(1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0027:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Controller);
		bool L_4;
		L_4 = SpatialInteractionManager_IsSourceKindSupported_m3C9C45FE30F13335A98657836A1292915859AD05(3, /*hidden argument*/NULL);
		return L_4;
	}

IL_002e:
	{
		// if (XRSubsystemHelpers.DisplaySubsystem != null && !XRSubsystemHelpers.DisplaySubsystem.displayOpaque)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_5;
		L_5 = XRSubsystemHelpers_get_DisplaySubsystem_m77D364C52D87A953EF6C2AA1C6C24760D02BAD98(/*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * L_6;
		L_6 = XRSubsystemHelpers_get_DisplaySubsystem_m77D364C52D87A953EF6C2AA1C6C24760D02BAD98(/*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = XRDisplaySubsystem_get_displayOpaque_m2EC8ECB705E0F250C8D27E06BF4C57D5F77FC02F(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		// return capability == MixedRealityCapability.GGVHand;
		int32_t L_8 = ___capability0;
		return (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
	}

IL_0046:
	{
		// return capability == MixedRealityCapability.MotionController;
		int32_t L_9 = ___capability0;
		return (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
	}

IL_004b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WindowsMixedRealityDeviceManager_GetControllerType_m66012B85427648EA78A7EA989F71D2E7AE05FF83 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1024))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0055;
	}

IL_0017:
	{
		int32_t L_3 = ___supportedControllerType0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = ___supportedControllerType0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0055;
	}

IL_0029:
	{
		// return typeof(WindowsMixedRealityXRSDKMotionController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		// return typeof(HPMotionController);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (HPMotionController_t7689A85CB3ED3467DA2B793BD6EEFFA8CFA50DB3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_003f:
	{
		// return typeof(WindowsMixedRealityXRSDKArticulatedHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_004a:
	{
		// return typeof(WindowsMixedRealityXRSDKGGVHand);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0055:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_13 = ___supportedControllerType0;
		Type_t * L_14;
		L_14 = XRSDKDeviceManager_GetControllerType_m80B70669CD501D97BEFDAACEB7C10E1E1F8AF3B1(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetInputSourceType_mE0C463CB0229A601579863E54AEB2C416A4D20B1 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___supportedControllerType0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = ___supportedControllerType0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = ___supportedControllerType0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_002b;
	}

IL_0017:
	{
		int32_t L_3 = ___supportedControllerType0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_4 = ___supportedControllerType0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)4096)))))
		{
			goto IL_002b;
		}
	}

IL_0027:
	{
		// return InputSourceType.Controller;
		return (int32_t)(2);
	}

IL_0029:
	{
		// return InputSourceType.Hand;
		return (int32_t)(1);
	}

IL_002b:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_5 = ___supportedControllerType0;
		int32_t L_6;
		L_6 = XRSDKDeviceManager_GetInputSourceType_mDD9B9F7E039B0CDAB7D8E82C5F4AFB06B170CDE2(__this, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_mD1E289E961BBDBAB9ACFD3FD59F76FAA56777FE4 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.HandTracking))
		uint32_t L_0;
		L_0 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_1;
		L_1 = FlagsExtensions_IsMaskSet_mAA31629C8A3C0140D8A49DDD508D19041C3E8D0B(L_0, 8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Left) ||
		//     inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Right))
		uint32_t L_2;
		L_2 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_3;
		L_3 = FlagsExtensions_IsMaskSet_mAA31629C8A3C0140D8A49DDD508D19041C3E8D0B(L_2, ((int32_t)256), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_4;
		L_4 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_5;
		L_5 = FlagsExtensions_IsMaskSet_mAA31629C8A3C0140D8A49DDD508D19041C3E8D0B(L_4, ((int32_t)512), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}

IL_0035:
	{
		// return SupportedControllerType.ArticulatedHand;
		return (int32_t)(((int32_t)1024));
	}

IL_003b:
	{
		// return SupportedControllerType.GGVHand;
		return (int32_t)(((int32_t)2048));
	}

IL_0041:
	{
		// if (inputDevice.characteristics.IsMaskSet(InputDeviceCharacteristics.Controller))
		uint32_t L_6;
		L_6 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), /*hidden argument*/NULL);
		bool L_7;
		L_7 = FlagsExtensions_IsMaskSet_mAA31629C8A3C0140D8A49DDD508D19041C3E8D0B(L_6, ((int32_t)64), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		// if (!inputDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out _))
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_8 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
		bool L_9;
		L_9 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_8, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		// return SupportedControllerType.HPMotionController;
		return (int32_t)(((int32_t)4096));
	}

IL_0067:
	{
		// return SupportedControllerType.WindowsMixedReality;
		return (int32_t)(((int32_t)32));
	}

IL_006a:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_10 = ___inputDevice0;
		int32_t L_11;
		L_11 = XRSDKDeviceManager_GetCurrentControllerType_m4DB2C78785C7F329165FDA91C724E47475659836(__this, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::SpatialInteractionManager_SourcePressed(Windows.UI.Input.Spatial.SpatialInteractionManager,Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_SpatialInteractionManager_SourcePressed_m0EAEFC4CEFE6DBE9A6DF4E59A1EA98111F995EA3 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, SpatialInteractionManager_t61FC60917F547127486B95BB72F11A8CAB4A45A5 * ___sender0, SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF * ___args1, const RuntimeMethod* method)
{
	{
		// if (args.State.Source.Kind == SpatialInteractionSourceKind.Voice)
		SpatialInteractionSourceEventArgs_tD27DCE28BBEE7B9E92E0F66A7D18CE69812E57DF * L_0 = ___args1;
		NullCheck(L_0);
		SpatialInteractionSourceState_t6E721C100623C9060174FE6F6FBAC61D17FDF199 * L_1;
		L_1 = SpatialInteractionSourceEventArgs_get_State_m11C6E166161803A0AC473BB5930930A6D9F59E01(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		SpatialInteractionSource_tF5344A6C35341EF626EAC41ADCDFDCE01154752F * L_2;
		L_2 = SpatialInteractionSourceState_get_Source_mDFBB7ECDC326D42075DCF0B8D5779B7D11EAFD8F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SpatialInteractionSource_get_Kind_mB837C9DC9D8F931CF39DDD57BF2BA08A67B71563(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		// shouldSendVoiceEvents = true;
		__this->set_shouldSendVoiceEvents_31((bool)1);
	}

IL_001a:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetOrAddVoiceController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * WindowsMixedRealityDeviceManager_GetOrAddVoiceController_m21F86604D9A5D69B55D32841EFA388EAD5C20233 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t3BE4DEE2B9A2B52798B355A7D3C80B3359393E9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BFFEE199866CCFED288228943213B9868A52461);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * V_1 = NULL;
	int32_t V_2 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	RuntimeObject* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	int32_t G_B14_1 = 0;
	IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	{
		// if (voiceController != null)
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_0 = __this->get_voiceController_30();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return voiceController;
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_1 = __this->get_voiceController_30();
		return L_1;
	}

IL_000f:
	{
		// IMixedRealityInputSource inputSource = Service?.RequestNewGenericInputSource("Mixed Reality Voice", sourceType: InputSourceType.Voice);
		RuntimeObject* L_2;
		L_2 = BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001c;
		}
	}
	{
		G_B5_0 = ((RuntimeObject*)(NULL));
		goto IL_0028;
	}

IL_001c:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker3< RuntimeObject*, String_t*, IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3*, int32_t >::Invoke(22 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RequestNewGenericInputSource(System.String,Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[],Microsoft.MixedReality.Toolkit.Input.InputSourceType) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B4_0, _stringLiteral4BFFEE199866CCFED288228943213B9868A52461, (IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3*)(IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3*)NULL, 3);
		G_B5_0 = L_4;
	}

IL_0028:
	{
		V_0 = G_B5_0;
		// WindowsMixedRealityXRSDKGGVHand detectedController = new WindowsMixedRealityXRSDKGGVHand(TrackingState.NotTracked, Handedness.None, inputSource);
		RuntimeObject* L_5 = V_0;
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_6 = (WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 *)il2cpp_codegen_object_new(WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3_il2cpp_TypeInfo_var);
		WindowsMixedRealityXRSDKGGVHand__ctor_mBC57420CBC8321418EF5D0017E2044958FA66CB1(L_6, 1, 0, L_5, (MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249*)(MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249*)NULL, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (!detectedController.Enabled)
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = BaseController_get_Enabled_mA38F39BAD5C74A8CECB807B1BB13BCFD6979348A_inline(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		// return null;
		return (WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 *)NULL;
	}

IL_003d:
	{
		// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
		V_2 = 0;
		goto IL_0058;
	}

IL_0041:
	{
		// detectedController.InputSource.Pointers[i].Controller = detectedController;
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* L_11;
		L_11 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t3BE4DEE2B9A2B52798B355A7D3C80B3359393E9C_il2cpp_TypeInfo_var, L_10);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_15 = V_1;
		NullCheck(L_14);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer::set_Controller(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616_il2cpp_TypeInfo_var, L_14, L_15);
		// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0058:
	{
		// for (int i = 0; i < detectedController.InputSource?.Pointers?.Length; i++)
		int32_t L_17 = V_2;
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(L_18, /*hidden argument*/NULL);
		RuntimeObject* L_20 = L_19;
		G_B10_0 = L_20;
		G_B10_1 = L_17;
		if (L_20)
		{
			G_B11_0 = L_20;
			G_B11_1 = L_17;
			goto IL_006f;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_21 = V_4;
		G_B14_0 = L_21;
		G_B14_1 = G_B10_1;
		goto IL_008b;
	}

IL_006f:
	{
		NullCheck(G_B11_0);
		IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* L_22;
		L_22 = InterfaceFuncInvoker0< IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* >::Invoke(0 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_Pointers() */, IMixedRealityInputSource_t3BE4DEE2B9A2B52798B355A7D3C80B3359393E9C_il2cpp_TypeInfo_var, G_B11_0);
		IMixedRealityPointerU5BU5D_tD0842E695B3632D45419367277A08EEA1B2E22F3* L_23 = L_22;
		G_B12_0 = L_23;
		G_B12_1 = G_B11_1;
		if (L_23)
		{
			G_B13_0 = L_23;
			G_B13_1 = G_B11_1;
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_24 = V_4;
		G_B14_0 = L_24;
		G_B14_1 = G_B12_1;
		goto IL_008b;
	}

IL_0084:
	{
		NullCheck(G_B13_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_25), ((int32_t)((int32_t)(((RuntimeArray*)G_B13_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		G_B14_0 = L_25;
		G_B14_1 = G_B13_1;
	}

IL_008b:
	{
		V_3 = G_B14_0;
		int32_t L_26;
		L_26 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_27;
		L_27 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B14_1) < ((int32_t)L_26))? 1 : 0)&(int32_t)L_27)))
		{
			goto IL_0041;
		}
	}
	{
		// Service?.RaiseSourceDetected(detectedController.InputSource, detectedController);
		RuntimeObject* L_28;
		L_28 = BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_mD31563AC3F21F70869F56181D4BF8954B3460D3A_RuntimeMethod_var);
		RuntimeObject* L_29 = L_28;
		G_B16_0 = L_29;
		if (L_29)
		{
			G_B17_0 = L_29;
			goto IL_00ab;
		}
	}
	{
		goto IL_00b7;
	}

IL_00ab:
	{
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_30 = V_1;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(L_30, /*hidden argument*/NULL);
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_32 = V_1;
		NullCheck(G_B17_0);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseSourceDetected(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.IMixedRealityController) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B17_0, L_31, L_32);
	}

IL_00b7:
	{
		// voiceController = detectedController;
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_33 = V_1;
		__this->set_voiceController_30(L_33);
		// return voiceController;
		WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * L_34 = __this->get_voiceController_30();
		return L_34;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::<EnableIfLoaderBecomesActive>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mD842D13D83B7AAF17EFAC71FA2D672CFFA73F0A0 (WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m1A2612FF7A1BFFFC68E89A701DF29106B59DC07A(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider__ctor_m61AF4FCAC9F1F5FF1B9BA8424C1658D5C1CF3C39 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m0D2058B65700347D467D2BED479E6A8EFE6A0C14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mD583389B2306EC4B206347ECBCCC7CD2E3A7E837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m7E182418AA269F88565E7E67FB6845E4ED0DD14E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile) : base(inputSystem, name, priority, profile)
		RuntimeObject* L_0 = ___inputSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseInputDeviceManager_t201F5C40BF7DCE32915BF089572C7E1452E6CBC3_il2cpp_TypeInfo_var);
		BaseInputDeviceManager__ctor_m4BD69E108F8A5070DDB437D33EBE0EF6C4826B28(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// gazeSmoother = new EyeGazeSmoother();
		EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * L_4 = (EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A *)il2cpp_codegen_object_new(EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A_il2cpp_TypeInfo_var);
		EyeGazeSmoother__ctor_mC575BE11E4957C895C0F10E966CE472897A8BE93(L_4, /*hidden argument*/NULL);
		__this->set_gazeSmoother_22(L_4);
		// gazeSmoother.OnSaccade += GazeSmoother_OnSaccade;
		EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * L_5 = __this->get_gazeSmoother_22();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m7E182418AA269F88565E7E67FB6845E4ED0DD14E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		EyeGazeSmoother_add_OnSaccade_m0AB4BC65A75A4D1D32CA854AE4579CF0AFFF7F27(L_5, L_6, /*hidden argument*/NULL);
		// gazeSmoother.OnSaccadeX += GazeSmoother_OnSaccadeX;
		EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * L_7 = __this->get_gazeSmoother_22();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m0D2058B65700347D467D2BED479E6A8EFE6A0C14_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		EyeGazeSmoother_add_OnSaccadeX_m638AEDC212F3388788AAABF6F6AE85563425CC1C(L_7, L_8, /*hidden argument*/NULL);
		// gazeSmoother.OnSaccadeY += GazeSmoother_OnSaccadeY;
		EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * L_9 = __this->get_gazeSmoother_22();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, __this, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mD583389B2306EC4B206347ECBCCC7CD2E3A7E837_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		EyeGazeSmoother_add_OnSaccadeY_mD3DB90819CBE61B845EAAC0907EAE40FD4900387(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_m39BECDEAC511037E21F7CF3498561872C4052737 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_SmoothEyeTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityEyeGazeDataProvider_get_SmoothEyeTracking_m1E0AFA2DB1648AED9186B7349656DD2869D0C749 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = __this->get_U3CSmoothEyeTrackingU3Ek__BackingField_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::set_SmoothEyeTracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_set_SmoothEyeTracking_mCD2C13DEEB5A4603A0594D3B5EC02B15424D17C9 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SmoothEyeTracking { get; set; } = false;
		bool L_0 = ___value0;
		__this->set_U3CSmoothEyeTrackingU3Ek__BackingField_21(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeSaccadeProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::get_SaccadeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityEyeGazeDataProvider_get_SaccadeProvider_m5D0FE6C036E1F4A44651D2551158FEA368338B86 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityEyeSaccadeProvider SaccadeProvider => gazeSmoother;
		EyeGazeSmoother_t6232E8C40ACEC7892C2EB6DF5C69C395C71A7E2A * L_0 = __this->get_gazeSmoother_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccade_mDA3D170DECA16425BE317FD48199F27CAFA7544F (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_23();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccade_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccade(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccade_m6CD5E508AA7C0DB56F5F8AD1BDD404F8F4A6EB1D (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_23();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccade_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccade_m7E182418AA269F88565E7E67FB6845E4ED0DD14E (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccade() => OnSaccade?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccade_23();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccadeX_mDCC7B6AB0435D61ED0F7E49C3E1490686C68B8D8 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_24();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeX_24();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccadeX(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccadeX_mD7FDC39801B44BD9951C3FC2CD89FC244ABFF853 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_24();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeX_24();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccadeX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeX_m0D2058B65700347D467D2BED479E6A8EFE6A0C14 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccadeX() => OnSaccadeX?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeX_24();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::add_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_add_OnSaccadeY_mF7806765DAF80507C9EC645AA46CC9B2B05BF239 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_25();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeY_25();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::remove_OnSaccadeY(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_remove_OnSaccadeY_m3B5AFCBEF179C0E7486F67B9D36972F2CC26A736 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_25();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** L_5 = __this->get_address_of_OnSaccadeY_25();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)L_5, L_6, L_7);
		V_0 = L_8;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::GazeSmoother_OnSaccadeY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_GazeSmoother_OnSaccadeY_mD583389B2306EC4B206347ECBCCC7CD2E3A7E837 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// private void GazeSmoother_OnSaccadeY() => OnSaccadeY?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_OnSaccadeY_25();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_Enable_mDCB58EE73C352684A6711724417320E2FCE9EAFA (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!IsActiveLoader.HasValue)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_m39BECDEAC511037E21F7CF3498561872C4052737(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// EnableIfLoaderBecomesActive();
		WindowsMixedRealityEyeGazeDataProvider_EnableIfLoaderBecomesActive_mEC24EC70ED78D84D62494678E31DFCF54229059B(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// if (!IsActiveLoader.Value)
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_2;
		L_2 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_m39BECDEAC511037E21F7CF3498561872C4052737(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0036:
	{
		// base.Enable();
		BaseService_Enable_m9E4B58C03CC9A702A4938AADBABDFBD9F11E9531(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::EnableIfLoaderBecomesActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityEyeGazeDataProvider_EnableIfLoaderBecomesActive_mEC24EC70ED78D84D62494678E31DFCF54229059B (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m8C0AD3EDBD12585FB15C1C31A7A5D508F4861D70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m8C0AD3EDBD12585FB15C1C31A7A5D508F4861D70((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_m8C0AD3EDBD12585FB15C1C31A7A5D508F4861D70_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityEyeGazeDataProvider_CheckCapability_m2321496F3BED26FC23A59F94F0DEEDD1254C29BA (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	{
		// false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider::<EnableIfLoaderBecomesActive>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityEyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__23_0_m324074274264994948E3D8CB3D95DE797A6D08B1 (WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// await new WaitUntil(() => IsActiveLoader.HasValue);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		L_0 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_m39BECDEAC511037E21F7CF3498561872C4052737(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__ctor_m311A00514BAD16326DBAC7274E9CDC0097856618 (WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 oldObserverOrigin = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_oldObserverOrigin_69(L_0);
		// private Vector3 oldObservationExtents = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m92B6E46FC9A637D20B3A4C1FFAEABFCE095DD4C6(/*hidden argument*/NULL);
		__this->set_oldObservationExtents_70(L_1);
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_2 = ___spatialAwarenessSystem0;
		String_t* L_3 = ___name1;
		uint32_t L_4 = ___priority2;
		BaseMixedRealityProfile_t331E8096727AFCE3BB8E2D97A29CDAE187730D48 * L_5 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_t5B4ECD0CBE363BDF16E92B2DBE4820C5F454D3AD_il2cpp_TypeInfo_var);
		GenericXRSDKSpatialMeshObserver__ctor_mBE9925C2C7532ABA8BF5B2C6EF0A90BEB231CBF8(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  WindowsMixedRealitySpatialMeshObserver_get_IsActiveLoader_m35D43F7B28F968CE2E7DD3EC1BA23EC03E28EEBB (WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// false;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_0), (bool)0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_mB6D253D5C1C60AC760D35F8CDB8EFA4D3B1692BA (WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VolumeType_tD326291637E738F5D7C09F6D1F2D3F61CB792636_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (XRSubsystemHelpers.MeshSubsystem == null
		//     || (oldObserverOrigin == ObserverOrigin
		//     && oldObservationExtents == ObservationExtents
		//     && oldObserverVolumeType == ObserverVolumeType))
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_0;
		L_0 = XRSubsystemHelpers_get_MeshSubsystem_m9FC5E569B04F662B1C62697BB3E28316008DE20A(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_oldObserverOrigin_69();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = BaseSpatialObserver_get_ObserverOrigin_m22B83CE7FFF3515A7A101B1E5A2255A58348F607_inline(__this, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_oldObservationExtents_70();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = BaseSpatialObserver_get_ObservationExtents_mC4089533E55F3846A2E556B655D39B25ACD63F14_inline(__this, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Vector3_op_Equality_m9F1CB12410711435AB1D8B2E454C318AAB4DDBB0(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = __this->get_oldObserverVolumeType_71();
		int32_t L_8;
		L_8 = BaseSpatialObserver_get_ObserverVolumeType_m85B3C63586D0D3078DB74B852A088FA48B325069_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		// return;
		return;
	}

IL_003c:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_9 = ((WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_68();
		V_1 = L_9;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_10;
		L_10 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		{
			// Vector3 observerOriginPlayspace = MixedRealityPlayspace.InverseTransformPoint(ObserverOrigin);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = BaseSpatialObserver_get_ObserverOrigin_m22B83CE7FFF3515A7A101B1E5A2255A58348F607_inline(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
			L_12 = MixedRealityPlayspace_InverseTransformPoint_m9B44BC9E3C6C9029E8FD10A89643FE3B41F36754(L_11, /*hidden argument*/NULL);
			V_2 = L_12;
			// switch (ObserverVolumeType)
			int32_t L_13;
			L_13 = BaseSpatialObserver_get_ObserverVolumeType_m85B3C63586D0D3078DB74B852A088FA48B325069_inline(__this, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_13) == ((uint32_t)1))))
			{
				goto IL_0073;
			}
		}

IL_005f:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolume(observerOriginPlayspace, ObservationExtents);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB28FE79CB8E9CA39458E5845D3FEB444596C4371_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * L_14;
			L_14 = XRSubsystemHelpers_get_MeshSubsystem_m9FC5E569B04F662B1C62697BB3E28316008DE20A(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
			L_16 = BaseSpatialObserver_get_ObservationExtents_mC4089533E55F3846A2E556B655D39B25ACD63F14_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_14);
			bool L_17;
			L_17 = XRMeshSubsystem_SetBoundingVolume_mEEEFB719CE72346BF549DC5245C218F7A5699D92(L_14, L_15, L_16, /*hidden argument*/NULL);
			// break;
			goto IL_008d;
		}

IL_0073:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_18;
			L_18 = BaseSpatialObserver_get_ObserverVolumeType_m85B3C63586D0D3078DB74B852A088FA48B325069_inline(__this, /*hidden argument*/NULL);
			int32_t L_19 = L_18;
			RuntimeObject * L_20 = Box(VolumeType_tD326291637E738F5D7C09F6D1F2D3F61CB792636_il2cpp_TypeInfo_var, &L_19);
			String_t* L_21;
			L_21 = String_Format_m5A16F3ABC59A3E9804E0CB2636849CCD74CEC994(_stringLiteralD97DB8E8CA849A2783B8DA9F426364AEBA3DC48C, L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogError_m5952BCE5DC0EF798B31FA983B9CE42A5A1F82DE1(L_21, /*hidden argument*/NULL);
		}

IL_008d:
		{
			// oldObserverOrigin = ObserverOrigin;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = BaseSpatialObserver_get_ObserverOrigin_m22B83CE7FFF3515A7A101B1E5A2255A58348F607_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObserverOrigin_69(L_22);
			// oldObservationExtents = ObservationExtents;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
			L_23 = BaseSpatialObserver_get_ObservationExtents_mC4089533E55F3846A2E556B655D39B25ACD63F14_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObservationExtents_70(L_23);
			// oldObserverVolumeType = ObserverVolumeType;
			int32_t L_24;
			L_24 = BaseSpatialObserver_get_ObserverVolumeType_m85B3C63586D0D3078DB74B852A088FA48B325069_inline(__this, /*hidden argument*/NULL);
			__this->set_oldObserverVolumeType_71(L_24);
			// }
			IL2CPP_LEAVE(0xC1, FINALLY_00b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b3;
	}

FINALLY_00b3:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(179)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(179)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC1, IL_00c1)
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__cctor_m6A86E62C9FEDF78EF04ED48BA91BB481F78F6259 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealitySpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteral1E7289C914AD935B08BB625EBF3E6C9BF64F8E8D, /*hidden argument*/NULL);
		((WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_tE0C381136ACD59F7080F2E94B43AA989F945F917_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_68(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__ctor_mD29AD32475B09EE01D1E35FBD2DC2FF56BB6DC9F (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * G_B2_0 = NULL;
	WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * G_B1_0 = NULL;
	WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * G_B3_0 = NULL;
	WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * G_B3_1 = NULL;
	{
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_0 = (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 *)il2cpp_codegen_object_new(List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5_il2cpp_TypeInfo_var);
		List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E(L_0, /*hidden argument*/List_1__ctor_mA16A96814342B0D9E6276B548F1F0281A56E2F0E_RuntimeMethod_var);
		__this->set_fingerBones_32(L_0);
		// : base(trackingState, controllerHandedness, inputSource, interactions, new ArticulatedHandDefinition(inputSource, controllerHandedness))
		int32_t L_1 = ___trackingState0;
		uint8_t L_2 = ___controllerHandedness1;
		RuntimeObject* L_3 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_4 = ___interactions3;
		RuntimeObject* L_5 = ___inputSource2;
		uint8_t L_6 = ___controllerHandedness1;
		ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * L_7 = (ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E *)il2cpp_codegen_object_new(ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_mFF3EC80319B1A35DE235143886E1A3B8475D4F3C(L_7, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mAD22F208A98ADEBD004AF7FC7FD9E261EAA8A481(__this, L_1, L_2, L_3, L_4, L_7, /*hidden argument*/NULL);
		// handDefinition = Definition as ArticulatedHandDefinition;
		RuntimeObject* L_8;
		L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(20 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::get_Definition() */, __this);
		__this->set_handDefinition_28(((ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E *)IsInstClass((RuntimeObject*)L_8, ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E_il2cpp_TypeInfo_var)));
		// handMeshProvider = (controllerHandedness == Handedness.Left) ? WindowsMixedRealityHandMeshProvider.Left : WindowsMixedRealityHandMeshProvider.Right;
		uint8_t L_9 = ___controllerHandedness1;
		G_B1_0 = __this;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * L_10;
		L_10 = WindowsMixedRealityHandMeshProvider_get_Right_m6B2FBBF5E699D48F7806A95A4F30020657B8BB44_inline(/*hidden argument*/NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_003f;
	}

IL_003a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * L_11;
		L_11 = WindowsMixedRealityHandMeshProvider_get_Left_mF44C248411D5A22B533F5A7E0433BB4E0AFF04AB_inline(/*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
	}

IL_003f:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_handMeshProvider_29(G_B3_0);
		// handMeshProvider.SetInputSource(inputSource);
		WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * L_12 = __this->get_handMeshProvider_29();
		RuntimeObject* L_13 = ___inputSource2;
		NullCheck(L_12);
		WindowsMixedRealityHandMeshProvider_SetInputSource_mE31C1F13BCD341C4D25C585384A6C575B7B54C82(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_m8124FE2CA0E14D633EBE89C84D926B705CDA994C (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * __this, int32_t ___joint0, MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (jointPoses != null)
		MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* L_0 = __this->get_jointPoses_30();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		// pose = jointPoses[(int)joint];
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * L_1 = ___pose1;
		MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* L_2 = __this->get_jointPoses_30();
		int32_t L_3 = ___joint0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		*(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B *)L_1 = L_5;
		// return pose != default(MixedRealityPose);
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * L_6 = ___pose1;
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_7 = (*(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B *)L_6);
		il2cpp_codegen_initobj((&V_0), sizeof(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B ));
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = MixedRealityPose_op_Inequality_m27F804A9212BB4CE2E1008EF2C201919220F6CFD(L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002f:
	{
		// pose = MixedRealityPose.ZeroIdentity;
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * L_10 = ___pose1;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var);
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_11;
		L_11 = MixedRealityPose_get_ZeroIdentity_m12710B3A247440479DB96616366FE061B2626FF9_inline(/*hidden argument*/NULL);
		*(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B *)L_10 = L_11;
		// return false;
		return (bool)0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_get_IsInPointingPose_m6BF20F02F915ADB395B6D44F7F29C76C63026BFD (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInPointingPose => handDefinition.IsInPointingPose;
		ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * L_0 = __this->get_handDefinition_28();
		NullCheck(L_0);
		bool L_1;
		L_1 = ArticulatedHandDefinition_get_IsInPointingPose_m892166398DBAA4CA61AA35407EFF5F8245C51EA5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateController_m8F8A811C8EF1A80BE31DB67473764C9FEE79E2E4 (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * G_B8_0 = NULL;
	ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * G_B7_0 = NULL;
	ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * G_B11_0 = NULL;
	ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * G_B10_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	int32_t G_B16_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0;
		L_0 = BaseController_get_Enabled_mA38F39BAD5C74A8CECB807B1BB13BCFD6979348A_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!Enabled) { return; }
		return;
	}

IL_0009:
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1 = ((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_35();
		V_1 = L_1;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2;
		L_2 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// base.UpdateController(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m3DBED83FB08C4D1D6B878ACE8124E7E033E3BCE2(__this, L_3, /*hidden argument*/NULL);
			// UpdateHandData(inputDevice);
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_4 = ___inputDevice0;
			WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m28BDCE7EBCE6AFEE64E49AAA76E51922AD21CC88(__this, L_4, /*hidden argument*/NULL);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_2 = 0;
			goto IL_0079;
		}

IL_0029:
		{
			// switch (Interactions[i].InputType)
			MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_5;
			L_5 = BaseController_get_Interactions_m34A9D825A44CA3153C0F354DAE9D23D52E110C84_inline(__this, /*hidden argument*/NULL);
			int32_t L_6 = V_2;
			NullCheck(L_5);
			int32_t L_7 = L_6;
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			NullCheck(L_8);
			int32_t L_9;
			L_9 = MixedRealityInteractionMapping_get_InputType_mF07AF36BF7F6ED7AC4A053D99B1D2E92718EA120_inline(L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			int32_t L_10 = V_3;
			if ((((int32_t)L_10) == ((int32_t)((int32_t)17))))
			{
				goto IL_005c;
			}
		}

IL_003c:
		{
			int32_t L_11 = V_3;
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)33)))))
			{
				goto IL_0075;
			}
		}

IL_0041:
		{
			// handDefinition?.UpdateCurrentIndexPose(Interactions[i]);
			ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * L_12 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * L_13 = L_12;
			G_B7_0 = L_13;
			if (L_13)
			{
				G_B8_0 = L_13;
				goto IL_004d;
			}
		}

IL_004a:
		{
			goto IL_0075;
		}

IL_004d:
		{
			MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_14;
			L_14 = BaseController_get_Interactions_m34A9D825A44CA3153C0F354DAE9D23D52E110C84_inline(__this, /*hidden argument*/NULL);
			int32_t L_15 = V_2;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(G_B8_0);
			ArticulatedHandDefinition_UpdateCurrentIndexPose_mFF552AF7F950170623B082C76304F4E1ACE06B8A(G_B8_0, L_17, /*hidden argument*/NULL);
			// break;
			goto IL_0075;
		}

IL_005c:
		{
			// handDefinition?.UpdateCurrentTeleportPose(Interactions[i]);
			ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * L_18 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * L_19 = L_18;
			G_B10_0 = L_19;
			if (L_19)
			{
				G_B11_0 = L_19;
				goto IL_0068;
			}
		}

IL_0065:
		{
			goto IL_0075;
		}

IL_0068:
		{
			MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_20;
			L_20 = BaseController_get_Interactions_m34A9D825A44CA3153C0F354DAE9D23D52E110C84_inline(__this, /*hidden argument*/NULL);
			int32_t L_21 = V_2;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			NullCheck(G_B11_0);
			ArticulatedHandDefinition_UpdateCurrentTeleportPose_mDD08C67A8744D43B5EAF1E31EDC2E9840AE7698A(G_B11_0, L_23, /*hidden argument*/NULL);
		}

IL_0075:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_24 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_0079:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_25 = V_2;
			MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_26;
			L_26 = BaseController_get_Interactions_m34A9D825A44CA3153C0F354DAE9D23D52E110C84_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_27 = L_26;
			G_B14_0 = L_27;
			G_B14_1 = L_25;
			if (L_27)
			{
				G_B15_0 = L_27;
				G_B15_1 = L_25;
				goto IL_0090;
			}
		}

IL_0083:
		{
			il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_28 = V_5;
			G_B16_0 = L_28;
			G_B16_1 = G_B14_1;
			goto IL_0097;
		}

IL_0090:
		{
			NullCheck(G_B15_0);
			Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_29;
			memset((&L_29), 0, sizeof(L_29));
			Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_29), ((int32_t)((int32_t)(((RuntimeArray*)G_B15_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
			G_B16_0 = L_29;
			G_B16_1 = G_B15_1;
		}

IL_0097:
		{
			V_4 = G_B16_0;
			int32_t L_30;
			L_30 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
			bool L_31;
			L_31 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
			if (((int32_t)((int32_t)((((int32_t)G_B16_1) < ((int32_t)L_30))? 1 : 0)&(int32_t)L_31)))
			{
				goto IL_0029;
			}
		}

IL_00af:
		{
			// }
			IL2CPP_LEAVE(0xBF, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(177)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m28BDCE7EBCE6AFEE64E49AAA76E51922AD21CC88 (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690  V_2;
	memset((&V_2), 0, sizeof(V_2));
	HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * G_B13_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * G_B12_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B14_1;
	memset((&G_B14_1), 0, sizeof(G_B14_1));
	MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * G_B14_2 = NULL;
	ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * G_B19_0 = NULL;
	ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * G_B18_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->get_UpdateHandDataPerfMarker_36();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.handData, out Hand hand))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  L_2 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_handData_49();
			bool L_3;
			L_3 = InputDevice_TryGetFeatureValue_mC71ECD9D8F61BB5D594DD9DFB33D1ED86698EC0D((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice0), L_2, (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_2), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_013c;
			}
		}

IL_0021:
		{
			// if (jointPoses == null)
			MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* L_4 = __this->get_jointPoses_30();
			if (L_4)
			{
				goto IL_0039;
			}
		}

IL_0029:
		{
			// jointPoses = new MixedRealityPose[ArticulatedHandPose.JointCount];
			IL2CPP_RUNTIME_CLASS_INIT(ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_il2cpp_TypeInfo_var);
			int32_t L_5;
			L_5 = ArticulatedHandPose_get_JointCount_mD216D8BBB999CA55652BDA391D3462507735B4AC_inline(/*hidden argument*/NULL);
			MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* L_6 = (MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D*)(MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D*)SZArrayNew(MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D_il2cpp_TypeInfo_var, (uint32_t)L_5);
			__this->set_jointPoses_30(L_6);
		}

IL_0039:
		{
			// foreach (HandFinger finger in handFingers)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var);
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_7 = ((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->get_handFingers_31();
			V_3 = L_7;
			V_4 = 0;
			goto IL_011b;
		}

IL_0047:
		{
			// foreach (HandFinger finger in handFingers)
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_8 = V_3;
			int32_t L_9 = V_4;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			int32_t L_11 = (int32_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			V_5 = L_11;
			// if (hand.TryGetFingerBones(finger, fingerBones))
			int32_t L_12 = V_5;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_13 = __this->get_fingerBones_32();
			bool L_14;
			L_14 = Hand_TryGetFingerBones_mFA237811578942428A5EEA801791B1A3CE8C651A((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&V_2), L_12, L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_0115;
			}
		}

IL_0061:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			V_7 = 0;
			goto IL_00c9;
		}

IL_0066:
		{
			// Bone bone = fingerBones[i];
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_15 = __this->get_fingerBones_32();
			int32_t L_16 = V_7;
			NullCheck(L_15);
			Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_17;
			L_17 = List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_RuntimeMethod_var);
			V_8 = L_17;
			// bool positionAvailable = bone.TryGetPosition(out Vector3 position);
			bool L_18;
			L_18 = Bone_TryGetPosition_m261057D3419C036E0CEE6F42398398601977DD0A((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_8), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
			// bool rotationAvailable = bone.TryGetRotation(out Quaternion rotation);
			bool L_19;
			L_19 = Bone_TryGetRotation_mEB7B9EED27F1BD731F9ECB467CFC3B3A475CBF69((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&V_8), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_11), /*hidden argument*/NULL);
			V_10 = L_19;
			// if (positionAvailable || rotationAvailable)
			bool L_20 = V_10;
			if (!((int32_t)((int32_t)L_18|(int32_t)L_20)))
			{
				goto IL_00c3;
			}
		}

IL_008e:
		{
			// position = MixedRealityPlayspace.TransformPoint(position);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t0E796648590ACE4F99DF53EE3B84DC78E0BC90AD_il2cpp_TypeInfo_var);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = MixedRealityPlayspace_TransformPoint_m8EFBEFDC9C39D4949CF8D19075DB3CAD06986502(L_21, /*hidden argument*/NULL);
			V_9 = L_22;
			// rotation = MixedRealityPlayspace.Rotation * rotation;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
			L_23 = MixedRealityPlayspace_get_Rotation_mDA6E3B52D4C05450A909582156C3977993F52430(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24 = V_11;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_25;
			L_25 = Quaternion_op_Multiply_mA5FD288B815D9C1B59C7B26AA1942A85ACE94153(L_23, L_24, /*hidden argument*/NULL);
			V_11 = L_25;
			// jointPoses[ConvertToArrayIndex(finger, i)] = new MixedRealityPose(position, rotation);
			MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* L_26 = __this->get_jointPoses_30();
			int32_t L_27 = V_5;
			int32_t L_28 = V_7;
			int32_t L_29;
			L_29 = WindowsMixedRealityXRSDKArticulatedHand_ConvertToArrayIndex_m63890CD6A7881B5719F7949BE45E9B3E89E8223F(__this, L_27, L_28, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_9;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = V_11;
			MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_32;
			memset((&L_32), 0, sizeof(L_32));
			MixedRealityPose__ctor_mCB0573EAA88DBE88FABF4D5E1D8CB165392690E0((&L_32), L_30, L_31, /*hidden argument*/NULL);
			NullCheck(L_26);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B )L_32);
		}

IL_00c3:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_33 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
		}

IL_00c9:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_34 = V_7;
			List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * L_35 = __this->get_fingerBones_32();
			NullCheck(L_35);
			int32_t L_36;
			L_36 = List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_inline(L_35, /*hidden argument*/List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_RuntimeMethod_var);
			if ((((int32_t)L_34) < ((int32_t)L_36)))
			{
				goto IL_0066;
			}
		}

IL_00d8:
		{
			// MixedRealityPose palmPose = CurrentControllerPose;
			MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_37 = ((GenericXRSDKController_t3764E1F2881EEB78CB741E21D2126D8F0DE16AE8 *)__this)->get_CurrentControllerPose_12();
			V_6 = L_37;
			// palmPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);
			MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * L_38 = (&V_6);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
			L_39 = MixedRealityPose_get_Rotation_m4F32A5FE103D399290226F23D2A2D0AFCC1F332D_inline((MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B *)L_38, /*hidden argument*/NULL);
			uint8_t L_40;
			L_40 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(__this, /*hidden argument*/NULL);
			G_B12_0 = L_39;
			G_B12_1 = L_38;
			if ((((int32_t)L_40) == ((int32_t)1)))
			{
				G_B13_0 = L_39;
				G_B13_1 = L_38;
				goto IL_00f8;
			}
		}

IL_00f1:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_41 = ((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->get_rightPalmOffset_33();
			G_B14_0 = L_41;
			G_B14_1 = G_B12_0;
			G_B14_2 = G_B12_1;
			goto IL_00fd;
		}

IL_00f8:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_42 = ((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->get_leftPalmOffset_34();
			G_B14_0 = L_42;
			G_B14_1 = G_B13_0;
			G_B14_2 = G_B13_1;
		}

IL_00fd:
		{
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43;
			L_43 = Quaternion_op_Multiply_mA5FD288B815D9C1B59C7B26AA1942A85ACE94153(G_B14_1, G_B14_0, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m1387B9E9A45101106950767989AC33BAC018C02C_inline((MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B *)G_B14_2, L_43, /*hidden argument*/NULL);
			// jointPoses[(int)TrackedHandJoint.Palm] = palmPose;
			MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* L_44 = __this->get_jointPoses_30();
			MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_45 = V_6;
			NullCheck(L_44);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B )L_45);
		}

IL_0115:
		{
			int32_t L_46 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		}

IL_011b:
		{
			// foreach (HandFinger finger in handFingers)
			int32_t L_47 = V_4;
			HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F* L_48 = V_3;
			NullCheck(L_48);
			if ((((int32_t)L_47) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length))))))
			{
				goto IL_0047;
			}
		}

IL_0125:
		{
			// handDefinition?.UpdateHandJoints(jointPoses);
			ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * L_49 = __this->get_handDefinition_28();
			ArticulatedHandDefinition_t96EF010BF8F080627773C3B61BAA1A3CF38EF57E * L_50 = L_49;
			G_B18_0 = L_50;
			if (L_50)
			{
				G_B19_0 = L_50;
				goto IL_0131;
			}
		}

IL_012e:
		{
			IL2CPP_LEAVE(0x14C, FINALLY_013e);
		}

IL_0131:
		{
			MixedRealityPoseU5BU5D_tF00BE32E9115DCD01E0CEE9A03C3837CD580873D* L_51 = __this->get_jointPoses_30();
			NullCheck(G_B19_0);
			ArticulatedHandDefinition_UpdateHandJoints_m1744AA7AE2742E22815C0744F3ED5051AF9C73C7(G_B19_0, L_51, /*hidden argument*/NULL);
		}

IL_013c:
		{
			// }
			IL2CPP_LEAVE(0x14C, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14C, IL_014c)
	}

IL_014c:
	{
		// }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToArrayIndex(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToArrayIndex_m63890CD6A7881B5719F7949BE45E9B3E89E8223F (WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___finger0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0037;
			}
			case 4:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_001c:
	{
		// case HandFinger.Thumb: trackedHandJoint = (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1; break;
		int32_t L_1 = ___index1;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = ___index1;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_2)), (int32_t)1));
		goto IL_0027;
	}

IL_0026:
	{
		G_B5_0 = 1;
	}

IL_0027:
	{
		V_0 = G_B5_0;
		// case HandFinger.Thumb: trackedHandJoint = (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1; break;
		goto IL_0047;
	}

IL_002a:
	{
		// case HandFinger.Index: trackedHandJoint = TrackedHandJoint.IndexMetacarpal + index; break;
		int32_t L_3 = ___index1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)7, (int32_t)L_3));
		// case HandFinger.Index: trackedHandJoint = TrackedHandJoint.IndexMetacarpal + index; break;
		goto IL_0047;
	}

IL_0030:
	{
		// case HandFinger.Middle: trackedHandJoint = TrackedHandJoint.MiddleMetacarpal + index; break;
		int32_t L_4 = ___index1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)12), (int32_t)L_4));
		// case HandFinger.Middle: trackedHandJoint = TrackedHandJoint.MiddleMetacarpal + index; break;
		goto IL_0047;
	}

IL_0037:
	{
		// case HandFinger.Ring: trackedHandJoint = TrackedHandJoint.RingMetacarpal + index; break;
		int32_t L_5 = ___index1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)17), (int32_t)L_5));
		// case HandFinger.Ring: trackedHandJoint = TrackedHandJoint.RingMetacarpal + index; break;
		goto IL_0047;
	}

IL_003e:
	{
		// case HandFinger.Pinky: trackedHandJoint = TrackedHandJoint.PinkyMetacarpal + index; break;
		int32_t L_6 = ___index1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)22), (int32_t)L_6));
		// case HandFinger.Pinky: trackedHandJoint = TrackedHandJoint.PinkyMetacarpal + index; break;
		goto IL_0047;
	}

IL_0045:
	{
		// default: trackedHandJoint = TrackedHandJoint.None; break;
		V_0 = 0;
	}

IL_0047:
	{
		// return (int)trackedHandJoint;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__cctor_m5A60E1DD0607FB1361F65473CCC75E27CA33591A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (HandFinger_tAA6A38629AA6A36391AE4CC05D54BE89105EED35_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m180706985100778663E9C75D4FC001D367C0120F(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m6A159A71A6FEAA80D37B65ECBD566AA078ADFA58(L_1, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->set_handFingers_31(((HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t95A796375243BF9D4FC6B9CBBB3E7DB52E33185F_il2cpp_TypeInfo_var)));
		// private static readonly Quaternion rightPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), Mathf.Sqrt(0.125f), -Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_3;
		L_3 = sqrtf((0.125f));
		float L_4;
		L_4 = sqrtf((0.125f));
		float L_5;
		L_5 = sqrtf((1.5f));
		float L_6;
		L_6 = sqrtf((1.5f));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_7), L_3, L_4, ((float)((float)((-L_5))/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->set_rightPalmOffset_33(L_7);
		// private static readonly Quaternion leftPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), -Mathf.Sqrt(0.125f), Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_8;
		L_8 = sqrtf((0.125f));
		float L_9;
		L_9 = sqrtf((0.125f));
		float L_10;
		L_10 = sqrtf((1.5f));
		float L_11;
		L_11 = sqrtf((1.5f));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_12), L_8, ((-L_9)), ((float)((float)L_10/(float)(2.0f))), ((float)((float)L_11/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->set_leftPalmOffset_34(L_12);
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateController");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_13), _stringLiteral7BF210AC4CF6C5202CCE0CB170B4C8BCAEFE439B, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_35(L_13);
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateHandData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_14), _stringLiteral6A57AA97AFEF7EB7F78B04FD34217B8FF3C332F6, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t2689353565EA824AD467B4A8F8DFE7FF2EF4E6FC_il2cpp_TypeInfo_var))->set_UpdateHandDataPerfMarker_36(L_14);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand__ctor_mBC57420CBC8321418EF5D0017E2044958FA66CB1 (WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleHandDefinition_t96427670B317B134AD65F9A253B39E26D2266227_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions, new SimpleHandDefinition(controllerHandedness))
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_3 = ___interactions3;
		uint8_t L_4 = ___controllerHandedness1;
		SimpleHandDefinition_t96427670B317B134AD65F9A253B39E26D2266227 * L_5 = (SimpleHandDefinition_t96427670B317B134AD65F9A253B39E26D2266227 *)il2cpp_codegen_object_new(SimpleHandDefinition_t96427670B317B134AD65F9A253B39E26D2266227_il2cpp_TypeInfo_var);
		SimpleHandDefinition__ctor_mF94C751121016D3C029D4899ED97CB6C1FD39110(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mAD22F208A98ADEBD004AF7FC7FD9E261EAA8A481(__this, L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::UpdateVoiceState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand_UpdateVoiceState_m67B804E264946F2FA5ED97ED7B31FFDD8BD96165 (WindowsMixedRealityXRSDKGGVHand_tE8864377829931C6EE0018E40907A73325DA01A3 * __this, bool ___isPressed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * V_0 = NULL;
	int32_t V_1 = 0;
	MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * V_2 = NULL;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_4;
	memset((&V_4), 0, sizeof(V_4));
	MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	int32_t G_B8_1 = 0;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	{
		// MixedRealityInteractionMapping interactionMapping = null;
		V_0 = (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 *)NULL;
		// for (int i = 0; i < Interactions?.Length; i++)
		V_1 = 0;
		goto IL_002a;
	}

IL_0006:
	{
		// MixedRealityInteractionMapping currentInteractionMapping = Interactions[i];
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_0;
		L_0 = BaseController_get_Interactions_m34A9D825A44CA3153C0F354DAE9D23D52E110C84_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		// if (currentInteractionMapping.AxisType == AxisType.Digital && currentInteractionMapping.InputType == DeviceInputType.Select)
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = MixedRealityInteractionMapping_get_AxisType_mAEF66F69990EBF4A445469D118AC6E0CDD3A02FF_inline(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0026;
		}
	}
	{
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = MixedRealityInteractionMapping_get_InputType_mF07AF36BF7F6ED7AC4A053D99B1D2E92718EA120_inline(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)25)))))
		{
			goto IL_0026;
		}
	}
	{
		// interactionMapping = currentInteractionMapping;
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_8 = V_2;
		V_0 = L_8;
		// break;
		goto IL_005c;
	}

IL_0026:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < Interactions?.Length; i++)
		int32_t L_10 = V_1;
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_11;
		L_11 = BaseController_get_Interactions_m34A9D825A44CA3153C0F354DAE9D23D52E110C84_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_12 = L_11;
		G_B6_0 = L_12;
		G_B6_1 = L_10;
		if (L_12)
		{
			G_B7_0 = L_12;
			G_B7_1 = L_10;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_13 = V_4;
		G_B8_0 = L_13;
		G_B8_1 = G_B6_1;
		goto IL_0048;
	}

IL_0041:
	{
		NullCheck(G_B7_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_14), ((int32_t)((int32_t)(((RuntimeArray*)G_B7_0)->max_length))), /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
	}

IL_0048:
	{
		V_3 = G_B8_0;
		int32_t L_15;
		L_15 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_16;
		L_16 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)G_B8_1) < ((int32_t)L_15))? 1 : 0)&(int32_t)L_16)))
		{
			goto IL_0006;
		}
	}

IL_005c:
	{
		// if (interactionMapping == null)
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_17 = V_0;
		if (L_17)
		{
			goto IL_0060;
		}
	}
	{
		// return;
		return;
	}

IL_0060:
	{
		// interactionMapping.BoolData = isPressed;
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_18 = V_0;
		bool L_19 = ___isPressed0;
		NullCheck(L_18);
		MixedRealityInteractionMapping_set_BoolData_m8A9E73300A92A0423E576A780DD9E6EE8841ADF2(L_18, L_19, /*hidden argument*/NULL);
		// if (interactionMapping.Changed)
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_20 = V_0;
		NullCheck(L_20);
		bool L_21;
		L_21 = MixedRealityInteractionMapping_get_Changed_m1A22FC4F9DF5C556A1C82BD81DB8BC2A58FE2BE0(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00ba;
		}
	}
	{
		// if (interactionMapping.BoolData)
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_22 = V_0;
		NullCheck(L_22);
		bool L_23;
		L_23 = MixedRealityInteractionMapping_get_BoolData_m3105F21601C32387966B1DF076274C20034225D6_inline(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0099;
		}
	}
	{
		// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		RuntimeObject* L_24;
		L_24 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
		RuntimeObject* L_25 = L_24;
		G_B14_0 = L_25;
		if (L_25)
		{
			G_B15_0 = L_25;
			goto IL_0081;
		}
	}
	{
		return;
	}

IL_0081:
	{
		RuntimeObject* L_26;
		L_26 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_27;
		L_27 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_28 = V_0;
		NullCheck(L_28);
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_29;
		L_29 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m0CCA19BDAA0B0DB3E88B731B9DBBC35F057DB4FD_inline(L_28, /*hidden argument*/NULL);
		NullCheck(G_B15_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B15_0, L_26, L_27, L_29);
		// }
		return;
	}

IL_0099:
	{
		// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		RuntimeObject* L_30;
		L_30 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
		RuntimeObject* L_31 = L_30;
		G_B17_0 = L_31;
		if (L_31)
		{
			G_B18_0 = L_31;
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_00a3:
	{
		RuntimeObject* L_32;
		L_32 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(__this, /*hidden argument*/NULL);
		uint8_t L_33;
		L_33 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(__this, /*hidden argument*/NULL);
		MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_34 = V_0;
		NullCheck(L_34);
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_35;
		L_35 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m0CCA19BDAA0B0DB3E88B731B9DBBC35F057DB4FD_inline(L_34, /*hidden argument*/NULL);
		NullCheck(G_B18_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B18_0, L_32, L_33, L_35);
	}

IL_00ba:
	{
		// }
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_m7D47AE84EFAFC8F3E849038DF3420506E2603E61 (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityControllerDefinition_tA82FB0DEEADBCE3C09FAE194C17F0950CFE41F5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(trackingState, controllerHandedness, new WindowsMixedRealityControllerDefinition(controllerHandedness), inputSource, interactions)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		uint8_t L_2 = ___controllerHandedness1;
		WindowsMixedRealityControllerDefinition_tA82FB0DEEADBCE3C09FAE194C17F0950CFE41F5C * L_3 = (WindowsMixedRealityControllerDefinition_tA82FB0DEEADBCE3C09FAE194C17F0950CFE41F5C *)il2cpp_codegen_object_new(WindowsMixedRealityControllerDefinition_tA82FB0DEEADBCE3C09FAE194C17F0950CFE41F5C_il2cpp_TypeInfo_var);
		WindowsMixedRealityControllerDefinition__ctor_m26FDD65F1EA0EC7C1EC97131870D973F3E7640A6(L_3, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_5 = ___interactions3;
		WindowsMixedRealityXRSDKMotionController__ctor_mEC145A92A6C5894B6AA5B463EA0A5E7F4EE0D3CD(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_mEC145A92A6C5894B6AA5B463EA0A5E7F4EE0D3CD (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* ___interactions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions, definition)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource3;
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_3 = ___interactions4;
		RuntimeObject* L_4 = ___definition2;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_tECC013FA9D76EB611C33AFD4F2940A52D9BDC8B2_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mAD22F208A98ADEBD004AF7FC7FD9E261EAA8A481(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m19D87750E168CAACC0E183D9EBFF493511CE96CF (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	RuntimeObject* G_B15_0 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_28();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mF07AF36BF7F6ED7AC4A053D99B1D2E92718EA120_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)18))))
			{
				goto IL_003a;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)22))))
			{
				goto IL_002a;
			}
		}

IL_0022:
		{
			int32_t L_6 = V_4;
			if ((((int32_t)L_6) == ((int32_t)((int32_t)24))))
			{
				goto IL_0032;
			}
		}

IL_0028:
		{
			goto IL_0042;
		}

IL_002a:
		{
			// buttonUsage = CommonUsages.primary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
			V_2 = L_7;
			// break;
			goto IL_004c;
		}

IL_0032:
		{
			// buttonUsage = CommonUsages.primary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_8 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
			V_2 = L_8;
			// break;
			goto IL_004c;
		}

IL_003a:
		{
			// buttonUsage = CommonUsages.secondary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_9 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
			V_2 = L_9;
			// break;
			goto IL_004c;
		}

IL_0042:
		{
			// base.UpdateButtonData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_10 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_11 = ___inputDevice1;
			GenericXRSDKController_UpdateButtonData_mE28B8CDD12D63E93F8DBAB5025D6797376C22D9B(__this, L_10, L_11, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_004c:
		{
			// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_12 = V_2;
			bool L_13;
			L_13 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_12, (bool*)(&V_3), /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_005f;
			}
		}

IL_0058:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_14 = ___interactionMapping0;
			bool L_15 = V_3;
			NullCheck(L_14);
			MixedRealityInteractionMapping_set_BoolData_m8A9E73300A92A0423E576A780DD9E6EE8841ADF2(L_14, L_15, /*hidden argument*/NULL);
		}

IL_005f:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_16 = ___interactionMapping0;
			NullCheck(L_16);
			bool L_17;
			L_17 = MixedRealityInteractionMapping_get_Changed_m1A22FC4F9DF5C556A1C82BD81DB8BC2A58FE2BE0(L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_00b5;
			}
		}

IL_0067:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_18 = ___interactionMapping0;
			NullCheck(L_18);
			bool L_19;
			L_19 = MixedRealityInteractionMapping_get_BoolData_m3105F21601C32387966B1DF076274C20034225D6_inline(L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0093;
			}
		}

IL_006f:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_20;
			L_20 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
			RuntimeObject* L_21 = L_20;
			G_B14_0 = L_21;
			if (L_21)
			{
				G_B15_0 = L_21;
				goto IL_007a;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_007a:
		{
			RuntimeObject* L_22;
			L_22 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(__this, /*hidden argument*/NULL);
			uint8_t L_23;
			L_23 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_24 = ___interactionMapping0;
			NullCheck(L_24);
			MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_25;
			L_25 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m0CCA19BDAA0B0DB3E88B731B9DBBC35F057DB4FD_inline(L_24, /*hidden argument*/NULL);
			NullCheck(G_B15_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B15_0, L_22, L_23, L_25);
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_0093:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_26;
			L_26 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
			RuntimeObject* L_27 = L_26;
			G_B17_0 = L_27;
			if (L_27)
			{
				G_B18_0 = L_27;
				goto IL_009e;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}

IL_009e:
		{
			RuntimeObject* L_28;
			L_28 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(__this, /*hidden argument*/NULL);
			uint8_t L_29;
			L_29 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_30 = ___interactionMapping0;
			NullCheck(L_30);
			MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_31;
			L_31 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m0CCA19BDAA0B0DB3E88B731B9DBBC35F057DB4FD_inline(L_30, /*hidden argument*/NULL);
			NullCheck(G_B18_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  >::Invoke(40 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B18_0, L_28, L_29, L_31);
		}

IL_00b5:
		{
			// }
			IL2CPP_LEAVE(0xC5, FINALLY_00b7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_m62525B846C2442EA1203B3B29D580F8949E20B65 (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * ___interactionMapping0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var))->get_UpdateDualAxisDataPerfMarker_29();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = MixedRealityInteractionMapping_get_InputType_mF07AF36BF7F6ED7AC4A053D99B1D2E92718EA120_inline(L_2, /*hidden argument*/NULL);
			V_4 = L_3;
			int32_t L_4 = V_4;
			if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
			{
				goto IL_0024;
			}
		}

IL_001c:
		{
			int32_t L_5 = V_4;
			if ((((int32_t)L_5) == ((int32_t)((int32_t)21))))
			{
				goto IL_002c;
			}
		}

IL_0022:
		{
			goto IL_0034;
		}

IL_0024:
		{
			// axisUsage = CommonUsages.secondary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_6 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
			V_2 = L_6;
			// break;
			goto IL_003e;
		}

IL_002c:
		{
			// axisUsage = CommonUsages.primary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_7 = ((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
			V_2 = L_7;
			// break;
			goto IL_003e;
		}

IL_0034:
		{
			// base.UpdateDualAxisData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_8 = ___interactionMapping0;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_9 = ___inputDevice1;
			GenericXRSDKController_UpdateDualAxisData_mCB361EB2E941BB3C038E6EC0B01049286B19C55D(__this, L_8, L_9, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_003e:
		{
			// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_10 = V_2;
			bool L_11;
			L_11 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___inputDevice1), L_10, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0051;
			}
		}

IL_004a:
		{
			// interactionMapping.Vector2Data = axisData;
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_12 = ___interactionMapping0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_3;
			NullCheck(L_12);
			MixedRealityInteractionMapping_set_Vector2Data_m0A273664D1E1BD11CE84D04D7EA0EBFC82EB3334(L_12, L_13, /*hidden argument*/NULL);
		}

IL_0051:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_14 = ___interactionMapping0;
			NullCheck(L_14);
			bool L_15;
			L_15 = MixedRealityInteractionMapping_get_Changed_m1A22FC4F9DF5C556A1C82BD81DB8BC2A58FE2BE0(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0081;
			}
		}

IL_0059:
		{
			// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t0542F1C9A9D4CAEB55FCDBE29A38B446DAAC8820_il2cpp_TypeInfo_var);
			RuntimeObject* L_16;
			L_16 = CoreServices_get_InputSystem_m95E1676849A6E08FEFBE84E7545BCED6CA18A81A(/*hidden argument*/NULL);
			RuntimeObject* L_17 = L_16;
			G_B11_0 = L_17;
			if (L_17)
			{
				G_B12_0 = L_17;
				goto IL_0064;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}

IL_0064:
		{
			RuntimeObject* L_18;
			L_18 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(__this, /*hidden argument*/NULL);
			uint8_t L_19;
			L_19 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_20 = ___interactionMapping0;
			NullCheck(L_20);
			MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_21;
			L_21 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m0CCA19BDAA0B0DB3E88B731B9DBBC35F057DB4FD_inline(L_20, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * L_22 = ___interactionMapping0;
			NullCheck(L_22);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
			L_23 = MixedRealityInteractionMapping_get_Vector2Data_m666DAB155596B3FA917C80AF8040171F128AD033_inline(L_22, /*hidden argument*/NULL);
			NullCheck(G_B12_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(42 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t8716937D469ECC9804ACE9B7D0B672A64CF33E03_il2cpp_TypeInfo_var, G_B12_0, L_18, L_19, L_21, L_23);
		}

IL_0081:
		{
			// }
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModel(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_TryRenderControllerModel_m17DD6B44F1ACD771162FFE2A2C7196F209A21A5C (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetControllerVisualizationProfile() == null ||
		//     !GetControllerVisualizationProfile().GetUsePlatformModelsOverride(GetType(), ControllerHandedness))
		MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC * L_0;
		L_0 = BaseController_GetControllerVisualizationProfile_mED067AFCDE8AD021DF4302F6317BDF733DEDBDD3(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_m6D7EBC0E6D7E0CE1E9671D21DE14C9158AFB88B2(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		MixedRealityControllerVisualizationProfile_t7E952C536B9D4F0EAC1BB13C7974C2A14EBA85CC * L_2;
		L_2 = BaseController_GetControllerVisualizationProfile_mED067AFCDE8AD021DF4302F6317BDF733DEDBDD3(/*hidden argument*/NULL);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		uint8_t L_4;
		L_4 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = MixedRealityControllerVisualizationProfile_GetUsePlatformModelsOverride_mCEF6CB7F56A979A6E2DB9AA1D7798EAECD474558(L_2, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0025:
	{
		// return base.TryRenderControllerModel(controllerType, inputSourceType);
		Type_t * L_6 = ___controllerType0;
		int32_t L_7 = ___inputSourceType1;
		bool L_8;
		L_8 = BaseController_TryRenderControllerModel_m48F2939EB864D97B5BA473C757CB57394D288F83(__this, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002e:
	{
		// TryRenderControllerModelWithModelProvider();
		WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_m065563D873F8873E92AE1390C609993814898FE2(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::TryRenderControllerModelWithModelProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_TryRenderControllerModelWithModelProvider_m065563D873F8873E92AE1390C609993814898FE2 (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_m94EDEC2DE06D09289BD856EAEB4DD3CADE12D5C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m3E7C78F87F23C313FCD75A71B745C647490230C1(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51  L_1 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_m94EDEC2DE06D09289BD856EAEB4DD3CADE12D5C6((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_m94EDEC2DE06D09289BD856EAEB4DD3CADE12D5C6_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__cctor_mABDE3EB3341EE1C8794224FEB0AB7A731C7A8D3F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateButtonData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralAB8B8DAEE4B0D6B2E8E770180C9963B64E7F6163, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_28(L_0);
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateDualAxisData");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_1), _stringLiteral658CC51B94262E08B674473305FF2AC31574F4F9, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1_il2cpp_TypeInfo_var))->set_UpdateDualAxisDataPerfMarker_29(L_1);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::<>n__0(System.Type,Microsoft.MixedReality.Toolkit.Input.InputSourceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKMotionController_U3CU3En__0_mD8B51C85A8DE663D73DF60B1F56152D30118C44C (WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * __this, Type_t * ___controllerType0, int32_t ___inputSourceType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___controllerType0;
		int32_t L_1 = ___inputSourceType1;
		bool L_2;
		L_2 = BaseController_TryRenderControllerModel_m48F2939EB864D97B5BA473C757CB57394D288F83(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_ISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_m15559837D760B70F19CEC144808A7B41AD27F227 (XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_IHolographicFramePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_m059DA6571629F19E2AA072BCE548CD1FB301DE78 (XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IntPtr.Zero;
		return (intptr_t)(0);
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m21596313DDB2A9CBD0F52D86583E889B1AE550B2 (XRSDKWindowsMixedRealityUtilitiesProvider_tF80343218429D50E26A415EA5320C5FF58A008B3 * __this, const RuntimeMethod* method)
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m9A90A8290239E49DFE5908A31E393505AB8604F5 (U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mA30A9D7AFC9D486B98B669F9B0B5553C3F31C83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mA91EB04CA7E6F2D2FCB4B857413A9CA7D4C68651_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * V_1 = NULL;
	SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * V_2 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * L_3 = V_1;
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)WindowsMixedRealityCameraSettings_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mA91EB04CA7E6F2D2FCB4B857413A9CA7D4C68651_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_5 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_5, L_4, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_6;
			L_6 = AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mA30A9D7AFC9D486B98B669F9B0B5553C3F31C83A((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **)(&V_2), (U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058_mA30A9D7AFC9D486B98B669F9B0B5553C3F31C83A_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050:
		{
			RuntimeObject * L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A *)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429(L_14, /*hidden argument*/NULL);
			// if (IsActiveLoader.Value)
			WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_16;
			L_16 = WindowsMixedRealityCameraSettings_get_IsActiveLoader_mFF7F4E00A37EC0A85D4EE45011AE7B1AA4F01CED(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			// Enable();
			WindowsMixedRealityCameraSettings_tEB6979DBC7515BA12D767026293DB0939024D027 * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088:
		{
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m9A90A8290239E49DFE5908A31E393505AB8604F5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m9A90A8290239E49DFE5908A31E393505AB8604F5(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m1CE6237A8482D64E63A118616E18CE5FF9AC8237 (U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m1CE6237A8482D64E63A118616E18CE5FF9AC8237_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_tC1D402DBCFFE954D48CC8E458AB0003F4F8BB058 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m1CE6237A8482D64E63A118616E18CE5FF9AC8237(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m924511FE3A7ABC2D9C24594ECB6D348937062FD7 (U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_m28C2F24D301DB62BEABDD86A1A1307BC743BF405_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mD842D13D83B7AAF17EFAC71FA2D672CFFA73F0A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * V_1 = NULL;
	SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * V_2 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * L_3 = V_1;
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)WindowsMixedRealityDeviceManager_U3CEnableIfLoaderBecomesActiveU3Eb__4_0_mD842D13D83B7AAF17EFAC71FA2D672CFFA73F0A0_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_5 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_5, L_4, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_6;
			L_6 = AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_m28C2F24D301DB62BEABDD86A1A1307BC743BF405((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **)(&V_2), (U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6_m28C2F24D301DB62BEABDD86A1A1307BC743BF405_RuntimeMethod_var);
			goto IL_00b6;
		}

IL_0050:
		{
			RuntimeObject * L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A *)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429(L_14, /*hidden argument*/NULL);
			// if (IsActiveLoader.Value)
			WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_16;
			L_16 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m1A2612FF7A1BFFFC68E89A701DF29106B59DC07A(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0088;
			}
		}

IL_0082:
		{
			// Enable();
			WindowsMixedRealityDeviceManager_t7538A49572207DB24B776F35EAD0AFA502C94A2A * L_18 = V_1;
			NullCheck(L_18);
			VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_18);
		}

IL_0088:
		{
			goto IL_00a3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008a;
		}
		throw e;
	}

CATCH_008a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_20 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b6;
	} // end catch (depth: 1)

IL_00a3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_21, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m924511FE3A7ABC2D9C24594ECB6D348937062FD7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_MoveNext_m924511FE3A7ABC2D9C24594ECB6D348937062FD7(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager/<EnableIfLoaderBecomesActive>d__4::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m67DE3827AD9E5120292BA17DD4004A3C24EBD45B (U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m67DE3827AD9E5120292BA17DD4004A3C24EBD45B_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__4_t385691D272B0589F816C4C1C92BA7D192B2833F6 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__4_SetStateMachine_m67DE3827AD9E5120292BA17DD4004A3C24EBD45B(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__23_MoveNext_m715E38AE6544AF25F9852EBC1DB8704C8F63EC8A (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_mD79C89C6DC93D4F70249293DF81E2D4A901697B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityEyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__23_0_m324074274264994948E3D8CB3D95DE797A6D08B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * V_1 = NULL;
	SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * V_2 = NULL;
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => IsActiveLoader.HasValue);
			WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * L_3 = V_1;
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_4 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
			Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_4, L_3, (intptr_t)((intptr_t)WindowsMixedRealityEyeGazeDataProvider_U3CEnableIfLoaderBecomesActiveU3Eb__23_0_m324074274264994948E3D8CB3D95DE797A6D08B1_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
			WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_5 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_5, L_4, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_6;
			L_6 = AwaiterExtensions_GetAwaiter_mF20B1EFB67A119217295313D9515381D5D058E37(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = SimpleCoroutineAwaiter_get_IsCompleted_m384C7BCE6258DE0C6D6CC3E0E16058A989033A03_inline(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_mD79C89C6DC93D4F70249293DF81E2D4A901697B1((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_11, (SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A **)(&V_2), (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_TisU3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15_mD79C89C6DC93D4F70249293DF81E2D4A901697B1_RuntimeMethod_var);
			goto IL_00c6;
		}

IL_0050:
		{
			RuntimeObject * L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A *)CastclassClass((RuntimeObject*)L_12, SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			SimpleCoroutineAwaiter_tA73B7F12CF10FDD33E39BD52C9495B163FCC016A * L_14 = V_2;
			NullCheck(L_14);
			SimpleCoroutineAwaiter_GetResult_m26F1D8A16049FE28DBD3F8984CC206197FC92429(L_14, /*hidden argument*/NULL);
			// if (IsActiveLoader != null && IsActiveLoader.Value)
			WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * L_15 = V_1;
			NullCheck(L_15);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_16;
			L_16 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_m39BECDEAC511037E21F7CF3498561872C4052737(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			bool L_17;
			L_17 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
			if (!L_17)
			{
				goto IL_0098;
			}
		}

IL_0082:
		{
			WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * L_18 = V_1;
			NullCheck(L_18);
			Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_19;
			L_19 = WindowsMixedRealityEyeGazeDataProvider_get_IsActiveLoader_m39BECDEAC511037E21F7CF3498561872C4052737(L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			bool L_20;
			L_20 = Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_mC9A7615EA5EDA84F8B8055BE43CF91D74820C378_RuntimeMethod_var);
			if (!L_20)
			{
				goto IL_0098;
			}
		}

IL_0092:
		{
			// Enable();
			WindowsMixedRealityEyeGazeDataProvider_tFBC74BF06449D15E60B1B45CF04CE27E34927A36 * L_21 = V_1;
			NullCheck(L_21);
			VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, L_21);
		}

IL_0098:
		{
			goto IL_00b3;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009a;
		}
		throw e;
	}

CATCH_009a:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_23 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_22, L_23, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c6;
	} // end catch (depth: 1)

IL_00b3:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_24, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__23_MoveNext_m715E38AE6544AF25F9852EBC1DB8704C8F63EC8A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__23_MoveNext_m715E38AE6544AF25F9852EBC1DB8704C8F63EC8A(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityEyeGazeDataProvider/<EnableIfLoaderBecomesActive>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableIfLoaderBecomesActiveU3Ed__23_SetStateMachine_mA4BBC6F94BE999AA10A9699C851117E493A0EBEE (U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CEnableIfLoaderBecomesActiveU3Ed__23_SetStateMachine_mA4BBC6F94BE999AA10A9699C851117E493A0EBEE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 * _thisAdjusted = reinterpret_cast<U3CEnableIfLoaderBecomesActiveU3Ed__23_t6332343735ABC65B07C986362A9A89BF7D12FF15 *>(__this + _offset);
	U3CEnableIfLoaderBecomesActiveU3Ed__23_SetStateMachine_mA4BBC6F94BE999AA10A9699C851117E493A0EBEE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_mDDE2996834FB55828125BC65AE626F570931514D (U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_mE6F0801CCB94CC179ED8B8CDC9BE90DA350B2C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSource_t3BE4DEE2B9A2B52798B355A7D3C80B3359393E9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityControllerModelHelpers_tF017226A5B6A8A09057814E373C26AA8BE4B156A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0067;
			}
		}

IL_0011:
		{
			// if (controllerModelProvider == null)
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_3 = V_1;
			NullCheck(L_3);
			WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 * L_4 = L_3->get_controllerModelProvider_30();
			if (L_4)
			{
				goto IL_002a;
			}
		}

IL_0019:
		{
			// controllerModelProvider = new WindowsMixedRealityControllerModelProvider(ControllerHandedness);
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_5 = V_1;
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_6 = V_1;
			NullCheck(L_6);
			uint8_t L_7;
			L_7 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(L_6, /*hidden argument*/NULL);
			WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 * L_8 = (WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 *)il2cpp_codegen_object_new(WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9_il2cpp_TypeInfo_var);
			WindowsMixedRealityControllerModelProvider__ctor_m65B1F0CD5339BEC885E78331E1809653DD6F730F(L_8, L_7, /*hidden argument*/NULL);
			NullCheck(L_5);
			L_5->set_controllerModelProvider_30(L_8);
		}

IL_002a:
		{
			// GameObject controllerModel = await controllerModelProvider.TryGenerateControllerModelFromPlatformSDK();
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_9 = V_1;
			NullCheck(L_9);
			WindowsMixedRealityControllerModelProvider_tF5A7B44C0AA429B9A0D8E934211226BD68992AE9 * L_10 = L_9->get_controllerModelProvider_30();
			NullCheck(L_10);
			Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C * L_11;
			L_11 = WindowsMixedRealityControllerModelProvider_TryGenerateControllerModelFromPlatformSDK_m5F27390BF37F33EF66AB212C252D12E4E50D4F43(L_10, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_12;
			L_12 = Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631(L_11, /*hidden argument*/Task_1_GetAwaiter_mC9F60A3FE21A69EAE50CEDDE78846CD628212631_RuntimeMethod_var);
			V_3 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E((TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mF2D70A16379ED82028C03B9889DEDB782B31214E_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0083;
			}
		}

IL_0044:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_15 = V_3;
			__this->set_U3CU3Eu__1_3(L_15);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_mE6F0801CCB94CC179ED8B8CDC9BE90DA350B2C15((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), (U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B_TisU3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51_mE6F0801CCB94CC179ED8B8CDC9BE90DA350B2C15_RuntimeMethod_var);
			goto IL_011d;
		}

IL_0067:
		{
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B  L_17 = __this->get_U3CU3Eu__1_3();
			V_3 = L_17;
			TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B * L_18 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_0083:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
			L_20 = TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2((TaskAwaiter_1_tFCB38FC42459544ED6BC790AFA407EF5D2689E2B *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_mC01ADF201744C00D26129A34E39CD71A3BE33EF2_RuntimeMethod_var);
			V_2 = L_20;
			// if (this != null)
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_21 = V_1;
			if (!L_21)
			{
				goto IL_00df;
			}
		}

IL_008e:
		{
			// if (controllerModel != null
			//     && MixedRealityControllerModelHelpers.TryAddVisualizationScript(controllerModel, GetType(), ControllerHandedness)
			//     && TryAddControllerModelToSceneHierarchy(controllerModel))
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_23;
			L_23 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_00bd;
			}
		}

IL_0097:
		{
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_2;
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_25 = V_1;
			NullCheck(L_25);
			Type_t * L_26;
			L_26 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_25, /*hidden argument*/NULL);
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_27 = V_1;
			NullCheck(L_27);
			uint8_t L_28;
			L_28 = BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline(L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityControllerModelHelpers_tF017226A5B6A8A09057814E373C26AA8BE4B156A_il2cpp_TypeInfo_var);
			bool L_29;
			L_29 = MixedRealityControllerModelHelpers_TryAddVisualizationScript_m32DB2B398644445EE4DA6899774BE27BA8BFD03C(L_24, L_26, L_28, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_00bd;
			}
		}

IL_00ab:
		{
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_30 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_2;
			NullCheck(L_30);
			bool L_32;
			L_32 = BaseController_TryAddControllerModelToSceneHierarchy_m987ED29A8C97E69F03BFBA1B6FC4BB5C695CDCF7(L_30, L_31, /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_00bd;
			}
		}

IL_00b4:
		{
			// controllerModel.SetActive(true);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = V_2;
			NullCheck(L_33);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_33, (bool)1, /*hidden argument*/NULL);
			// return;
			goto IL_010a;
		}

IL_00bd:
		{
			// Debug.LogWarning("Failed to create controller model from driver; defaulting to BaseController behavior.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_mA477FDA9C0B96C627C085E9EB431EB394B2EBBE0(_stringLiteralBC2D67D9A3E041B2BCE8FE58FE1742A4A3D569B1, /*hidden argument*/NULL);
			// base.TryRenderControllerModel(GetType(), InputSource.SourceType);
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_34 = V_1;
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_35 = V_1;
			NullCheck(L_35);
			Type_t * L_36;
			L_36 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_35, /*hidden argument*/NULL);
			WindowsMixedRealityXRSDKMotionController_t68AF2F4C5EEC7064A05FB61EAA3CA53E3C560CD1 * L_37 = V_1;
			NullCheck(L_37);
			RuntimeObject* L_38;
			L_38 = BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline(L_37, /*hidden argument*/NULL);
			NullCheck(L_38);
			int32_t L_39;
			L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource::get_SourceType() */, IMixedRealityInputSource_t3BE4DEE2B9A2B52798B355A7D3C80B3359393E9C_il2cpp_TypeInfo_var, L_38);
			NullCheck(L_34);
			bool L_40;
			L_40 = WindowsMixedRealityXRSDKMotionController_U3CU3En__0_mD8B51C85A8DE663D73DF60B1F56152D30118C44C(L_34, L_36, L_39, /*hidden argument*/NULL);
		}

IL_00df:
		{
			// if (controllerModel != null)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_42;
			L_42 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_41, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_42)
			{
				goto IL_00ef;
			}
		}

IL_00e8:
		{
			// controllerModel.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_2;
			NullCheck(L_43);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_43, (bool)0, /*hidden argument*/NULL);
		}

IL_00ef:
		{
			goto IL_010a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f1;
		}
		throw e;
	}

CATCH_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_44 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_45 = V_4;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_44, L_45, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011d;
	} // end catch (depth: 1)

IL_010a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_46 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_46, /*hidden argument*/NULL);
	}

IL_011d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_mDDE2996834FB55828125BC65AE626F570931514D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * _thisAdjusted = reinterpret_cast<U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 *>(__this + _offset);
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_MoveNext_mDDE2996834FB55828125BC65AE626F570931514D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController/<TryRenderControllerModelWithModelProvider>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_m499466B52B2899D6DE5674608FC5A389692822D3 (U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_m499466B52B2899D6DE5674608FC5A389692822D3_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 * _thisAdjusted = reinterpret_cast<U3CTryRenderControllerModelWithModelProviderU3Ed__8_tB2CA76678F521DFE5456DDFCD4D053D58AA07F51 *>(__this + _offset);
	U3CTryRenderControllerModelWithModelProviderU3Ed__8_SetStateMachine_m499466B52B2899D6DE5674608FC5A389692822D3(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  MixedRealityPose_get_ZeroIdentity_m12710B3A247440479DB96616366FE061B2626FF9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var);
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_0 = ((MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mF07AF36BF7F6ED7AC4A053D99B1D2E92718EA120_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_mD1A6A1945943E607BEC73C70C17863AE562F763A_inline (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set_position_1(L_0);
		// public Vector3 Position { get { return position; } set { position = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m1387B9E9A45101106950767989AC33BAC018C02C_inline (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ___value0;
		__this->set_rotation_2(L_0);
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_mC624711F15F0AF44AB2505143D6F89D445440DCD_inline (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_mE1CFCD648CACB593F1DEEACAB8CFC6DD7B448228_inline (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  MixedRealityInteractionMapping_get_MixedRealityInputAction_m0CCA19BDAA0B0DB3E88B731B9DBBC35F057DB4FD_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  MixedRealityInteractionMapping_get_PoseData_mA9ECDFDBEA165CDAF72DDB969E3AAD55513CFA3B_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B  L_0 = __this->get_poseData_17();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_mA38F39BAD5C74A8CECB807B1BB13BCFD6979348A_inline (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m4B0FD07AA4FE56C55EF700A4059B8827630333CC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m6AADDF4B898857DA0C833C111025E257BFF208E8_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tD7AE4C3256341A73574B14ACF0DF3C2561904F66_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  MixedRealityInputAction_get_None_m6F2B10042303E1F456F501B9E6BB804C1EEC4CA2_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityInputAction None { get; } = new MixedRealityInputAction(0, "None");
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var);
		MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC  L_0 = ((MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityInputAction_t9529C4E19E5685E1641EFFE4CAF55D5C67BEE2FC_il2cpp_TypeInfo_var))->get_U3CNoneU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObserverOrigin_m22B83CE7FFF3515A7A101B1E5A2255A58348F607_inline (BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BaseSpatialObserver_get_ObservationExtents_mC4089533E55F3846A2E556B655D39B25ACD63F14_inline (BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_m85B3C63586D0D3078DB74B852A088FA48B325069_inline (BaseSpatialObserver_tEA330488B8C80D1F0656CDBEDC4B5B88D51612BB * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * WindowsMixedRealityHandMeshProvider_get_Right_m6B2FBBF5E699D48F7806A95A4F30020657B8BB44_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WindowsMixedRealityHandMeshProvider Right { get; } = new WindowsMixedRealityHandMeshProvider(Handedness.Right);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * L_0 = ((WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var))->get_U3CRightU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * WindowsMixedRealityHandMeshProvider_get_Left_mF44C248411D5A22B533F5A7E0433BB4E0AFF04AB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WindowsMixedRealityHandMeshProvider Left { get; } = new WindowsMixedRealityHandMeshProvider(Handedness.Left);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352 * L_0 = ((WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandMeshProvider_t58A0FC051262C61E308759DAFC2E38AA37EAE352_il2cpp_TypeInfo_var))->get_U3CLeftU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* BaseController_get_Interactions_m34A9D825A44CA3153C0F354DAE9D23D52E110C84_inline (BaseController_t2EFB029340CD13B1D93947E21AEF3940FCB86316 * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_t9DED78FCA049E22E5A1BF77245C248DCF1E67249* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArticulatedHandPose_get_JointCount_mD216D8BBB999CA55652BDA391D3462507735B4AC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int JointCount { get; } = Joints.Length;
		IL2CPP_RUNTIME_CLASS_INIT(ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_StaticFields*)il2cpp_codegen_static_fields_for(ArticulatedHandPose_t9818C106196B9D2E4CA100D93D83698591FC605D_il2cpp_TypeInfo_var))->get_U3CJointCountU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityPose_get_Rotation_m4F32A5FE103D399290226F23D2A2D0AFCC1F332D_inline (MixedRealityPose_tB59AB4C5EA5C40CB32A1F63ED99F997FE4E8A20B * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rotation_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mAEF66F69990EBF4A445469D118AC6E0CDD3A02FF_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method)
{
	{
		// public AxisType AxisType => axisType;
		int32_t L_0 = __this->get_axisType_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m3105F21601C32387966B1DF076274C20034225D6_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_m666DAB155596B3FA917C80AF8040171F128AD033_inline (MixedRealityInteractionMapping_t042C9171511F78B4AC6791935412A3637DE47055 * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_vector2Data_14();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m56EB7A59E8A1E9BA78E127EB6432D892B4295B4A_gshared_inline (BaseDataProvider_1_tFB70008137617CC7583F8B8BB03CC5741A8FDCC3 * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_13();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  List_1_get_Item_m00B64725E6638CA8D646B82D48E27F7F6C1987E1_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6* L_2 = (BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BoneU5BU5D_t2272F77511BCE614BA7A8E6713E4086CAE20D9B6*)L_2, (int32_t)L_3);
		return (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m904D17D69CA4B3A9294D43F517A66199CA184DA7_gshared_inline (List_1_t21F7B14C2562AC8557927E01902D192C8CFBCBE5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
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
