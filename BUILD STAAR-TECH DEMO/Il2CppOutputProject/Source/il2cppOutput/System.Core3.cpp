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

// System.Action`2<System.Linq.Expressions.Interpreter.LightCompiler,System.Linq.Expressions.Expression>
struct Action_2_tCFFCACC0601C873A56443DC9387C5D8D57088AFD;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Linq.Expressions.Interpreter.LightLambda,System.Delegate>>
struct CacheDict_2_t9D92F7790C360762AF946BFAD651DB03DD8D20B4;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352;
// System.Func`2<System.Linq.Expressions.Expression,System.Boolean>
struct Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Linq.Expressions.SwitchCase,System.Boolean>
struct Func_2_tFB161B1B7D6BD3D4B141C0C6DB98392BA3F8E144;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0;
// System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<System.Linq.Expressions.LabelTarget,System.Linq.Expressions.Interpreter.LabelInfo>
struct HybridReferenceDictionary_2_t60B1C8AB2AC62A920538F1EDBC6ECF024422648D;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t947D2FEEDF3348F6F77C55E8712AD442E6A65F83;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t25F6568124205E1DCEEEFEF9FFD485B340114892;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_tBA929C89BC35AAE67764DAA82D62E01A200D3C7D;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t577FCBB6A17E4D24559E5AD6C70155CFF0DFACAC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Linq.Expressions.ParameterExpression,System.Int32>
struct KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4;
// System.Collections.Generic.List`1<System.Linq.Expressions.Interpreter.DebugInfo>
struct List_1_t3EC344D94F9368D5C819EFC5CDF6DFC92D343AAC;
// System.Collections.Generic.List`1<System.Linq.Expressions.Interpreter.LocalVariables/VariableScope>
struct List_1_t0BE9CF1B63513203BF2C31079D97D75C6DAECF49;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<System.Linq.Expressions.ParameterExpression>
struct Stack_1_t5A78D7BE355DFAF5BE94ADF12FB8288AE28D4B4F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Linq.Expressions.ParameterExpression,System.Int32>
struct ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B;
// System.Collections.Generic.Dictionary`2/Entry<System.Linq.Expressions.ParameterExpression,System.Int32>[]
struct EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B;
// System.Collections.Generic.Dictionary`2/Entry<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>[]
struct EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
// System.Runtime.CompilerServices.IStrongBox[]
struct IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Linq.Expressions.Interpreter.LocalDefinition[]
struct LocalDefinitionU5BU5D_t24CED16236F9597A53E95E14A9C6310A7273BAA2;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Linq.Expressions.BlockExpression
struct BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB;
// System.Linq.Expressions.CatchBlock
struct CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB;
// System.Linq.Expressions.DefaultExpression
struct DefaultExpression_t3FC1DD4F4C518F7FDF62C04BB3BF78B10D654D46;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.CompilerServices.IStrongBox
struct IStrongBox_t37B8B513E3C7EF457F23D5089D694BE7F6095F54;
// System.Linq.Expressions.Interpreter.Instruction
struct Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF;
// System.Linq.Expressions.Interpreter.InstructionList
struct InstructionList_t7D683377AFF05D9FAE010EE6A15DE84E72700118;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2;
// System.Linq.Expressions.Interpreter.Interpreter
struct Interpreter_t72F078C1054752C763660835B3B3488A135D178B;
// System.Linq.Expressions.Interpreter.LabelScopeInfo
struct LabelScopeInfo_t9F44B28B112B8912DB6BB8C12F53DB6B107E346F;
// System.Linq.Expressions.Interpreter.LessThanInstruction
struct LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction
struct LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950;
// System.Linq.Expressions.Interpreter.LightCompiler
struct LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA;
// System.Linq.Expressions.Interpreter.LightDelegateCreator
struct LightDelegateCreator_tA7A81CB278CE2C07EC06CB7805CAB65068453D4D;
// System.Linq.Expressions.Interpreter.LightLambda
struct LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE;
// System.Linq.Expressions.Interpreter.LocalVariable
struct LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409;
// System.Linq.Expressions.Interpreter.LocalVariables
struct LocalVariables_tFD3F8FE77C4F8E4E2D98F8965F26A672AEEF59F2;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.Interpreter.ModuloInstruction
struct ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12;
// System.Linq.Expressions.Interpreter.MulInstruction
struct MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795;
// System.Linq.Expressions.Interpreter.MulOvfInstruction
struct MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F;
// System.Linq.Expressions.Interpreter.NegateCheckedInstruction
struct NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044;
// System.Linq.Expressions.Interpreter.NegateInstruction
struct NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C;
// System.Linq.Expressions.Interpreter.NotEqualInstruction
struct NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F;
// System.Linq.Expressions.Interpreter.NotInstruction
struct NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
struct NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF;
// System.Linq.Expressions.Interpreter.NumericConvertInstruction
struct NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9;
// System.Linq.Expressions.Interpreter.OrInstruction
struct OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Linq.Expressions.Interpreter.RightShiftInstruction
struct RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Linq.Expressions.StackGuard
struct StackGuard_tAA7C98E484C90664FF3CAC6E4DD23BDA416AF572;
// System.String
struct String_t;
// System.Linq.Expressions.Interpreter.SubInstruction
struct SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD;
// System.Linq.Expressions.Interpreter.SubOvfInstruction
struct SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721;
// System.Linq.Expressions.SwitchCase
struct SwitchCase_tDF1085BCF1AA039BA1EB39F5CDC5D58C4EA01B80;
// System.Type
struct Type_t;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT
struct CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B;
// System.Linq.Expressions.Interpreter.LessThanInstruction/LessThanUInt64
struct LessThanUInt64_t596971E190C01922E5715E022FDBFE8E2929D3BF;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualByte
struct LessThanOrEqualByte_tB561B8AF7DC8FBEE6C6928D09636EF6A7761A342;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualChar
struct LessThanOrEqualChar_t18856D7C2296E38F2E54992D2AADE2E298E73053;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualDouble
struct LessThanOrEqualDouble_tB9D7FDEC1B78E5E4A11A69F1781AD4970C660FC9;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt16
struct LessThanOrEqualInt16_tEC6E2231FD28E2C71B96169247AB32FDAE47CBFC;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt32
struct LessThanOrEqualInt32_t3CCB20139F9A5324429729F3BC83157433DD1107;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt64
struct LessThanOrEqualInt64_tA4B2F32014006C4919C668127650B39819E6BD76;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSByte
struct LessThanOrEqualSByte_tA7E2E6589739DAEA22DBC4D85A316950B7CC5EED;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSingle
struct LessThanOrEqualSingle_t5345043B7BF3232A078A2F8658709CD115396B2F;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt16
struct LessThanOrEqualUInt16_tCD9E99F324091C4B21E4177ABD881ADD0BCEEB66;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt32
struct LessThanOrEqualUInt32_tCA28EDA5CE6F7072F7725E9012DD81F6E8B166D6;
// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt64
struct LessThanOrEqualUInt64_t9BB557448DF57562BE70C6374755A8B4EA38999D;
// System.Linq.Expressions.Interpreter.LightCompiler/<>c
struct U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627;
// System.Linq.Expressions.Interpreter.LightLambda/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_t7379A2E60948D6CA3B55C5DDF3C4A7F5BCC3C5E9;
// System.Linq.Expressions.Interpreter.LocalVariables/VariableScope
struct VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3;
// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloDouble
struct ModuloDouble_t85C00369147856541C1AFD83063A2D5017C6C104;
// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt16
struct ModuloInt16_tEC5FBD7C5B21DFE477BEBD720DD81085954010BE;
// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt32
struct ModuloInt32_t64EF14D7AB04B507AABC0B5EEE481B990B2C59ED;
// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt64
struct ModuloInt64_t13C0FD4FEB78A9BE8E963C5E5EA99E195932E98E;
// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloSingle
struct ModuloSingle_tF74D09F3A4707F07021BEF0C9CEC043680C91DD2;
// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt16
struct ModuloUInt16_t5E947CE690D91C84FF679963ED82F541C8A82FBE;
// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt32
struct ModuloUInt32_tCEA7EBCA3E33E679E45B745151F023AAC8D30C2E;
// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt64
struct ModuloUInt64_t6CDDA770850B746CA5BE6C9394D1F8874972C66F;
// System.Linq.Expressions.Interpreter.MulInstruction/MulDouble
struct MulDouble_tC7A9DDBAF456BC7CB3ABB400AD17FD0DECD7C347;
// System.Linq.Expressions.Interpreter.MulInstruction/MulInt16
struct MulInt16_tE83B721BCCEC251C3854197DA96A7F5522D843BE;
// System.Linq.Expressions.Interpreter.MulInstruction/MulInt32
struct MulInt32_tF13F28AD7EB91F1AA97CED250E4C80D7F5D4C158;
// System.Linq.Expressions.Interpreter.MulInstruction/MulInt64
struct MulInt64_t65D2E93B3C199CE535C52B0EE9AFAAAD68BB3734;
// System.Linq.Expressions.Interpreter.MulInstruction/MulSingle
struct MulSingle_t74402710FF0351799A5B4D392C2BDA323C950296;
// System.Linq.Expressions.Interpreter.MulInstruction/MulUInt16
struct MulUInt16_tF2A3E37BBF7A928D005B0222BC4AD7275B59DBD9;
// System.Linq.Expressions.Interpreter.MulInstruction/MulUInt32
struct MulUInt32_tB5C1F97A7747368E74533F42C650F4B46E170D8B;
// System.Linq.Expressions.Interpreter.MulInstruction/MulUInt64
struct MulUInt64_t44838D752E63CB18B7C49CF8C9D903F620EEE68C;
// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt16
struct MulOvfInt16_t0356A292FE9F9E37C7C564207FFF4090B6CA0859;
// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt32
struct MulOvfInt32_t3648CEF4DA473D1520961F2FF7AE5F6DB7567801;
// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt64
struct MulOvfInt64_t64A634E483A2B54B6EB065CA6B429A9CDBB6E7B3;
// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt16
struct MulOvfUInt16_t85735FA2E04C6417C22C546D046B335845130B3B;
// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt32
struct MulOvfUInt32_tDD0754E1EC3EAFE6CD29E49729B7988DC4DF24CE;
// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt64
struct MulOvfUInt64_t3ADF56F97689C58A0F7E3215BD05E1CC746B70C6;
// System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt16
struct NegateCheckedInt16_t93081D554367AFA15DDB87B50500C6340B3514F0;
// System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt32
struct NegateCheckedInt32_t7264E878230A73CF1D49E976740A9AFBA5DE754D;
// System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt64
struct NegateCheckedInt64_t6FB52C5964E523506A395FD3B367DBF9B03F1E46;
// System.Linq.Expressions.Interpreter.NegateInstruction/NegateDouble
struct NegateDouble_tF8275133D4B3B5062558107888B464D3DA062BA3;
// System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt16
struct NegateInt16_tDCD40177F94C4B38627AB0CB892FECC79548E86E;
// System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt32
struct NegateInt32_tF6BF7BE8AB8C9A3F7E9DEAC43DB00D3D2E78119B;
// System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt64
struct NegateInt64_tED1DFAD093B3F98212213FC4870F2E1C4CA71E9F;
// System.Linq.Expressions.Interpreter.NegateInstruction/NegateSingle
struct NegateSingle_t82B98471BC216C81F6CF5C7C54A4DF6027C44F68;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualBoolean
struct NotEqualBoolean_t77A0F9D73D84C9B9F30328FE936333A709B49634;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByte
struct NotEqualByte_t0433CF566A812D7150B206A212A7A011A3693909;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByteLiftedToNull
struct NotEqualByteLiftedToNull_t4B0306112B0FA55F120C8CC76FDDEB8114FCCE4C;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualChar
struct NotEqualChar_t2E64F268F946202C10B0FF6A98697E44D5DA40F3;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualCharLiftedToNull
struct NotEqualCharLiftedToNull_tE8642F9256114065213AC05B4B1E2353EBE7B0B6;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualDouble
struct NotEqualDouble_t727CF8B29E7226E7652B50377355D4F377536E4C;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualDoubleLiftedToNull
struct NotEqualDoubleLiftedToNull_t7268B8C5C35A12C818CC81360142652D6D31785A;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16
struct NotEqualInt16_t3A0BDC9FFFA26F55EA2DBC249A90C50A1D595681;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16LiftedToNull
struct NotEqualInt16LiftedToNull_t9464D77B3AAD41F052E141890C57846556F308C1;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt32
struct NotEqualInt32_t7635EB96815AA06FEB4BE971EE00E3CE33AF4FBA;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt32LiftedToNull
struct NotEqualInt32LiftedToNull_t831BDFE883B2D2F1F748BCAFA432A15DB7444E52;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt64
struct NotEqualInt64_t50A116648DB45EA9165989F28BBEEF42755E5438;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt64LiftedToNull
struct NotEqualInt64LiftedToNull_t03B45D95A3CD8516FC13222B879FB28EA88717A6;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualReference
struct NotEqualReference_tE3E7F054E29292325F5ACA560283A8E6C7C8B68F;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSByte
struct NotEqualSByte_t22F9223F00D4EE405B6C25362E3E1124B681321D;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSByteLiftedToNull
struct NotEqualSByteLiftedToNull_t05B614C6208E2437ECFDC7E7640F9BFA70A1906B;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSingle
struct NotEqualSingle_t898F32E852A5F1B730BB94CB72759DCD8255750C;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSingleLiftedToNull
struct NotEqualSingleLiftedToNull_t851ED8232C3EF20F250F993CA4EC07F8FA626C11;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt16
struct NotEqualUInt16_tD1CA3DA33B60C4DD21BB33DE6C73DE51EDCFF02C;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt16LiftedToNull
struct NotEqualUInt16LiftedToNull_t10EAAB4DFE1C7BF9D2C5006F38032CE4113A3D12;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt32
struct NotEqualUInt32_t9DF61EB40618D7E00D08E13AD5D3361DB5260E0F;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt32LiftedToNull
struct NotEqualUInt32LiftedToNull_t68DEC29703B8B14A950440F2C2C3DB3EF2C7EEE0;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt64
struct NotEqualUInt64_tBB177E7D8ECA57B0B4764484FB20936CFD2E598F;
// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt64LiftedToNull
struct NotEqualUInt64LiftedToNull_t9CC27D81FF8C4281A9CF12603301798930776836;
// System.Linq.Expressions.Interpreter.NotInstruction/NotBoolean
struct NotBoolean_t7E81F0BAF53A01C8769C49BA5D909700C3A85DF3;
// System.Linq.Expressions.Interpreter.NotInstruction/NotByte
struct NotByte_t005DA1FE32B95AC480326E672ABACB80B309957B;
// System.Linq.Expressions.Interpreter.NotInstruction/NotInt16
struct NotInt16_t83114BC0D88B4B3EB5554761901EFBD229273501;
// System.Linq.Expressions.Interpreter.NotInstruction/NotInt32
struct NotInt32_tC4172C3A5C27706E61386FC18DBA96E301A6837C;
// System.Linq.Expressions.Interpreter.NotInstruction/NotInt64
struct NotInt64_tDCD330F193F99EBA6DF1A64E1AA3EC518065DB20;
// System.Linq.Expressions.Interpreter.NotInstruction/NotSByte
struct NotSByte_t7647870AE7DEDA5DA8F1601BD670F96729873001;
// System.Linq.Expressions.Interpreter.NotInstruction/NotUInt16
struct NotUInt16_tFC37A1969EA64845C7E1118B84A8EB0006668739;
// System.Linq.Expressions.Interpreter.NotInstruction/NotUInt32
struct NotUInt32_t58FCF0CAD14A7820A8731A76D08B121A0A93A9F3;
// System.Linq.Expressions.Interpreter.NotInstruction/NotUInt64
struct NotUInt64_t1B7DF3021DEBC21B61D87AFD775AF1E4D6C66E1E;
// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/EqualsClass
struct EqualsClass_t285D99AF64A008779832ADA21DC0E02903CA5C45;
// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetHashCodeClass
struct GetHashCodeClass_tAFF5BBFE8D3225AA4E70465A0108D9B6FE7826F1;
// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValue
struct GetValue_t9DEEE6C9CCD20753F1A1F39B9CAFB5157024EEB9;
// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault
struct GetValueOrDefault_t0441FF7D2ADC0CFF7640BDEA6E5AEBDB94E58213;
// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault1
struct GetValueOrDefault1_t0A65C8B1304D9D8E9CE7DBE897476349855BE675;
// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/HasValue
struct HasValue_t45F7340A1654528F9129DD06808DEE3E09261821;
// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/ToStringClass
struct ToStringClass_t8668E59BA5ABBABF3286628C398A099F0546914D;
// System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked
struct Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380;
// System.Linq.Expressions.Interpreter.NumericConvertInstruction/ToUnderlying
struct ToUnderlying_tB8738F9853F450A39DA849AE376E7D241529C3A4;
// System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked
struct Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E;
// System.Linq.Expressions.Interpreter.OrInstruction/OrBoolean
struct OrBoolean_tB5ACCAED459D6CB59C9E07A7262C47F0F8F54F19;
// System.Linq.Expressions.Interpreter.OrInstruction/OrByte
struct OrByte_t201A377B95ABC243F185019710B98220335474B0;
// System.Linq.Expressions.Interpreter.OrInstruction/OrInt16
struct OrInt16_tDCAC652458E4A355ED5945D621DB6CDE47766A90;
// System.Linq.Expressions.Interpreter.OrInstruction/OrInt32
struct OrInt32_tBB86B9EC780E61CDE55CE0A6C7DDB168C3BE70FF;
// System.Linq.Expressions.Interpreter.OrInstruction/OrInt64
struct OrInt64_t7DB4AF687896C3540F17A785CD195748FC5B31F0;
// System.Linq.Expressions.Interpreter.OrInstruction/OrSByte
struct OrSByte_tBD96031881884B43042D1825F549982894E1627E;
// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt16
struct OrUInt16_t88C758255AE7C9D2CFF3033E2CE589B7C74A3E3F;
// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt32
struct OrUInt32_t9982D5B99CDCA5A4C41529753D5D71AF6FF740BC;
// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt64
struct OrUInt64_tE09557C73068791FE26C2FDB13BADDB4069285AA;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftByte
struct RightShiftByte_t5F287F9A98BD517088EBEBB5762D9B5547411F02;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt16
struct RightShiftInt16_t2CE116D1706B0B2E1BBC6F132D090C0B344DA147;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt32
struct RightShiftInt32_t28B8326998E527389A4C0B7F66CB0CDC2997AECD;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt64
struct RightShiftInt64_tD5FE689CDEC4FB15BE4001CE537725EA23C90692;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftSByte
struct RightShiftSByte_t3BAA90C2005D7DBF702594A81C6FD7DB336FAE60;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt16
struct RightShiftUInt16_t4107CD5715606EAAF84FFAFA9B8DD0261B14CBF6;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt32
struct RightShiftUInt32_tBE3AD1CB4803EE031AB2D8FBFAC118DA0C36C077;
// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt64
struct RightShiftUInt64_t11D41A57381AEE78C426DE33130B91A7D55876BB;
// System.Linq.Expressions.Interpreter.SubInstruction/SubDouble
struct SubDouble_tD043A690C939E826740F3980649781CF246DCDF2;
// System.Linq.Expressions.Interpreter.SubInstruction/SubInt16
struct SubInt16_t54BA31141EB907D849DEA9B01CF7BC6D50D6990A;
// System.Linq.Expressions.Interpreter.SubInstruction/SubInt32
struct SubInt32_t45C297528948D24B11B80E5D5F9160424C4FB6A5;
// System.Linq.Expressions.Interpreter.SubInstruction/SubInt64
struct SubInt64_t2A292A0D8C604FDE28954B60EF80E36285F47511;
// System.Linq.Expressions.Interpreter.SubInstruction/SubSingle
struct SubSingle_t2561FE69D9CDA0F6C0A1A8958CF2417D34541B26;
// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt16
struct SubUInt16_tCBA7FBA9D5D99CB82C5E63FE3218C6F80E13EFBD;
// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt32
struct SubUInt32_t4DFA170330F70C0F8F9F211169DC93235FF64BAF;
// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt64
struct SubUInt64_t986CC4C6FC8D2F5D1601D820D690EAE039CB21CC;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt16
struct SubOvfInt16_tAEAF2F6A8C023CE3CBB545F3CF87B52081F7D1F0;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt32
struct SubOvfInt32_tB06ACE45D8557990B724B37C14C83ABB0EBEB019;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt64
struct SubOvfInt64_t9BC0A0C8BFBCC9B1CBF3A7468DE27A8F5BA13D8B;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt16
struct SubOvfUInt16_t44B387BAA3E156B5D3A023F247C9FC208905B53F;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt32
struct SubOvfUInt32_tB163618E06EE74B7F7F2D6B80F217B712A5DF6A0;
// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt64
struct SubOvfUInt64_t321A38C66A5A2020B95D7E7042AB287565C4B18E;
// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Ref
struct Ref_t168CC06E3E836CBD2DA362F99B022F5D79504E10;
// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Value
struct Value_t291D50D67C4EC0983FA0B027505922ED0110765D;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t49590B5D404F709CAB64E6E2DF151598B0DCE343_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStrongBox_t37B8B513E3C7EF457F23D5089D694BE7F6095F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteralD3E89B02BBA9F60219FC7F02742EEB1386A53E33;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE3C65B6FF1CFCF13E04997A1ED4E5E23AC99D931;
IL2CPP_EXTERN_C String_t* _stringLiteralF75AE27F892A4631428AA6C707A9C422EDC0CA7E;
IL2CPP_EXTERN_C const RuntimeMethod* Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Checked_Convert_m70AC7F389FF7AD8E8BC95357EE187DF804EF15C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5A3630F90E9221CE5AF56F84C35B315006FB4009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9C046414E689374E4FE186B69578A3B628923ADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAE7C5326C63F17A99C6EC4BF5FEF9B4202820A65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE66FD35BF03F4B7FA4A67A940C1E86D26C049915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mBD181C20A23BC90297DC8EB8A5C174916CE038B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_All_TisExpression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_m54807002F0E994780641C8B9E1DC5DE8FB2B9131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mD98DE29C63B0C2ED8BB624193567B60581CFF7D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MulOvfInt16_Run_m49BAB13B287F9C8B43DC7A30913CBA09BCE5BCCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MulOvfInt32_Run_m601978C46388CB0AAE60B6BA0A46256C0E0D3286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MulOvfInt64_Run_mA8178F06D24189093549CDD8481371EB494A81B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MulOvfUInt16_Run_mED3613C3511558FBFA4B89C542603F254D6C57AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MulOvfUInt32_Run_m9D4E7E377C3EDD8CD6FA12378C961DD9E51A0CB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MulOvfUInt64_Run_m513A09384068A252FDF2FD7A056137A22E63C47A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NegateCheckedInt16_Run_mDBFD006EB1FB803E6711F1C3A4F1B283FF580670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NegateCheckedInt32_Run_mB68F3D57F8E6ECD1E69A10D49D905B1291F13554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NegateCheckedInt64_Run_mFA52B230AF749E3EE1749F11155467F36E3213AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ToUnderlying_Convert_m2A2624EA65C7896601FF333FD9A4400E4A1C5061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCompileSwitchExpressionU3Eb__56_1_m6828650DFEACF72B54E7DE1C829EB4E38EA552F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unchecked_ConvertDouble_m113E4E31F03A8F6477308AA705D0213F209F3693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unchecked_ConvertInt64_mD10BC2A1110F9D63DE01D8E21FC5B82DA1B8A2F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unchecked_ConvertUInt64_m695AF02D0E8A6450DD905576E97069933D742887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unchecked_Convert_m82A33A999D1A36B11D845A77E895C853CC9A9D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Value_ConvertNull_mA3E3A08DD5953CC5A4645CFAD29F2EEB2F2BC4F4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63;
struct IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B* ___entries_1;
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
	KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___entries_1)); }
	inline EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0C0EDF03657007CFB93FB445122D2CBFDD11FD4B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___keys_7)); }
	inline KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB713866E033A4E5809947C681965A725EE2C69EE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ___values_8)); }
	inline ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5C06D27353DAC3E252F8492A61B207F0639A525C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830* ___entries_1;
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
	KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___entries_1)); }
	inline EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1DB26BC686C5A56AD750737006F54BD221750830* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___keys_7)); }
	inline KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7BB4B236B23C57AB5915BEDB01D77702CFD10FB4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ___values_8)); }
	inline ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBB278FFC214913E5F8D2805B3FAC62FDF7A9748B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* ____slots_8;
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
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____slots_8)); }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____array_0)); }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* get__array_0() const { return ____array_0; }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Linq.Expressions.CatchBlock
struct CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.CatchBlock::<Variable>k__BackingField
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___U3CVariableU3Ek__BackingField_0;
	// System.Type System.Linq.Expressions.CatchBlock::<Test>k__BackingField
	Type_t * ___U3CTestU3Ek__BackingField_1;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Body>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CBodyU3Ek__BackingField_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::<Filter>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CFilterU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CVariableU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CVariableU3Ek__BackingField_0)); }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * get_U3CVariableU3Ek__BackingField_0() const { return ___U3CVariableU3Ek__BackingField_0; }
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** get_address_of_U3CVariableU3Ek__BackingField_0() { return &___U3CVariableU3Ek__BackingField_0; }
	inline void set_U3CVariableU3Ek__BackingField_0(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		___U3CVariableU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVariableU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTestU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CTestU3Ek__BackingField_1)); }
	inline Type_t * get_U3CTestU3Ek__BackingField_1() const { return ___U3CTestU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CTestU3Ek__BackingField_1() { return &___U3CTestU3Ek__BackingField_1; }
	inline void set_U3CTestU3Ek__BackingField_1(Type_t * value)
	{
		___U3CTestU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CBodyU3Ek__BackingField_2)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CBodyU3Ek__BackingField_2() const { return ___U3CBodyU3Ek__BackingField_2; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CBodyU3Ek__BackingField_2() { return &___U3CBodyU3Ek__BackingField_2; }
	inline void set_U3CBodyU3Ek__BackingField_2(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CBodyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBodyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFilterU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB, ___U3CFilterU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CFilterU3Ek__BackingField_3() const { return ___U3CFilterU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CFilterU3Ek__BackingField_3() { return &___U3CFilterU3Ek__BackingField_3; }
	inline void set_U3CFilterU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CFilterU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFilterU3Ek__BackingField_3), (void*)value);
	}
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Interpreter.Instruction
struct Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF  : public RuntimeObject
{
public:

public:
};


// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2  : public RuntimeObject
{
public:
	// System.Linq.Expressions.Interpreter.Interpreter System.Linq.Expressions.Interpreter.InterpretedFrame::Interpreter
	Interpreter_t72F078C1054752C763660835B3B3488A135D178B * ___Interpreter_1;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.InterpretedFrame::_parent
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ____parent_2;
	// System.Int32[] System.Linq.Expressions.Interpreter.InterpretedFrame::_continuations
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____continuations_3;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame::_continuationIndex
	int32_t ____continuationIndex_4;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame::_pendingContinuation
	int32_t ____pendingContinuation_5;
	// System.Object System.Linq.Expressions.Interpreter.InterpretedFrame::_pendingValue
	RuntimeObject * ____pendingValue_6;
	// System.Object[] System.Linq.Expressions.Interpreter.InterpretedFrame::Data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Data_7;
	// System.Runtime.CompilerServices.IStrongBox[] System.Linq.Expressions.Interpreter.InterpretedFrame::Closure
	IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* ___Closure_8;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame::StackIndex
	int32_t ___StackIndex_9;
	// System.Int32 System.Linq.Expressions.Interpreter.InterpretedFrame::InstructionIndex
	int32_t ___InstructionIndex_10;

public:
	inline static int32_t get_offset_of_Interpreter_1() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___Interpreter_1)); }
	inline Interpreter_t72F078C1054752C763660835B3B3488A135D178B * get_Interpreter_1() const { return ___Interpreter_1; }
	inline Interpreter_t72F078C1054752C763660835B3B3488A135D178B ** get_address_of_Interpreter_1() { return &___Interpreter_1; }
	inline void set_Interpreter_1(Interpreter_t72F078C1054752C763660835B3B3488A135D178B * value)
	{
		___Interpreter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Interpreter_1), (void*)value);
	}

	inline static int32_t get_offset_of__parent_2() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____parent_2)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get__parent_2() const { return ____parent_2; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of__parent_2() { return &____parent_2; }
	inline void set__parent_2(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		____parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_2), (void*)value);
	}

	inline static int32_t get_offset_of__continuations_3() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____continuations_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__continuations_3() const { return ____continuations_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__continuations_3() { return &____continuations_3; }
	inline void set__continuations_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____continuations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____continuations_3), (void*)value);
	}

	inline static int32_t get_offset_of__continuationIndex_4() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____continuationIndex_4)); }
	inline int32_t get__continuationIndex_4() const { return ____continuationIndex_4; }
	inline int32_t* get_address_of__continuationIndex_4() { return &____continuationIndex_4; }
	inline void set__continuationIndex_4(int32_t value)
	{
		____continuationIndex_4 = value;
	}

	inline static int32_t get_offset_of__pendingContinuation_5() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____pendingContinuation_5)); }
	inline int32_t get__pendingContinuation_5() const { return ____pendingContinuation_5; }
	inline int32_t* get_address_of__pendingContinuation_5() { return &____pendingContinuation_5; }
	inline void set__pendingContinuation_5(int32_t value)
	{
		____pendingContinuation_5 = value;
	}

	inline static int32_t get_offset_of__pendingValue_6() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ____pendingValue_6)); }
	inline RuntimeObject * get__pendingValue_6() const { return ____pendingValue_6; }
	inline RuntimeObject ** get_address_of__pendingValue_6() { return &____pendingValue_6; }
	inline void set__pendingValue_6(RuntimeObject * value)
	{
		____pendingValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pendingValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_Data_7() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___Data_7)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Data_7() const { return ___Data_7; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Data_7() { return &___Data_7; }
	inline void set_Data_7(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Data_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_7), (void*)value);
	}

	inline static int32_t get_offset_of_Closure_8() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___Closure_8)); }
	inline IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* get_Closure_8() const { return ___Closure_8; }
	inline IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F** get_address_of_Closure_8() { return &___Closure_8; }
	inline void set_Closure_8(IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* value)
	{
		___Closure_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Closure_8), (void*)value);
	}

	inline static int32_t get_offset_of_StackIndex_9() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___StackIndex_9)); }
	inline int32_t get_StackIndex_9() const { return ___StackIndex_9; }
	inline int32_t* get_address_of_StackIndex_9() { return &___StackIndex_9; }
	inline void set_StackIndex_9(int32_t value)
	{
		___StackIndex_9 = value;
	}

	inline static int32_t get_offset_of_InstructionIndex_10() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2, ___InstructionIndex_10)); }
	inline int32_t get_InstructionIndex_10() const { return ___InstructionIndex_10; }
	inline int32_t* get_address_of_InstructionIndex_10() { return &___InstructionIndex_10; }
	inline void set_InstructionIndex_10(int32_t value)
	{
		___InstructionIndex_10 = value;
	}
};

struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2_ThreadStaticFields
{
public:
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.InterpretedFrame::s_currentFrame
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___s_currentFrame_0;

public:
	inline static int32_t get_offset_of_s_currentFrame_0() { return static_cast<int32_t>(offsetof(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2_ThreadStaticFields, ___s_currentFrame_0)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get_s_currentFrame_0() const { return ___s_currentFrame_0; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of_s_currentFrame_0() { return &___s_currentFrame_0; }
	inline void set_s_currentFrame_0(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		___s_currentFrame_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentFrame_0), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.LightCompiler
struct LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA  : public RuntimeObject
{
public:
	// System.Linq.Expressions.Interpreter.InstructionList System.Linq.Expressions.Interpreter.LightCompiler::_instructions
	InstructionList_t7D683377AFF05D9FAE010EE6A15DE84E72700118 * ____instructions_0;
	// System.Linq.Expressions.Interpreter.LocalVariables System.Linq.Expressions.Interpreter.LightCompiler::_locals
	LocalVariables_tFD3F8FE77C4F8E4E2D98F8965F26A672AEEF59F2 * ____locals_1;
	// System.Collections.Generic.List`1<System.Linq.Expressions.Interpreter.DebugInfo> System.Linq.Expressions.Interpreter.LightCompiler::_debugInfos
	List_1_t3EC344D94F9368D5C819EFC5CDF6DFC92D343AAC * ____debugInfos_2;
	// System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<System.Linq.Expressions.LabelTarget,System.Linq.Expressions.Interpreter.LabelInfo> System.Linq.Expressions.Interpreter.LightCompiler::_treeLabels
	HybridReferenceDictionary_2_t60B1C8AB2AC62A920538F1EDBC6ECF024422648D * ____treeLabels_3;
	// System.Linq.Expressions.Interpreter.LabelScopeInfo System.Linq.Expressions.Interpreter.LightCompiler::_labelBlock
	LabelScopeInfo_t9F44B28B112B8912DB6BB8C12F53DB6B107E346F * ____labelBlock_4;
	// System.Collections.Generic.Stack`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler::_exceptionForRethrowStack
	Stack_1_t5A78D7BE355DFAF5BE94ADF12FB8288AE28D4B4F * ____exceptionForRethrowStack_5;
	// System.Linq.Expressions.Interpreter.LightCompiler System.Linq.Expressions.Interpreter.LightCompiler::_parent
	LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA * ____parent_6;
	// System.Linq.Expressions.StackGuard System.Linq.Expressions.Interpreter.LightCompiler::_guard
	StackGuard_tAA7C98E484C90664FF3CAC6E4DD23BDA416AF572 * ____guard_7;

public:
	inline static int32_t get_offset_of__instructions_0() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA, ____instructions_0)); }
	inline InstructionList_t7D683377AFF05D9FAE010EE6A15DE84E72700118 * get__instructions_0() const { return ____instructions_0; }
	inline InstructionList_t7D683377AFF05D9FAE010EE6A15DE84E72700118 ** get_address_of__instructions_0() { return &____instructions_0; }
	inline void set__instructions_0(InstructionList_t7D683377AFF05D9FAE010EE6A15DE84E72700118 * value)
	{
		____instructions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instructions_0), (void*)value);
	}

	inline static int32_t get_offset_of__locals_1() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA, ____locals_1)); }
	inline LocalVariables_tFD3F8FE77C4F8E4E2D98F8965F26A672AEEF59F2 * get__locals_1() const { return ____locals_1; }
	inline LocalVariables_tFD3F8FE77C4F8E4E2D98F8965F26A672AEEF59F2 ** get_address_of__locals_1() { return &____locals_1; }
	inline void set__locals_1(LocalVariables_tFD3F8FE77C4F8E4E2D98F8965F26A672AEEF59F2 * value)
	{
		____locals_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____locals_1), (void*)value);
	}

	inline static int32_t get_offset_of__debugInfos_2() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA, ____debugInfos_2)); }
	inline List_1_t3EC344D94F9368D5C819EFC5CDF6DFC92D343AAC * get__debugInfos_2() const { return ____debugInfos_2; }
	inline List_1_t3EC344D94F9368D5C819EFC5CDF6DFC92D343AAC ** get_address_of__debugInfos_2() { return &____debugInfos_2; }
	inline void set__debugInfos_2(List_1_t3EC344D94F9368D5C819EFC5CDF6DFC92D343AAC * value)
	{
		____debugInfos_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____debugInfos_2), (void*)value);
	}

	inline static int32_t get_offset_of__treeLabels_3() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA, ____treeLabels_3)); }
	inline HybridReferenceDictionary_2_t60B1C8AB2AC62A920538F1EDBC6ECF024422648D * get__treeLabels_3() const { return ____treeLabels_3; }
	inline HybridReferenceDictionary_2_t60B1C8AB2AC62A920538F1EDBC6ECF024422648D ** get_address_of__treeLabels_3() { return &____treeLabels_3; }
	inline void set__treeLabels_3(HybridReferenceDictionary_2_t60B1C8AB2AC62A920538F1EDBC6ECF024422648D * value)
	{
		____treeLabels_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____treeLabels_3), (void*)value);
	}

	inline static int32_t get_offset_of__labelBlock_4() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA, ____labelBlock_4)); }
	inline LabelScopeInfo_t9F44B28B112B8912DB6BB8C12F53DB6B107E346F * get__labelBlock_4() const { return ____labelBlock_4; }
	inline LabelScopeInfo_t9F44B28B112B8912DB6BB8C12F53DB6B107E346F ** get_address_of__labelBlock_4() { return &____labelBlock_4; }
	inline void set__labelBlock_4(LabelScopeInfo_t9F44B28B112B8912DB6BB8C12F53DB6B107E346F * value)
	{
		____labelBlock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____labelBlock_4), (void*)value);
	}

	inline static int32_t get_offset_of__exceptionForRethrowStack_5() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA, ____exceptionForRethrowStack_5)); }
	inline Stack_1_t5A78D7BE355DFAF5BE94ADF12FB8288AE28D4B4F * get__exceptionForRethrowStack_5() const { return ____exceptionForRethrowStack_5; }
	inline Stack_1_t5A78D7BE355DFAF5BE94ADF12FB8288AE28D4B4F ** get_address_of__exceptionForRethrowStack_5() { return &____exceptionForRethrowStack_5; }
	inline void set__exceptionForRethrowStack_5(Stack_1_t5A78D7BE355DFAF5BE94ADF12FB8288AE28D4B4F * value)
	{
		____exceptionForRethrowStack_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____exceptionForRethrowStack_5), (void*)value);
	}

	inline static int32_t get_offset_of__parent_6() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA, ____parent_6)); }
	inline LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA * get__parent_6() const { return ____parent_6; }
	inline LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA ** get_address_of__parent_6() { return &____parent_6; }
	inline void set__parent_6(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA * value)
	{
		____parent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_6), (void*)value);
	}

	inline static int32_t get_offset_of__guard_7() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA, ____guard_7)); }
	inline StackGuard_tAA7C98E484C90664FF3CAC6E4DD23BDA416AF572 * get__guard_7() const { return ____guard_7; }
	inline StackGuard_tAA7C98E484C90664FF3CAC6E4DD23BDA416AF572 ** get_address_of__guard_7() { return &____guard_7; }
	inline void set__guard_7(StackGuard_tAA7C98E484C90664FF3CAC6E4DD23BDA416AF572 * value)
	{
		____guard_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____guard_7), (void*)value);
	}
};

struct LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.LocalDefinition[] System.Linq.Expressions.Interpreter.LightCompiler::s_emptyLocals
	LocalDefinitionU5BU5D_t24CED16236F9597A53E95E14A9C6310A7273BAA2* ___s_emptyLocals_8;

public:
	inline static int32_t get_offset_of_s_emptyLocals_8() { return static_cast<int32_t>(offsetof(LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA_StaticFields, ___s_emptyLocals_8)); }
	inline LocalDefinitionU5BU5D_t24CED16236F9597A53E95E14A9C6310A7273BAA2* get_s_emptyLocals_8() const { return ___s_emptyLocals_8; }
	inline LocalDefinitionU5BU5D_t24CED16236F9597A53E95E14A9C6310A7273BAA2** get_address_of_s_emptyLocals_8() { return &___s_emptyLocals_8; }
	inline void set_s_emptyLocals_8(LocalDefinitionU5BU5D_t24CED16236F9597A53E95E14A9C6310A7273BAA2* value)
	{
		___s_emptyLocals_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_emptyLocals_8), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.LightLambda
struct LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE  : public RuntimeObject
{
public:
	// System.Runtime.CompilerServices.IStrongBox[] System.Linq.Expressions.Interpreter.LightLambda::_closure
	IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* ____closure_0;
	// System.Linq.Expressions.Interpreter.Interpreter System.Linq.Expressions.Interpreter.LightLambda::_interpreter
	Interpreter_t72F078C1054752C763660835B3B3488A135D178B * ____interpreter_1;
	// System.Linq.Expressions.Interpreter.LightDelegateCreator System.Linq.Expressions.Interpreter.LightLambda::_delegateCreator
	LightDelegateCreator_tA7A81CB278CE2C07EC06CB7805CAB65068453D4D * ____delegateCreator_3;

public:
	inline static int32_t get_offset_of__closure_0() { return static_cast<int32_t>(offsetof(LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE, ____closure_0)); }
	inline IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* get__closure_0() const { return ____closure_0; }
	inline IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F** get_address_of__closure_0() { return &____closure_0; }
	inline void set__closure_0(IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* value)
	{
		____closure_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closure_0), (void*)value);
	}

	inline static int32_t get_offset_of__interpreter_1() { return static_cast<int32_t>(offsetof(LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE, ____interpreter_1)); }
	inline Interpreter_t72F078C1054752C763660835B3B3488A135D178B * get__interpreter_1() const { return ____interpreter_1; }
	inline Interpreter_t72F078C1054752C763660835B3B3488A135D178B ** get_address_of__interpreter_1() { return &____interpreter_1; }
	inline void set__interpreter_1(Interpreter_t72F078C1054752C763660835B3B3488A135D178B * value)
	{
		____interpreter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interpreter_1), (void*)value);
	}

	inline static int32_t get_offset_of__delegateCreator_3() { return static_cast<int32_t>(offsetof(LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE, ____delegateCreator_3)); }
	inline LightDelegateCreator_tA7A81CB278CE2C07EC06CB7805CAB65068453D4D * get__delegateCreator_3() const { return ____delegateCreator_3; }
	inline LightDelegateCreator_tA7A81CB278CE2C07EC06CB7805CAB65068453D4D ** get_address_of__delegateCreator_3() { return &____delegateCreator_3; }
	inline void set__delegateCreator_3(LightDelegateCreator_tA7A81CB278CE2C07EC06CB7805CAB65068453D4D * value)
	{
		____delegateCreator_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delegateCreator_3), (void*)value);
	}
};

struct LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`2<System.Linq.Expressions.Interpreter.LightLambda,System.Delegate>> System.Linq.Expressions.Interpreter.LightLambda::_runCache
	CacheDict_2_t9D92F7790C360762AF946BFAD651DB03DD8D20B4 * ____runCache_2;

public:
	inline static int32_t get_offset_of__runCache_2() { return static_cast<int32_t>(offsetof(LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE_StaticFields, ____runCache_2)); }
	inline CacheDict_2_t9D92F7790C360762AF946BFAD651DB03DD8D20B4 * get__runCache_2() const { return ____runCache_2; }
	inline CacheDict_2_t9D92F7790C360762AF946BFAD651DB03DD8D20B4 ** get_address_of__runCache_2() { return &____runCache_2; }
	inline void set__runCache_2(CacheDict_2_t9D92F7790C360762AF946BFAD651DB03DD8D20B4 * value)
	{
		____runCache_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runCache_2), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.LocalVariable
struct LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.LocalVariable::Index
	int32_t ___Index_0;
	// System.Int32 System.Linq.Expressions.Interpreter.LocalVariable::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409, ____flags_1)); }
	inline int32_t get__flags_1() const { return ____flags_1; }
	inline int32_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(int32_t value)
	{
		____flags_1 = value;
	}
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


// System.Linq.Expressions.SwitchCase
struct SwitchCase_tDF1085BCF1AA039BA1EB39F5CDC5D58C4EA01B80  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.SwitchCase::<TestValues>k__BackingField
	ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * ___U3CTestValuesU3Ek__BackingField_0;
	// System.Linq.Expressions.Expression System.Linq.Expressions.SwitchCase::<Body>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CBodyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTestValuesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SwitchCase_tDF1085BCF1AA039BA1EB39F5CDC5D58C4EA01B80, ___U3CTestValuesU3Ek__BackingField_0)); }
	inline ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * get_U3CTestValuesU3Ek__BackingField_0() const { return ___U3CTestValuesU3Ek__BackingField_0; }
	inline ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 ** get_address_of_U3CTestValuesU3Ek__BackingField_0() { return &___U3CTestValuesU3Ek__BackingField_0; }
	inline void set_U3CTestValuesU3Ek__BackingField_0(ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * value)
	{
		___U3CTestValuesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestValuesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBodyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SwitchCase_tDF1085BCF1AA039BA1EB39F5CDC5D58C4EA01B80, ___U3CBodyU3Ek__BackingField_1)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CBodyU3Ek__BackingField_1() const { return ___U3CBodyU3Ek__BackingField_1; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CBodyU3Ek__BackingField_1() { return &___U3CBodyU3Ek__BackingField_1; }
	inline void set_U3CBodyU3Ek__BackingField_1(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CBodyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBodyU3Ek__BackingField_1), (void*)value);
	}
};


// System.Linq.Expressions.Utils
struct Utils_t98C8733198C84566DF6847E887A57D45326CE485  : public RuntimeObject
{
public:

public:
};

struct Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields
{
public:
	// System.Object System.Linq.Expressions.Utils::BoxedFalse
	RuntimeObject * ___BoxedFalse_0;
	// System.Object System.Linq.Expressions.Utils::BoxedTrue
	RuntimeObject * ___BoxedTrue_1;
	// System.Object System.Linq.Expressions.Utils::BoxedIntM1
	RuntimeObject * ___BoxedIntM1_2;
	// System.Object System.Linq.Expressions.Utils::BoxedInt0
	RuntimeObject * ___BoxedInt0_3;
	// System.Object System.Linq.Expressions.Utils::BoxedInt1
	RuntimeObject * ___BoxedInt1_4;
	// System.Object System.Linq.Expressions.Utils::BoxedInt2
	RuntimeObject * ___BoxedInt2_5;
	// System.Object System.Linq.Expressions.Utils::BoxedInt3
	RuntimeObject * ___BoxedInt3_6;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultSByte
	RuntimeObject * ___BoxedDefaultSByte_7;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultChar
	RuntimeObject * ___BoxedDefaultChar_8;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultInt16
	RuntimeObject * ___BoxedDefaultInt16_9;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultInt64
	RuntimeObject * ___BoxedDefaultInt64_10;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultByte
	RuntimeObject * ___BoxedDefaultByte_11;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultUInt16
	RuntimeObject * ___BoxedDefaultUInt16_12;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultUInt32
	RuntimeObject * ___BoxedDefaultUInt32_13;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultUInt64
	RuntimeObject * ___BoxedDefaultUInt64_14;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultSingle
	RuntimeObject * ___BoxedDefaultSingle_15;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultDouble
	RuntimeObject * ___BoxedDefaultDouble_16;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultDecimal
	RuntimeObject * ___BoxedDefaultDecimal_17;
	// System.Object System.Linq.Expressions.Utils::BoxedDefaultDateTime
	RuntimeObject * ___BoxedDefaultDateTime_18;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_true
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * ___s_true_19;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_false
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * ___s_false_20;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_m1
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * ___s_m1_21;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_0
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * ___s_0_22;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_1
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * ___s_1_23;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_2
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * ___s_2_24;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::s_3
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * ___s_3_25;
	// System.Linq.Expressions.DefaultExpression System.Linq.Expressions.Utils::Empty
	DefaultExpression_t3FC1DD4F4C518F7FDF62C04BB3BF78B10D654D46 * ___Empty_26;
	// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Utils::Null
	ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * ___Null_27;

public:
	inline static int32_t get_offset_of_BoxedFalse_0() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedFalse_0)); }
	inline RuntimeObject * get_BoxedFalse_0() const { return ___BoxedFalse_0; }
	inline RuntimeObject ** get_address_of_BoxedFalse_0() { return &___BoxedFalse_0; }
	inline void set_BoxedFalse_0(RuntimeObject * value)
	{
		___BoxedFalse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedFalse_0), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedTrue_1() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedTrue_1)); }
	inline RuntimeObject * get_BoxedTrue_1() const { return ___BoxedTrue_1; }
	inline RuntimeObject ** get_address_of_BoxedTrue_1() { return &___BoxedTrue_1; }
	inline void set_BoxedTrue_1(RuntimeObject * value)
	{
		___BoxedTrue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedTrue_1), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedIntM1_2() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedIntM1_2)); }
	inline RuntimeObject * get_BoxedIntM1_2() const { return ___BoxedIntM1_2; }
	inline RuntimeObject ** get_address_of_BoxedIntM1_2() { return &___BoxedIntM1_2; }
	inline void set_BoxedIntM1_2(RuntimeObject * value)
	{
		___BoxedIntM1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedIntM1_2), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedInt0_3() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedInt0_3)); }
	inline RuntimeObject * get_BoxedInt0_3() const { return ___BoxedInt0_3; }
	inline RuntimeObject ** get_address_of_BoxedInt0_3() { return &___BoxedInt0_3; }
	inline void set_BoxedInt0_3(RuntimeObject * value)
	{
		___BoxedInt0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedInt0_3), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedInt1_4() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedInt1_4)); }
	inline RuntimeObject * get_BoxedInt1_4() const { return ___BoxedInt1_4; }
	inline RuntimeObject ** get_address_of_BoxedInt1_4() { return &___BoxedInt1_4; }
	inline void set_BoxedInt1_4(RuntimeObject * value)
	{
		___BoxedInt1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedInt1_4), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedInt2_5() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedInt2_5)); }
	inline RuntimeObject * get_BoxedInt2_5() const { return ___BoxedInt2_5; }
	inline RuntimeObject ** get_address_of_BoxedInt2_5() { return &___BoxedInt2_5; }
	inline void set_BoxedInt2_5(RuntimeObject * value)
	{
		___BoxedInt2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedInt2_5), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedInt3_6() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedInt3_6)); }
	inline RuntimeObject * get_BoxedInt3_6() const { return ___BoxedInt3_6; }
	inline RuntimeObject ** get_address_of_BoxedInt3_6() { return &___BoxedInt3_6; }
	inline void set_BoxedInt3_6(RuntimeObject * value)
	{
		___BoxedInt3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedInt3_6), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultSByte_7() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultSByte_7)); }
	inline RuntimeObject * get_BoxedDefaultSByte_7() const { return ___BoxedDefaultSByte_7; }
	inline RuntimeObject ** get_address_of_BoxedDefaultSByte_7() { return &___BoxedDefaultSByte_7; }
	inline void set_BoxedDefaultSByte_7(RuntimeObject * value)
	{
		___BoxedDefaultSByte_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultSByte_7), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultChar_8() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultChar_8)); }
	inline RuntimeObject * get_BoxedDefaultChar_8() const { return ___BoxedDefaultChar_8; }
	inline RuntimeObject ** get_address_of_BoxedDefaultChar_8() { return &___BoxedDefaultChar_8; }
	inline void set_BoxedDefaultChar_8(RuntimeObject * value)
	{
		___BoxedDefaultChar_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultChar_8), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultInt16_9() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultInt16_9)); }
	inline RuntimeObject * get_BoxedDefaultInt16_9() const { return ___BoxedDefaultInt16_9; }
	inline RuntimeObject ** get_address_of_BoxedDefaultInt16_9() { return &___BoxedDefaultInt16_9; }
	inline void set_BoxedDefaultInt16_9(RuntimeObject * value)
	{
		___BoxedDefaultInt16_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultInt16_9), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultInt64_10() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultInt64_10)); }
	inline RuntimeObject * get_BoxedDefaultInt64_10() const { return ___BoxedDefaultInt64_10; }
	inline RuntimeObject ** get_address_of_BoxedDefaultInt64_10() { return &___BoxedDefaultInt64_10; }
	inline void set_BoxedDefaultInt64_10(RuntimeObject * value)
	{
		___BoxedDefaultInt64_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultInt64_10), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultByte_11() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultByte_11)); }
	inline RuntimeObject * get_BoxedDefaultByte_11() const { return ___BoxedDefaultByte_11; }
	inline RuntimeObject ** get_address_of_BoxedDefaultByte_11() { return &___BoxedDefaultByte_11; }
	inline void set_BoxedDefaultByte_11(RuntimeObject * value)
	{
		___BoxedDefaultByte_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultByte_11), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultUInt16_12() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultUInt16_12)); }
	inline RuntimeObject * get_BoxedDefaultUInt16_12() const { return ___BoxedDefaultUInt16_12; }
	inline RuntimeObject ** get_address_of_BoxedDefaultUInt16_12() { return &___BoxedDefaultUInt16_12; }
	inline void set_BoxedDefaultUInt16_12(RuntimeObject * value)
	{
		___BoxedDefaultUInt16_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultUInt16_12), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultUInt32_13() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultUInt32_13)); }
	inline RuntimeObject * get_BoxedDefaultUInt32_13() const { return ___BoxedDefaultUInt32_13; }
	inline RuntimeObject ** get_address_of_BoxedDefaultUInt32_13() { return &___BoxedDefaultUInt32_13; }
	inline void set_BoxedDefaultUInt32_13(RuntimeObject * value)
	{
		___BoxedDefaultUInt32_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultUInt32_13), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultUInt64_14() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultUInt64_14)); }
	inline RuntimeObject * get_BoxedDefaultUInt64_14() const { return ___BoxedDefaultUInt64_14; }
	inline RuntimeObject ** get_address_of_BoxedDefaultUInt64_14() { return &___BoxedDefaultUInt64_14; }
	inline void set_BoxedDefaultUInt64_14(RuntimeObject * value)
	{
		___BoxedDefaultUInt64_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultUInt64_14), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultSingle_15() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultSingle_15)); }
	inline RuntimeObject * get_BoxedDefaultSingle_15() const { return ___BoxedDefaultSingle_15; }
	inline RuntimeObject ** get_address_of_BoxedDefaultSingle_15() { return &___BoxedDefaultSingle_15; }
	inline void set_BoxedDefaultSingle_15(RuntimeObject * value)
	{
		___BoxedDefaultSingle_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultSingle_15), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultDouble_16() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultDouble_16)); }
	inline RuntimeObject * get_BoxedDefaultDouble_16() const { return ___BoxedDefaultDouble_16; }
	inline RuntimeObject ** get_address_of_BoxedDefaultDouble_16() { return &___BoxedDefaultDouble_16; }
	inline void set_BoxedDefaultDouble_16(RuntimeObject * value)
	{
		___BoxedDefaultDouble_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultDouble_16), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultDecimal_17() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultDecimal_17)); }
	inline RuntimeObject * get_BoxedDefaultDecimal_17() const { return ___BoxedDefaultDecimal_17; }
	inline RuntimeObject ** get_address_of_BoxedDefaultDecimal_17() { return &___BoxedDefaultDecimal_17; }
	inline void set_BoxedDefaultDecimal_17(RuntimeObject * value)
	{
		___BoxedDefaultDecimal_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultDecimal_17), (void*)value);
	}

	inline static int32_t get_offset_of_BoxedDefaultDateTime_18() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___BoxedDefaultDateTime_18)); }
	inline RuntimeObject * get_BoxedDefaultDateTime_18() const { return ___BoxedDefaultDateTime_18; }
	inline RuntimeObject ** get_address_of_BoxedDefaultDateTime_18() { return &___BoxedDefaultDateTime_18; }
	inline void set_BoxedDefaultDateTime_18(RuntimeObject * value)
	{
		___BoxedDefaultDateTime_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BoxedDefaultDateTime_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_true_19() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___s_true_19)); }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * get_s_true_19() const { return ___s_true_19; }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB ** get_address_of_s_true_19() { return &___s_true_19; }
	inline void set_s_true_19(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * value)
	{
		___s_true_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_true_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_false_20() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___s_false_20)); }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * get_s_false_20() const { return ___s_false_20; }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB ** get_address_of_s_false_20() { return &___s_false_20; }
	inline void set_s_false_20(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * value)
	{
		___s_false_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_false_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_m1_21() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___s_m1_21)); }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * get_s_m1_21() const { return ___s_m1_21; }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB ** get_address_of_s_m1_21() { return &___s_m1_21; }
	inline void set_s_m1_21(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * value)
	{
		___s_m1_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_m1_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_0_22() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___s_0_22)); }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * get_s_0_22() const { return ___s_0_22; }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB ** get_address_of_s_0_22() { return &___s_0_22; }
	inline void set_s_0_22(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * value)
	{
		___s_0_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_0_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_1_23() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___s_1_23)); }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * get_s_1_23() const { return ___s_1_23; }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB ** get_address_of_s_1_23() { return &___s_1_23; }
	inline void set_s_1_23(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * value)
	{
		___s_1_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_1_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_2_24() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___s_2_24)); }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * get_s_2_24() const { return ___s_2_24; }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB ** get_address_of_s_2_24() { return &___s_2_24; }
	inline void set_s_2_24(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * value)
	{
		___s_2_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_2_24), (void*)value);
	}

	inline static int32_t get_offset_of_s_3_25() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___s_3_25)); }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * get_s_3_25() const { return ___s_3_25; }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB ** get_address_of_s_3_25() { return &___s_3_25; }
	inline void set_s_3_25(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * value)
	{
		___s_3_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_3_25), (void*)value);
	}

	inline static int32_t get_offset_of_Empty_26() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___Empty_26)); }
	inline DefaultExpression_t3FC1DD4F4C518F7FDF62C04BB3BF78B10D654D46 * get_Empty_26() const { return ___Empty_26; }
	inline DefaultExpression_t3FC1DD4F4C518F7FDF62C04BB3BF78B10D654D46 ** get_address_of_Empty_26() { return &___Empty_26; }
	inline void set_Empty_26(DefaultExpression_t3FC1DD4F4C518F7FDF62C04BB3BF78B10D654D46 * value)
	{
		___Empty_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_26), (void*)value);
	}

	inline static int32_t get_offset_of_Null_27() { return static_cast<int32_t>(offsetof(Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields, ___Null_27)); }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * get_Null_27() const { return ___Null_27; }
	inline ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB ** get_address_of_Null_27() { return &___Null_27; }
	inline void set_Null_27(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * value)
	{
		___Null_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_27), (void*)value);
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

// System.Linq.Expressions.Interpreter.LightCompiler/<>c
struct U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.LightCompiler/<>c System.Linq.Expressions.Interpreter.LightCompiler/<>c::<>9
	U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * ___U3CU3E9_0;
	// System.Func`2<System.Linq.Expressions.Expression,System.Boolean> System.Linq.Expressions.Interpreter.LightCompiler/<>c::<>9__56_1
	Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * ___U3CU3E9__56_1_1;
	// System.Func`2<System.Linq.Expressions.SwitchCase,System.Boolean> System.Linq.Expressions.Interpreter.LightCompiler/<>c::<>9__56_0
	Func_2_tFB161B1B7D6BD3D4B141C0C6DB98392BA3F8E144 * ___U3CU3E9__56_0_2;
	// System.Action`2<System.Linq.Expressions.Interpreter.LightCompiler,System.Linq.Expressions.Expression> System.Linq.Expressions.Interpreter.LightCompiler/<>c::<>9__101_0
	Action_2_tCFFCACC0601C873A56443DC9387C5D8D57088AFD * ___U3CU3E9__101_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__56_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields, ___U3CU3E9__56_1_1)); }
	inline Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * get_U3CU3E9__56_1_1() const { return ___U3CU3E9__56_1_1; }
	inline Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 ** get_address_of_U3CU3E9__56_1_1() { return &___U3CU3E9__56_1_1; }
	inline void set_U3CU3E9__56_1_1(Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * value)
	{
		___U3CU3E9__56_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__56_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__56_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields, ___U3CU3E9__56_0_2)); }
	inline Func_2_tFB161B1B7D6BD3D4B141C0C6DB98392BA3F8E144 * get_U3CU3E9__56_0_2() const { return ___U3CU3E9__56_0_2; }
	inline Func_2_tFB161B1B7D6BD3D4B141C0C6DB98392BA3F8E144 ** get_address_of_U3CU3E9__56_0_2() { return &___U3CU3E9__56_0_2; }
	inline void set_U3CU3E9__56_0_2(Func_2_tFB161B1B7D6BD3D4B141C0C6DB98392BA3F8E144 * value)
	{
		___U3CU3E9__56_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__56_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__101_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields, ___U3CU3E9__101_0_3)); }
	inline Action_2_tCFFCACC0601C873A56443DC9387C5D8D57088AFD * get_U3CU3E9__101_0_3() const { return ___U3CU3E9__101_0_3; }
	inline Action_2_tCFFCACC0601C873A56443DC9387C5D8D57088AFD ** get_address_of_U3CU3E9__101_0_3() { return &___U3CU3E9__101_0_3; }
	inline void set_U3CU3E9__101_0_3(Action_2_tCFFCACC0601C873A56443DC9387C5D8D57088AFD * value)
	{
		___U3CU3E9__101_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__101_0_3), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.LightLambda/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_t7379A2E60948D6CA3B55C5DDF3C4A7F5BCC3C5E9  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.Interpreter.LightLambda/<>c__DisplayClass74_0::targetMethod
	MethodInfo_t * ___targetMethod_0;
	// System.Type System.Linq.Expressions.Interpreter.LightLambda/<>c__DisplayClass74_0::delegateType
	Type_t * ___delegateType_1;

public:
	inline static int32_t get_offset_of_targetMethod_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t7379A2E60948D6CA3B55C5DDF3C4A7F5BCC3C5E9, ___targetMethod_0)); }
	inline MethodInfo_t * get_targetMethod_0() const { return ___targetMethod_0; }
	inline MethodInfo_t ** get_address_of_targetMethod_0() { return &___targetMethod_0; }
	inline void set_targetMethod_0(MethodInfo_t * value)
	{
		___targetMethod_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetMethod_0), (void*)value);
	}

	inline static int32_t get_offset_of_delegateType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t7379A2E60948D6CA3B55C5DDF3C4A7F5BCC3C5E9, ___delegateType_1)); }
	inline Type_t * get_delegateType_1() const { return ___delegateType_1; }
	inline Type_t ** get_address_of_delegateType_1() { return &___delegateType_1; }
	inline void set_delegateType_1(Type_t * value)
	{
		___delegateType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegateType_1), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.LocalVariables/VariableScope
