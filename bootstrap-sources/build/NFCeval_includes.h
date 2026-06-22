#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Array.h"
#include "Error.h"
#include "ErrorExt.h"
#include "ExpressionBasics.h"
#include "List.h"
#include "Mutable.h"
#include "NFBinding.h"
#include "NFCall.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFEvalFunction.h"
#include "NFExpandExp.h"
#include "NFExpression.h"
#include "NFExpressionIterator.h"
#include "NFFunction.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFOperator.h"
#include "NFPrefixes.h"
#include "NFSimplifyExp.h"
#include "NFSubscript.h"
#include "NFType.h"
#include "NFTypeCheck.h"
#include "NFTyping.h"
#include "System.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
