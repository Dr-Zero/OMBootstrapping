#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "ErrorExt.h"
#include "Flags.h"
#include "List.h"
#include "NFBinding.h"
#include "NFCall.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFExpandExp.h"
#include "NFExpression.h"
#include "NFFunction.h"
#include "NFInline.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFOperator.h"
#include "NFOperatorOverloading.h"
#include "NFPrefixes.h"
#include "NFSimplifyExp.h"
#include "NFType.h"
#include "NFTypeCheck.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
