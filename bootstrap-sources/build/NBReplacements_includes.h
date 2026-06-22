#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "Flags.h"
#include "List.h"
#include "NBEquation.h"
#include "NBReplacements.h"
#include "NBSlice.h"
#include "NBSolve.h"
#include "NBStrongComponent.h"
#include "NBVariable.h"
#include "NFBinding.h"
#include "NFCall.h"
#include "NFComponentRef.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFSimplifyExp.h"
#include "NFTyping.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
