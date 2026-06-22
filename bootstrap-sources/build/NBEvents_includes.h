#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBBackendUtil.h"
#include "NBEquation.h"
#include "NBEvents.h"
#include "NBSolve.h"
#include "NBVariable.h"
#include "NBackendDAE.h"
#include "NFAlgorithm.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFOperator.h"
#include "NFStatement.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NSimGenericCall.h"
#include "NSimStrongComponent.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
