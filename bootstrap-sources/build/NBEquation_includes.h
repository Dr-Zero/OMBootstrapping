#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "ElementSource.h"
#include "Error.h"
#include "ExpandableArray.h"
#include "Flags.h"
#include "List.h"
#include "NBBackendUtil.h"
#include "NBDetectStates.h"
#include "NBEquation.h"
#include "NBEvaluation.h"
#include "NBInline.h"
#include "NBReplacements.h"
#include "NBSlice.h"
#include "NBSolve.h"
#include "NBVariable.h"
#include "NBackendDAE.h"
#include "NFAlgorithm.h"
#include "NFBackendExtension.h"
#include "NFBinding.h"
#include "NFCall.h"
#include "NFClass.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFInstNode.h"
#include "NFOperator.h"
#include "NFSimplifyExp.h"
#include "NFSimplifyModel.h"
#include "NFType.h"
#include "NFTyping.h"
#include "NFVariable.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
