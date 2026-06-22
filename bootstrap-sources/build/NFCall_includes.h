#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "ErrorExt.h"
#include "JSON.h"
#include "List.h"
#include "NFBinding.h"
#include "NFBuiltinCall.h"
#include "NFCall.h"
#include "NFCallAttributes.h"
#include "NFCallParameterTree.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFEvalFunction.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFInline.h"
#include "NFInst.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFOperator.h"
#include "NFPrefixes.h"
#include "NFRestriction.h"
#include "NFSimplifyExp.h"
#include "NFStructural.h"
#include "NFType.h"
#include "NFTypeCheck.h"
#include "NFTyping.h"
#include "Pointer.h"
#include "SCodeUtil.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
