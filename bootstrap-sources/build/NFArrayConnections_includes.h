#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "Array.h"
#include "ElementSource.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NFArrayConnections.h"
#include "NFCall.h"
#include "NFCeval.h"
#include "NFComponentRef.h"
#include "NFConnector.h"
#include "NFEquation.h"
#include "NFExpression.h"
#include "NFInstNode.h"
#include "NFOperator.h"
#include "NFSBGraphUtil.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFVariable.h"
#include "SBAtomicSet.h"
#include "SBFunctions.h"
#include "SBGraph.h"
#include "SBInterval.h"
#include "SBMultiInterval.h"
#include "SBPWLinearMap.h"
#include "SBSet.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Vector.h"
#ifdef __cplusplus
}
#endif