struct VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Expressions.Interpreter.LocalVariables/VariableScope::Start
	int32_t ___Start_0;
	// System.Int32 System.Linq.Expressions.Interpreter.LocalVariables/VariableScope::Stop
	int32_t ___Stop_1;
	// System.Linq.Expressions.Interpreter.LocalVariable System.Linq.Expressions.Interpreter.LocalVariables/VariableScope::Variable
	LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * ___Variable_2;
	// System.Linq.Expressions.Interpreter.LocalVariables/VariableScope System.Linq.Expressions.Interpreter.LocalVariables/VariableScope::Parent
	VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3 * ___Parent_3;
	// System.Collections.Generic.List`1<System.Linq.Expressions.Interpreter.LocalVariables/VariableScope> System.Linq.Expressions.Interpreter.LocalVariables/VariableScope::ChildScopes
	List_1_t0BE9CF1B63513203BF2C31079D97D75C6DAECF49 * ___ChildScopes_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_Stop_1() { return static_cast<int32_t>(offsetof(VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3, ___Stop_1)); }
	inline int32_t get_Stop_1() const { return ___Stop_1; }
	inline int32_t* get_address_of_Stop_1() { return &___Stop_1; }
	inline void set_Stop_1(int32_t value)
	{
		___Stop_1 = value;
	}

	inline static int32_t get_offset_of_Variable_2() { return static_cast<int32_t>(offsetof(VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3, ___Variable_2)); }
	inline LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * get_Variable_2() const { return ___Variable_2; }
	inline LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 ** get_address_of_Variable_2() { return &___Variable_2; }
	inline void set_Variable_2(LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * value)
	{
		___Variable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Variable_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parent_3() { return static_cast<int32_t>(offsetof(VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3, ___Parent_3)); }
	inline VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3 * get_Parent_3() const { return ___Parent_3; }
	inline VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3 ** get_address_of_Parent_3() { return &___Parent_3; }
	inline void set_Parent_3(VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3 * value)
	{
		___Parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_ChildScopes_4() { return static_cast<int32_t>(offsetof(VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3, ___ChildScopes_4)); }
	inline List_1_t0BE9CF1B63513203BF2C31079D97D75C6DAECF49 * get_ChildScopes_4() const { return ___ChildScopes_4; }
	inline List_1_t0BE9CF1B63513203BF2C31079D97D75C6DAECF49 ** get_address_of_ChildScopes_4() { return &___ChildScopes_4; }
	inline void set_ChildScopes_4(List_1_t0BE9CF1B63513203BF2C31079D97D75C6DAECF49 * value)
	{
		___ChildScopes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChildScopes_4), (void*)value);
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


// System.Linq.Expressions.BlockExpression
struct BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
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


// System.Linq.Expressions.Interpreter.CastInstruction
struct CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Boolean
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Boolean_0;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Byte
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Byte_1;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Char
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Char_2;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_DateTime
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_DateTime_3;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Decimal
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Decimal_4;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Double
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Double_5;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Int16
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Int16_6;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Int32
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Int32_7;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Int64
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Int64_8;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_SByte
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_SByte_9;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_Single
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_Single_10;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_String
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_String_11;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_UInt16
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_UInt16_12;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_UInt32
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_UInt32_13;
	// System.Linq.Expressions.Interpreter.CastInstruction System.Linq.Expressions.Interpreter.CastInstruction::s_UInt64
	CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * ___s_UInt64_14;

public:
	inline static int32_t get_offset_of_s_Boolean_0() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Boolean_0)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Boolean_0() const { return ___s_Boolean_0; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Boolean_0() { return &___s_Boolean_0; }
	inline void set_s_Boolean_0(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Boolean_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Boolean_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_1() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Byte_1)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Byte_1() const { return ___s_Byte_1; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Byte_1() { return &___s_Byte_1; }
	inline void set_s_Byte_1(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Byte_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Char_2() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Char_2)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Char_2() const { return ___s_Char_2; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Char_2() { return &___s_Char_2; }
	inline void set_s_Char_2(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Char_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Char_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DateTime_3() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_DateTime_3)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_DateTime_3() const { return ___s_DateTime_3; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_DateTime_3() { return &___s_DateTime_3; }
	inline void set_s_DateTime_3(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_DateTime_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DateTime_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Decimal_4() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Decimal_4)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Decimal_4() const { return ___s_Decimal_4; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Decimal_4() { return &___s_Decimal_4; }
	inline void set_s_Decimal_4(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Decimal_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Decimal_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_5() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Double_5)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Double_5() const { return ___s_Double_5; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Double_5() { return &___s_Double_5; }
	inline void set_s_Double_5(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Double_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_6() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Int16_6)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Int16_6() const { return ___s_Int16_6; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Int16_6() { return &___s_Int16_6; }
	inline void set_s_Int16_6(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Int16_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_7() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Int32_7)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Int32_7() const { return ___s_Int32_7; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Int32_7() { return &___s_Int32_7; }
	inline void set_s_Int32_7(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Int32_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_8() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Int64_8)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Int64_8() const { return ___s_Int64_8; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Int64_8() { return &___s_Int64_8; }
	inline void set_s_Int64_8(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Int64_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_SByte_9() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_SByte_9)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_SByte_9() const { return ___s_SByte_9; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_SByte_9() { return &___s_SByte_9; }
	inline void set_s_SByte_9(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_SByte_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_10() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_Single_10)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_Single_10() const { return ___s_Single_10; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_Single_10() { return &___s_Single_10; }
	inline void set_s_Single_10(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_Single_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_String_11() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_String_11)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_String_11() const { return ___s_String_11; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_String_11() { return &___s_String_11; }
	inline void set_s_String_11(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_String_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_String_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_12() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_UInt16_12)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_UInt16_12() const { return ___s_UInt16_12; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_UInt16_12() { return &___s_UInt16_12; }
	inline void set_s_UInt16_12(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_UInt16_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_13() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_UInt32_13)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_UInt32_13() const { return ___s_UInt32_13; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_UInt32_13() { return &___s_UInt32_13; }
	inline void set_s_UInt32_13(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_UInt32_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_14() { return static_cast<int32_t>(offsetof(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F_StaticFields, ___s_UInt64_14)); }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * get_s_UInt64_14() const { return ___s_UInt64_14; }
	inline CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F ** get_address_of_s_UInt64_14() { return &___s_UInt64_14; }
	inline void set_s_UInt64_14(CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F * value)
	{
		___s_UInt64_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_14), (void*)value);
	}
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


// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB, ___U3CValueU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_3() const { return ___U3CValueU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_3() { return &___U3CValueU3Ek__BackingField_3; }
	inline void set_U3CValueU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_3), (void*)value);
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
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

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Linq.Expressions.Interpreter.LessThanInstruction
struct LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:
	// System.Object System.Linq.Expressions.Interpreter.LessThanInstruction::_nullValue
	RuntimeObject * ____nullValue_0;

public:
	inline static int32_t get_offset_of__nullValue_0() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10, ____nullValue_0)); }
	inline RuntimeObject * get__nullValue_0() const { return ____nullValue_0; }
	inline RuntimeObject ** get_address_of__nullValue_0() { return &____nullValue_0; }
	inline void set__nullValue_0(RuntimeObject * value)
	{
		____nullValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullValue_0), (void*)value);
	}
};

struct LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_SByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByte_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_Char
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Char_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_Byte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Byte_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_7;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_8;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_9;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_Single
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Single_10;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_Double
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Double_11;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullSByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullSByte_12;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullInt16_13;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullChar
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullChar_14;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullInt32_15;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullInt64_16;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullByte_17;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullUInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullUInt16_18;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullUInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullUInt32_19;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullUInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullUInt64_20;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullSingle
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullSingle_21;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanInstruction::s_liftedToNullDouble
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullDouble_22;

public:
	inline static int32_t get_offset_of_s_SByte_1() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_SByte_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByte_1() const { return ___s_SByte_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByte_1() { return &___s_SByte_1; }
	inline void set_s_SByte_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByte_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_2() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_Int16_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_2() const { return ___s_Int16_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_2() { return &___s_Int16_2; }
	inline void set_s_Int16_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Char_3() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_Char_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Char_3() const { return ___s_Char_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Char_3() { return &___s_Char_3; }
	inline void set_s_Char_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Char_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Char_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_4() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_Int32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_4() const { return ___s_Int32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_4() { return &___s_Int32_4; }
	inline void set_s_Int32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_5() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_Int64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_5() const { return ___s_Int64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_5() { return &___s_Int64_5; }
	inline void set_s_Int64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_6() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_Byte_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Byte_6() const { return ___s_Byte_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Byte_6() { return &___s_Byte_6; }
	inline void set_s_Byte_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Byte_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_7() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_UInt16_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_7() const { return ___s_UInt16_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_7() { return &___s_UInt16_7; }
	inline void set_s_UInt16_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_8() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_UInt32_8)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_8() const { return ___s_UInt32_8; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_8() { return &___s_UInt32_8; }
	inline void set_s_UInt32_8(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_9() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_UInt64_9)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_9() const { return ___s_UInt64_9; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_9() { return &___s_UInt64_9; }
	inline void set_s_UInt64_9(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_10() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_Single_10)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Single_10() const { return ___s_Single_10; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Single_10() { return &___s_Single_10; }
	inline void set_s_Single_10(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Single_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_11() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_Double_11)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Double_11() const { return ___s_Double_11; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Double_11() { return &___s_Double_11; }
	inline void set_s_Double_11(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Double_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullSByte_12() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullSByte_12)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullSByte_12() const { return ___s_liftedToNullSByte_12; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullSByte_12() { return &___s_liftedToNullSByte_12; }
	inline void set_s_liftedToNullSByte_12(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullSByte_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullSByte_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullInt16_13() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullInt16_13)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullInt16_13() const { return ___s_liftedToNullInt16_13; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullInt16_13() { return &___s_liftedToNullInt16_13; }
	inline void set_s_liftedToNullInt16_13(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullInt16_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullInt16_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullChar_14() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullChar_14)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullChar_14() const { return ___s_liftedToNullChar_14; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullChar_14() { return &___s_liftedToNullChar_14; }
	inline void set_s_liftedToNullChar_14(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullChar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullChar_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullInt32_15() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullInt32_15)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullInt32_15() const { return ___s_liftedToNullInt32_15; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullInt32_15() { return &___s_liftedToNullInt32_15; }
	inline void set_s_liftedToNullInt32_15(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullInt32_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullInt32_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullInt64_16() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullInt64_16)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullInt64_16() const { return ___s_liftedToNullInt64_16; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullInt64_16() { return &___s_liftedToNullInt64_16; }
	inline void set_s_liftedToNullInt64_16(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullInt64_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullInt64_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullByte_17() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullByte_17)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullByte_17() const { return ___s_liftedToNullByte_17; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullByte_17() { return &___s_liftedToNullByte_17; }
	inline void set_s_liftedToNullByte_17(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullByte_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullByte_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullUInt16_18() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullUInt16_18)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullUInt16_18() const { return ___s_liftedToNullUInt16_18; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullUInt16_18() { return &___s_liftedToNullUInt16_18; }
	inline void set_s_liftedToNullUInt16_18(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullUInt16_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullUInt16_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullUInt32_19() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullUInt32_19)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullUInt32_19() const { return ___s_liftedToNullUInt32_19; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullUInt32_19() { return &___s_liftedToNullUInt32_19; }
	inline void set_s_liftedToNullUInt32_19(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullUInt32_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullUInt32_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullUInt64_20() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullUInt64_20)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullUInt64_20() const { return ___s_liftedToNullUInt64_20; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullUInt64_20() { return &___s_liftedToNullUInt64_20; }
	inline void set_s_liftedToNullUInt64_20(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullUInt64_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullUInt64_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullSingle_21() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullSingle_21)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullSingle_21() const { return ___s_liftedToNullSingle_21; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullSingle_21() { return &___s_liftedToNullSingle_21; }
	inline void set_s_liftedToNullSingle_21(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullSingle_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullSingle_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullDouble_22() { return static_cast<int32_t>(offsetof(LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10_StaticFields, ___s_liftedToNullDouble_22)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullDouble_22() const { return ___s_liftedToNullDouble_22; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullDouble_22() { return &___s_liftedToNullDouble_22; }
	inline void set_s_liftedToNullDouble_22(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullDouble_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullDouble_22), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction
struct LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:
	// System.Object System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::_nullValue
	RuntimeObject * ____nullValue_0;

public:
	inline static int32_t get_offset_of__nullValue_0() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950, ____nullValue_0)); }
	inline RuntimeObject * get__nullValue_0() const { return ____nullValue_0; }
	inline RuntimeObject ** get_address_of__nullValue_0() { return &____nullValue_0; }
	inline void set__nullValue_0(RuntimeObject * value)
	{
		____nullValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullValue_0), (void*)value);
	}
};

struct LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_SByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByte_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_Char
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Char_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_Byte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Byte_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_7;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_8;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_9;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_Single
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Single_10;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_Double
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Double_11;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullSByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullSByte_12;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullInt16_13;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullChar
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullChar_14;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullInt32_15;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullInt64_16;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullByte_17;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullUInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullUInt16_18;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullUInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullUInt32_19;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullUInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullUInt64_20;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullSingle
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullSingle_21;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::s_liftedToNullDouble
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_liftedToNullDouble_22;

public:
	inline static int32_t get_offset_of_s_SByte_1() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_SByte_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByte_1() const { return ___s_SByte_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByte_1() { return &___s_SByte_1; }
	inline void set_s_SByte_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByte_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_2() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_Int16_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_2() const { return ___s_Int16_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_2() { return &___s_Int16_2; }
	inline void set_s_Int16_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Char_3() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_Char_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Char_3() const { return ___s_Char_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Char_3() { return &___s_Char_3; }
	inline void set_s_Char_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Char_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Char_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_4() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_Int32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_4() const { return ___s_Int32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_4() { return &___s_Int32_4; }
	inline void set_s_Int32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_5() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_Int64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_5() const { return ___s_Int64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_5() { return &___s_Int64_5; }
	inline void set_s_Int64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_6() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_Byte_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Byte_6() const { return ___s_Byte_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Byte_6() { return &___s_Byte_6; }
	inline void set_s_Byte_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Byte_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_7() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_UInt16_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_7() const { return ___s_UInt16_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_7() { return &___s_UInt16_7; }
	inline void set_s_UInt16_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_8() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_UInt32_8)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_8() const { return ___s_UInt32_8; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_8() { return &___s_UInt32_8; }
	inline void set_s_UInt32_8(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_9() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_UInt64_9)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_9() const { return ___s_UInt64_9; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_9() { return &___s_UInt64_9; }
	inline void set_s_UInt64_9(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_10() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_Single_10)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Single_10() const { return ___s_Single_10; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Single_10() { return &___s_Single_10; }
	inline void set_s_Single_10(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Single_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_11() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_Double_11)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Double_11() const { return ___s_Double_11; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Double_11() { return &___s_Double_11; }
	inline void set_s_Double_11(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Double_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullSByte_12() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullSByte_12)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullSByte_12() const { return ___s_liftedToNullSByte_12; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullSByte_12() { return &___s_liftedToNullSByte_12; }
	inline void set_s_liftedToNullSByte_12(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullSByte_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullSByte_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullInt16_13() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullInt16_13)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullInt16_13() const { return ___s_liftedToNullInt16_13; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullInt16_13() { return &___s_liftedToNullInt16_13; }
	inline void set_s_liftedToNullInt16_13(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullInt16_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullInt16_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullChar_14() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullChar_14)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullChar_14() const { return ___s_liftedToNullChar_14; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullChar_14() { return &___s_liftedToNullChar_14; }
	inline void set_s_liftedToNullChar_14(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullChar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullChar_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullInt32_15() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullInt32_15)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullInt32_15() const { return ___s_liftedToNullInt32_15; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullInt32_15() { return &___s_liftedToNullInt32_15; }
	inline void set_s_liftedToNullInt32_15(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullInt32_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullInt32_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullInt64_16() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullInt64_16)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullInt64_16() const { return ___s_liftedToNullInt64_16; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullInt64_16() { return &___s_liftedToNullInt64_16; }
	inline void set_s_liftedToNullInt64_16(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullInt64_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullInt64_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullByte_17() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullByte_17)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullByte_17() const { return ___s_liftedToNullByte_17; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullByte_17() { return &___s_liftedToNullByte_17; }
	inline void set_s_liftedToNullByte_17(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullByte_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullByte_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullUInt16_18() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullUInt16_18)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullUInt16_18() const { return ___s_liftedToNullUInt16_18; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullUInt16_18() { return &___s_liftedToNullUInt16_18; }
	inline void set_s_liftedToNullUInt16_18(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullUInt16_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullUInt16_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullUInt32_19() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullUInt32_19)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullUInt32_19() const { return ___s_liftedToNullUInt32_19; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullUInt32_19() { return &___s_liftedToNullUInt32_19; }
	inline void set_s_liftedToNullUInt32_19(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullUInt32_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullUInt32_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullUInt64_20() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullUInt64_20)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullUInt64_20() const { return ___s_liftedToNullUInt64_20; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullUInt64_20() { return &___s_liftedToNullUInt64_20; }
	inline void set_s_liftedToNullUInt64_20(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullUInt64_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullUInt64_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullSingle_21() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullSingle_21)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullSingle_21() const { return ___s_liftedToNullSingle_21; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullSingle_21() { return &___s_liftedToNullSingle_21; }
	inline void set_s_liftedToNullSingle_21(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullSingle_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullSingle_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_liftedToNullDouble_22() { return static_cast<int32_t>(offsetof(LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950_StaticFields, ___s_liftedToNullDouble_22)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_liftedToNullDouble_22() const { return ___s_liftedToNullDouble_22; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_liftedToNullDouble_22() { return &___s_liftedToNullDouble_22; }
	inline void set_s_liftedToNullDouble_22(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_liftedToNullDouble_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_liftedToNullDouble_22), (void*)value);
	}
};


// System.Linq.Expressions.MemberExpression
struct MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::<Expression>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3CExpressionU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622, ___U3CExpressionU3Ek__BackingField_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3CExpressionU3Ek__BackingField_3() const { return ___U3CExpressionU3Ek__BackingField_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3CExpressionU3Ek__BackingField_3() { return &___U3CExpressionU3Ek__BackingField_3; }
	inline void set_U3CExpressionU3Ek__BackingField_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3CExpressionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExpressionU3Ek__BackingField_3), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction
struct ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.ModuloInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.ModuloInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.ModuloInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.ModuloInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.ModuloInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.ModuloInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.ModuloInstruction::s_Single
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Single_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.ModuloInstruction::s_Double
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Double_7;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_3() { return static_cast<int32_t>(offsetof(ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields, ___s_UInt16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_3() const { return ___s_UInt16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_3() { return &___s_UInt16_3; }
	inline void set_s_UInt16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_4() { return static_cast<int32_t>(offsetof(ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields, ___s_UInt32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_4() const { return ___s_UInt32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_4() { return &___s_UInt32_4; }
	inline void set_s_UInt32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_5() { return static_cast<int32_t>(offsetof(ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields, ___s_UInt64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_5() const { return ___s_UInt64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_5() { return &___s_UInt64_5; }
	inline void set_s_UInt64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_6() { return static_cast<int32_t>(offsetof(ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields, ___s_Single_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Single_6() const { return ___s_Single_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Single_6() { return &___s_Single_6; }
	inline void set_s_Single_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Single_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_7() { return static_cast<int32_t>(offsetof(ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12_StaticFields, ___s_Double_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Double_7() const { return ___s_Double_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Double_7() { return &___s_Double_7; }
	inline void set_s_Double_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Double_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_7), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.MulInstruction
struct MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulInstruction::s_Single
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Single_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulInstruction::s_Double
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Double_7;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_3() { return static_cast<int32_t>(offsetof(MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields, ___s_UInt16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_3() const { return ___s_UInt16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_3() { return &___s_UInt16_3; }
	inline void set_s_UInt16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_4() { return static_cast<int32_t>(offsetof(MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields, ___s_UInt32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_4() const { return ___s_UInt32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_4() { return &___s_UInt32_4; }
	inline void set_s_UInt32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_5() { return static_cast<int32_t>(offsetof(MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields, ___s_UInt64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_5() const { return ___s_UInt64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_5() { return &___s_UInt64_5; }
	inline void set_s_UInt64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_6() { return static_cast<int32_t>(offsetof(MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields, ___s_Single_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Single_6() const { return ___s_Single_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Single_6() { return &___s_Single_6; }
	inline void set_s_Single_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Single_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_7() { return static_cast<int32_t>(offsetof(MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795_StaticFields, ___s_Double_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Double_7() const { return ___s_Double_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Double_7() { return &___s_Double_7; }
	inline void set_s_Double_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Double_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_7), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.MulOvfInstruction
struct MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulOvfInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulOvfInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulOvfInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulOvfInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulOvfInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.MulOvfInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_5;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_3() { return static_cast<int32_t>(offsetof(MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F_StaticFields, ___s_UInt16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_3() const { return ___s_UInt16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_3() { return &___s_UInt16_3; }
	inline void set_s_UInt16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_4() { return static_cast<int32_t>(offsetof(MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F_StaticFields, ___s_UInt32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_4() const { return ___s_UInt32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_4() { return &___s_UInt32_4; }
	inline void set_s_UInt32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_5() { return static_cast<int32_t>(offsetof(MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F_StaticFields, ___s_UInt64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_5() const { return ___s_UInt64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_5() { return &___s_UInt64_5; }
	inline void set_s_UInt64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_5), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.NegateCheckedInstruction
struct NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NegateCheckedInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NegateCheckedInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NegateCheckedInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.NegateInstruction
struct NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NegateInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NegateInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NegateInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NegateInstruction::s_Single
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Single_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NegateInstruction::s_Double
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Double_4;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_3() { return static_cast<int32_t>(offsetof(NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C_StaticFields, ___s_Single_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Single_3() const { return ___s_Single_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Single_3() { return &___s_Single_3; }
	inline void set_s_Single_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Single_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_4() { return static_cast<int32_t>(offsetof(NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C_StaticFields, ___s_Double_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Double_4() const { return ___s_Double_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Double_4() { return &___s_Double_4; }
	inline void set_s_Double_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Double_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_4), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction
struct NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_reference
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_reference_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Boolean
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Boolean_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_SByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByte_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Char
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Char_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Byte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Byte_7;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_8;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_9;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_10;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Single
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Single_11;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Double
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Double_12;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_SByteLiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByteLiftedToNull_13;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Int16LiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16LiftedToNull_14;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_CharLiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_CharLiftedToNull_15;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Int32LiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32LiftedToNull_16;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_Int64LiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64LiftedToNull_17;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_ByteLiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_ByteLiftedToNull_18;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_UInt16LiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16LiftedToNull_19;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_UInt32LiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32LiftedToNull_20;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_UInt64LiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64LiftedToNull_21;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_SingleLiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SingleLiftedToNull_22;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotEqualInstruction::s_DoubleLiftedToNull
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_DoubleLiftedToNull_23;

public:
	inline static int32_t get_offset_of_s_reference_0() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_reference_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_reference_0() const { return ___s_reference_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_reference_0() { return &___s_reference_0; }
	inline void set_s_reference_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_reference_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_reference_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Boolean_1() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Boolean_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Boolean_1() const { return ___s_Boolean_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Boolean_1() { return &___s_Boolean_1; }
	inline void set_s_Boolean_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Boolean_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Boolean_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_SByte_2() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_SByte_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByte_2() const { return ___s_SByte_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByte_2() { return &___s_SByte_2; }
	inline void set_s_SByte_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByte_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_3() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Int16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_3() const { return ___s_Int16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_3() { return &___s_Int16_3; }
	inline void set_s_Int16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Char_4() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Char_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Char_4() const { return ___s_Char_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Char_4() { return &___s_Char_4; }
	inline void set_s_Char_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Char_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Char_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_5() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Int32_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_5() const { return ___s_Int32_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_5() { return &___s_Int32_5; }
	inline void set_s_Int32_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_6() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Int64_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_6() const { return ___s_Int64_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_6() { return &___s_Int64_6; }
	inline void set_s_Int64_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_7() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Byte_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Byte_7() const { return ___s_Byte_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Byte_7() { return &___s_Byte_7; }
	inline void set_s_Byte_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Byte_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_8() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_UInt16_8)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_8() const { return ___s_UInt16_8; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_8() { return &___s_UInt16_8; }
	inline void set_s_UInt16_8(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_9() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_UInt32_9)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_9() const { return ___s_UInt32_9; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_9() { return &___s_UInt32_9; }
	inline void set_s_UInt32_9(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_10() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_UInt64_10)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_10() const { return ___s_UInt64_10; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_10() { return &___s_UInt64_10; }
	inline void set_s_UInt64_10(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_11() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Single_11)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Single_11() const { return ___s_Single_11; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Single_11() { return &___s_Single_11; }
	inline void set_s_Single_11(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Single_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_12() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Double_12)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Double_12() const { return ___s_Double_12; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Double_12() { return &___s_Double_12; }
	inline void set_s_Double_12(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Double_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_SByteLiftedToNull_13() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_SByteLiftedToNull_13)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByteLiftedToNull_13() const { return ___s_SByteLiftedToNull_13; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByteLiftedToNull_13() { return &___s_SByteLiftedToNull_13; }
	inline void set_s_SByteLiftedToNull_13(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByteLiftedToNull_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByteLiftedToNull_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16LiftedToNull_14() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Int16LiftedToNull_14)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16LiftedToNull_14() const { return ___s_Int16LiftedToNull_14; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16LiftedToNull_14() { return &___s_Int16LiftedToNull_14; }
	inline void set_s_Int16LiftedToNull_14(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16LiftedToNull_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16LiftedToNull_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_CharLiftedToNull_15() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_CharLiftedToNull_15)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_CharLiftedToNull_15() const { return ___s_CharLiftedToNull_15; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_CharLiftedToNull_15() { return &___s_CharLiftedToNull_15; }
	inline void set_s_CharLiftedToNull_15(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_CharLiftedToNull_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CharLiftedToNull_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32LiftedToNull_16() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Int32LiftedToNull_16)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32LiftedToNull_16() const { return ___s_Int32LiftedToNull_16; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32LiftedToNull_16() { return &___s_Int32LiftedToNull_16; }
	inline void set_s_Int32LiftedToNull_16(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32LiftedToNull_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32LiftedToNull_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64LiftedToNull_17() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_Int64LiftedToNull_17)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64LiftedToNull_17() const { return ___s_Int64LiftedToNull_17; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64LiftedToNull_17() { return &___s_Int64LiftedToNull_17; }
	inline void set_s_Int64LiftedToNull_17(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64LiftedToNull_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64LiftedToNull_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_ByteLiftedToNull_18() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_ByteLiftedToNull_18)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_ByteLiftedToNull_18() const { return ___s_ByteLiftedToNull_18; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_ByteLiftedToNull_18() { return &___s_ByteLiftedToNull_18; }
	inline void set_s_ByteLiftedToNull_18(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_ByteLiftedToNull_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ByteLiftedToNull_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16LiftedToNull_19() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_UInt16LiftedToNull_19)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16LiftedToNull_19() const { return ___s_UInt16LiftedToNull_19; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16LiftedToNull_19() { return &___s_UInt16LiftedToNull_19; }
	inline void set_s_UInt16LiftedToNull_19(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16LiftedToNull_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16LiftedToNull_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32LiftedToNull_20() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_UInt32LiftedToNull_20)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32LiftedToNull_20() const { return ___s_UInt32LiftedToNull_20; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32LiftedToNull_20() { return &___s_UInt32LiftedToNull_20; }
	inline void set_s_UInt32LiftedToNull_20(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32LiftedToNull_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32LiftedToNull_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64LiftedToNull_21() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_UInt64LiftedToNull_21)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64LiftedToNull_21() const { return ___s_UInt64LiftedToNull_21; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64LiftedToNull_21() { return &___s_UInt64LiftedToNull_21; }
	inline void set_s_UInt64LiftedToNull_21(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64LiftedToNull_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64LiftedToNull_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_SingleLiftedToNull_22() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_SingleLiftedToNull_22)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SingleLiftedToNull_22() const { return ___s_SingleLiftedToNull_22; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SingleLiftedToNull_22() { return &___s_SingleLiftedToNull_22; }
	inline void set_s_SingleLiftedToNull_22(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SingleLiftedToNull_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SingleLiftedToNull_22), (void*)value);
	}

	inline static int32_t get_offset_of_s_DoubleLiftedToNull_23() { return static_cast<int32_t>(offsetof(NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F_StaticFields, ___s_DoubleLiftedToNull_23)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_DoubleLiftedToNull_23() const { return ___s_DoubleLiftedToNull_23; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_DoubleLiftedToNull_23() { return &___s_DoubleLiftedToNull_23; }
	inline void set_s_DoubleLiftedToNull_23(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_DoubleLiftedToNull_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DoubleLiftedToNull_23), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.NotInstruction
struct NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_Boolean
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Boolean_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_Byte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Byte_7;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.NotInstruction::s_SByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByte_8;

public:
	inline static int32_t get_offset_of_s_Boolean_0() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_Boolean_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Boolean_0() const { return ___s_Boolean_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Boolean_0() { return &___s_Boolean_0; }
	inline void set_s_Boolean_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Boolean_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Boolean_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_1() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_Int64_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_1() const { return ___s_Int64_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_1() { return &___s_Int64_1; }
	inline void set_s_Int64_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_2() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_Int32_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_2() const { return ___s_Int32_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_2() { return &___s_Int32_2; }
	inline void set_s_Int32_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_3() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_Int16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_3() const { return ___s_Int16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_3() { return &___s_Int16_3; }
	inline void set_s_Int16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_4() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_UInt64_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_4() const { return ___s_UInt64_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_4() { return &___s_UInt64_4; }
	inline void set_s_UInt64_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_5() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_UInt32_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_5() const { return ___s_UInt32_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_5() { return &___s_UInt32_5; }
	inline void set_s_UInt32_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_6() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_UInt16_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_6() const { return ___s_UInt16_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_6() { return &___s_UInt16_6; }
	inline void set_s_UInt16_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_7() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_Byte_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Byte_7() const { return ___s_Byte_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Byte_7() { return &___s_Byte_7; }
	inline void set_s_Byte_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Byte_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_SByte_8() { return static_cast<int32_t>(offsetof(NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4_StaticFields, ___s_SByte_8)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByte_8() const { return ___s_SByte_8; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByte_8() { return &___s_SByte_8; }
	inline void set_s_SByte_8(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByte_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_8), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction
struct NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction System.Linq.Expressions.Interpreter.NullableMethodCallInstruction::s_hasValue
	NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * ___s_hasValue_0;
	// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction System.Linq.Expressions.Interpreter.NullableMethodCallInstruction::s_value
	NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * ___s_value_1;
	// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction System.Linq.Expressions.Interpreter.NullableMethodCallInstruction::s_equals
	NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * ___s_equals_2;
	// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction System.Linq.Expressions.Interpreter.NullableMethodCallInstruction::s_getHashCode
	NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * ___s_getHashCode_3;
	// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction System.Linq.Expressions.Interpreter.NullableMethodCallInstruction::s_getValueOrDefault1
	NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * ___s_getValueOrDefault1_4;
	// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction System.Linq.Expressions.Interpreter.NullableMethodCallInstruction::s_toString
	NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * ___s_toString_5;

public:
	inline static int32_t get_offset_of_s_hasValue_0() { return static_cast<int32_t>(offsetof(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF_StaticFields, ___s_hasValue_0)); }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * get_s_hasValue_0() const { return ___s_hasValue_0; }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF ** get_address_of_s_hasValue_0() { return &___s_hasValue_0; }
	inline void set_s_hasValue_0(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * value)
	{
		___s_hasValue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_hasValue_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_value_1() { return static_cast<int32_t>(offsetof(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF_StaticFields, ___s_value_1)); }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * get_s_value_1() const { return ___s_value_1; }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF ** get_address_of_s_value_1() { return &___s_value_1; }
	inline void set_s_value_1(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * value)
	{
		___s_value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_value_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_equals_2() { return static_cast<int32_t>(offsetof(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF_StaticFields, ___s_equals_2)); }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * get_s_equals_2() const { return ___s_equals_2; }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF ** get_address_of_s_equals_2() { return &___s_equals_2; }
	inline void set_s_equals_2(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * value)
	{
		___s_equals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_equals_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_getHashCode_3() { return static_cast<int32_t>(offsetof(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF_StaticFields, ___s_getHashCode_3)); }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * get_s_getHashCode_3() const { return ___s_getHashCode_3; }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF ** get_address_of_s_getHashCode_3() { return &___s_getHashCode_3; }
	inline void set_s_getHashCode_3(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * value)
	{
		___s_getHashCode_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_getHashCode_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_getValueOrDefault1_4() { return static_cast<int32_t>(offsetof(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF_StaticFields, ___s_getValueOrDefault1_4)); }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * get_s_getValueOrDefault1_4() const { return ___s_getValueOrDefault1_4; }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF ** get_address_of_s_getValueOrDefault1_4() { return &___s_getValueOrDefault1_4; }
	inline void set_s_getValueOrDefault1_4(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * value)
	{
		___s_getValueOrDefault1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_getValueOrDefault1_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_toString_5() { return static_cast<int32_t>(offsetof(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF_StaticFields, ___s_toString_5)); }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * get_s_toString_5() const { return ___s_toString_5; }
	inline NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF ** get_address_of_s_toString_5() { return &___s_toString_5; }
	inline void set_s_toString_5(NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * value)
	{
		___s_toString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_toString_5), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.OrInstruction
struct OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_SByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByte_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Byte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Byte_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_7;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.OrInstruction::s_Boolean
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Boolean_8;

public:
	inline static int32_t get_offset_of_s_SByte_0() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_SByte_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByte_0() const { return ___s_SByte_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByte_0() { return &___s_SByte_0; }
	inline void set_s_SByte_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByte_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_1() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Int16_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_1() const { return ___s_Int16_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_1() { return &___s_Int16_1; }
	inline void set_s_Int16_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_2() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Int32_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_2() const { return ___s_Int32_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_2() { return &___s_Int32_2; }
	inline void set_s_Int32_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_3() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Int64_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_3() const { return ___s_Int64_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_3() { return &___s_Int64_3; }
	inline void set_s_Int64_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_4() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Byte_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Byte_4() const { return ___s_Byte_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Byte_4() { return &___s_Byte_4; }
	inline void set_s_Byte_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Byte_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_5() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_UInt16_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_5() const { return ___s_UInt16_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_5() { return &___s_UInt16_5; }
	inline void set_s_UInt16_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_6() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_UInt32_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_6() const { return ___s_UInt32_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_6() { return &___s_UInt32_6; }
	inline void set_s_UInt32_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_7() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_UInt64_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_7() const { return ___s_UInt64_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_7() { return &___s_UInt64_7; }
	inline void set_s_UInt64_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Boolean_8() { return static_cast<int32_t>(offsetof(OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E_StaticFields, ___s_Boolean_8)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Boolean_8() const { return ___s_Boolean_8; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Boolean_8() { return &___s_Boolean_8; }
	inline void set_s_Boolean_8(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Boolean_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Boolean_8), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction
struct RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_SByte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_SByte_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_Byte
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Byte_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.RightShiftInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_7;

public:
	inline static int32_t get_offset_of_s_SByte_0() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_SByte_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_SByte_0() const { return ___s_SByte_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_SByte_0() { return &___s_SByte_0; }
	inline void set_s_SByte_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_SByte_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SByte_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int16_1() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_Int16_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_1() const { return ___s_Int16_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_1() { return &___s_Int16_1; }
	inline void set_s_Int16_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_2() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_Int32_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_2() const { return ___s_Int32_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_2() { return &___s_Int32_2; }
	inline void set_s_Int32_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_3() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_Int64_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_3() const { return ___s_Int64_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_3() { return &___s_Int64_3; }
	inline void set_s_Int64_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Byte_4() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_Byte_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Byte_4() const { return ___s_Byte_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Byte_4() { return &___s_Byte_4; }
	inline void set_s_Byte_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Byte_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Byte_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_5() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_UInt16_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_5() const { return ___s_UInt16_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_5() { return &___s_UInt16_5; }
	inline void set_s_UInt16_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_6() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_UInt32_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_6() const { return ___s_UInt32_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_6() { return &___s_UInt32_6; }
	inline void set_s_UInt32_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_7() { return static_cast<int32_t>(offsetof(RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D_StaticFields, ___s_UInt64_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_7() const { return ___s_UInt64_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_7() { return &___s_UInt64_7; }
	inline void set_s_UInt64_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_7), (void*)value);
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.Linq.Expressions.Interpreter.SubInstruction
struct SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_5;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Single
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Single_6;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubInstruction::s_Double
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Double_7;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_3() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_UInt16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_3() const { return ___s_UInt16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_3() { return &___s_UInt16_3; }
	inline void set_s_UInt16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_4() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_UInt32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_4() const { return ___s_UInt32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_4() { return &___s_UInt32_4; }
	inline void set_s_UInt32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_5() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_UInt64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_5() const { return ___s_UInt64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_5() { return &___s_UInt64_5; }
	inline void set_s_UInt64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Single_6() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Single_6)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Single_6() const { return ___s_Single_6; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Single_6() { return &___s_Single_6; }
	inline void set_s_Single_6(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Single_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Single_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_Double_7() { return static_cast<int32_t>(offsetof(SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD_StaticFields, ___s_Double_7)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Double_7() const { return ___s_Double_7; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Double_7() { return &___s_Double_7; }
	inline void set_s_Double_7(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Double_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Double_7), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction
struct SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:

public:
};

struct SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields
{
public:
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_Int16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int16_0;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_Int32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int32_1;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_Int64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_Int64_2;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_UInt16
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt16_3;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_UInt32
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt32_4;
	// System.Linq.Expressions.Interpreter.Instruction System.Linq.Expressions.Interpreter.SubOvfInstruction::s_UInt64
	Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * ___s_UInt64_5;

public:
	inline static int32_t get_offset_of_s_Int16_0() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_Int16_0)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int16_0() const { return ___s_Int16_0; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int16_0() { return &___s_Int16_0; }
	inline void set_s_Int16_0(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int16_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int16_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int32_1() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_Int32_1)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int32_1() const { return ___s_Int32_1; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int32_1() { return &___s_Int32_1; }
	inline void set_s_Int32_1(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int32_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int32_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Int64_2() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_Int64_2)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_Int64_2() const { return ___s_Int64_2; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_Int64_2() { return &___s_Int64_2; }
	inline void set_s_Int64_2(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_Int64_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Int64_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt16_3() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_UInt16_3)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt16_3() const { return ___s_UInt16_3; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt16_3() { return &___s_UInt16_3; }
	inline void set_s_UInt16_3(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt16_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt16_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt32_4() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_UInt32_4)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt32_4() const { return ___s_UInt32_4; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt32_4() { return &___s_UInt32_4; }
	inline void set_s_UInt32_4(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt32_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt32_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_UInt64_5() { return static_cast<int32_t>(offsetof(SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721_StaticFields, ___s_UInt64_5)); }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * get_s_UInt64_5() const { return ___s_UInt64_5; }
	inline Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF ** get_address_of_s_UInt64_5() { return &___s_UInt64_5; }
	inline void set_s_UInt64_5(Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF * value)
	{
		___s_UInt64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UInt64_5), (void*)value);
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


// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ____hoistedParameters_1;

public:
	inline static int32_t get_offset_of__definedParameters_0() { return static_cast<int32_t>(offsetof(QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627, ____definedParameters_0)); }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * get__definedParameters_0() const { return ____definedParameters_0; }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 ** get_address_of__definedParameters_0() { return &____definedParameters_0; }
	inline void set__definedParameters_0(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * value)
	{
		____definedParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____definedParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of__hoistedParameters_1() { return static_cast<int32_t>(offsetof(QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627, ____hoistedParameters_1)); }
	inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * get__hoistedParameters_1() const { return ____hoistedParameters_1; }
	inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 ** get_address_of__hoistedParameters_1() { return &____hoistedParameters_1; }
	inline void set__hoistedParameters_1(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * value)
	{
		____hoistedParameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hoistedParameters_1), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * ____shadowedVars_2;

public:
	inline static int32_t get_offset_of__variables_0() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____variables_0)); }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * get__variables_0() const { return ____variables_0; }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 ** get_address_of__variables_0() { return &____variables_0; }
	inline void set__variables_0(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * value)
	{
		____variables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____variables_0), (void*)value);
	}

	inline static int32_t get_offset_of__frame_1() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____frame_1)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get__frame_1() const { return ____frame_1; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of__frame_1() { return &____frame_1; }
	inline void set__frame_1(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		____frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frame_1), (void*)value);
	}

	inline static int32_t get_offset_of__shadowedVars_2() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____shadowedVars_2)); }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * get__shadowedVars_2() const { return ____shadowedVars_2; }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 ** get_address_of__shadowedVars_2() { return &____shadowedVars_2; }
	inline void set__shadowedVars_2(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * value)
	{
		____shadowedVars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowedVars_2), (void*)value);
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

// System.Linq.Expressions.ExpressionType
struct ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExpressionType_t5DFF595F84E155FA27FA8929A81459546074CE51, ___value___2)); }
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


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT
struct CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B  : public CastInstruction_tE5E0582A75B12FD38E9787FF6AAF7AA27A63F30F
{
public:
	// System.Type System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT::_t
	Type_t * ____t_15;

public:
	inline static int32_t get_offset_of__t_15() { return static_cast<int32_t>(offsetof(CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B, ____t_15)); }
	inline Type_t * get__t_15() const { return ____t_15; }
	inline Type_t ** get_address_of__t_15() { return &____t_15; }
	inline void set__t_15(Type_t * value)
	{
		____t_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____t_15), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.LessThanInstruction/LessThanUInt64
struct LessThanUInt64_t596971E190C01922E5715E022FDBFE8E2929D3BF  : public LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualByte
struct LessThanOrEqualByte_tB561B8AF7DC8FBEE6C6928D09636EF6A7761A342  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualChar
struct LessThanOrEqualChar_t18856D7C2296E38F2E54992D2AADE2E298E73053  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualDouble
struct LessThanOrEqualDouble_tB9D7FDEC1B78E5E4A11A69F1781AD4970C660FC9  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt16
struct LessThanOrEqualInt16_tEC6E2231FD28E2C71B96169247AB32FDAE47CBFC  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt32
struct LessThanOrEqualInt32_t3CCB20139F9A5324429729F3BC83157433DD1107  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt64
struct LessThanOrEqualInt64_tA4B2F32014006C4919C668127650B39819E6BD76  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSByte
struct LessThanOrEqualSByte_tA7E2E6589739DAEA22DBC4D85A316950B7CC5EED  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSingle
struct LessThanOrEqualSingle_t5345043B7BF3232A078A2F8658709CD115396B2F  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt16
struct LessThanOrEqualUInt16_tCD9E99F324091C4B21E4177ABD881ADD0BCEEB66  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt32
struct LessThanOrEqualUInt32_tCA28EDA5CE6F7072F7725E9012DD81F6E8B166D6  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt64
struct LessThanOrEqualUInt64_t9BB557448DF57562BE70C6374755A8B4EA38999D  : public LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloDouble
struct ModuloDouble_t85C00369147856541C1AFD83063A2D5017C6C104  : public ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt16
struct ModuloInt16_tEC5FBD7C5B21DFE477BEBD720DD81085954010BE  : public ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt32
struct ModuloInt32_t64EF14D7AB04B507AABC0B5EEE481B990B2C59ED  : public ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt64
struct ModuloInt64_t13C0FD4FEB78A9BE8E963C5E5EA99E195932E98E  : public ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloSingle
struct ModuloSingle_tF74D09F3A4707F07021BEF0C9CEC043680C91DD2  : public ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt16
struct ModuloUInt16_t5E947CE690D91C84FF679963ED82F541C8A82FBE  : public ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt32
struct ModuloUInt32_tCEA7EBCA3E33E679E45B745151F023AAC8D30C2E  : public ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12
{
public:

public:
};


// System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt64
struct ModuloUInt64_t6CDDA770850B746CA5BE6C9394D1F8874972C66F  : public ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulInstruction/MulDouble
struct MulDouble_tC7A9DDBAF456BC7CB3ABB400AD17FD0DECD7C347  : public MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulInstruction/MulInt16
struct MulInt16_tE83B721BCCEC251C3854197DA96A7F5522D843BE  : public MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulInstruction/MulInt32
struct MulInt32_tF13F28AD7EB91F1AA97CED250E4C80D7F5D4C158  : public MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulInstruction/MulInt64
struct MulInt64_t65D2E93B3C199CE535C52B0EE9AFAAAD68BB3734  : public MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulInstruction/MulSingle
struct MulSingle_t74402710FF0351799A5B4D392C2BDA323C950296  : public MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulInstruction/MulUInt16
struct MulUInt16_tF2A3E37BBF7A928D005B0222BC4AD7275B59DBD9  : public MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulInstruction/MulUInt32
struct MulUInt32_tB5C1F97A7747368E74533F42C650F4B46E170D8B  : public MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulInstruction/MulUInt64
struct MulUInt64_t44838D752E63CB18B7C49CF8C9D903F620EEE68C  : public MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt16
struct MulOvfInt16_t0356A292FE9F9E37C7C564207FFF4090B6CA0859  : public MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt32
struct MulOvfInt32_t3648CEF4DA473D1520961F2FF7AE5F6DB7567801  : public MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt64
struct MulOvfInt64_t64A634E483A2B54B6EB065CA6B429A9CDBB6E7B3  : public MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt16
struct MulOvfUInt16_t85735FA2E04C6417C22C546D046B335845130B3B  : public MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt32
struct MulOvfUInt32_tDD0754E1EC3EAFE6CD29E49729B7988DC4DF24CE  : public MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt64
struct MulOvfUInt64_t3ADF56F97689C58A0F7E3215BD05E1CC746B70C6  : public MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt16
struct NegateCheckedInt16_t93081D554367AFA15DDB87B50500C6340B3514F0  : public NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt32
struct NegateCheckedInt32_t7264E878230A73CF1D49E976740A9AFBA5DE754D  : public NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt64
struct NegateCheckedInt64_t6FB52C5964E523506A395FD3B367DBF9B03F1E46  : public NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NegateInstruction/NegateDouble
struct NegateDouble_tF8275133D4B3B5062558107888B464D3DA062BA3  : public NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt16
struct NegateInt16_tDCD40177F94C4B38627AB0CB892FECC79548E86E  : public NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt32
struct NegateInt32_tF6BF7BE8AB8C9A3F7E9DEAC43DB00D3D2E78119B  : public NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt64
struct NegateInt64_tED1DFAD093B3F98212213FC4870F2E1C4CA71E9F  : public NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NegateInstruction/NegateSingle
struct NegateSingle_t82B98471BC216C81F6CF5C7C54A4DF6027C44F68  : public NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualBoolean
struct NotEqualBoolean_t77A0F9D73D84C9B9F30328FE936333A709B49634  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByte
struct NotEqualByte_t0433CF566A812D7150B206A212A7A011A3693909  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByteLiftedToNull
struct NotEqualByteLiftedToNull_t4B0306112B0FA55F120C8CC76FDDEB8114FCCE4C  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualChar
struct NotEqualChar_t2E64F268F946202C10B0FF6A98697E44D5DA40F3  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualCharLiftedToNull
struct NotEqualCharLiftedToNull_tE8642F9256114065213AC05B4B1E2353EBE7B0B6  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualDouble
struct NotEqualDouble_t727CF8B29E7226E7652B50377355D4F377536E4C  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualDoubleLiftedToNull
struct NotEqualDoubleLiftedToNull_t7268B8C5C35A12C818CC81360142652D6D31785A  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16
struct NotEqualInt16_t3A0BDC9FFFA26F55EA2DBC249A90C50A1D595681  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16LiftedToNull
struct NotEqualInt16LiftedToNull_t9464D77B3AAD41F052E141890C57846556F308C1  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt32
struct NotEqualInt32_t7635EB96815AA06FEB4BE971EE00E3CE33AF4FBA  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt32LiftedToNull
struct NotEqualInt32LiftedToNull_t831BDFE883B2D2F1F748BCAFA432A15DB7444E52  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt64
struct NotEqualInt64_t50A116648DB45EA9165989F28BBEEF42755E5438  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt64LiftedToNull
struct NotEqualInt64LiftedToNull_t03B45D95A3CD8516FC13222B879FB28EA88717A6  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualReference
struct NotEqualReference_tE3E7F054E29292325F5ACA560283A8E6C7C8B68F  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSByte
struct NotEqualSByte_t22F9223F00D4EE405B6C25362E3E1124B681321D  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSByteLiftedToNull
struct NotEqualSByteLiftedToNull_t05B614C6208E2437ECFDC7E7640F9BFA70A1906B  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSingle
struct NotEqualSingle_t898F32E852A5F1B730BB94CB72759DCD8255750C  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSingleLiftedToNull
struct NotEqualSingleLiftedToNull_t851ED8232C3EF20F250F993CA4EC07F8FA626C11  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt16
struct NotEqualUInt16_tD1CA3DA33B60C4DD21BB33DE6C73DE51EDCFF02C  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt16LiftedToNull
struct NotEqualUInt16LiftedToNull_t10EAAB4DFE1C7BF9D2C5006F38032CE4113A3D12  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt32
struct NotEqualUInt32_t9DF61EB40618D7E00D08E13AD5D3361DB5260E0F  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt32LiftedToNull
struct NotEqualUInt32LiftedToNull_t68DEC29703B8B14A950440F2C2C3DB3EF2C7EEE0  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt64
struct NotEqualUInt64_tBB177E7D8ECA57B0B4764484FB20936CFD2E598F  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt64LiftedToNull
struct NotEqualUInt64LiftedToNull_t9CC27D81FF8C4281A9CF12603301798930776836  : public NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotBoolean
struct NotBoolean_t7E81F0BAF53A01C8769C49BA5D909700C3A85DF3  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotByte
struct NotByte_t005DA1FE32B95AC480326E672ABACB80B309957B  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotInt16
struct NotInt16_t83114BC0D88B4B3EB5554761901EFBD229273501  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotInt32
struct NotInt32_tC4172C3A5C27706E61386FC18DBA96E301A6837C  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotInt64
struct NotInt64_tDCD330F193F99EBA6DF1A64E1AA3EC518065DB20  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotSByte
struct NotSByte_t7647870AE7DEDA5DA8F1601BD670F96729873001  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotUInt16
struct NotUInt16_tFC37A1969EA64845C7E1118B84A8EB0006668739  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotUInt32
struct NotUInt32_t58FCF0CAD14A7820A8731A76D08B121A0A93A9F3  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NotInstruction/NotUInt64
struct NotUInt64_t1B7DF3021DEBC21B61D87AFD775AF1E4D6C66E1E  : public NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/EqualsClass
struct EqualsClass_t285D99AF64A008779832ADA21DC0E02903CA5C45  : public NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetHashCodeClass
struct GetHashCodeClass_tAFF5BBFE8D3225AA4E70465A0108D9B6FE7826F1  : public NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValue
struct GetValue_t9DEEE6C9CCD20753F1A1F39B9CAFB5157024EEB9  : public NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault
struct GetValueOrDefault_t0441FF7D2ADC0CFF7640BDEA6E5AEBDB94E58213  : public NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF
{
public:
	// System.Type System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault::defaultValueType
	Type_t * ___defaultValueType_6;

public:
	inline static int32_t get_offset_of_defaultValueType_6() { return static_cast<int32_t>(offsetof(GetValueOrDefault_t0441FF7D2ADC0CFF7640BDEA6E5AEBDB94E58213, ___defaultValueType_6)); }
	inline Type_t * get_defaultValueType_6() const { return ___defaultValueType_6; }
	inline Type_t ** get_address_of_defaultValueType_6() { return &___defaultValueType_6; }
	inline void set_defaultValueType_6(Type_t * value)
	{
		___defaultValueType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultValueType_6), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault1
struct GetValueOrDefault1_t0A65C8B1304D9D8E9CE7DBE897476349855BE675  : public NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/HasValue
struct HasValue_t45F7340A1654528F9129DD06808DEE3E09261821  : public NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/ToStringClass
struct ToStringClass_t8668E59BA5ABBABF3286628C398A099F0546914D  : public NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrBoolean
struct OrBoolean_tB5ACCAED459D6CB59C9E07A7262C47F0F8F54F19  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrByte
struct OrByte_t201A377B95ABC243F185019710B98220335474B0  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrInt16
struct OrInt16_tDCAC652458E4A355ED5945D621DB6CDE47766A90  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrInt32
struct OrInt32_tBB86B9EC780E61CDE55CE0A6C7DDB168C3BE70FF  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrInt64
struct OrInt64_t7DB4AF687896C3540F17A785CD195748FC5B31F0  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrSByte
struct OrSByte_tBD96031881884B43042D1825F549982894E1627E  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt16
struct OrUInt16_t88C758255AE7C9D2CFF3033E2CE589B7C74A3E3F  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt32
struct OrUInt32_t9982D5B99CDCA5A4C41529753D5D71AF6FF740BC  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.OrInstruction/OrUInt64
struct OrUInt64_tE09557C73068791FE26C2FDB13BADDB4069285AA  : public OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftByte
struct RightShiftByte_t5F287F9A98BD517088EBEBB5762D9B5547411F02  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt16
struct RightShiftInt16_t2CE116D1706B0B2E1BBC6F132D090C0B344DA147  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt32
struct RightShiftInt32_t28B8326998E527389A4C0B7F66CB0CDC2997AECD  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt64
struct RightShiftInt64_tD5FE689CDEC4FB15BE4001CE537725EA23C90692  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftSByte
struct RightShiftSByte_t3BAA90C2005D7DBF702594A81C6FD7DB336FAE60  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt16
struct RightShiftUInt16_t4107CD5715606EAAF84FFAFA9B8DD0261B14CBF6  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt32
struct RightShiftUInt32_tBE3AD1CB4803EE031AB2D8FBFAC118DA0C36C077  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt64
struct RightShiftUInt64_t11D41A57381AEE78C426DE33130B91A7D55876BB  : public RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction/SubDouble
struct SubDouble_tD043A690C939E826740F3980649781CF246DCDF2  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction/SubInt16
struct SubInt16_t54BA31141EB907D849DEA9B01CF7BC6D50D6990A  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction/SubInt32
struct SubInt32_t45C297528948D24B11B80E5D5F9160424C4FB6A5  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction/SubInt64
struct SubInt64_t2A292A0D8C604FDE28954B60EF80E36285F47511  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction/SubSingle
struct SubSingle_t2561FE69D9CDA0F6C0A1A8958CF2417D34541B26  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt16
struct SubUInt16_tCBA7FBA9D5D99CB82C5E63FE3218C6F80E13EFBD  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt32
struct SubUInt32_t4DFA170330F70C0F8F9F211169DC93235FF64BAF  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubInstruction/SubUInt64
struct SubUInt64_t986CC4C6FC8D2F5D1601D820D690EAE039CB21CC  : public SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt16
struct SubOvfInt16_tAEAF2F6A8C023CE3CBB545F3CF87B52081F7D1F0  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt32
struct SubOvfInt32_tB06ACE45D8557990B724B37C14C83ABB0EBEB019  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt64
struct SubOvfInt64_t9BC0A0C8BFBCC9B1CBF3A7468DE27A8F5BA13D8B  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt16
struct SubOvfUInt16_t44B387BAA3E156B5D3A023F247C9FC208905B53F  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt32
struct SubOvfUInt32_tB163618E06EE74B7F7F2D6B80F217B712A5DF6A0  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
{
public:

public:
};


// System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt64
struct SubOvfUInt64_t321A38C66A5A2020B95D7E7042AB287565C4B18E  : public SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721
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

// System.Linq.Expressions.Interpreter.NumericConvertInstruction
struct NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9  : public Instruction_t5A6819A319589454E8AE13C2ADBAD4EC1C9EBDDF
{
public:
	// System.TypeCode System.Linq.Expressions.Interpreter.NumericConvertInstruction::_from
	int32_t ____from_0;
	// System.TypeCode System.Linq.Expressions.Interpreter.NumericConvertInstruction::_to
	int32_t ____to_1;
	// System.Boolean System.Linq.Expressions.Interpreter.NumericConvertInstruction::_isLiftedToNull
	bool ____isLiftedToNull_2;

public:
	inline static int32_t get_offset_of__from_0() { return static_cast<int32_t>(offsetof(NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9, ____from_0)); }
	inline int32_t get__from_0() const { return ____from_0; }
	inline int32_t* get_address_of__from_0() { return &____from_0; }
	inline void set__from_0(int32_t value)
	{
		____from_0 = value;
	}

	inline static int32_t get_offset_of__to_1() { return static_cast<int32_t>(offsetof(NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9, ____to_1)); }
	inline int32_t get__to_1() const { return ____to_1; }
	inline int32_t* get_address_of__to_1() { return &____to_1; }
	inline void set__to_1(int32_t value)
	{
		____to_1 = value;
	}

	inline static int32_t get_offset_of__isLiftedToNull_2() { return static_cast<int32_t>(offsetof(NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9, ____isLiftedToNull_2)); }
	inline bool get__isLiftedToNull_2() const { return ____isLiftedToNull_2; }
	inline bool* get_address_of__isLiftedToNull_2() { return &____isLiftedToNull_2; }
	inline void set__isLiftedToNull_2(bool value)
	{
		____isLiftedToNull_2 = value;
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


// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_3() const { return ___U3CTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_3() { return &___U3CTypeU3Ek__BackingField_3; }
	inline void set_U3CTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNodeTypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CNodeTypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CNodeTypeU3Ek__BackingField_4() const { return ___U3CNodeTypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CNodeTypeU3Ek__BackingField_4() { return &___U3CNodeTypeU3Ek__BackingField_4; }
	inline void set_U3CNodeTypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CNodeTypeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3COperandU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3COperandU3Ek__BackingField_5)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get_U3COperandU3Ek__BackingField_5() const { return ___U3COperandU3Ek__BackingField_5; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of_U3COperandU3Ek__BackingField_5() { return &___U3COperandU3Ek__BackingField_5; }
	inline void set_U3COperandU3Ek__BackingField_5(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		___U3COperandU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COperandU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62, ___U3CMethodU3Ek__BackingField_6)); }
	inline MethodInfo_t * get_U3CMethodU3Ek__BackingField_6() const { return ___U3CMethodU3Ek__BackingField_6; }
	inline MethodInfo_t ** get_address_of_U3CMethodU3Ek__BackingField_6() { return &___U3CMethodU3Ek__BackingField_6; }
	inline void set_U3CMethodU3Ek__BackingField_6(MethodInfo_t * value)
	{
		___U3CMethodU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_6), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Ref
struct Ref_t168CC06E3E836CBD2DA362F99B022F5D79504E10  : public CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B
{
public:

public:
};


// System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Value
struct Value_t291D50D67C4EC0983FA0B027505922ED0110765D  : public CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B
{
public:

public:
};


// System.Func`2<System.Linq.Expressions.Expression,System.Boolean>
struct Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166  : public MulticastDelegate_t
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


// System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked
struct Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380  : public NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NumericConvertInstruction/ToUnderlying
struct ToUnderlying_tB8738F9853F450A39DA849AE376E7D241529C3A4  : public NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9
{
public:

public:
};


// System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked
struct Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E  : public NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
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
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * m_Items[1];

public:
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Runtime.CompilerServices.IStrongBox[]
struct IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F  : public RuntimeArray
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


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::All<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_All_TisRuntimeObject_m78C27E5A0BE320AD74A1AD45ACD55668099D35B0_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m71AD9A0E45BC55BFE609CB88752829A7C810E68D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD30FE5F3EA63CD6831E4AA9E6901323436D6F9A4_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA9EF21764AC04923FECB24BAA6C2F96CEB1606D1_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m1E56E91A9BB341EE54712AF20BAF2ADC09D267A0_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9D936778F28043838186FC2037F47460DA7925B9_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Void System.Linq.Expressions.Interpreter.LessThanInstruction::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanInstruction__ctor_mD5B0CEA85AE99FC71A71880F90AEE83E4F6CE742 (LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.InterpretedFrame::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13 (LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5172A5EFB3C174F2B6797175438F8C2BCDBD6E70 (U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.SwitchCase::get_TestValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * SwitchCase_get_TestValues_mD0F5164247689D0E3FA2BD80A6CFF0D4D71FE11E_inline (SwitchCase_tDF1085BCF1AA039BA1EB39F5CDC5D58C4EA01B80 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Linq.Expressions.Expression,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD98DE29C63B0C2ED8BB624193567B60581CFF7D0 (Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::All<System.Linq.Expressions.Expression>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_All_TisExpression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_m54807002F0E994780641C8B9E1DC5DE8FB2B9131 (RuntimeObject* ___source0, Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 *, const RuntimeMethod*))Enumerable_All_TisRuntimeObject_m78C27E5A0BE320AD74A1AD45ACD55668099D35B0_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler::CompileNoLabelPush(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightCompiler_CompileNoLabelPush_m7C230CC54CB2A44A42819CF983399A402B4041F7 (LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expr0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5A3630F90E9221CE5AF56F84C35B315006FB4009 (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))Dictionary_2_ContainsKey_m71AD9A0E45BC55BFE609CB88752829A7C810E68D_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.BlockExpression::get_Variables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533 (BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitBlock(System.Linq.Expressions.BlockExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionVisitor_VisitBlock_m9C82423FA9138865B63296BDF05392F965B0EE4B (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * __this, BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * ___node0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method);
// System.Linq.Expressions.ParameterExpression System.Linq.Expressions.CatchBlock::get_Variable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.CatchBlock::get_Filter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mAE7C5326C63F17A99C6EC4BF5FEF9B4202820A65 (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mD30FE5F3EA63CD6831E4AA9E6901323436D6F9A4_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_mBD181C20A23BC90297DC8EB8A5C174916CE038B4 (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))Dictionary_2_get_Item_mA9EF21764AC04923FECB24BAA6C2F96CEB1606D1_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>::Remove(!0)
inline bool Dictionary_2_Remove_m9C046414E689374E4FE186B69578A3B628923ADA (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))Dictionary_2_Remove_m1E56E91A9BB341EE54712AF20BAF2ADC09D267A0_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mE66FD35BF03F4B7FA4A67A940C1E86D26C049915 (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 *, const RuntimeMethod*))Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F (ModuloInstruction_tD1D2019A0542AC4DBB29C3D29F93BDE5B0540B12 * __this, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.ScriptingRuntimeHelpers::Int32ToObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptingRuntimeHelpers_Int32ToObject_m0FCA91B7CC7E77071A3E84112A439D4F697D448D (int32_t ___i0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.MulInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C (MulInstruction_tD33F4F6C03B1C16B311AAE744234710B0E097795 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.MulOvfInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulOvfInstruction__ctor_m43A50EBAD5E5F49C01B378C0DF77C475F2B8E213 (MulOvfInstruction_t7CAE575465200723261CC55370FB21175D2ED53F * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.NegateCheckedInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateCheckedInstruction__ctor_m4E47DF19E8E9BE8B5CA7228927246FC69A2BE670 (NegateCheckedInstruction_tE795CC3C64A517481C82B38A92D2566DE1B04044 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.NegateInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateInstruction__ctor_m72239F6AB86B1EDAEEF2F2819AD22268741AD4EE (NegateInstruction_t34B11629BA04F772A9398B0B40876D69F5290A2C * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA (NotEqualInstruction_t5DD1CA9EFEC83E1768B5B5A306FEC77C9A68007F * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.NotInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C (NotInstruction_tE281997BB13F3816B6733C8D18974B13C12EDEA4 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m3D471A0B71F06B515A5AC6CD955F00C8240428ED (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m99C008FE2B0E5842A182DBDFE7144A40960EEE8B (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, int8_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.InterpretedFrame::Push(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpretedFrame_Push_m1E7E0894F3C4290DB002A0FFAE6D8EFEFC881797 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.NullableMethodCallInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableMethodCallInstruction__ctor_m926A453253517A0E9A8FECB5966F913DBE8C1EF3 (NullableMethodCallInstruction_tCB40DEB131B6D69C2FF90305489C8D852A4D91CF * __this, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.InterpretedFrame::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InterpretedFrame_Peek_m4E8B474399257371CC0E89CBE6ADB626BA454346 (InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared)(__this, method);
}
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m8D0BDBD446BBCB24F702D8678A57E4594919C8BD (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.NumericConvertInstruction::.ctor(System.TypeCode,System.TypeCode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumericConvertInstruction__ctor_m5A6FD216C2495E3114709025D2E15F38DE9549DB (NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 * __this, int32_t ___from0, int32_t ___to1, bool ___isLiftedToNull2, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::ConvertInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::ConvertInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9 (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, int64_t ___obj0, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::ConvertUInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, uint64_t ___obj0, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::ConvertDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1 (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, double ___obj0, const RuntimeMethod* method);
// System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_op_Implicit_mA83342DEE0725CF242454832BD0306090E80CCF9 (int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_op_Implicit_m0736049F15FA2C68B5EC46BDED5E98F82D475A56 (int64_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_op_Implicit_mF6E8CA683C4FB32AE9BF12A02506B8F04C3DDD18 (uint64_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Decimal::op_Explicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_op_Explicit_m1ECDB1B6C5DBABAC7252C45BC86680A50F11BD6E (double ___value0, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::ConvertInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::ConvertInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_ConvertInt64_mD10BC2A1110F9D63DE01D8E21FC5B82DA1B8A2F1 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, int64_t ___obj0, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::ConvertUInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_ConvertUInt64_m695AF02D0E8A6450DD905576E97069933D742887 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, uint64_t ___obj0, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::ConvertDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_ConvertDouble_m113E4E31F03A8F6477308AA705D0213F209F3693 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, double ___obj0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.OrInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F (OrInstruction_tD76EDDF879D36E2D511CE4E359ED705A4739F82E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::.ctor()
inline void Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2 (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0 (ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m2D719EE02B7FE98B5D6E9515334C594836D2C0C7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m9D936778F28043838186FC2037F47460DA7925B9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(!0)
inline void Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression[] System.Dynamic.Utils.ExpressionVisitorUtils::VisitBlockExpressions(System.Linq.Expressions.ExpressionVisitor,System.Linq.Expressions.BlockExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* ExpressionVisitorUtils_VisitBlockExpressions_m04E259E0DAFA60690CD83645ABB329F3C2041B94 (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 * ___visitor0, BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * ___block1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769 (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Type System.Linq.Expressions.CatchBlock::get_Test()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * CatchBlock_get_Test_m9F57E603AC71DE8C69057B4B366BEF47823E3247_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method);
// System.Linq.Expressions.CatchBlock System.Linq.Expressions.Expression::MakeCatchBlock(System.Type,System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Expression,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * Expression_MakeCatchBlock_m4BD502DD7FBB26C0C68B93C65A9CF7EDD55A4A78 (Type_t * ___type0, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___variable1, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___body2, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___filter3, const RuntimeMethod* method);
// System.Runtime.CompilerServices.IStrongBox System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::GetBox(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpressionQuoter_GetBox_mB02A80E9219C417E14C0DDFB99A2470B67FE640E (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___variable0, const RuntimeMethod* method);
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * Expression_Constant_m9096CC3198E58277FFD17A6E45E20E4132BAE4D8 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::Field(System.Linq.Expressions.Expression,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * Expression_Field_mC77BF4B131C5AFF3944507291B5A98993ED6544E (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expression0, String_t* ___fieldName1, const RuntimeMethod* method);
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Convert(System.Linq.Expressions.Expression,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * Expression_Convert_m4BEBF2CC7DABC0AD140B363B23FE47F7441DFE00 (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___expression0, Type_t * ___type1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E (Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___key0, LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Linq.Expressions.Interpreter.LocalVariable::get_InClosure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalVariable_get_InClosure_mA3903B46C398E3BE8086ABC39A061D4844FB32B3 (LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90 (RightShiftInstruction_t3924AC7D0643222E8B4CB019E54B51B602C7779D * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.SubInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA (SubInstruction_tF4D0366CCE5A3D5FCAFEB29CE56F351EAE113CCD * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53 (SubOvfInstruction_t7F7BC51F9793A023460130C575310B84D5F37721 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CastInstructionNoT__ctor_m340CB277F4601E785560A9E43FF8C55B74B74115 (CastInstructionNoT_t9C4D91B95D55BEB4F8E995F8E4CE167C8606110B * __this, Type_t * ___t0, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Expressions.Interpreter.LessThanInstruction/LessThanUInt64::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanUInt64__ctor_m036C60AACEE5D4E48E060CDF28825903876D6913 (LessThanUInt64_t596971E190C01922E5715E022FDBFE8E2929D3BF * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanInstruction__ctor_mD5B0CEA85AE99FC71A71880F90AEE83E4F6CE742(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanInstruction/LessThanUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanUInt64_Run_m5A02E8E91632204559FAB38BFDDB3EEC11F32029 (LessThanUInt64_t596971E190C01922E5715E022FDBFE8E2929D3BF * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanInstruction_t06FC50C03B5C226D358D1794C0D26939C9C43F10 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0036;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((!(((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_9, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))) >= ((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_10, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0036:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualByte::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualByte__ctor_m6FD40A712D22C51891BEA34BD4976CA28A0A90AF (LessThanOrEqualByte_tB561B8AF7DC8FBEE6C6928D09636EF6A7761A342 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualByte_Run_mB790B0CF73A355AC330DFC82FA0A57E3FBCC9784 (LessThanOrEqualByte_tB561B8AF7DC8FBEE6C6928D09636EF6A7761A342 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))) > ((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_10, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualChar::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualChar__ctor_m50E112A43D69CC911B82012B159EF5A8986BFD1A (LessThanOrEqualChar_t18856D7C2296E38F2E54992D2AADE2E298E73053 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualChar::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualChar_Run_m69E5CA05ACFC0C3510715DE16A9764C16D7956DF (LessThanOrEqualChar_t18856D7C2296E38F2E54992D2AADE2E298E73053 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((((int32_t)((*(Il2CppChar*)((Il2CppChar*)UnBox(L_9, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))))) > ((int32_t)((*(Il2CppChar*)((Il2CppChar*)UnBox(L_10, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualDouble::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualDouble__ctor_m7E72442344A4361D34A5E323C8C2C2126B9C3BB0 (LessThanOrEqualDouble_tB9D7FDEC1B78E5E4A11A69F1781AD4970C660FC9 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualDouble::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualDouble_Run_m19D67A93FA6E948FE4EA58D6882C7940CD97973A (LessThanOrEqualDouble_tB9D7FDEC1B78E5E4A11A69F1781AD4970C660FC9 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((!(((double)((*(double*)((double*)UnBox(L_9, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))) <= ((double)((*(double*)((double*)UnBox(L_10, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt16::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualInt16__ctor_m079EDE3887A0E02059546C81A36DFB344F57D41B (LessThanOrEqualInt16_tEC6E2231FD28E2C71B96169247AB32FDAE47CBFC * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualInt16_Run_m9C75F59F16C93668C5CD4E161D44B9D16B99A373 (LessThanOrEqualInt16_tEC6E2231FD28E2C71B96169247AB32FDAE47CBFC * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((((int32_t)((*(int16_t*)((int16_t*)UnBox(L_9, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))) > ((int32_t)((*(int16_t*)((int16_t*)UnBox(L_10, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt32::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualInt32__ctor_m4B757D37516716583462A4C6EF5BCFD9FF41BF67 (LessThanOrEqualInt32_t3CCB20139F9A5324429729F3BC83157433DD1107 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualInt32_Run_m5EE391082AA5AF33C5203552F3386ABC6483302D (LessThanOrEqualInt32_t3CCB20139F9A5324429729F3BC83157433DD1107 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))) > ((int32_t)((*(int32_t*)((int32_t*)UnBox(L_10, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt64::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualInt64__ctor_mF9DE80CDEB5653E656478B84082A600526AD5CE3 (LessThanOrEqualInt64_tA4B2F32014006C4919C668127650B39819E6BD76 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualInt64_Run_m93A1E2C616E9BD012400EACD4E527146AB778E50 (LessThanOrEqualInt64_tA4B2F32014006C4919C668127650B39819E6BD76 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((((int64_t)((*(int64_t*)((int64_t*)UnBox(L_9, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))) > ((int64_t)((*(int64_t*)((int64_t*)UnBox(L_10, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSByte::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualSByte__ctor_m4BF15C801BB56E5DADCE9DEC764A5418C4B232B2 (LessThanOrEqualSByte_tA7E2E6589739DAEA22DBC4D85A316950B7CC5EED * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualSByte_Run_mAC09FFC3867944FAB5B2447FF55C6A0E0C02B6F6 (LessThanOrEqualSByte_tA7E2E6589739DAEA22DBC4D85A316950B7CC5EED * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((((int32_t)((*(int8_t*)((int8_t*)UnBox(L_9, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))) > ((int32_t)((*(int8_t*)((int8_t*)UnBox(L_10, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSingle::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualSingle__ctor_m81EB7B43CF0397D1CE4A427986DFAB7C4EA6455E (LessThanOrEqualSingle_t5345043B7BF3232A078A2F8658709CD115396B2F * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualSingle::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualSingle_Run_m6E8B4B96D878569F763BA6354263C92B86D499D9 (LessThanOrEqualSingle_t5345043B7BF3232A078A2F8658709CD115396B2F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((!(((float)((*(float*)((float*)UnBox(L_9, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))) <= ((float)((*(float*)((float*)UnBox(L_10, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt16::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualUInt16__ctor_m2E18D1E81AED4B7994A2C693061BEACAC3EF5A0D (LessThanOrEqualUInt16_tCD9E99F324091C4B21E4177ABD881ADD0BCEEB66 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualUInt16_Run_mA68F7583FC7B2DEB8830F11D05D69628F808CBA1 (LessThanOrEqualUInt16_tCD9E99F324091C4B21E4177ABD881ADD0BCEEB66 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_9, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))) > ((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_10, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt32::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualUInt32__ctor_m902BC3F30EEA99EE95B21A96AEEF1A314434A758 (LessThanOrEqualUInt32_tCA28EDA5CE6F7072F7725E9012DD81F6E8B166D6 * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualUInt32_Run_mBBDE1906D9036587FB99697499A11DB811067270 (LessThanOrEqualUInt32_tCA28EDA5CE6F7072F7725E9012DD81F6E8B166D6 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((!(((uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_9, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))) <= ((uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_10, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt64::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessThanOrEqualUInt64__ctor_mE7F3FB30B6BEF1911FCD563562DB21B73CFB6F42 (LessThanOrEqualUInt64_t9BB557448DF57562BE70C6374755A8B4EA38999D * __this, RuntimeObject * ___nullValue0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___nullValue0;
		LessThanOrEqualInstruction__ctor_m4E26643B5B2632DC417F32598AF5D6375635CA13(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.LessThanOrEqualInstruction/LessThanOrEqualUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LessThanOrEqualUInt64_Run_m9B16D1B15677438CD5FE2757ADBC01A35C59710E (LessThanOrEqualUInt64_t9BB557448DF57562BE70C6374755A8B4EA38999D * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		RuntimeObject * L_7 = ((LessThanOrEqualInstruction_t1BD58CE6064209C4A34ED1CE7444F0A0242F1950 *)__this)->get__nullValue_0();
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, L_7, /*hidden argument*/NULL);
		goto IL_0039;
	}

IL_0022:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		RuntimeObject * L_9 = V_1;
		RuntimeObject * L_10 = V_0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)((((int32_t)((!(((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_9, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))) <= ((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_10, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0039:
	{
		return 1;
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
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m19CF27E0660AFD072E187C00698DF816A4701BA5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * L_0 = (U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B *)il2cpp_codegen_object_new(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5172A5EFB3C174F2B6797175438F8C2BCDBD6E70(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5172A5EFB3C174F2B6797175438F8C2BCDBD6E70 (U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Linq.Expressions.Interpreter.LightCompiler/<>c::<CompileSwitchExpression>b__56_0(System.Linq.Expressions.SwitchCase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCompileSwitchExpressionU3Eb__56_0_m167C343F0573CBA350EAC40EA311A044C31ECAD8 (U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * __this, SwitchCase_tDF1085BCF1AA039BA1EB39F5CDC5D58C4EA01B80 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_All_TisExpression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_m54807002F0E994780641C8B9E1DC5DE8FB2B9131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mD98DE29C63B0C2ED8BB624193567B60581CFF7D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCompileSwitchExpressionU3Eb__56_1_m6828650DFEACF72B54E7DE1C829EB4E38EA552F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * G_B2_0 = NULL;
	ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * G_B2_1 = NULL;
	Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * G_B1_0 = NULL;
	ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * G_B1_1 = NULL;
	{
		SwitchCase_tDF1085BCF1AA039BA1EB39F5CDC5D58C4EA01B80 * L_0 = ___c0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * L_1;
		L_1 = SwitchCase_get_TestValues_mD0F5164247689D0E3FA2BD80A6CFF0D4D71FE11E_inline(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var);
		Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * L_2 = ((U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var))->get_U3CU3E9__56_1_1();
		Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var);
		U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * L_4 = ((U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * L_5 = (Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 *)il2cpp_codegen_object_new(Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166_il2cpp_TypeInfo_var);
		Func_2__ctor_mD98DE29C63B0C2ED8BB624193567B60581CFF7D0(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCompileSwitchExpressionU3Eb__56_1_m6828650DFEACF72B54E7DE1C829EB4E38EA552F7_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mD98DE29C63B0C2ED8BB624193567B60581CFF7D0_RuntimeMethod_var);
		Func_2_tD06EFBD96BC5A1301EB4E60EE4360C2B18C91166 * L_6 = L_5;
		((U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B_il2cpp_TypeInfo_var))->set_U3CU3E9__56_1_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_7;
		L_7 = Enumerable_All_TisExpression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_m54807002F0E994780641C8B9E1DC5DE8FB2B9131(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_All_TisExpression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_m54807002F0E994780641C8B9E1DC5DE8FB2B9131_RuntimeMethod_var);
		return L_7;
	}
}
// System.Boolean System.Linq.Expressions.Interpreter.LightCompiler/<>c::<CompileSwitchExpression>b__56_1(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCompileSwitchExpressionU3Eb__56_1_m6828650DFEACF72B54E7DE1C829EB4E38EA552F7 (U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * __this, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = ___t0;
		return (bool)((!(((RuntimeObject*)(ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB *)((ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB *)IsInstClass((RuntimeObject*)L_0, ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/<>c::<CompileNoLabelPush>b__101_0(System.Linq.Expressions.Interpreter.LightCompiler,System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCompileNoLabelPushU3Eb__101_0_m175A1FB4AB896EFAB6B02DBB67CE3B63EC308C89 (U3CU3Ec_t3C1482083A736D9A2BD73A4E25E93230FEA9C09B * __this, LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA * ___this0, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ___e1, const RuntimeMethod* method)
{
	{
		LightCompiler_t217541839628B775D4352E24078D63D04B1B86EA * L_0 = ___this0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_1 = ___e1;
		NullCheck(L_0);
		LightCompiler_CompileNoLabelPush_m7C230CC54CB2A44A42819CF983399A402B4041F7(L_0, L_1, /*hidden argument*/NULL);
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
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * QuoteVisitor_VisitParameter_mF758213F0EE0AC77A5A16E680993801F5B0E1BE2 (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5A3630F90E9221CE5AF56F84C35B315006FB4009_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * L_0 = __this->get__definedParameters_0();
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_1 = ___node0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m5A3630F90E9221CE5AF56F84C35B315006FB4009(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5A3630F90E9221CE5AF56F84C35B315006FB4009_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_3 = __this->get__hoistedParameters_1();
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_4 = ___node0;
		NullCheck(L_3);
		bool L_5;
		L_5 = HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE(L_3, L_4, /*hidden argument*/HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
	}

IL_001b:
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_6 = ___node0;
		return L_6;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitBlock(System.Linq.Expressions.BlockExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * QuoteVisitor_VisitBlock_m31E368EF29510DE450572C96A44859070813EAAE (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * ___node0, const RuntimeMethod* method)
{
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_0 = ___node0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_1;
		L_1 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_0, /*hidden argument*/NULL);
		QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED(__this, L_1, /*hidden argument*/NULL);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_2 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_3;
		L_3 = ExpressionVisitor_VisitBlock_m9C82423FA9138865B63296BDF05392F965B0EE4B(__this, L_2, /*hidden argument*/NULL);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_4 = ___node0;
		NullCheck(L_4);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_5;
		L_5 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_4, /*hidden argument*/NULL);
		QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A(__this, L_5, /*hidden argument*/NULL);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_6 = ___node0;
		return L_6;
	}
}
// System.Linq.Expressions.CatchBlock System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitCatchBlock(System.Linq.Expressions.CatchBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * QuoteVisitor_VisitCatchBlock_m998B93C1D05783A45BF9009A50E3BE8DEC7612DE (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_0 = ___node0;
		NullCheck(L_0);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_1;
		L_1 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_2 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)1);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_3 = L_2;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_4 = ___node0;
		NullCheck(L_4);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_5;
		L_5 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_5);
		QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED(__this, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_6 = ___node0;
		NullCheck(L_6);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_7;
		L_7 = CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline(L_6, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_8;
		L_8 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_7);
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_9 = ___node0;
		NullCheck(L_9);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_10;
		L_10 = CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline(L_9, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_11;
		L_11 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_10);
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_12 = ___node0;
		NullCheck(L_12);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_13;
		L_13 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_14 = (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)SZArrayNew(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147_il2cpp_TypeInfo_var, (uint32_t)1);
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_15 = L_14;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_16 = ___node0;
		NullCheck(L_16);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_17;
		L_17 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_17);
		QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A(__this, (RuntimeObject*)(RuntimeObject*)L_15, /*hidden argument*/NULL);
	}

IL_0054:
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_18 = ___node0;
		return L_18;
	}
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAE7C5326C63F17A99C6EC4BF5FEF9B4202820A65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t49590B5D404F709CAB64E6E2DF151598B0DCE343_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___parameters0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>::GetEnumerator() */, IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0009:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_3;
			L_3 = InterfaceFuncInvoker0< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.ParameterExpression>::get_Current() */, IEnumerator_1_t49590B5D404F709CAB64E6E2DF151598B0DCE343_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * L_4 = __this->get__definedParameters_0();
			ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_5 = V_1;
			NullCheck(L_4);
			bool L_6;
			L_6 = Dictionary_2_TryGetValue_mAE7C5326C63F17A99C6EC4BF5FEF9B4202820A65(L_4, L_5, (int32_t*)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_mAE7C5326C63F17A99C6EC4BF5FEF9B4202820A65_RuntimeMethod_var);
			if (!L_6)
			{
				goto IL_0031;
			}
		}

IL_0020:
		{
			Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * L_7 = __this->get__definedParameters_0();
			ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_8 = V_1;
			int32_t L_9 = V_2;
			NullCheck(L_7);
			Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A(L_7, L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A_RuntimeMethod_var);
			goto IL_003e;
		}

IL_0031:
		{
			Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * L_10 = __this->get__definedParameters_0();
			ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_11 = V_1;
			NullCheck(L_10);
			Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A(L_10, L_11, 1, /*hidden argument*/Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A_RuntimeMethod_var);
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_0;
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0009;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_0;
			if (!L_14)
			{
				goto IL_0051;
			}
		}

IL_004b:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(72)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		return;
	}
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9C046414E689374E4FE186B69578A3B628923ADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mBD181C20A23BC90297DC8EB8A5C174916CE038B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t49590B5D404F709CAB64E6E2DF151598B0DCE343_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject* L_0 = ___parameters0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>::GetEnumerator() */, IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0009:
		{
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_3;
			L_3 = InterfaceFuncInvoker0< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.ParameterExpression>::get_Current() */, IEnumerator_1_t49590B5D404F709CAB64E6E2DF151598B0DCE343_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * L_4 = __this->get__definedParameters_0();
			ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_5 = V_1;
			NullCheck(L_4);
			int32_t L_6;
			L_6 = Dictionary_2_get_Item_mBD181C20A23BC90297DC8EB8A5C174916CE038B4(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mBD181C20A23BC90297DC8EB8A5C174916CE038B4_RuntimeMethod_var);
			V_2 = L_6;
			int32_t L_7 = V_2;
			if (L_7)
			{
				goto IL_002f;
			}
		}

IL_0020:
		{
			Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * L_8 = __this->get__definedParameters_0();
			ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_9 = V_1;
			NullCheck(L_8);
			bool L_10;
			L_10 = Dictionary_2_Remove_m9C046414E689374E4FE186B69578A3B628923ADA(L_8, L_9, /*hidden argument*/Dictionary_2_Remove_m9C046414E689374E4FE186B69578A3B628923ADA_RuntimeMethod_var);
			goto IL_003e;
		}

IL_002f:
		{
			Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * L_11 = __this->get__definedParameters_0();
			ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_12 = V_1;
			int32_t L_13 = V_2;
			NullCheck(L_11);
			Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A(L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), /*hidden argument*/Dictionary_2_set_Item_m1557C3F91869A4B1DAA6CFC099E8B6CDEF410C3A_RuntimeMethod_var);
		}

IL_003e:
		{
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0009;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			if (!L_16)
			{
				goto IL_0051;
			}
		}

IL_004b:
		{
			RuntimeObject* L_17 = V_0;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(72)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		return;
	}
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor__ctor_mF995A05EF8C288DCC75CD207A17279D1F7D9FD69 (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE66FD35BF03F4B7FA4A67A940C1E86D26C049915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * L_0 = (Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 *)il2cpp_codegen_object_new(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE66FD35BF03F4B7FA4A67A940C1E86D26C049915(L_0, /*hidden argument*/Dictionary_2__ctor_mE66FD35BF03F4B7FA4A67A940C1E86D26C049915_RuntimeMethod_var);
		__this->set__definedParameters_0(L_0);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_1 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B(L_1, /*hidden argument*/HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		__this->set__hoistedParameters_1(L_1);
		ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A(__this, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.Interpreter.LightLambda/<>c__DisplayClass74_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_m8AE4DEB6291FDAB7F1C723AF0471250134A5AB1D (U3CU3Ec__DisplayClass74_0_t7379A2E60948D6CA3B55C5DDF3C4A7F5BCC3C5E9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Delegate System.Linq.Expressions.Interpreter.LightLambda/<>c__DisplayClass74_0::<MakeRunDelegateCtor>b__0(System.Linq.Expressions.Interpreter.LightLambda)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * U3CU3Ec__DisplayClass74_0_U3CMakeRunDelegateCtorU3Eb__0_m7F8BD01DF8A1F3F266104E02D83FC23A6BA1227F (U3CU3Ec__DisplayClass74_0_t7379A2E60948D6CA3B55C5DDF3C4A7F5BCC3C5E9 * __this, LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE * ___lambda0, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_targetMethod_0();
		Type_t * L_1 = __this->get_delegateType_1();
		LightLambda_tAA9E7B051CFA283EE9A412D8A5671F0927CBC6CE * L_2 = ___lambda0;
		NullCheck(L_0);
		Delegate_t * L_3;
		L_3 = VirtFuncInvoker2< Delegate_t *, Type_t *, RuntimeObject * >::Invoke(45 /* System.Delegate System.Reflection.MethodInfo::CreateDelegate(System.Type,System.Object) */, L_0, L_1, L_2);
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
// System.Void System.Linq.Expressions.Interpreter.LocalVariables/VariableScope::.ctor(System.Linq.Expressions.Interpreter.LocalVariable,System.Int32,System.Linq.Expressions.Interpreter.LocalVariables/VariableScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableScope__ctor_mFC331A839DD7A42657063463FF23AA13F825D2DD (VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3 * __this, LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * ___variable0, int32_t ___start1, VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3 * ___parent2, const RuntimeMethod* method)
{
	{
		__this->set_Stop_1(((int32_t)2147483647LL));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * L_0 = ___variable0;
		__this->set_Variable_2(L_0);
		int32_t L_1 = ___start1;
		__this->set_Start_0(L_1);
		VariableScope_t9EB075D1F30F9B5EF5D7DC183259402567F205B3 * L_2 = ___parent2;
		__this->set_Parent_3(L_2);
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
// System.Int32 System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloDouble::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuloDouble_Run_m214D45FBFD497CF4BF9B5B89D87D06BA3F1665E1 (ModuloDouble_t85C00369147856541C1AFD83063A2D5017C6C104 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		double L_18 = (fmod(((*(double*)((double*)UnBox(L_16, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), ((*(double*)((double*)UnBox(L_17, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloDouble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloDouble__ctor_m943413AA96F6FA45E3CB4B1499A2541C75F14A5A (ModuloDouble_t85C00369147856541C1AFD83063A2D5017C6C104 * __this, const RuntimeMethod* method)
{
	{
		ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuloInt16_Run_m657F3CD3B285110904F0A7C63E84E7B393A0A5E6 (ModuloInt16_tEC5FBD7C5B21DFE477BEBD720DD81085954010BE * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		int16_t L_18 = ((int16_t)((int16_t)((int32_t)((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))%(int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))));
		RuntimeObject * L_19 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloInt16__ctor_m65E56A2695082EBC1D599937E187D5CE4C56C038 (ModuloInt16_tEC5FBD7C5B21DFE477BEBD720DD81085954010BE * __this, const RuntimeMethod* method)
{
	{
		ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuloInt32_Run_m557C141D20BAAF45EBDC147237972D4FA0D93D00 (ModuloInt32_t64EF14D7AB04B507AABC0B5EEE481B990B2C59ED * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		RuntimeObject * L_18;
		L_18 = ScriptingRuntimeHelpers_Int32ToObject_m0FCA91B7CC7E77071A3E84112A439D4F697D448D(((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))%(int32_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_19 = ___frame0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		L_19->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloInt32__ctor_mF657D772DEBB72F07E071BCFECB2FA6BA79C201F (ModuloInt32_t64EF14D7AB04B507AABC0B5EEE481B990B2C59ED * __this, const RuntimeMethod* method)
{
	{
		ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuloInt64_Run_m4DBA118D7A530C4460BF84E71358FC15303A8317 (ModuloInt64_t13C0FD4FEB78A9BE8E963C5E5EA99E195932E98E * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		int64_t L_18 = ((int64_t)((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))%(int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloInt64__ctor_mA6159B79950756F00EE072BF50C28B29B4EAF960 (ModuloInt64_t13C0FD4FEB78A9BE8E963C5E5EA99E195932E98E * __this, const RuntimeMethod* method)
{
	{
		ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloSingle::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuloSingle_Run_m5D1D71381D5425B68C654B981DC24129CA608F9F (ModuloSingle_tF74D09F3A4707F07021BEF0C9CEC043680C91DD2 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		float L_18 = (fmodf(((*(float*)((float*)UnBox(L_16, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))), ((*(float*)((float*)UnBox(L_17, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloSingle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloSingle__ctor_m53AE6DF5C2CB96F55207CF9BD6816E4B03A3A3EC (ModuloSingle_tF74D09F3A4707F07021BEF0C9CEC043680C91DD2 * __this, const RuntimeMethod* method)
{
	{
		ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuloUInt16_Run_m0CC2C365676E13C9FA4C5B869B5EE7870EAE862F (ModuloUInt16_t5E947CE690D91C84FF679963ED82F541C8A82FBE * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint16_t L_18 = ((uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))%(int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))))))));
		RuntimeObject * L_19 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloUInt16__ctor_m2436F892DFC0ACE1B3E3BDE9776E4C56F4590EB1 (ModuloUInt16_t5E947CE690D91C84FF679963ED82F541C8A82FBE * __this, const RuntimeMethod* method)
{
	{
		ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuloUInt32_Run_m96E6D66ECBD393898C44DA9F58F5F60106C56E61 (ModuloUInt32_tCEA7EBCA3E33E679E45B745151F023AAC8D30C2E * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint32_t L_18 = ((uint32_t)((int32_t)((uint32_t)(int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))%(uint32_t)(int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloUInt32__ctor_m62DB5999A5CFEA493428BF48F9FE78FF89C4EFD3 (ModuloUInt32_tCEA7EBCA3E33E679E45B745151F023AAC8D30C2E * __this, const RuntimeMethod* method)
{
	{
		ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuloUInt64_Run_m33FBA3C2FC37C2C5C565A5C0EC060EDE75765C80 (ModuloUInt64_t6CDDA770850B746CA5BE6C9394D1F8874972C66F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint64_t L_18 = ((uint64_t)((int64_t)((uint64_t)(int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))%(uint64_t)(int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.ModuloInstruction/ModuloUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuloUInt64__ctor_m295D45736785EE8AE165CD4C40EDDBC6B73F43D5 (ModuloUInt64_t6CDDA770850B746CA5BE6C9394D1F8874972C66F * __this, const RuntimeMethod* method)
{
	{
		ModuloInstruction__ctor_m4A6E49628F4C7D16F3B66112BCD684BF5B2E596F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulInstruction/MulDouble::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulDouble_Run_m3A487602DD0843D14E63AEE5060997479C5D84AA (MulDouble_tC7A9DDBAF456BC7CB3ABB400AD17FD0DECD7C347 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		double L_18 = ((double)il2cpp_codegen_multiply((double)((*(double*)((double*)UnBox(L_16, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), (double)((*(double*)((double*)UnBox(L_17, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulInstruction/MulDouble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulDouble__ctor_mF4F043F97602BAF75782CD4D987170F98764008D (MulDouble_tC7A9DDBAF456BC7CB3ABB400AD17FD0DECD7C347 * __this, const RuntimeMethod* method)
{
	{
		MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulInstruction/MulInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulInt16_Run_m571DD5BC5F221AEF4FAB1317FD861E11D158BFD9 (MulInt16_tE83B721BCCEC251C3854197DA96A7F5522D843BE * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		int16_t L_18 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))));
		RuntimeObject * L_19 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulInstruction/MulInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulInt16__ctor_m6410BECE25974AF5C39D9DCC348B0193F2A2BC98 (MulInt16_tE83B721BCCEC251C3854197DA96A7F5522D843BE * __this, const RuntimeMethod* method)
{
	{
		MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulInstruction/MulInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulInt32_Run_m7608BFD693C0ECB7CA4B9A72F6FF6812092FB928 (MulInt32_tF13F28AD7EB91F1AA97CED250E4C80D7F5D4C158 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		RuntimeObject * L_18;
		L_18 = ScriptingRuntimeHelpers_Int32ToObject_m0FCA91B7CC7E77071A3E84112A439D4F697D448D(((int32_t)il2cpp_codegen_multiply((int32_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_19 = ___frame0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		L_19->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulInstruction/MulInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulInt32__ctor_m74C8E8789C6B4E715FBE35F36D29CC9158EE6DE2 (MulInt32_tF13F28AD7EB91F1AA97CED250E4C80D7F5D4C158 * __this, const RuntimeMethod* method)
{
	{
		MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulInstruction/MulInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulInt64_Run_mFEC980BFDB4DA3425656542CC56551E867E76995 (MulInt64_t65D2E93B3C199CE535C52B0EE9AFAAAD68BB3734 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		int64_t L_18 = ((int64_t)il2cpp_codegen_multiply((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulInstruction/MulInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulInt64__ctor_m98C78FC8DEF516B4DA2F58C198E2D48273B6FA28 (MulInt64_t65D2E93B3C199CE535C52B0EE9AFAAAD68BB3734 * __this, const RuntimeMethod* method)
{
	{
		MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulInstruction/MulSingle::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulSingle_Run_m1E3AD5579E70E710292B3CF9CB2EB560E14C91B2 (MulSingle_t74402710FF0351799A5B4D392C2BDA323C950296 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		float L_18 = ((float)il2cpp_codegen_multiply((float)((*(float*)((float*)UnBox(L_16, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))), (float)((*(float*)((float*)UnBox(L_17, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulInstruction/MulSingle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulSingle__ctor_m45FC503E72431E726D729CE404DF48D7AD545AD7 (MulSingle_t74402710FF0351799A5B4D392C2BDA323C950296 * __this, const RuntimeMethod* method)
{
	{
		MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulInstruction/MulUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulUInt16_Run_mD6D3B094F0F66F1452B479C104088F7AF4C61CF7 (MulUInt16_tF2A3E37BBF7A928D005B0222BC4AD7275B59DBD9 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint16_t L_18 = ((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))))))));
		RuntimeObject * L_19 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulInstruction/MulUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulUInt16__ctor_m274A42781CDA3AC9147932CE88D29FA38E10D95D (MulUInt16_tF2A3E37BBF7A928D005B0222BC4AD7275B59DBD9 * __this, const RuntimeMethod* method)
{
	{
		MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulInstruction/MulUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulUInt32_Run_m2E129748A901E8F93A63D4A557F83C6BE5806C8C (MulUInt32_tB5C1F97A7747368E74533F42C650F4B46E170D8B * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint32_t L_18 = ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), (int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulInstruction/MulUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulUInt32__ctor_m43FBA0710DE4F845F9BCBBE3E1457BBCDF9AB4E7 (MulUInt32_tB5C1F97A7747368E74533F42C650F4B46E170D8B * __this, const RuntimeMethod* method)
{
	{
		MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulInstruction/MulUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulUInt64_Run_mC0446CCCEE0C4418BF59F92FEA0C94DF97250F80 (MulUInt64_t44838D752E63CB18B7C49CF8C9D903F620EEE68C * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint64_t L_18 = ((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), (int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulInstruction/MulUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulUInt64__ctor_m5C37AA5779BF3CDFF7EA13B14A493CE3BE30A188 (MulUInt64_t44838D752E63CB18B7C49CF8C9D903F620EEE68C * __this, const RuntimeMethod* method)
{
	{
		MulInstruction__ctor_m272EE6C230AD6B67751537896190382EA235D78C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulOvfInt16_Run_m49BAB13B287F9C8B43DC7A30913CBA09BCE5BCCF (MulOvfInt16_t0356A292FE9F9E37C7C564207FFF4090B6CA0859 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulOvfInt16_Run_m49BAB13B287F9C8B43DC7A30913CBA09BCE5BCCF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) * (int64_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) * (int64_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MulOvfInt16_Run_m49BAB13B287F9C8B43DC7A30913CBA09BCE5BCCF_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_multiply((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MulOvfInt16_Run_m49BAB13B287F9C8B43DC7A30913CBA09BCE5BCCF_RuntimeMethod_var);
		int16_t L_18 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))));
		RuntimeObject * L_19 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulOvfInt16__ctor_m458F31A764F79FB50E9841D40E6FA93DA4672051 (MulOvfInt16_t0356A292FE9F9E37C7C564207FFF4090B6CA0859 * __this, const RuntimeMethod* method)
{
	{
		MulOvfInstruction__ctor_m43A50EBAD5E5F49C01B378C0DF77C475F2B8E213(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulOvfInt32_Run_m601978C46388CB0AAE60B6BA0A46256C0E0D3286 (MulOvfInt32_t3648CEF4DA473D1520961F2FF7AE5F6DB7567801 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulOvfInt32_Run_m601978C46388CB0AAE60B6BA0A46256C0E0D3286_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) * (int64_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) * (int64_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MulOvfInt32_Run_m601978C46388CB0AAE60B6BA0A46256C0E0D3286_RuntimeMethod_var);
		RuntimeObject * L_18;
		L_18 = ScriptingRuntimeHelpers_Int32ToObject_m0FCA91B7CC7E77071A3E84112A439D4F697D448D(((int32_t)il2cpp_codegen_multiply((int32_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_19 = ___frame0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		L_19->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulOvfInt32__ctor_mF1BCD8733C38CB86704E0FF3F57CBCF913649101 (MulOvfInt32_t3648CEF4DA473D1520961F2FF7AE5F6DB7567801 * __this, const RuntimeMethod* method)
{
	{
		MulOvfInstruction__ctor_m43A50EBAD5E5F49C01B378C0DF77C475F2B8E213(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulOvfInt64_Run_mA8178F06D24189093549CDD8481371EB494A81B1 (MulOvfInt64_t64A634E483A2B54B6EB065CA6B429A9CDBB6E7B3 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulOvfInt64_Run_mA8178F06D24189093549CDD8481371EB494A81B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (il2cpp_codegen_check_mul_overflow_i64((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), kIl2CppInt64Min, kIl2CppInt64Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MulOvfInt64_Run_mA8178F06D24189093549CDD8481371EB494A81B1_RuntimeMethod_var);
		int64_t L_18 = ((int64_t)il2cpp_codegen_multiply((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulOvfInt64__ctor_mFA11E1351BCF101654B0224C83F171ACAFFFC0FA (MulOvfInt64_t64A634E483A2B54B6EB065CA6B429A9CDBB6E7B3 * __this, const RuntimeMethod* method)
{
	{
		MulOvfInstruction__ctor_m43A50EBAD5E5F49C01B378C0DF77C475F2B8E213(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulOvfUInt16_Run_mED3613C3511558FBFA4B89C542603F254D6C57AC (MulOvfUInt16_t85735FA2E04C6417C22C546D046B335845130B3B * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulOvfUInt16_Run_mED3613C3511558FBFA4B89C542603F254D6C57AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) * (int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) * (int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MulOvfUInt16_Run_mED3613C3511558FBFA4B89C542603F254D6C57AC_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_multiply((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MulOvfUInt16_Run_mED3613C3511558FBFA4B89C542603F254D6C57AC_RuntimeMethod_var);
		uint16_t L_18 = ((uint16_t)((uint16_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))));
		RuntimeObject * L_19 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulOvfUInt16__ctor_m14A38A281EB3DD83D9A9961BEB5DDDCF0BBEF400 (MulOvfUInt16_t85735FA2E04C6417C22C546D046B335845130B3B * __this, const RuntimeMethod* method)
{
	{
		MulOvfInstruction__ctor_m43A50EBAD5E5F49C01B378C0DF77C475F2B8E213(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulOvfUInt32_Run_m9D4E7E377C3EDD8CD6FA12378C961DD9E51A0CB4 (MulOvfUInt32_tDD0754E1EC3EAFE6CD29E49729B7988DC4DF24CE * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulOvfUInt32_Run_m9D4E7E377C3EDD8CD6FA12378C961DD9E51A0CB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if ((uint64_t)(uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))) * (uint64_t)(uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MulOvfUInt32_Run_m9D4E7E377C3EDD8CD6FA12378C961DD9E51A0CB4_RuntimeMethod_var);
		uint32_t L_18 = ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), (int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulOvfUInt32__ctor_mF92EC32EBD0197A38E57CEFB8015AD9F925509CB (MulOvfUInt32_tDD0754E1EC3EAFE6CD29E49729B7988DC4DF24CE * __this, const RuntimeMethod* method)
{
	{
		MulOvfInstruction__ctor_m43A50EBAD5E5F49C01B378C0DF77C475F2B8E213(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MulOvfUInt64_Run_m513A09384068A252FDF2FD7A056137A22E63C47A (MulOvfUInt64_t3ADF56F97689C58A0F7E3215BD05E1CC746B70C6 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MulOvfUInt64_Run_m513A09384068A252FDF2FD7A056137A22E63C47A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (il2cpp_codegen_check_mul_oveflow_u64(((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), ((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MulOvfUInt64_Run_m513A09384068A252FDF2FD7A056137A22E63C47A_RuntimeMethod_var);
		uint64_t L_18 = ((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), (int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.MulOvfInstruction/MulOvfUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MulOvfUInt64__ctor_mE32C82E29A1F8074B5F13BBCA7E455051D02A053 (MulOvfUInt64_t3ADF56F97689C58A0F7E3215BD05E1CC746B70C6 * __this, const RuntimeMethod* method)
{
	{
		MulOvfInstruction__ctor_m43A50EBAD5E5F49C01B378C0DF77C475F2B8E213(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegateCheckedInt16_Run_mDBFD006EB1FB803E6711F1C3A4F1B283FF580670 (NegateCheckedInt16_t93081D554367AFA15DDB87B50500C6340B3514F0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegateCheckedInt16_Run_mDBFD006EB1FB803E6711F1C3A4F1B283FF580670_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		if (((int64_t)0 - (int64_t)((*(int16_t*)((int16_t*)UnBox(L_5, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)0 - (int64_t)((*(int16_t*)((int16_t*)UnBox(L_5, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NegateCheckedInt16_Run_mDBFD006EB1FB803E6711F1C3A4F1B283FF580670_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)0, (int32_t)((*(int16_t*)((int16_t*)UnBox(L_5, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NegateCheckedInt16_Run_mDBFD006EB1FB803E6711F1C3A4F1B283FF580670_RuntimeMethod_var);
		NullCheck(L_4);
		InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60(L_4, ((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)0, (int32_t)((*(int16_t*)((int16_t*)UnBox(L_5, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
	}

IL_0022:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateCheckedInt16__ctor_mC805871605172360D542F3FBB53AD1D8CE9973B8 (NegateCheckedInt16_t93081D554367AFA15DDB87B50500C6340B3514F0 * __this, const RuntimeMethod* method)
{
	{
		NegateCheckedInstruction__ctor_m4E47DF19E8E9BE8B5CA7228927246FC69A2BE670(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegateCheckedInt32_Run_mB68F3D57F8E6ECD1E69A10D49D905B1291F13554 (NegateCheckedInt32_t7264E878230A73CF1D49E976740A9AFBA5DE754D * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegateCheckedInt32_Run_mB68F3D57F8E6ECD1E69A10D49D905B1291F13554_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0021;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		if (((int64_t)0 - (int64_t)((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)0 - (int64_t)((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NegateCheckedInt32_Run_mB68F3D57F8E6ECD1E69A10D49D905B1291F13554_RuntimeMethod_var);
		NullCheck(L_4);
		InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)0, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
	}

IL_0021:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateCheckedInt32__ctor_mE69F8EDE8535C468A259D0FDBBFDD1FE9EFAC92F (NegateCheckedInt32_t7264E878230A73CF1D49E976740A9AFBA5DE754D * __this, const RuntimeMethod* method)
{
	{
		NegateCheckedInstruction__ctor_m4E47DF19E8E9BE8B5CA7228927246FC69A2BE670(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegateCheckedInt64_Run_mFA52B230AF749E3EE1749F11155467F36E3213AF (NegateCheckedInt64_t6FB52C5964E523506A395FD3B367DBF9B03F1E46 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NegateCheckedInt64_Run_mFA52B230AF749E3EE1749F11155467F36E3213AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		if (il2cpp_codegen_check_sub_overflow((int64_t)((int64_t)((int64_t)0)), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_5, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NegateCheckedInt64_Run_mFA52B230AF749E3EE1749F11155467F36E3213AF_RuntimeMethod_var);
		int64_t L_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)((int64_t)0)), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_5, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NegateCheckedInstruction/NegateCheckedInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateCheckedInt64__ctor_m6042088D0FE9CC0D0353C6D32FEBE1D02FE78157 (NegateCheckedInt64_t6FB52C5964E523506A395FD3B367DBF9B03F1E46 * __this, const RuntimeMethod* method)
{
	{
		NegateCheckedInstruction__ctor_m4E47DF19E8E9BE8B5CA7228927246FC69A2BE670(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NegateInstruction/NegateDouble::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegateDouble_Run_m5BD0E4E60A8FAC87BCAC3A064AC8A2A010E6FA87 (NegateDouble_tF8275133D4B3B5062558107888B464D3DA062BA3 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		double L_6 = ((-((*(double*)((double*)UnBox(L_5, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_7 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NegateInstruction/NegateDouble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateDouble__ctor_m68CA8D8D537004D355B1972E5935EA61716E9E97 (NegateDouble_tF8275133D4B3B5062558107888B464D3DA062BA3 * __this, const RuntimeMethod* method)
{
	{
		NegateInstruction__ctor_m72239F6AB86B1EDAEEF2F2819AD22268741AD4EE(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegateInt16_Run_m0F0BDA8362B6C1808A920E0C90085830E4B4931A (NegateInt16_tDCD40177F94C4B38627AB0CB892FECC79548E86E * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0021;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		NullCheck(L_4);
		InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60(L_4, ((int16_t)((int16_t)((-((*(int16_t*)((int16_t*)UnBox(L_5, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
	}

IL_0021:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateInt16__ctor_mA6AD2D8052FCA96CF3739E1EBAABCCD1B8CE9679 (NegateInt16_tDCD40177F94C4B38627AB0CB892FECC79548E86E * __this, const RuntimeMethod* method)
{
	{
		NegateInstruction__ctor_m72239F6AB86B1EDAEEF2F2819AD22268741AD4EE(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegateInt32_Run_m4430D2F03DD411938ECFD0CE0EEA61961BBD68A9 (NegateInt32_tF6BF7BE8AB8C9A3F7E9DEAC43DB00D3D2E78119B * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0020;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		NullCheck(L_4);
		InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71(L_4, ((-((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
	}

IL_0020:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateInt32__ctor_m32CD4053C1AC22AD675DFC5504624A8952983CF3 (NegateInt32_tF6BF7BE8AB8C9A3F7E9DEAC43DB00D3D2E78119B * __this, const RuntimeMethod* method)
{
	{
		NegateInstruction__ctor_m72239F6AB86B1EDAEEF2F2819AD22268741AD4EE(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegateInt64_Run_mCA8BF34DAE14E4441D682123B0F16CADE685EA96 (NegateInt64_tED1DFAD093B3F98212213FC4870F2E1C4CA71E9F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		int64_t L_6 = ((-((*(int64_t*)((int64_t*)UnBox(L_5, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NegateInstruction/NegateInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateInt64__ctor_mE2AEC31A72070619C7C6097E3910FA73C31A2FEF (NegateInt64_tED1DFAD093B3F98212213FC4870F2E1C4CA71E9F * __this, const RuntimeMethod* method)
{
	{
		NegateInstruction__ctor_m72239F6AB86B1EDAEEF2F2819AD22268741AD4EE(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NegateInstruction/NegateSingle::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NegateSingle_Run_m1B2F7C9D35989F8F116C5D3FE79BE73672A78D4B (NegateSingle_t82B98471BC216C81F6CF5C7C54A4DF6027C44F68 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		float L_6 = ((-((*(float*)((float*)UnBox(L_5, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_7 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NegateInstruction/NegateSingle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NegateSingle__ctor_mBC5DC2A6D8AD530F2F22048CCEE140E40A75AEEF (NegateSingle_t82B98471BC216C81F6CF5C7C54A4DF6027C44F68 * __this, const RuntimeMethod* method)
{
	{
		NegateInstruction__ctor_m72239F6AB86B1EDAEEF2F2819AD22268741AD4EE(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualBoolean::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualBoolean_Run_m0D0ED4C801F1F4586BD355C5ABC10FA85E9CB9AE (NotEqualBoolean_t77A0F9D73D84C9B9F30328FE936333A709B49634 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int32_t)((*(bool*)((bool*)UnBox(L_10, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))) == ((int32_t)((*(bool*)((bool*)UnBox(L_11, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualBoolean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualBoolean__ctor_m9E6B2F021F24F8A509E7B5C3C93743F3AB20CB10 (NotEqualBoolean_t77A0F9D73D84C9B9F30328FE936333A709B49634 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualByte_Run_m59AC1B1312DB3B3EDEC9E41680D51B6D09546C04 (NotEqualByte_t0433CF566A812D7150B206A212A7A011A3693909 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_10, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_11, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualByte__ctor_m1813D84320ED00CFC9B26A9AA6B73631F2EFE9F4 (NotEqualByte_t0433CF566A812D7150B206A212A7A011A3693909 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByteLiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualByteLiftedToNull_Run_m311D6B9AF01C6566A08FB14A85333254EC7C30FC (NotEqualByteLiftedToNull_t4B0306112B0FA55F120C8CC76FDDEB8114FCCE4C * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_8, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualByteLiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualByteLiftedToNull__ctor_m5400A36AD64391628BCC07281568B08FC837A78C (NotEqualByteLiftedToNull_t4B0306112B0FA55F120C8CC76FDDEB8114FCCE4C * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualChar::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualChar_Run_m2598B77254FEFE1129EDA5211A126C3E5AB3FD53 (NotEqualChar_t2E64F268F946202C10B0FF6A98697E44D5DA40F3 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int32_t)((*(Il2CppChar*)((Il2CppChar*)UnBox(L_10, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))))) == ((int32_t)((*(Il2CppChar*)((Il2CppChar*)UnBox(L_11, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualChar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualChar__ctor_m2F60A36A5352058E295348ECEBF20CF0C05241CA (NotEqualChar_t2E64F268F946202C10B0FF6A98697E44D5DA40F3 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualCharLiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualCharLiftedToNull_Run_m465ACDAEAA6239217AE36750F1F5DF721B746F63 (NotEqualCharLiftedToNull_tE8642F9256114065213AC05B4B1E2353EBE7B0B6 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int32_t)((*(Il2CppChar*)((Il2CppChar*)UnBox(L_8, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))))) == ((int32_t)((*(Il2CppChar*)((Il2CppChar*)UnBox(L_9, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualCharLiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualCharLiftedToNull__ctor_m914B3905E90DDE4C9155DC0DE0482DC66E61B4E9 (NotEqualCharLiftedToNull_tE8642F9256114065213AC05B4B1E2353EBE7B0B6 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualDouble::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualDouble_Run_m14DA515AFB2A9F2E7DDA4F33614FF99531CC7EDF (NotEqualDouble_t727CF8B29E7226E7652B50377355D4F377536E4C * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((double)((*(double*)((double*)UnBox(L_10, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)UnBox(L_11, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualDouble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualDouble__ctor_m2C5F59DB35B405FE68FB01842AA23C313692D3A5 (NotEqualDouble_t727CF8B29E7226E7652B50377355D4F377536E4C * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualDoubleLiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualDoubleLiftedToNull_Run_m73A3EFE4090DA60B55F51876F29C0CB78065ED15 (NotEqualDoubleLiftedToNull_t7268B8C5C35A12C818CC81360142652D6D31785A * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((double)((*(double*)((double*)UnBox(L_8, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)UnBox(L_9, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualDoubleLiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualDoubleLiftedToNull__ctor_m502FD841267AF49A848C632031B0F3B875149BA5 (NotEqualDoubleLiftedToNull_t7268B8C5C35A12C818CC81360142652D6D31785A * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualInt16_Run_mF71781EEF542EC4465C5236B432E6C1333683405 (NotEqualInt16_t3A0BDC9FFFA26F55EA2DBC249A90C50A1D595681 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int32_t)((*(int16_t*)((int16_t*)UnBox(L_10, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)UnBox(L_11, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualInt16__ctor_m7FAE6F3C671013C683994C20F25474499951A8EA (NotEqualInt16_t3A0BDC9FFFA26F55EA2DBC249A90C50A1D595681 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16LiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualInt16LiftedToNull_Run_m202B0CF44A274899CCD7C441A4B35FA5CF3DFE23 (NotEqualInt16LiftedToNull_t9464D77B3AAD41F052E141890C57846556F308C1 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int32_t)((*(int16_t*)((int16_t*)UnBox(L_8, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)UnBox(L_9, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt16LiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualInt16LiftedToNull__ctor_m796E359EAFD428D1617FE71080ADCF4666583521 (NotEqualInt16LiftedToNull_t9464D77B3AAD41F052E141890C57846556F308C1 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualInt32_Run_m021BAB63CAC632EA93E8D78A5296C00DC7F86641 (NotEqualInt32_t7635EB96815AA06FEB4BE971EE00E3CE33AF4FBA * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_10, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)UnBox(L_11, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualInt32__ctor_m47A654DBD116D96D02CA2DAF9F7B27E38BA41BAC (NotEqualInt32_t7635EB96815AA06FEB4BE971EE00E3CE33AF4FBA * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt32LiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualInt32LiftedToNull_Run_m5D29EC51C63468C7866DBA4A310D6803CC7462E9 (NotEqualInt32LiftedToNull_t831BDFE883B2D2F1F748BCAFA432A15DB7444E52 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_8, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt32LiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualInt32LiftedToNull__ctor_mC6AD908DDBDB3A4047E217F76CACE81609D6F769 (NotEqualInt32LiftedToNull_t831BDFE883B2D2F1F748BCAFA432A15DB7444E52 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualInt64_Run_m68B13CAF44AF943177FE4258163E575C0435D4C6 (NotEqualInt64_t50A116648DB45EA9165989F28BBEEF42755E5438 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int64_t)((*(int64_t*)((int64_t*)UnBox(L_10, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)UnBox(L_11, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualInt64__ctor_m226F8394723BEA1ABE8CE4C6F293AB75594C5BA7 (NotEqualInt64_t50A116648DB45EA9165989F28BBEEF42755E5438 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt64LiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualInt64LiftedToNull_Run_m5175AD0C81249609F0F5DAD7FADC3CFF4B30CA1F (NotEqualInt64LiftedToNull_t03B45D95A3CD8516FC13222B879FB28EA88717A6 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int64_t)((*(int64_t*)((int64_t*)UnBox(L_8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)UnBox(L_9, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualInt64LiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualInt64LiftedToNull__ctor_mB8BB90D6CA1913295CCB23B7A19CB22ED11AB3BC (NotEqualInt64LiftedToNull_t03B45D95A3CD8516FC13222B879FB28EA88717A6 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualReference::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualReference_Run_m16DC61F2BCCA19BFE3FC7C035751A9ECEE93A140 (NotEqualReference_tE3E7F054E29292325F5ACA560283A8E6C7C8B68F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_1 = ___frame0;
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_1, /*hidden argument*/NULL);
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_0, (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject *)L_2) == ((RuntimeObject*)(RuntimeObject *)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualReference__ctor_m19359CBB22A3AA03D1034A37663BFFA4ED96F843 (NotEqualReference_tE3E7F054E29292325F5ACA560283A8E6C7C8B68F * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualSByte_Run_mCB585E9E6B5B55EE82DD4399DDFC69B9CD7A850C (NotEqualSByte_t22F9223F00D4EE405B6C25362E3E1124B681321D * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int32_t)((*(int8_t*)((int8_t*)UnBox(L_10, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)UnBox(L_11, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualSByte__ctor_mFF99341DC902DFAF91FD63AEC559C2619644724C (NotEqualSByte_t22F9223F00D4EE405B6C25362E3E1124B681321D * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSByteLiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualSByteLiftedToNull_Run_mBD205E0AD558B493754AFA90D9D8FBA85EFA0F47 (NotEqualSByteLiftedToNull_t05B614C6208E2437ECFDC7E7640F9BFA70A1906B * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int32_t)((*(int8_t*)((int8_t*)UnBox(L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)UnBox(L_9, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSByteLiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualSByteLiftedToNull__ctor_m920DA205E24452E0BAEFCD2EE0353A51E98849B3 (NotEqualSByteLiftedToNull_t05B614C6208E2437ECFDC7E7640F9BFA70A1906B * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSingle::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualSingle_Run_m3E849B65A80175D9088458A46C25862631BAF101 (NotEqualSingle_t898F32E852A5F1B730BB94CB72759DCD8255750C * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((float)((*(float*)((float*)UnBox(L_10, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)UnBox(L_11, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSingle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualSingle__ctor_m045F22F8ABB15764BFD1FA25430275C42CFBF999 (NotEqualSingle_t898F32E852A5F1B730BB94CB72759DCD8255750C * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSingleLiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualSingleLiftedToNull_Run_m4F78484D131443D11BA5C93AD354FF5485847113 (NotEqualSingleLiftedToNull_t851ED8232C3EF20F250F993CA4EC07F8FA626C11 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((float)((*(float*)((float*)UnBox(L_8, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)UnBox(L_9, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualSingleLiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualSingleLiftedToNull__ctor_m19C043A4DA21E405B7A449CF1657D770ADCBD1AC (NotEqualSingleLiftedToNull_t851ED8232C3EF20F250F993CA4EC07F8FA626C11 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualUInt16_Run_m32A64986D098F4B20D89EE62C283F48644F92EC7 (NotEqualUInt16_tD1CA3DA33B60C4DD21BB33DE6C73DE51EDCFF02C * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_10, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_11, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualUInt16__ctor_mB25B202F07FEF591FE9E25A22FAC71D25B5BE1E4 (NotEqualUInt16_tD1CA3DA33B60C4DD21BB33DE6C73DE51EDCFF02C * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt16LiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualUInt16LiftedToNull_Run_mB3B984B8B00814C6927CA90CC81F4C9D967DD1E3 (NotEqualUInt16LiftedToNull_t10EAAB4DFE1C7BF9D2C5006F38032CE4113A3D12 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_9, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt16LiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualUInt16LiftedToNull__ctor_mC437E3E49B50D6A25402B342A6B653E988A1DF10 (NotEqualUInt16LiftedToNull_t10EAAB4DFE1C7BF9D2C5006F38032CE4113A3D12 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualUInt32_Run_mA45528ABF26E5547405C52A7C7AF7706B3151CE8 (NotEqualUInt32_t9DF61EB40618D7E00D08E13AD5D3361DB5260E0F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_10, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_11, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualUInt32__ctor_m71C8A098139B5C88D78BF5C8D9D0753DCB4266CA (NotEqualUInt32_t9DF61EB40618D7E00D08E13AD5D3361DB5260E0F * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt32LiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualUInt32LiftedToNull_Run_m7D551783A3526F0930810106CD2EBFF9A0329DC1 (NotEqualUInt32LiftedToNull_t68DEC29703B8B14A950440F2C2C3DB3EF2C7EEE0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_8, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_9, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt32LiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualUInt32LiftedToNull__ctor_m3C441686606A95640CCC03FDB192BABC57FA9E27 (NotEqualUInt32LiftedToNull_t68DEC29703B8B14A950440F2C2C3DB3EF2C7EEE0 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualUInt64_Run_m071E9BD9520D4CA294ADC883D12138DD4FFB757F (NotEqualUInt64_tBB177E7D8ECA57B0B4764484FB20936CFD2E598F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		NullCheck(L_8);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_0040;
	}

IL_0029:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_9 = ___frame0;
		RuntimeObject * L_10 = V_1;
		RuntimeObject * L_11 = V_0;
		NullCheck(L_9);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_9, (bool)((((int32_t)((((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_10, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_11, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0040:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualUInt64__ctor_m16042F63CBDCE8F595187BD414BA130604A3A526 (NotEqualUInt64_tBB177E7D8ECA57B0B4764484FB20936CFD2E598F * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt64LiftedToNull::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotEqualUInt64LiftedToNull_Run_m090AA3AEA2051030616B070BE6AADF3676AD0A78 (NotEqualUInt64LiftedToNull_t9CC27D81FF8C4281A9CF12603301798930776836 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_7, (bool)((((int32_t)((((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_8, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_9, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotEqualInstruction/NotEqualUInt64LiftedToNull::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotEqualUInt64LiftedToNull__ctor_mB666D61ED4C76F942FDF1ABEFEC8850D428E7BED (NotEqualUInt64LiftedToNull_t9CC27D81FF8C4281A9CF12603301798930776836 * __this, const RuntimeMethod* method)
{
	{
		NotEqualInstruction__ctor_m77FE65EC9AB0CBE771109AFF7470A58E57DDC7EA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotBoolean::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotBoolean_Run_mC1254CFAEBF8B6935BDE8DF38C9A4E7229B9D051 (NotBoolean_t7E81F0BAF53A01C8769C49BA5D909700C3A85DF3 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		NullCheck(L_4);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_4, (bool)((((int32_t)((*(bool*)((bool*)UnBox(L_5, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0022:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotBoolean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotBoolean__ctor_mA310AB916FE4602EA44CDD91729F1D0DF4424F6C (NotBoolean_t7E81F0BAF53A01C8769C49BA5D909700C3A85DF3 * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotByte_Run_mE5700E928838AEF6E405BACABF5D0286FBBE15AB (NotByte_t005DA1FE32B95AC480326E672ABACB80B309957B * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0021;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		NullCheck(L_4);
		InterpretedFrame_Push_m3D471A0B71F06B515A5AC6CD955F00C8240428ED(L_4, (uint8_t)((int32_t)((uint8_t)((~((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
	}

IL_0021:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotByte__ctor_m93D96157A16334F619BE938EFA3BB287A04FFBE5 (NotByte_t005DA1FE32B95AC480326E672ABACB80B309957B * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotInt16_Run_m60C7667CEABEA4F85162FEA4B70AFD9EF6BEFFE8 (NotInt16_t83114BC0D88B4B3EB5554761901EFBD229273501 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0021;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		NullCheck(L_4);
		InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60(L_4, ((int16_t)((int16_t)((~((*(int16_t*)((int16_t*)UnBox(L_5, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
	}

IL_0021:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotInt16__ctor_mC5ACED464744D0AB5F41DA29E603C9458078C951 (NotInt16_t83114BC0D88B4B3EB5554761901EFBD229273501 * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotInt32_Run_m5F76C109238F5C5A9A81EFF4D1ABEF99EF7B0478 (NotInt32_tC4172C3A5C27706E61386FC18DBA96E301A6837C * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0020;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		NullCheck(L_4);
		InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71(L_4, ((~((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
	}

IL_0020:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotInt32__ctor_m90E2EAE71BF7038E31FD012DF11B52AC72878DC9 (NotInt32_tC4172C3A5C27706E61386FC18DBA96E301A6837C * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotInt64_Run_m732E89482F63692C52CFC4A1F32B978CBA435C51 (NotInt64_tDCD330F193F99EBA6DF1A64E1AA3EC518065DB20 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		int64_t L_6 = ((~((*(int64_t*)((int64_t*)UnBox(L_5, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_7 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotInt64__ctor_m0FD01AE74F61D04D1060313C1C8E3DA6EA368445 (NotInt64_tDCD330F193F99EBA6DF1A64E1AA3EC518065DB20 * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotSByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotSByte_Run_m65B33DE3CCBFDE01325B0922119B91D34E71A8C7 (NotSByte_t7647870AE7DEDA5DA8F1601BD670F96729873001 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0021;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		NullCheck(L_4);
		InterpretedFrame_Push_m99C008FE2B0E5842A182DBDFE7144A40960EEE8B(L_4, ((int8_t)((int8_t)((~((*(int8_t*)((int8_t*)UnBox(L_5, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
	}

IL_0021:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotSByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSByte__ctor_mE7A3FEB03D8830E0CE2902107129D5F046D3AE5B (NotSByte_t7647870AE7DEDA5DA8F1601BD670F96729873001 * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotUInt16_Run_mA8E5BBBE5AD6960C37E82643F9B0ED0C8C2F6923 (NotUInt16_tFC37A1969EA64845C7E1118B84A8EB0006668739 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0021;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		NullCheck(L_4);
		InterpretedFrame_Push_m1E7E0894F3C4290DB002A0FFAE6D8EFEFC881797(L_4, (uint16_t)((int32_t)((uint16_t)((~((*(uint16_t*)((uint16_t*)UnBox(L_5, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
	}

IL_0021:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotUInt16__ctor_mF09DBB0CD27321E80CA040DDCE623AF1ADFCD3C1 (NotUInt16_tFC37A1969EA64845C7E1118B84A8EB0006668739 * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotUInt32_Run_mEAE456CE7A45827CA22323315DBCD7F493EDBBCA (NotUInt32_t58FCF0CAD14A7820A8731A76D08B121A0A93A9F3 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		uint32_t L_6 = ((~((*(uint32_t*)((uint32_t*)UnBox(L_5, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_7 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotUInt32__ctor_mD3CD5ECD35613A73AAA67F879221B5262655D50A (NotUInt32_t58FCF0CAD14A7820A8731A76D08B121A0A93A9F3 * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NotInstruction/NotUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotUInt64_Run_mA37D2085ADCEEFFD198CC06AF8E6DCCD837570DC (NotUInt64_t1B7DF3021DEBC21B61D87AFD775AF1E4D6C66E1E * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_3 = ___frame0;
		NullCheck(L_3);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_3, NULL, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_0013:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_0;
		uint64_t L_6 = ((~((*(uint64_t*)((uint64_t*)UnBox(L_5, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_7 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_4, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NotInstruction/NotUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotUInt64__ctor_m5D65EAAF9D69DE557522076C8BD22940436C71AD (NotUInt64_t1B7DF3021DEBC21B61D87AFD775AF1E4D6C66E1E * __this, const RuntimeMethod* method)
{
	{
		NotInstruction__ctor_m01B115D7DAC9B58EBBA0012BB229E1CD5113EF8C(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/EqualsClass::get_ConsumedStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EqualsClass_get_ConsumedStack_m54CA8FE38C415506E9ED14414C14206BA1365D50 (EqualsClass_t285D99AF64A008779832ADA21DC0E02903CA5C45 * __this, const RuntimeMethod* method)
{
	{
		return 2;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/EqualsClass::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EqualsClass_Run_mA60EF74014C75A5AB19B2585DE98873710B1512D (EqualsClass_t285D99AF64A008779832ADA21DC0E02903CA5C45 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = ___frame0;
		RuntimeObject * L_6 = V_0;
		NullCheck(L_5);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_5, (bool)((((RuntimeObject*)(RuntimeObject *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0), /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_001d:
	{
		RuntimeObject * L_7 = V_0;
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_8 = ___frame0;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = ((Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var))->get_BoxedFalse_0();
		NullCheck(L_8);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_8, L_9, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_002d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_10 = ___frame0;
		RuntimeObject * L_11 = V_1;
		RuntimeObject * L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_11, L_12);
		NullCheck(L_10);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_10, L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/EqualsClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualsClass__ctor_m17A39CD576A066EB1573CC6404B140F457437737 (EqualsClass_t285D99AF64A008779832ADA21DC0E02903CA5C45 * __this, const RuntimeMethod* method)
{
	{
		NullableMethodCallInstruction__ctor_m926A453253517A0E9A8FECB5966F913DBE8C1EF3(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetHashCodeClass::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetHashCodeClass_Run_m08D2447FA3C5C907C5120ED00EADC5A9C4864170 (GetHashCodeClass_tAFF5BBFE8D3225AA4E70465A0108D9B6FE7826F1 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B2_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B3_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		RuntimeObject * L_3 = V_0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		RuntimeObject * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetHashCodeClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetHashCodeClass__ctor_mCDBC95EE1F68EE704BEBC6AEB66EAC83269B6F74 (GetHashCodeClass_tAFF5BBFE8D3225AA4E70465A0108D9B6FE7826F1 * __this, const RuntimeMethod* method)
{
	{
		NullableMethodCallInstruction__ctor_m926A453253517A0E9A8FECB5966F913DBE8C1EF3(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValue::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetValue_Run_m3C6136CE13355273106191E1A0CE109AA353B5D6 (GetValue_t9DEEE6C9CCD20753F1A1F39B9CAFB5157024EEB9 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Peek_m4E8B474399257371CC0E89CBE6ADB626BA454346(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_2 = (&V_0);
		il2cpp_codegen_initobj(L_2, sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		int32_t L_3;
		L_3 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)L_2, /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		return L_3;
	}

IL_0017:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetValue__ctor_m4FE904C9BC5857833ED43FC9DDD05B1312ACC178 (GetValue_t9DEEE6C9CCD20753F1A1F39B9CAFB5157024EEB9 * __this, const RuntimeMethod* method)
{
	{
		NullableMethodCallInstruction__ctor_m926A453253517A0E9A8FECB5966F913DBE8C1EF3(__this, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetValueOrDefault__ctor_mAC3E374BBEB098CABA340EB3AB54522096EDA5C0 (GetValueOrDefault_t0441FF7D2ADC0CFF7640BDEA6E5AEBDB94E58213 * __this, MethodInfo_t * ___mi0, const RuntimeMethod* method)
{
	{
		NullableMethodCallInstruction__ctor_m926A453253517A0E9A8FECB5966F913DBE8C1EF3(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_0 = ___mi0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(40 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		__this->set_defaultValueType_6(L_1);
		return;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetValueOrDefault_Run_m07CD02AF08D124B27E1878909360FFC653B0151D (GetValueOrDefault_t0441FF7D2ADC0CFF7640BDEA6E5AEBDB94E58213 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Peek_m4E8B474399257371CC0E89CBE6ADB626BA454346(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		Type_t * L_5 = __this->get_defaultValueType_6();
		RuntimeObject * L_6;
		L_6 = Activator_CreateInstance_m8D0BDBD446BBCB24F702D8678A57E4594919C8BD(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return 1;
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
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault1::get_ConsumedStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetValueOrDefault1_get_ConsumedStack_m9185498179BE5178911DD54EEE01D97024B173AA (GetValueOrDefault1_t0A65C8B1304D9D8E9CE7DBE897476349855BE675 * __this, const RuntimeMethod* method)
{
	{
		return 2;
	}
}
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault1::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GetValueOrDefault1_Run_m7CDAD1BC74CCECB59E98F5AEE4D84A4F6C09A5A6 (GetValueOrDefault1_t0A65C8B1304D9D8E9CE7DBE897476349855BE675 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * G_B2_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B2_1 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B1_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_4 = ___frame0;
		RuntimeObject * L_5 = V_1;
		RuntimeObject * L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = L_4;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_4;
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_7 = V_0;
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_0015:
	{
		NullCheck(G_B2_1);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/GetValueOrDefault1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetValueOrDefault1__ctor_mC7CD4AA7833DAC512AAE8E06E80C04EB781D4719 (GetValueOrDefault1_t0A65C8B1304D9D8E9CE7DBE897476349855BE675 * __this, const RuntimeMethod* method)
{
	{
		NullableMethodCallInstruction__ctor_m926A453253517A0E9A8FECB5966F913DBE8C1EF3(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/HasValue::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HasValue_Run_m7D08D65EB94C7353697D21AF1ADFFE2759FB0B9F (HasValue_t45F7340A1654528F9129DD06808DEE3E09261821 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		RuntimeObject * L_3 = V_0;
		NullCheck(L_2);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_2, (bool)((!(((RuntimeObject*)(RuntimeObject *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/HasValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HasValue__ctor_m1EB4DAA353DA5AD8D744F5CBD99A3007373F1F22 (HasValue_t45F7340A1654528F9129DD06808DEE3E09261821 * __this, const RuntimeMethod* method)
{
	{
		NullableMethodCallInstruction__ctor_m926A453253517A0E9A8FECB5966F913DBE8C1EF3(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/ToStringClass::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ToStringClass_Run_m24AAA260A31C8CC66DC5FFC51B3FBF3DF3AC8F33 (ToStringClass_t8668E59BA5ABBABF3286628C398A099F0546914D * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B2_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B3_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		RuntimeObject * L_3 = V_0;
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0013;
		}
	}
	{
		RuntimeObject * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0013:
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NullableMethodCallInstruction/ToStringClass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToStringClass__ctor_mFCBD7B57BF2B3195DA4C54DA6CE76BE9437456A2 (ToStringClass_t8668E59BA5ABBABF3286628C398A099F0546914D * __this, const RuntimeMethod* method)
{
	{
		NullableMethodCallInstruction__ctor_m926A453253517A0E9A8FECB5966F913DBE8C1EF3(__this, /*hidden argument*/NULL);
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
// System.String System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::get_InstructionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Checked_get_InstructionName_m29F0CB2E0AB760A715B38CF7807E2530369A0842 (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF75AE27F892A4631428AA6C707A9C422EDC0CA7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralF75AE27F892A4631428AA6C707A9C422EDC0CA7E;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::.ctor(System.TypeCode,System.TypeCode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checked__ctor_m1219A5A8FC5FDB0E0C473F878C19007A8BB9A843 (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, int32_t ___from0, int32_t ___to1, bool ___isLiftedToNull2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___from0;
		int32_t L_1 = ___to1;
		bool L_2 = ___isLiftedToNull2;
		NumericConvertInstruction__ctor_m5A6FD216C2495E3114709025D2E15F38DE9549DB(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::Convert(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_Convert_m70AC7F389FF7AD8E8BC95357EE187DF804EF15C3 (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * G_B4_0 = NULL;
	Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * G_B5_1 = NULL;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__from_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_00a5;
			}
			case 6:
			{
				goto IL_008b;
			}
			case 7:
			{
				goto IL_00b2;
			}
			case 8:
			{
				goto IL_0098;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_00cd;
			}
			case 11:
			{
				goto IL_00db;
			}
		}
	}
	{
		goto IL_00e8;
	}

IL_0044:
	{
		RuntimeObject * L_2 = ___obj0;
		G_B3_0 = __this;
		if (((*(bool*)((bool*)UnBox(L_2, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B4_0 = __this;
			goto IL_0050;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0051:
	{
		NullCheck(G_B5_1);
		RuntimeObject * L_3;
		L_3 = Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		return L_3;
	}

IL_0057:
	{
		RuntimeObject * L_4 = ___obj0;
		RuntimeObject * L_5;
		L_5 = Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_5;
	}

IL_0064:
	{
		RuntimeObject * L_6 = ___obj0;
		RuntimeObject * L_7;
		L_7 = Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D(__this, ((*(int8_t*)((int8_t*)UnBox(L_6, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_7;
	}

IL_0071:
	{
		RuntimeObject * L_8 = ___obj0;
		RuntimeObject * L_9;
		L_9 = Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D(__this, ((*(int16_t*)((int16_t*)UnBox(L_8, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_9;
	}

IL_007e:
	{
		RuntimeObject * L_10 = ___obj0;
		RuntimeObject * L_11;
		L_11 = Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D(__this, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_10, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_11;
	}

IL_008b:
	{
		RuntimeObject * L_12 = ___obj0;
		RuntimeObject * L_13;
		L_13 = Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D(__this, ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_13;
	}

IL_0098:
	{
		RuntimeObject * L_14 = ___obj0;
		RuntimeObject * L_15;
		L_15 = Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9(__this, ((*(int64_t*)((int64_t*)UnBox(L_14, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_15;
	}

IL_00a5:
	{
		RuntimeObject * L_16 = ___obj0;
		RuntimeObject * L_17;
		L_17 = Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D(__this, ((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_17;
	}

IL_00b2:
	{
		RuntimeObject * L_18 = ___obj0;
		RuntimeObject * L_19;
		L_19 = Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9(__this, ((int64_t)((uint64_t)((*(uint32_t*)((uint32_t*)UnBox(L_18, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		return L_19;
	}

IL_00c0:
	{
		RuntimeObject * L_20 = ___obj0;
		RuntimeObject * L_21;
		L_21 = Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC(__this, ((*(uint64_t*)((uint64_t*)UnBox(L_20, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_21;
	}

IL_00cd:
	{
		RuntimeObject * L_22 = ___obj0;
		RuntimeObject * L_23;
		L_23 = Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1(__this, ((double)((double)((*(float*)((float*)UnBox(L_22, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		return L_23;
	}

IL_00db:
	{
		RuntimeObject * L_24 = ___obj0;
		RuntimeObject * L_25;
		L_25 = Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1(__this, ((*(double*)((double*)UnBox(L_24, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_25;
	}

IL_00e8:
	{
		Exception_t * L_26;
		L_26 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Checked_Convert_m70AC7F389FF7AD8E8BC95357EE187DF804EF15C3_RuntimeMethod_var)));
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::ConvertInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)3)))
		{
			case 0:
			{
				goto IL_00a8;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0055;
			}
			case 5:
			{
				goto IL_0074;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_007c;
			}
			case 8:
			{
				goto IL_006c;
			}
			case 9:
			{
				goto IL_0084;
			}
			case 10:
			{
				goto IL_008c;
			}
			case 11:
			{
				goto IL_0094;
			}
			case 12:
			{
				goto IL_009c;
			}
		}
	}
	{
		goto IL_00b2;
	}

IL_0045:
	{
		int32_t L_2 = ___obj0;
		if ((int64_t)(L_2) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var);
		uint8_t L_3 = ((uint8_t)((uint8_t)L_2));
		RuntimeObject * L_4 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_004d:
	{
		int32_t L_5 = ___obj0;
		if ((int64_t)(L_5) > 127LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var);
		int8_t L_6 = ((int8_t)((int8_t)L_5));
		RuntimeObject * L_7 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0055:
	{
		int32_t L_8 = ___obj0;
		if ((int64_t)(L_8) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var);
		int16_t L_9 = ((int16_t)((int16_t)L_8));
		RuntimeObject * L_10 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_005d:
	{
		int32_t L_11 = ___obj0;
		if ((int64_t)(L_11) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var);
		Il2CppChar L_12 = ((Il2CppChar)((uint16_t)((uint16_t)L_11)));
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0065:
	{
		int32_t L_14 = ___obj0;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_006c:
	{
		int32_t L_17 = ___obj0;
		int64_t L_18 = ((int64_t)((int64_t)L_17));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0074:
	{
		int32_t L_20 = ___obj0;
		if ((int64_t)(L_20) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var);
		uint16_t L_21 = ((uint16_t)((uint16_t)L_20));
		RuntimeObject * L_22 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_007c:
	{
		int32_t L_23 = ___obj0;
		if ((int64_t)(L_23) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var);
		uint32_t L_24 = ((uint32_t)((uint32_t)L_23));
		RuntimeObject * L_25 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0084:
	{
		int32_t L_26 = ___obj0;
		if ((uint64_t)(L_26) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var);
		uint64_t L_27 = ((uint64_t)((uint64_t)L_26));
		RuntimeObject * L_28 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_008c:
	{
		int32_t L_29 = ___obj0;
		float L_30 = ((float)((float)L_29));
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_0094:
	{
		int32_t L_32 = ___obj0;
		double L_33 = ((double)((double)L_32));
		RuntimeObject * L_34 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_009c:
	{
		int32_t L_35 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_36;
		L_36 = Decimal_op_Implicit_mA83342DEE0725CF242454832BD0306090E80CCF9(L_35, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_37 = L_36;
		RuntimeObject * L_38 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00a8:
	{
		int32_t L_39 = ___obj0;
		bool L_40 = ((bool)((!(((uint32_t)L_39) <= ((uint32_t)0)))? 1 : 0));
		RuntimeObject * L_41 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_40);
		return L_41;
	}

IL_00b2:
	{
		Exception_t * L_42;
		L_42 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Checked_ConvertInt32_m45CBE4347E9D9F063CDF7559A51A20DB4B298E5D_RuntimeMethod_var)));
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::ConvertInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9 (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, int64_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_0070;
			}
			case 5:
			{
				goto IL_0061;
			}
			case 6:
			{
				goto IL_0078;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0080;
			}
			case 9:
			{
				goto IL_0088;
			}
			case 10:
			{
				goto IL_0090;
			}
			case 11:
			{
				goto IL_0098;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_0041:
	{
		int64_t L_2 = ___obj0;
		if ((int64_t)(L_2) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		uint8_t L_3 = ((uint8_t)((uint8_t)L_2));
		RuntimeObject * L_4 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0049:
	{
		int64_t L_5 = ___obj0;
		if ((int64_t)(L_5) > 127LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		int8_t L_6 = ((int8_t)((int8_t)L_5));
		RuntimeObject * L_7 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0051:
	{
		int64_t L_8 = ___obj0;
		if ((int64_t)(L_8) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		int16_t L_9 = ((int16_t)((int16_t)L_8));
		RuntimeObject * L_10 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0059:
	{
		int64_t L_11 = ___obj0;
		if ((int64_t)(L_11) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		Il2CppChar L_12 = ((Il2CppChar)((uint16_t)((uint16_t)L_11)));
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0061:
	{
		int64_t L_14 = ___obj0;
		if ((int64_t)(L_14) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		int32_t L_15 = ((int32_t)((int32_t)L_14));
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_0069:
	{
		int64_t L_17 = ___obj0;
		int64_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0070:
	{
		int64_t L_20 = ___obj0;
		if ((int64_t)(L_20) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		uint16_t L_21 = ((uint16_t)((uint16_t)L_20));
		RuntimeObject * L_22 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0078:
	{
		int64_t L_23 = ___obj0;
		if ((int64_t)(L_23) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		uint32_t L_24 = ((uint32_t)((uint32_t)L_23));
		RuntimeObject * L_25 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0080:
	{
		int64_t L_26 = ___obj0;
		if ((uint64_t)(L_26) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var);
		uint64_t L_27 = ((uint64_t)((uint64_t)L_26));
		RuntimeObject * L_28 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_0088:
	{
		int64_t L_29 = ___obj0;
		float L_30 = ((float)((float)L_29));
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_0090:
	{
		int64_t L_32 = ___obj0;
		double L_33 = ((double)((double)L_32));
		RuntimeObject * L_34 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_0098:
	{
		int64_t L_35 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_36;
		L_36 = Decimal_op_Implicit_m0736049F15FA2C68B5EC46BDED5E98F82D475A56(L_35, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_37 = L_36;
		RuntimeObject * L_38 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00a4:
	{
		Exception_t * L_39;
		L_39 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Checked_ConvertInt64_mA0E370E74351132F68C29C2EA8861208F15C91C9_RuntimeMethod_var)));
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::ConvertUInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_0061;
			}
			case 6:
			{
				goto IL_0079;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0081;
			}
			case 9:
			{
				goto IL_0088;
			}
			case 10:
			{
				goto IL_0091;
			}
			case 11:
			{
				goto IL_009a;
			}
		}
	}
	{
		goto IL_00a6;
	}

IL_0041:
	{
		uint64_t L_2 = ___obj0;
		if ((uint64_t)(L_2) > 255LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		uint8_t L_3 = ((uint8_t)((uint8_t)L_2));
		RuntimeObject * L_4 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0049:
	{
		uint64_t L_5 = ___obj0;
		if ((uint64_t)(L_5) > 127LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		int8_t L_6 = ((int8_t)((uint8_t)((uint8_t)L_5)));
		RuntimeObject * L_7 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0051:
	{
		uint64_t L_8 = ___obj0;
		if ((uint64_t)(L_8) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		int16_t L_9 = ((int16_t)((int16_t)L_8));
		RuntimeObject * L_10 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0059:
	{
		uint64_t L_11 = ___obj0;
		if ((uint64_t)(L_11) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		Il2CppChar L_12 = ((Il2CppChar)((uint16_t)((uint16_t)L_11)));
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0061:
	{
		uint64_t L_14 = ___obj0;
		if ((uint64_t)(L_14) > 2147483647LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		int32_t L_15 = ((int32_t)((int32_t)L_14));
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_0069:
	{
		uint64_t L_17 = ___obj0;
		if ((uint64_t)(L_17) > 9223372036854775807LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		int64_t L_18 = ((int64_t)((int64_t)L_17));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0071:
	{
		uint64_t L_20 = ___obj0;
		if ((uint64_t)(L_20) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		uint16_t L_21 = ((uint16_t)((uint16_t)L_20));
		RuntimeObject * L_22 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0079:
	{
		uint64_t L_23 = ___obj0;
		if ((uint64_t)(L_23) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var);
		uint32_t L_24 = ((uint32_t)((uint32_t)L_23));
		RuntimeObject * L_25 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0081:
	{
		uint64_t L_26 = ___obj0;
		uint64_t L_27 = L_26;
		RuntimeObject * L_28 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_0088:
	{
		uint64_t L_29 = ___obj0;
		float L_30 = ((float)((float)((double)((uint64_t)L_29))));
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_0091:
	{
		uint64_t L_32 = ___obj0;
		double L_33 = ((double)((double)((double)((uint64_t)L_32))));
		RuntimeObject * L_34 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_009a:
	{
		uint64_t L_35 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_36;
		L_36 = Decimal_op_Implicit_mF6E8CA683C4FB32AE9BF12A02506B8F04C3DDD18(L_35, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_37 = L_36;
		RuntimeObject * L_38 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00a6:
	{
		Exception_t * L_39;
		L_39 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Checked_ConvertUInt64_mA1ED6172A9581A0843226F47BB1CEF602EEAB6FC_RuntimeMethod_var)));
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Checked::ConvertDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1 (Checked_tCA007F5C8CD3A0C0686318F7F50FB2757E34A380 * __this, double ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_0061;
			}
			case 6:
			{
				goto IL_0079;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0081;
			}
			case 9:
			{
				goto IL_0089;
			}
			case 10:
			{
				goto IL_0091;
			}
			case 11:
			{
				goto IL_0099;
			}
		}
	}
	{
		goto IL_00a5;
	}

IL_0041:
	{
		double L_2 = ___obj0;
		if (L_2 > (double)(255LL)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		uint8_t L_3 = il2cpp_codegen_cast_floating_point<uint8_t, uint8_t, double>(L_2);
		RuntimeObject * L_4 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0049:
	{
		double L_5 = ___obj0;
		if (L_5 > (double)(127LL)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		int8_t L_6 = il2cpp_codegen_cast_double_to_int<int8_t>(L_5);
		RuntimeObject * L_7 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0051:
	{
		double L_8 = ___obj0;
		if (L_8 > (double)(32767LL)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		int16_t L_9 = il2cpp_codegen_cast_double_to_int<int16_t>(L_8);
		RuntimeObject * L_10 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0059:
	{
		double L_11 = ___obj0;
		if (L_11 > (double)(65535LL)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		Il2CppChar L_12 = ((Il2CppChar)il2cpp_codegen_cast_floating_point<uint16_t, uint16_t, double>(L_11));
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0061:
	{
		double L_14 = ___obj0;
		if (L_14 > (double)(2147483647LL)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		int32_t L_15 = il2cpp_codegen_cast_double_to_int<int32_t>(L_14);
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_0069:
	{
		double L_17 = ___obj0;
		if (L_17 > (double)((std::numeric_limits<int64_t>::max)())) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		int64_t L_18 = il2cpp_codegen_cast_double_to_int<int64_t>(L_17);
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0071:
	{
		double L_20 = ___obj0;
		if (L_20 > (double)(65535LL)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		uint16_t L_21 = il2cpp_codegen_cast_floating_point<uint16_t, uint16_t, double>(L_20);
		RuntimeObject * L_22 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0079:
	{
		double L_23 = ___obj0;
		if (L_23 > (double)(4294967295LL)) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		uint32_t L_24 = il2cpp_codegen_cast_floating_point<uint32_t, uint32_t, double>(L_23);
		RuntimeObject * L_25 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0081:
	{
		double L_26 = ___obj0;
		if (L_26 > (double)((std::numeric_limits<uint64_t>::max)())) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var);
		uint64_t L_27 = il2cpp_codegen_cast_floating_point<uint64_t, uint64_t, double>(L_26);
		RuntimeObject * L_28 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_0089:
	{
		double L_29 = ___obj0;
		float L_30 = ((float)((float)L_29));
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_0091:
	{
		double L_32 = ___obj0;
		double L_33 = ((double)((double)L_32));
		RuntimeObject * L_34 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_0099:
	{
		double L_35 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_36;
		L_36 = Decimal_op_Explicit_m1ECDB1B6C5DBABAC7252C45BC86680A50F11BD6E(L_35, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_37 = L_36;
		RuntimeObject * L_38 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00a5:
	{
		Exception_t * L_39;
		L_39 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Checked_ConvertDouble_m81EBDF731381BB04E7F4BB4D39B9AA9D7E1863A1_RuntimeMethod_var)));
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
// System.String System.Linq.Expressions.Interpreter.NumericConvertInstruction/ToUnderlying::get_InstructionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToUnderlying_get_InstructionName_mE09CFEDE65C4C79580ECA955C1A325D168FF2962 (ToUnderlying_tB8738F9853F450A39DA849AE376E7D241529C3A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3C65B6FF1CFCF13E04997A1ED4E5E23AC99D931);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE3C65B6FF1CFCF13E04997A1ED4E5E23AC99D931;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NumericConvertInstruction/ToUnderlying::.ctor(System.TypeCode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToUnderlying__ctor_m96CA8816E6BBCE33C5FE1BBCDE3E7F0887C26101 (ToUnderlying_tB8738F9853F450A39DA849AE376E7D241529C3A4 * __this, int32_t ___to0, bool ___isLiftedToNull1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___to0;
		int32_t L_1 = ___to0;
		bool L_2 = ___isLiftedToNull1;
		NumericConvertInstruction__ctor_m5A6FD216C2495E3114709025D2E15F38DE9549DB(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/ToUnderlying::Convert(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ToUnderlying_Convert_m2A2624EA65C7896601FF333FD9A4400E4A1C5061 (ToUnderlying_tB8738F9853F450A39DA849AE376E7D241529C3A4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_005d;
			}
			case 5:
			{
				goto IL_008d;
			}
			case 6:
			{
				goto IL_0075;
			}
			case 7:
			{
				goto IL_0099;
			}
			case 8:
			{
				goto IL_0081;
			}
			case 9:
			{
				goto IL_00a5;
			}
		}
	}
	{
		goto IL_00b1;
	}

IL_0039:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = ((*(bool*)((bool*)UnBox(L_2, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0045:
	{
		RuntimeObject * L_5 = ___obj0;
		uint8_t L_6 = ((*(uint8_t*)((uint8_t*)UnBox(L_5, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))));
		RuntimeObject * L_7 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0051:
	{
		RuntimeObject * L_8 = ___obj0;
		int8_t L_9 = ((*(int8_t*)((int8_t*)UnBox(L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))));
		RuntimeObject * L_10 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_005d:
	{
		RuntimeObject * L_11 = ___obj0;
		int16_t L_12 = ((*(int16_t*)((int16_t*)UnBox(L_11, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))));
		RuntimeObject * L_13 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0069:
	{
		RuntimeObject * L_14 = ___obj0;
		Il2CppChar L_15 = ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_14, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var))));
		RuntimeObject * L_16 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_0075:
	{
		RuntimeObject * L_17 = ___obj0;
		int32_t L_18 = ((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0081:
	{
		RuntimeObject * L_20 = ___obj0;
		int64_t L_21 = ((*(int64_t*)((int64_t*)UnBox(L_20, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))));
		RuntimeObject * L_22 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_008d:
	{
		RuntimeObject * L_23 = ___obj0;
		uint16_t L_24 = ((*(uint16_t*)((uint16_t*)UnBox(L_23, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))));
		RuntimeObject * L_25 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0099:
	{
		RuntimeObject * L_26 = ___obj0;
		uint32_t L_27 = ((*(uint32_t*)((uint32_t*)UnBox(L_26, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))));
		RuntimeObject * L_28 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_00a5:
	{
		RuntimeObject * L_29 = ___obj0;
		uint64_t L_30 = ((*(uint64_t*)((uint64_t*)UnBox(L_29, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))));
		RuntimeObject * L_31 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_00b1:
	{
		Exception_t * L_32;
		L_32 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ToUnderlying_Convert_m2A2624EA65C7896601FF333FD9A4400E4A1C5061_RuntimeMethod_var)));
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
// System.String System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::get_InstructionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unchecked_get_InstructionName_mE334429BC8F453DC9BFA6EC192449551856A0042 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3E89B02BBA9F60219FC7F02742EEB1386A53E33);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralD3E89B02BBA9F60219FC7F02742EEB1386A53E33;
	}
}
// System.Void System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::.ctor(System.TypeCode,System.TypeCode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unchecked__ctor_m545D470BFCD83ABA5422CE3DA2DF59F665753C18 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, int32_t ___from0, int32_t ___to1, bool ___isLiftedToNull2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___from0;
		int32_t L_1 = ___to1;
		bool L_2 = ___isLiftedToNull2;
		NumericConvertInstruction__ctor_m5A6FD216C2495E3114709025D2E15F38DE9549DB(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::Convert(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_Convert_m82A33A999D1A36B11D845A77E895C853CC9A9D59 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * G_B4_0 = NULL;
	Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * G_B5_1 = NULL;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__from_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_00a5;
			}
			case 6:
			{
				goto IL_008b;
			}
			case 7:
			{
				goto IL_00b2;
			}
			case 8:
			{
				goto IL_0098;
			}
			case 9:
			{
				goto IL_00c0;
			}
			case 10:
			{
				goto IL_00cd;
			}
			case 11:
			{
				goto IL_00db;
			}
		}
	}
	{
		goto IL_00e8;
	}

IL_0044:
	{
		RuntimeObject * L_2 = ___obj0;
		G_B3_0 = __this;
		if (((*(bool*)((bool*)UnBox(L_2, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B4_0 = __this;
			goto IL_0050;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0051;
	}

IL_0050:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0051:
	{
		NullCheck(G_B5_1);
		RuntimeObject * L_3;
		L_3 = Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		return L_3;
	}

IL_0057:
	{
		RuntimeObject * L_4 = ___obj0;
		RuntimeObject * L_5;
		L_5 = Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_4, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_5;
	}

IL_0064:
	{
		RuntimeObject * L_6 = ___obj0;
		RuntimeObject * L_7;
		L_7 = Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737(__this, ((*(int8_t*)((int8_t*)UnBox(L_6, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_7;
	}

IL_0071:
	{
		RuntimeObject * L_8 = ___obj0;
		RuntimeObject * L_9;
		L_9 = Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737(__this, ((*(int16_t*)((int16_t*)UnBox(L_8, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_9;
	}

IL_007e:
	{
		RuntimeObject * L_10 = ___obj0;
		RuntimeObject * L_11;
		L_11 = Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737(__this, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_10, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_11;
	}

IL_008b:
	{
		RuntimeObject * L_12 = ___obj0;
		RuntimeObject * L_13;
		L_13 = Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737(__this, ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_13;
	}

IL_0098:
	{
		RuntimeObject * L_14 = ___obj0;
		RuntimeObject * L_15;
		L_15 = Unchecked_ConvertInt64_mD10BC2A1110F9D63DE01D8E21FC5B82DA1B8A2F1(__this, ((*(int64_t*)((int64_t*)UnBox(L_14, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_15;
	}

IL_00a5:
	{
		RuntimeObject * L_16 = ___obj0;
		RuntimeObject * L_17;
		L_17 = Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737(__this, ((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_17;
	}

IL_00b2:
	{
		RuntimeObject * L_18 = ___obj0;
		RuntimeObject * L_19;
		L_19 = Unchecked_ConvertInt64_mD10BC2A1110F9D63DE01D8E21FC5B82DA1B8A2F1(__this, ((int64_t)((uint64_t)((*(uint32_t*)((uint32_t*)UnBox(L_18, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		return L_19;
	}

IL_00c0:
	{
		RuntimeObject * L_20 = ___obj0;
		RuntimeObject * L_21;
		L_21 = Unchecked_ConvertUInt64_m695AF02D0E8A6450DD905576E97069933D742887(__this, ((*(uint64_t*)((uint64_t*)UnBox(L_20, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_21;
	}

IL_00cd:
	{
		RuntimeObject * L_22 = ___obj0;
		RuntimeObject * L_23;
		L_23 = Unchecked_ConvertDouble_m113E4E31F03A8F6477308AA705D0213F209F3693(__this, ((double)((double)((*(float*)((float*)UnBox(L_22, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		return L_23;
	}

IL_00db:
	{
		RuntimeObject * L_24 = ___obj0;
		RuntimeObject * L_25;
		L_25 = Unchecked_ConvertDouble_m113E4E31F03A8F6477308AA705D0213F209F3693(__this, ((*(double*)((double*)UnBox(L_24, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_25;
	}

IL_00e8:
	{
		Exception_t * L_26;
		L_26 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Unchecked_Convert_m82A33A999D1A36B11D845A77E895C853CC9A9D59_RuntimeMethod_var)));
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::ConvertInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)3)))
		{
			case 0:
			{
				goto IL_00a7;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0045;
			}
			case 4:
			{
				goto IL_0055;
			}
			case 5:
			{
				goto IL_0074;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_007c;
			}
			case 8:
			{
				goto IL_006c;
			}
			case 9:
			{
				goto IL_0083;
			}
			case 10:
			{
				goto IL_008b;
			}
			case 11:
			{
				goto IL_0093;
			}
			case 12:
			{
				goto IL_009b;
			}
		}
	}
	{
		goto IL_00b1;
	}

IL_0045:
	{
		int32_t L_2 = ___obj0;
		uint8_t L_3 = ((uint8_t)((int32_t)((uint8_t)L_2)));
		RuntimeObject * L_4 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_004d:
	{
		int32_t L_5 = ___obj0;
		int8_t L_6 = ((int8_t)((int8_t)L_5));
		RuntimeObject * L_7 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0055:
	{
		int32_t L_8 = ___obj0;
		int16_t L_9 = ((int16_t)((int16_t)L_8));
		RuntimeObject * L_10 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_005d:
	{
		int32_t L_11 = ___obj0;
		Il2CppChar L_12 = ((Il2CppChar)((int32_t)((uint16_t)L_11)));
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0065:
	{
		int32_t L_14 = ___obj0;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_006c:
	{
		int32_t L_17 = ___obj0;
		int64_t L_18 = ((int64_t)((int64_t)L_17));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0074:
	{
		int32_t L_20 = ___obj0;
		uint16_t L_21 = ((uint16_t)((int32_t)((uint16_t)L_20)));
		RuntimeObject * L_22 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_007c:
	{
		int32_t L_23 = ___obj0;
		uint32_t L_24 = ((uint32_t)L_23);
		RuntimeObject * L_25 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0083:
	{
		int32_t L_26 = ___obj0;
		uint64_t L_27 = ((uint64_t)((int64_t)((int64_t)L_26)));
		RuntimeObject * L_28 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_008b:
	{
		int32_t L_29 = ___obj0;
		float L_30 = ((float)((float)L_29));
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_0093:
	{
		int32_t L_32 = ___obj0;
		double L_33 = ((double)((double)L_32));
		RuntimeObject * L_34 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_009b:
	{
		int32_t L_35 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_36;
		L_36 = Decimal_op_Implicit_mA83342DEE0725CF242454832BD0306090E80CCF9(L_35, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_37 = L_36;
		RuntimeObject * L_38 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00a7:
	{
		int32_t L_39 = ___obj0;
		bool L_40 = ((bool)((!(((uint32_t)L_39) <= ((uint32_t)0)))? 1 : 0));
		RuntimeObject * L_41 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_40);
		return L_41;
	}

IL_00b1:
	{
		Exception_t * L_42;
		L_42 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Unchecked_ConvertInt32_mF3023DD089F90612D37165950CEBD3D4702D8737_RuntimeMethod_var)));
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::ConvertInt64(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_ConvertInt64_mD10BC2A1110F9D63DE01D8E21FC5B82DA1B8A2F1 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, int64_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_0070;
			}
			case 5:
			{
				goto IL_0061;
			}
			case 6:
			{
				goto IL_0078;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0080;
			}
			case 9:
			{
				goto IL_0087;
			}
			case 10:
			{
				goto IL_008f;
			}
			case 11:
			{
				goto IL_0097;
			}
		}
	}
	{
		goto IL_00a3;
	}

IL_0041:
	{
		int64_t L_2 = ___obj0;
		uint8_t L_3 = ((uint8_t)((int32_t)((uint8_t)L_2)));
		RuntimeObject * L_4 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0049:
	{
		int64_t L_5 = ___obj0;
		int8_t L_6 = ((int8_t)((int8_t)L_5));
		RuntimeObject * L_7 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0051:
	{
		int64_t L_8 = ___obj0;
		int16_t L_9 = ((int16_t)((int16_t)L_8));
		RuntimeObject * L_10 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0059:
	{
		int64_t L_11 = ___obj0;
		Il2CppChar L_12 = ((Il2CppChar)((int32_t)((uint16_t)L_11)));
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0061:
	{
		int64_t L_14 = ___obj0;
		int32_t L_15 = ((int32_t)((int32_t)L_14));
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_0069:
	{
		int64_t L_17 = ___obj0;
		int64_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0070:
	{
		int64_t L_20 = ___obj0;
		uint16_t L_21 = ((uint16_t)((int32_t)((uint16_t)L_20)));
		RuntimeObject * L_22 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0078:
	{
		int64_t L_23 = ___obj0;
		uint32_t L_24 = ((uint32_t)((int32_t)((uint32_t)L_23)));
		RuntimeObject * L_25 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0080:
	{
		int64_t L_26 = ___obj0;
		uint64_t L_27 = ((uint64_t)L_26);
		RuntimeObject * L_28 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_0087:
	{
		int64_t L_29 = ___obj0;
		float L_30 = ((float)((float)L_29));
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_008f:
	{
		int64_t L_32 = ___obj0;
		double L_33 = ((double)((double)L_32));
		RuntimeObject * L_34 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_0097:
	{
		int64_t L_35 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_36;
		L_36 = Decimal_op_Implicit_m0736049F15FA2C68B5EC46BDED5E98F82D475A56(L_35, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_37 = L_36;
		RuntimeObject * L_38 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00a3:
	{
		Exception_t * L_39;
		L_39 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Unchecked_ConvertInt64_mD10BC2A1110F9D63DE01D8E21FC5B82DA1B8A2F1_RuntimeMethod_var)));
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::ConvertUInt64(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_ConvertUInt64_m695AF02D0E8A6450DD905576E97069933D742887 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_0070;
			}
			case 5:
			{
				goto IL_0061;
			}
			case 6:
			{
				goto IL_0078;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0080;
			}
			case 9:
			{
				goto IL_0087;
			}
			case 10:
			{
				goto IL_0090;
			}
			case 11:
			{
				goto IL_0099;
			}
		}
	}
	{
		goto IL_00a5;
	}

IL_0041:
	{
		uint64_t L_2 = ___obj0;
		uint8_t L_3 = ((uint8_t)((int32_t)((uint8_t)L_2)));
		RuntimeObject * L_4 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0049:
	{
		uint64_t L_5 = ___obj0;
		int8_t L_6 = ((int8_t)((int8_t)L_5));
		RuntimeObject * L_7 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0051:
	{
		uint64_t L_8 = ___obj0;
		int16_t L_9 = ((int16_t)((int16_t)L_8));
		RuntimeObject * L_10 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0059:
	{
		uint64_t L_11 = ___obj0;
		Il2CppChar L_12 = ((Il2CppChar)((int32_t)((uint16_t)L_11)));
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0061:
	{
		uint64_t L_14 = ___obj0;
		int32_t L_15 = ((int32_t)((int32_t)L_14));
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_0069:
	{
		uint64_t L_17 = ___obj0;
		int64_t L_18 = ((int64_t)L_17);
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0070:
	{
		uint64_t L_20 = ___obj0;
		uint16_t L_21 = ((uint16_t)((int32_t)((uint16_t)L_20)));
		RuntimeObject * L_22 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0078:
	{
		uint64_t L_23 = ___obj0;
		uint32_t L_24 = ((uint32_t)((int32_t)((uint32_t)L_23)));
		RuntimeObject * L_25 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0080:
	{
		uint64_t L_26 = ___obj0;
		uint64_t L_27 = L_26;
		RuntimeObject * L_28 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_0087:
	{
		uint64_t L_29 = ___obj0;
		float L_30 = ((float)((float)((double)((uint64_t)L_29))));
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_0090:
	{
		uint64_t L_32 = ___obj0;
		double L_33 = ((double)((double)((double)((uint64_t)L_32))));
		RuntimeObject * L_34 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_0099:
	{
		uint64_t L_35 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_36;
		L_36 = Decimal_op_Implicit_mF6E8CA683C4FB32AE9BF12A02506B8F04C3DDD18(L_35, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_37 = L_36;
		RuntimeObject * L_38 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00a5:
	{
		Exception_t * L_39;
		L_39 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Unchecked_ConvertUInt64_m695AF02D0E8A6450DD905576E97069933D742887_RuntimeMethod_var)));
	}
}
// System.Object System.Linq.Expressions.Interpreter.NumericConvertInstruction/Unchecked::ConvertDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Unchecked_ConvertDouble_m113E4E31F03A8F6477308AA705D0213F209F3693 (Unchecked_t0F2FB742B7CE314FE7F4AC3BBB58291E380A2D8E * __this, double ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((NumericConvertInstruction_tAE53411F1771348B8FF9C71EC68D6BBB25BCD1A9 *)__this)->get__to_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)4)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_0071;
			}
			case 5:
			{
				goto IL_0061;
			}
			case 6:
			{
				goto IL_0079;
			}
			case 7:
			{
				goto IL_0069;
			}
			case 8:
			{
				goto IL_0081;
			}
			case 9:
			{
				goto IL_0089;
			}
			case 10:
			{
				goto IL_0091;
			}
			case 11:
			{
				goto IL_0099;
			}
		}
	}
	{
		goto IL_00a5;
	}

IL_0041:
	{
		double L_2 = ___obj0;
		uint8_t L_3 = ((uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, double>(L_2));
		RuntimeObject * L_4 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0049:
	{
		double L_5 = ___obj0;
		int8_t L_6 = il2cpp_codegen_cast_double_to_int<int8_t>(L_5);
		RuntimeObject * L_7 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0051:
	{
		double L_8 = ___obj0;
		int16_t L_9 = il2cpp_codegen_cast_double_to_int<int16_t>(L_8);
		RuntimeObject * L_10 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0059:
	{
		double L_11 = ___obj0;
		Il2CppChar L_12 = ((Il2CppChar)il2cpp_codegen_cast_floating_point<uint16_t, int32_t, double>(L_11));
		RuntimeObject * L_13 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}

IL_0061:
	{
		double L_14 = ___obj0;
		int32_t L_15 = il2cpp_codegen_cast_double_to_int<int32_t>(L_14);
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		return L_16;
	}

IL_0069:
	{
		double L_17 = ___obj0;
		int64_t L_18 = il2cpp_codegen_cast_double_to_int<int64_t>(L_17);
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		return L_19;
	}

IL_0071:
	{
		double L_20 = ___obj0;
		uint16_t L_21 = ((uint16_t)il2cpp_codegen_cast_floating_point<uint16_t, int32_t, double>(L_20));
		RuntimeObject * L_22 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0079:
	{
		double L_23 = ___obj0;
		uint32_t L_24 = ((uint32_t)il2cpp_codegen_cast_floating_point<uint32_t, int32_t, double>(L_23));
		RuntimeObject * L_25 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_0081:
	{
		double L_26 = ___obj0;
		uint64_t L_27 = ((uint64_t)il2cpp_codegen_cast_floating_point<uint64_t, int64_t, double>(L_26));
		RuntimeObject * L_28 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_27);
		return L_28;
	}

IL_0089:
	{
		double L_29 = ___obj0;
		float L_30 = ((float)((float)L_29));
		RuntimeObject * L_31 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_0091:
	{
		double L_32 = ___obj0;
		double L_33 = ((double)((double)L_32));
		RuntimeObject * L_34 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_0099:
	{
		double L_35 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_36;
		L_36 = Decimal_op_Explicit_m1ECDB1B6C5DBABAC7252C45BC86680A50F11BD6E(L_35, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_37 = L_36;
		RuntimeObject * L_38 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00a5:
	{
		Exception_t * L_39;
		L_39 = ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Unchecked_ConvertDouble_m113E4E31F03A8F6477308AA705D0213F209F3693_RuntimeMethod_var)));
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrBoolean::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrBoolean_Run_mD60D060F74CD19BD90F420D8550718A1752A6384 (OrBoolean_tB5ACCAED459D6CB59C9E07A7262C47F0F8F54F19 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B5_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B4_0 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B6_1 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B11_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B10_0 = NULL;
	RuntimeObject * G_B12_0 = NULL;
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * G_B12_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		G_B4_0 = L_7;
		if (((*(bool*)((bool*)UnBox(L_8, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B5_0 = L_7;
			goto IL_0029;
		}
	}
	{
		G_B6_0 = NULL;
		G_B6_1 = G_B4_0;
		goto IL_002e;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = ((Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var))->get_BoxedTrue_1();
		G_B6_0 = L_9;
		G_B6_1 = G_B5_0;
	}

IL_002e:
	{
		NullCheck(G_B6_1);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(G_B6_1, G_B6_0, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return 1;
	}

IL_0035:
	{
		RuntimeObject * L_10 = V_0;
		if (L_10)
		{
			goto IL_0050;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_11 = ___frame0;
		RuntimeObject * L_12 = V_1;
		G_B10_0 = L_11;
		if (((*(bool*)((bool*)UnBox(L_12, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B11_0 = L_11;
			goto IL_0044;
		}
	}
	{
		G_B12_0 = NULL;
		G_B12_1 = G_B10_0;
		goto IL_0049;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var);
		RuntimeObject * L_13 = ((Utils_t98C8733198C84566DF6847E887A57D45326CE485_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t98C8733198C84566DF6847E887A57D45326CE485_il2cpp_TypeInfo_var))->get_BoxedTrue_1();
		G_B12_0 = L_13;
		G_B12_1 = G_B11_0;
	}

IL_0049:
	{
		NullCheck(G_B12_1);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		return 1;
	}

IL_0050:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_14 = ___frame0;
		RuntimeObject * L_15 = V_1;
		RuntimeObject * L_16 = V_0;
		NullCheck(L_14);
		InterpretedFrame_Push_m8DFF6DFE6250DC2B06FAE5D964BA006D8BBA3D65(L_14, (bool)((int32_t)((int32_t)((*(bool*)((bool*)UnBox(L_15, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))|(int32_t)((*(bool*)((bool*)UnBox(L_16, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrBoolean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrBoolean__ctor_m223762E0B59D3AC267F9BE1D0C8E37AE0F13CB11 (OrBoolean_tB5ACCAED459D6CB59C9E07A7262C47F0F8F54F19 * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrByte_Run_mDC2087F2327032925CDC4BA7B0A803298922F2AB (OrByte_t201A377B95ABC243F185019710B98220335474B0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_m3D471A0B71F06B515A5AC6CD955F00C8240428ED(L_7, (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_8, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))|(int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrByte__ctor_mD100C34306F91802EDD57AA962C85500339A5014 (OrByte_t201A377B95ABC243F185019710B98220335474B0 * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrInt16_Run_mD568484D668650C9D589942AE774EAA1B4F9542D (OrInt16_tDCAC652458E4A355ED5945D621DB6CDE47766A90 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60(L_7, ((int16_t)((int16_t)((int32_t)((int32_t)((*(int16_t*)((int16_t*)UnBox(L_8, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))|(int32_t)((*(int16_t*)((int16_t*)UnBox(L_9, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrInt16__ctor_mFF74098E42EC2E0DF3EFA2A1ABABA82FA44404F2 (OrInt16_tDCAC652458E4A355ED5945D621DB6CDE47766A90 * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrInt32_Run_m95BED0BDF2A097AAA2889C9745EADC9B2EDA56BA (OrInt32_tBB86B9EC780E61CDE55CE0A6C7DDB168C3BE70FF * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71(L_7, ((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_8, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))|(int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrInt32__ctor_m5B96C1FAF3492AB2FE8501333976A4B83C766D91 (OrInt32_tBB86B9EC780E61CDE55CE0A6C7DDB168C3BE70FF * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrInt64_Run_m9B2AEB50A01FB9197242D4D5403B6A34BFDD193F (OrInt64_t7DB4AF687896C3540F17A785CD195748FC5B31F0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		int64_t L_10 = ((int64_t)((int64_t)((*(int64_t*)((int64_t*)UnBox(L_8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))|(int64_t)((*(int64_t*)((int64_t*)UnBox(L_9, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_11 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrInt64__ctor_m395A23F4B0B933C16AA64BA9F72EFB855501FC5A (OrInt64_t7DB4AF687896C3540F17A785CD195748FC5B31F0 * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrSByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrSByte_Run_m6B46A8DCA7ED709339FE35AB20782B21256C1D18 (OrSByte_tBD96031881884B43042D1825F549982894E1627E * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_m99C008FE2B0E5842A182DBDFE7144A40960EEE8B(L_7, ((int8_t)((int8_t)((int32_t)((int32_t)((*(int8_t*)((int8_t*)UnBox(L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))|(int32_t)((*(int8_t*)((int8_t*)UnBox(L_9, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrSByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrSByte__ctor_m29B90A6539A9AD6371CF06407E0ADB6032B47344 (OrSByte_tBD96031881884B43042D1825F549982894E1627E * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrUInt16_Run_mB2DAEFBE48BBF1EF5EDDBA402DC7BE7899500161 (OrUInt16_t88C758255AE7C9D2CFF3033E2CE589B7C74A3E3F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		NullCheck(L_7);
		InterpretedFrame_Push_m1E7E0894F3C4290DB002A0FFAE6D8EFEFC881797(L_7, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))|(int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_9, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))))))), /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrUInt16__ctor_mE4C828B280869201C5330289E4D71C1C455EFC38 (OrUInt16_t88C758255AE7C9D2CFF3033E2CE589B7C74A3E3F * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrUInt32_Run_mC067ACEE1317B8186D8CFB378B0806620A830510 (OrUInt32_t9982D5B99CDCA5A4C41529753D5D71AF6FF740BC * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		uint32_t L_10 = ((uint32_t)((int32_t)((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_8, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))|(int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_9, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_11 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrUInt32__ctor_mDDA496D8083127FD41372FE565D01A78B3E9D41B (OrUInt32_t9982D5B99CDCA5A4C41529753D5D71AF6FF740BC * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.OrInstruction/OrUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrUInt64_Run_m7DC5517D31D9AB0E4B01C060E0BE5BD96729DE8B (OrUInt64_tE09557C73068791FE26C2FDB13BADDB4069285AA * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_1;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		return 1;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_0;
		RuntimeObject * L_9 = V_1;
		uint64_t L_10 = ((uint64_t)((int64_t)((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_8, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))|(int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_9, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_11 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.OrInstruction/OrUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrUInt64__ctor_m1D3C17556C2E9DDA8F50B17E2095629744D3852E (OrUInt64_tE09557C73068791FE26C2FDB13BADDB4069285AA * __this, const RuntimeMethod* method)
{
	{
		OrInstruction__ctor_m0D617F3767F5DA459183ECD388BC1E910DB8064F(__this, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::.ctor(System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>,System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionQuoter__ctor_mDB9205961C23968CAE09AD410055116D8B9C84CA (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * ___hoistedVariables0, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_0 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)il2cpp_codegen_object_new(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958_il2cpp_TypeInfo_var);
		Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2(L_0, /*hidden argument*/Stack_1__ctor_m5323B88ED2E3A1BE919D98A96DD9C6C02B150BA2_RuntimeMethod_var);
		__this->set__shadowedVars_2(L_0);
		ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A(__this, /*hidden argument*/NULL);
		Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * L_1 = ___hoistedVariables0;
		__this->set__variables_0(L_1);
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame1;
		__this->set__frame_1(L_2);
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitBlock(System.Linq.Expressions.BlockExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionQuoter_VisitBlock_mA5024528E72CFF2667DEDDD3C9E010211C3B59B3 (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* V_0 = NULL;
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_0 = ___node0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_1;
		L_1 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0(L_1, /*hidden argument*/ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_3 = __this->get__shadowedVars_2();
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_4 = ___node0;
		NullCheck(L_4);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_5;
		L_5 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_4, /*hidden argument*/NULL);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_6 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D(L_6, L_5, /*hidden argument*/HashSet_1__ctor_m5A39E55363E4D9BA3CB364B80A3C8701AF672C9D_RuntimeMethod_var);
		NullCheck(L_3);
		Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C(L_3, L_6, /*hidden argument*/Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
	}

IL_0024:
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_7 = ___node0;
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_8;
		L_8 = ExpressionVisitorUtils_VisitBlockExpressions_m04E259E0DAFA60690CD83645ABB329F3C2041B94(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_9 = ___node0;
		NullCheck(L_9);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_10;
		L_10 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0(L_10, /*hidden argument*/ReadOnlyCollection_1_get_Count_mCB5C4BDEB03233F12B542819ACA65DAB8F3FEFA0_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_12 = __this->get__shadowedVars_2();
		NullCheck(L_12);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_13;
		L_13 = Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769(L_12, /*hidden argument*/Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
	}

IL_0046:
	{
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_14 = V_0;
		if (L_14)
		{
			goto IL_004b;
		}
	}
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_15 = ___node0;
		return L_15;
	}

IL_004b:
	{
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_16 = ___node0;
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_17 = ___node0;
		NullCheck(L_17);
		ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 * L_18;
		L_18 = BlockExpression_get_Variables_mBA633EEB35C122AD8BDC6DA51BD768D839945533(L_17, /*hidden argument*/NULL);
		ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* L_19 = V_0;
		NullCheck(L_16);
		BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB * L_20;
		L_20 = VirtFuncInvoker2< BlockExpression_t429D310E740322594C18397DEAE7E17DCFE0E0BB *, ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472 *, ExpressionU5BU5D_t4F1F138488EBD58837D142B40E0E4EEFC607EA63* >::Invoke(14 /* System.Linq.Expressions.BlockExpression System.Linq.Expressions.BlockExpression::Rewrite(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.Expression[]) */, L_16, L_18, L_19);
		return L_20;
	}
}
// System.Linq.Expressions.CatchBlock System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitCatchBlock(System.Linq.Expressions.CatchBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * ExpressionQuoter_VisitCatchBlock_m8AAA05FD5B7498B1089179E435A7F8B04670AEAD (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_0 = NULL;
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_1 = NULL;
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_0 = ___node0;
		NullCheck(L_0);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_1;
		L_1 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_2 = __this->get__shadowedVars_2();
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_3 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B(L_3, /*hidden argument*/HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_4 = L_3;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_5 = ___node0;
		NullCheck(L_5);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_6;
		L_6 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE(L_4, L_6, /*hidden argument*/HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		NullCheck(L_2);
		Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C(L_2, L_4, /*hidden argument*/Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
	}

IL_0025:
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_8 = ___node0;
		NullCheck(L_8);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_9;
		L_9 = CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline(L_8, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_10;
		L_10 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_9);
		V_0 = L_10;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_11 = ___node0;
		NullCheck(L_11);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_12;
		L_12 = CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline(L_11, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_13;
		L_13 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_12);
		V_1 = L_13;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_14 = ___node0;
		NullCheck(L_14);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_15;
		L_15 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0053;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_16 = __this->get__shadowedVars_2();
		NullCheck(L_16);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_17;
		L_17 = Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769(L_16, /*hidden argument*/Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
	}

IL_0053:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_18 = V_0;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_19 = ___node0;
		NullCheck(L_19);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_20;
		L_20 = CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline(L_19, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_18) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_20))))
		{
			goto IL_0067;
		}
	}
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_21 = V_1;
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_22 = ___node0;
		NullCheck(L_22);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_23;
		L_23 = CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline(L_22, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_21) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_23))))
		{
			goto IL_0067;
		}
	}
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_24 = ___node0;
		return L_24;
	}

IL_0067:
	{
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_25 = ___node0;
		NullCheck(L_25);
		Type_t * L_26;
		L_26 = CatchBlock_get_Test_m9F57E603AC71DE8C69057B4B366BEF47823E3247_inline(L_25, /*hidden argument*/NULL);
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_27 = ___node0;
		NullCheck(L_27);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_28;
		L_28 = CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline(L_27, /*hidden argument*/NULL);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_29 = V_0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_30 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * L_31;
		L_31 = Expression_MakeCatchBlock_m4BD502DD7FBB26C0C68B93C65A9CF7EDD55A4A78(L_26, L_28, L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitParameter(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionQuoter_VisitParameter_m366F220775FD67A62D50727A0ED333194602BD7B (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = ___node0;
		RuntimeObject* L_1;
		L_1 = ExpressionQuoter_GetBox_mB02A80E9219C417E14C0DDFB99A2470B67FE640E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_3 = ___node0;
		return L_3;
	}

IL_000d:
	{
		RuntimeObject* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_il2cpp_TypeInfo_var);
		ConstantExpression_tE22239C4AE815AF9B4647E026E802623F433F0FB * L_5;
		L_5 = Expression_Constant_m9096CC3198E58277FFD17A6E45E20E4132BAE4D8(L_4, /*hidden argument*/NULL);
		MemberExpression_t9F4B2A7A517DFE6F72C956A3ED868D8C043C6622 * L_6;
		L_6 = Expression_Field_mC77BF4B131C5AFF3944507291B5A98993ED6544E(L_5, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, /*hidden argument*/NULL);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_7 = ___node0;
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_7);
		UnaryExpression_t5DE6F6FA2216CDD34DFCFADEB0080CB29326DD62 * L_9;
		L_9 = Expression_Convert_m4BEBF2CC7DABC0AD140B363B23FE47F7441DFE00(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Runtime.CompilerServices.IStrongBox System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::GetBox(System.Linq.Expressions.ParameterExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExpressionQuoter_GetBox_mB02A80E9219C417E14C0DDFB99A2470B67FE640E (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___variable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStrongBox_t37B8B513E3C7EF457F23D5089D694BE7F6095F54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * V_0 = NULL;
	{
		Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * L_0 = __this->get__variables_0();
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_1 = ___variable0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E(L_0, L_1, (LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9F075D45997E73C2F61005C8C5A35D2FCAEB4C1E_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = LocalVariable_get_InClosure_mA3903B46C398E3BE8086ABC39A061D4844FB32B3(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_5 = __this->get__frame_1();
		NullCheck(L_5);
		IStrongBoxU5BU5D_t5C6F1860E4A12131ADABE7E078B70DDAB3B3801F* L_6 = L_5->get_Closure_8();
		LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_Index_0();
		NullCheck(L_6);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_11 = __this->get__frame_1();
		NullCheck(L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_11->get_Data_7();
		LocalVariable_tF3B80EBA85786699F087C2BAEB61D7ED6CEF0409 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_Index_0();
		NullCheck(L_12);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IStrongBox_t37B8B513E3C7EF457F23D5089D694BE7F6095F54_il2cpp_TypeInfo_var));
	}

IL_0043:
	{
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftByte_Run_mC57B8F624AA8BA764BF0A402BB8A1F825AFCE84B (RightShiftByte_t5F287F9A98BD517088EBEBB5762D9B5547411F02 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m3D471A0B71F06B515A5AC6CD955F00C8240428ED(L_7, (uint8_t)((int32_t)((uint8_t)((int32_t)((int32_t)((*(uint8_t*)((uint8_t*)UnBox(L_8, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftByte__ctor_mA1145E54B69D479AA0DA5B5BA383C2EA66765031 (RightShiftByte_t5F287F9A98BD517088EBEBB5762D9B5547411F02 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftInt16_Run_mBAE3FD81D50E054555D4841BA212D954F4264D06 (RightShiftInt16_t2CE116D1706B0B2E1BBC6F132D090C0B344DA147 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_mC1E4D132AA581DA23B173C5E8416F09D703E9A60(L_7, ((int16_t)((int16_t)((int32_t)((int32_t)((*(int16_t*)((int16_t*)UnBox(L_8, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftInt16__ctor_mC01A9D049AAFA63D2EB105597B7F953F2860DDB4 (RightShiftInt16_t2CE116D1706B0B2E1BBC6F132D090C0B344DA147 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftInt32_Run_m3056C2C19FA33883607EA228B9748B4EDFF7FDFE (RightShiftInt32_t28B8326998E527389A4C0B7F66CB0CDC2997AECD * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m8993875D202411807B024C272CA71C3852BE6C71(L_7, ((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_8, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31))))), /*hidden argument*/NULL);
	}

IL_0033:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftInt32__ctor_mC6D29CDB860F0A82FFC7AE6247E4C7C8B4011588 (RightShiftInt32_t28B8326998E527389A4C0B7F66CB0CDC2997AECD * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftInt64_Run_mABD6A9FEE3D65D2F5EFD38B9099D62D58CDB003E (RightShiftInt64_tD5FE689CDEC4FB15BE4001CE537725EA23C90692 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0038;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		int64_t L_10 = ((int64_t)((int64_t)((*(int64_t*)((int64_t*)UnBox(L_8, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)63)))));
		RuntimeObject * L_11 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftInt64__ctor_m2F29A4492259F8CE30C32ECC9C432D42CE55EE4A (RightShiftInt64_tD5FE689CDEC4FB15BE4001CE537725EA23C90692 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftSByte::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftSByte_Run_m5D27D574AD4717809853648260398B706081BD29 (RightShiftSByte_t3BAA90C2005D7DBF702594A81C6FD7DB336FAE60 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m99C008FE2B0E5842A182DBDFE7144A40960EEE8B(L_7, ((int8_t)((int8_t)((int32_t)((int32_t)((*(int8_t*)((int8_t*)UnBox(L_8, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftSByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftSByte__ctor_m2A768467F2EC7E5F7709B804832F97B6DB818E43 (RightShiftSByte_t3BAA90C2005D7DBF702594A81C6FD7DB336FAE60 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftUInt16_Run_m9B3B239EA6F4DE9B372C4E2BC1CEDC09E9B999A2 (RightShiftUInt16_t4107CD5715606EAAF84FFAFA9B8DD0261B14CBF6 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0034;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		NullCheck(L_7);
		InterpretedFrame_Push_m1E7E0894F3C4290DB002A0FFAE6D8EFEFC881797(L_7, (uint16_t)((int32_t)((uint16_t)((int32_t)((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_8, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))>>(int32_t)((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31))))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftUInt16__ctor_m0A75F929605819493A82EBF26E4EBB561030C287 (RightShiftUInt16_t4107CD5715606EAAF84FFAFA9B8DD0261B14CBF6 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftUInt32_Run_m2503B8DE9FBEF96812810B62FE6A14E5CC8818F5 (RightShiftUInt32_tBE3AD1CB4803EE031AB2D8FBFAC118DA0C36C077 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0038;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		uint32_t L_10 = ((uint32_t)((int32_t)((uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_8, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var))))>>((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)31))))));
		RuntimeObject * L_11 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftUInt32__ctor_mBA72BBE75A60A1B05E724E80CDFFDB1F937022B0 (RightShiftUInt32_tBE3AD1CB4803EE031AB2D8FBFAC118DA0C36C077 * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RightShiftUInt64_Run_m42180FB75ACB54928764DDBC502CE73454347F9A (RightShiftUInt64_t11D41A57381AEE78C426DE33130B91A7D55876BB * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = InterpretedFrame_Pop_mCC88764E048EC2834C371CE2F81627C9581F17ED(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		if (L_5)
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_6 = ___frame0;
		NullCheck(L_6);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_6, NULL, /*hidden argument*/NULL);
		goto IL_0038;
	}

IL_001d:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_7 = ___frame0;
		RuntimeObject * L_8 = V_1;
		RuntimeObject * L_9 = V_0;
		uint64_t L_10 = ((uint64_t)((int64_t)((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_8, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var))))>>((int32_t)((int32_t)((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))&(int32_t)((int32_t)63))))));
		RuntimeObject * L_11 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.RightShiftInstruction/RightShiftUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RightShiftUInt64__ctor_mD9E803AE24A5C405737D7282D4AA2B1C74B01BD6 (RightShiftUInt64_t11D41A57381AEE78C426DE33130B91A7D55876BB * __this, const RuntimeMethod* method)
{
	{
		RightShiftInstruction__ctor_m02C15C44A6E88CA55957DEF8613CC19CB33C7F90(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction/SubDouble::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubDouble_Run_m20F5CD5690D93EAAA9D79A95C307C8BA398EEB9C (SubDouble_tD043A690C939E826740F3980649781CF246DCDF2 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		double L_18 = ((double)il2cpp_codegen_subtract((double)((*(double*)((double*)UnBox(L_16, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), (double)((*(double*)((double*)UnBox(L_17, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction/SubDouble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubDouble__ctor_m1FF8A0A7D9C279C83567CBFC70AD5680772C83C9 (SubDouble_tD043A690C939E826740F3980649781CF246DCDF2 * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction/SubInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubInt16_Run_m3D80EE86FDD25CA5F5C609DC1E573E76142E69E2 (SubInt16_t54BA31141EB907D849DEA9B01CF7BC6D50D6990A * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		int16_t L_18 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))));
		RuntimeObject * L_19 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction/SubInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubInt16__ctor_mDA0DA993160E54FDF83FBCC1D6BC89C8A53BFA09 (SubInt16_t54BA31141EB907D849DEA9B01CF7BC6D50D6990A * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction/SubInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubInt32_Run_m7626275DFE049CC0D8A4859F2D06313D3C1E5C45 (SubInt32_t45C297528948D24B11B80E5D5F9160424C4FB6A5 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		RuntimeObject * L_18;
		L_18 = ScriptingRuntimeHelpers_Int32ToObject_m0FCA91B7CC7E77071A3E84112A439D4F697D448D(((int32_t)il2cpp_codegen_subtract((int32_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_19 = ___frame0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		L_19->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction/SubInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubInt32__ctor_m30ABDD2D4917653AE145846F0A425820FB519FE3 (SubInt32_t45C297528948D24B11B80E5D5F9160424C4FB6A5 * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction/SubInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubInt64_Run_m97AA42AE199F682E15A5F4F75472BF17B99329CE (SubInt64_t2A292A0D8C604FDE28954B60EF80E36285F47511 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		int64_t L_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction/SubInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubInt64__ctor_mBD2CD6959E24DC4B061A5030140FE26CB5DE1DA5 (SubInt64_t2A292A0D8C604FDE28954B60EF80E36285F47511 * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction/SubSingle::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubSingle_Run_mDBFC5925448092099F1DC058B90C1FED9F0178D4 (SubSingle_t2561FE69D9CDA0F6C0A1A8958CF2417D34541B26 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		float L_18 = ((float)il2cpp_codegen_subtract((float)((*(float*)((float*)UnBox(L_16, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))), (float)((*(float*)((float*)UnBox(L_17, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction/SubSingle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubSingle__ctor_m8A1B4CC51ECB70E2C01951B1B71EF74FA4B7AFA8 (SubSingle_t2561FE69D9CDA0F6C0A1A8958CF2417D34541B26 * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction/SubUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubUInt16_Run_m528B2AEF45C5C2638CD643BBD88A8AE1AE726A91 (SubUInt16_tCBA7FBA9D5D99CB82C5E63FE3218C6F80E13EFBD * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint16_t L_18 = ((uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))))))));
		RuntimeObject * L_19 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction/SubUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubUInt16__ctor_m8E57C7B5BDC07D06EE62421DBA4B0BC00467A68C (SubUInt16_tCBA7FBA9D5D99CB82C5E63FE3218C6F80E13EFBD * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction/SubUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubUInt32_Run_m71D9464F4299B02FCD93A2372E209B3781D61A91 (SubUInt32_t4DFA170330F70C0F8F9F211169DC93235FF64BAF * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint32_t L_18 = ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), (int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction/SubUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubUInt32__ctor_m794962DDFF9080F814854DE626A3E82571CEA4EC (SubUInt32_t4DFA170330F70C0F8F9F211169DC93235FF64BAF * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubInstruction/SubUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubUInt64_Run_m6454BF59E6345A1DB5B46DAB5F76B0977C07401D (SubUInt64_t986CC4C6FC8D2F5D1601D820D690EAE039CB21CC * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		uint64_t L_18 = ((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), (int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubInstruction/SubUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubUInt64__ctor_mE839E2649EA048FB887F2AB50FCCB09B14ED102D (SubUInt64_t986CC4C6FC8D2F5D1601D820D690EAE039CB21CC * __this, const RuntimeMethod* method)
{
	{
		SubInstruction__ctor_m01C4978345E805CCC2214968DBA3A8EF9F2BF7BA(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7 (SubOvfInt16_tAEAF2F6A8C023CE3CBB545F3CF87B52081F7D1F0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) - (int64_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) - (int64_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))) > 32767LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfInt16_Run_m8BE084817E985B962CA87DE2D70F5E614D0E23E7_RuntimeMethod_var);
		int16_t L_18 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(int16_t*)((int16_t*)UnBox(L_16, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), (int32_t)((*(int16_t*)((int16_t*)UnBox(L_17, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))))))));
		RuntimeObject * L_19 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfInt16__ctor_m637C9BFFC0279DC553872CD809F9E32D3B8E3667 (SubOvfInt16_tAEAF2F6A8C023CE3CBB545F3CF87B52081F7D1F0 * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107 (SubOvfInt32_tB06ACE45D8557990B724B37C14C83ABB0EBEB019 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) - (int64_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) - (int64_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfInt32_Run_m4784CFCCA1A23F78D01E19D1FEE7D90A8571D107_RuntimeMethod_var);
		RuntimeObject * L_18;
		L_18 = ScriptingRuntimeHelpers_Int32ToObject_m0FCA91B7CC7E77071A3E84112A439D4F697D448D(((int32_t)il2cpp_codegen_subtract((int32_t)((*(int32_t*)((int32_t*)UnBox(L_16, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), (int32_t)((*(int32_t*)((int32_t*)UnBox(L_17, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_19 = ___frame0;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		L_19->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfInt32__ctor_mAD96CF3D75B4FA888932489E7AC4CBC365ACA655 (SubOvfInt32_tB06ACE45D8557990B724B37C14C83ABB0EBEB019 * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F (SubOvfInt64_t9BC0A0C8BFBCC9B1CBF3A7468DE27A8F5BA13D8B * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (il2cpp_codegen_check_sub_overflow((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfInt64_Run_mBC5428D91F0F20DEA87DB4A6A1958D6A7F528B7F_RuntimeMethod_var);
		int64_t L_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)((*(int64_t*)((int64_t*)UnBox(L_16, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), (int64_t)((*(int64_t*)((int64_t*)UnBox(L_17, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var))))));
		RuntimeObject * L_19 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfInt64__ctor_m59499A1EC54ED4F58D4CF59066C0BB93A4C35528 (SubOvfInt64_t9BC0A0C8BFBCC9B1CBF3A7468DE27A8F5BA13D8B * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt16::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5 (SubOvfUInt16_t44B387BAA3E156B5D3A023F247C9FC208905B53F * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if (((int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) - (int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) < (int64_t)kIl2CppInt32Min) || ((int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) - (int64_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfUInt16_Run_m1FC5C9CB4C2C57A567577E8D7F5EDC963A746EE5_RuntimeMethod_var);
		uint16_t L_18 = ((uint16_t)((uint16_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_16, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_17, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var))))))));
		RuntimeObject * L_19 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003b:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfUInt16__ctor_m20708D9334E4ED2700E9AAC1AB7BFABD29891E9C (SubOvfUInt16_t44B387BAA3E156B5D3A023F247C9FC208905B53F * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt32::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5 (SubOvfUInt32_tB163618E06EE74B7F7F2D6B80F217B712A5DF6A0 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if ((uint64_t)(uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))) - (uint64_t)(uint32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfUInt32_Run_mAB1BE31073F2BFCE0D0E104D7F555E54F1C08DF5_RuntimeMethod_var);
		uint32_t L_18 = ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_16, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), (int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_17, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfUInt32__ctor_mDCE122ACA10DB424E027B8626C9B56CBE635C7C3 (SubOvfUInt32_tB163618E06EE74B7F7F2D6B80F217B712A5DF6A0 * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Int32 System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt64::Run(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A (SubOvfUInt64_t321A38C66A5A2020B95D7E7042AB287565C4B18E * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_StackIndex_9();
		V_0 = L_1;
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_2 = ___frame0;
		NullCheck(L_2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2->get_Data_7();
		V_1 = L_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)2));
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_1;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = V_1;
		int32_t L_14 = V_0;
		RuntimeObject * L_15 = V_3;
		G_B2_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
		G_B2_1 = L_13;
		if (!L_15)
		{
			G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)2));
			G_B3_1 = L_13;
			goto IL_0038;
		}
	}
	{
		RuntimeObject * L_16 = V_2;
		RuntimeObject * L_17 = V_3;
		if ((uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))) < (uint64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), SubOvfUInt64_Run_m62A723627B1B0EBA117EE6EC7C7FEA1A965DA53A_RuntimeMethod_var);
		uint64_t L_18 = ((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_16, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), (int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_17, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))))));
		RuntimeObject * L_19 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_18);
		G_B4_0 = L_19;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0039;
	}

IL_0038:
	{
		G_B4_0 = NULL;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0039:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
	}

IL_003a:
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_20 = ___frame0;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		L_20->set_StackIndex_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		return 1;
	}
}
// System.Void System.Linq.Expressions.Interpreter.SubOvfInstruction/SubOvfUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubOvfUInt64__ctor_m985D1E1BDB5A6CAE2B459DBE2FB7F4A66480B7B5 (SubOvfUInt64_t321A38C66A5A2020B95D7E7042AB287565C4B18E * __this, const RuntimeMethod* method)
{
	{
		SubOvfInstruction__ctor_mF3B941C5C65151CC9453453C7E0EFA58412D2C53(__this, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Ref::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ref__ctor_m550731B94572A3B459EB3FB79FE9CBB7DDD7CB61 (Ref_t168CC06E3E836CBD2DA362F99B022F5D79504E10 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		CastInstructionNoT__ctor_m340CB277F4601E785560A9E43FF8C55B74B74115(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Ref::ConvertNull(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ref_ConvertNull_m7D21AC470187CBFE42C40B8F58CCBBBD4EA20E71 (Ref_t168CC06E3E836CBD2DA362F99B022F5D79504E10 * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	{
		InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * L_0 = ___frame0;
		NullCheck(L_0);
		InterpretedFrame_Push_mC88459F025FAFA65E62712E638BEE007D442F968(L_0, NULL, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Value::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value__ctor_m2884D85DAE284D0EF6B356A394D09128FA12CE03 (Value_t291D50D67C4EC0983FA0B027505922ED0110765D * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		CastInstructionNoT__ctor_m340CB277F4601E785560A9E43FF8C55B74B74115(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.Interpreter.CastInstruction/CastInstructionNoT/Value::ConvertNull(System.Linq.Expressions.Interpreter.InterpretedFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Value_ConvertNull_mA3E3A08DD5953CC5A4645CFAD29F2EEB2F2BC4F4 (Value_t291D50D67C4EC0983FA0B027505922ED0110765D * __this, InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ___frame0, const RuntimeMethod* method)
{
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_0 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Value_ConvertNull_mA3E3A08DD5953CC5A4645CFAD29F2EEB2F2BC4F4_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * SwitchCase_get_TestValues_mD0F5164247689D0E3FA2BD80A6CFF0D4D71FE11E_inline (SwitchCase_tDF1085BCF1AA039BA1EB39F5CDC5D58C4EA01B80 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5 * L_0 = __this->get_U3CTestValuesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * CatchBlock_get_Variable_m326E6EBA9918ABEEAB452F01BE41D880945DA1E0_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method)
{
	{
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_0 = __this->get_U3CVariableU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * CatchBlock_get_Body_m9EE90AA7A3BBD028A1032648E1722BEC8EF5E190_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3CBodyU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * CatchBlock_get_Filter_mC92D5E87F42D09D8FCF9BF0BF5F096359A81665D_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get_U3CFilterU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * CatchBlock_get_Test_m9F57E603AC71DE8C69057B4B366BEF47823E3247_inline (CatchBlock_t9868A4EF29E3549CA7B49A206D87B6E05B92D5BB * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTestU3Ek__BackingField_1();
		return L_0;
	}
}
