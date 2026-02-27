#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "CevalScriptBackend.h"
#include "ComponentReference.h"
#include "Error.h"
#include "Expression.h"
#include "Flags.h"
#include "HashTable.h"
#include "HashTableCrefSimVar.h"
#include "List.h"
#include "NBEquation.h"
#include "NBEvents.h"
#include "NBPartitioning.h"
#include "NBStrongComponent.h"
#include "NBackendDAE.h"
#include "NFComponentRef.h"
#include "NFConvertDAE.h"
#include "NFExpression.h"
#include "NFFlatten.h"
#include "NFFunction.h"
#include "NSimCode.h"
#include "NSimCodeUtil.h"
#include "NSimGenericCall.h"
#include "NSimJacobian.h"
#include "NSimPartition.h"
#include "NSimStrongComponent.h"
#include "NSimVar.h"
#include "Pointer.h"
#include "SimCodeFunctionUtil.h"
#include "SimCodeUtil.h"
#include "StringUtil.h"
#include "SymbolTable.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
