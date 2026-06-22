#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "ErrorExt.h"
#include "ExecStat.h"
#include "Flags.h"
#include "NFBinding.h"
#include "NFCeval.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFDimension.h"
#include "NFEquation.h"
#include "NFEvalConstants.h"
#include "NFExpression.h"
#include "NFFlatten.h"
#include "NFFunction.h"
#include "NFInstContext.h"
#include "NFInstNode.h"
#include "NFRecord.h"
#include "NFSimplifyExp.h"
#include "NFStatement.h"
#include "NFType.h"
#include "NFVariable.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
