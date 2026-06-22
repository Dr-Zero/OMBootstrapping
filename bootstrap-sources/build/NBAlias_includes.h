#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBAlias.h"
#include "NBCausalize.h"
#include "NBDifferentiate.h"
#include "NBEquation.h"
#include "NBReplacements.h"
#include "NBSolve.h"
#include "NBVariable.h"
#include "NBackendDAE.h"
#include "NFBackendExtension.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFExpressionIterator.h"
#include "NFFunction.h"
#include "NFSimplifyExp.h"
#include "NFType.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
