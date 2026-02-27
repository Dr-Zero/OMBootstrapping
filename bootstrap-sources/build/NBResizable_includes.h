#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBDifferentiate.h"
#include "NBEquation.h"
#include "NBReplacements.h"
#include "NBResizable.h"
#include "NBSolve.h"
#include "NBVariable.h"
#include "NFBinding.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpression.h"
#include "NFOperator.h"
#include "NFSimplifyExp.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFVariable.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
