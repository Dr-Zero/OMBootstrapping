#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "ElementSource.h"
#include "Error.h"
#include "ExecStat.h"
#include "List.h"
#include "NFBinding.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFEquation.h"
#include "NFExpression.h"
#include "NFInstNode.h"
#include "NFOperator.h"
#include "NFStateMachineFlatten.h"
#include "NFType.h"
#include "System.h"
#include "UnorderedMap.h"
#ifdef __cplusplus
}
#endif
