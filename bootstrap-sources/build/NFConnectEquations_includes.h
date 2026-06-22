#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "ElementSource.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NFBinding.h"
#include "NFCall.h"
#include "NFCardinalityTable.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFConnectEquations.h"
#include "NFConnectionSets.h"
#include "NFConnector.h"
#include "NFEquation.h"
#include "NFExpandExp.h"
#include "NFExpression.h"
#include "NFFlatten.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFOperator.h"
#include "NFPrefixes.h"
#include "NFSimplifyExp.h"
#include "NFStreamFlowAlias.h"
#include "NFStructural.h"
#include "NFType.h"
#include "NFVariable.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
