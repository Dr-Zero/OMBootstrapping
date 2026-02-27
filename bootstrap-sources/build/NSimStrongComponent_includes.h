#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraris to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Error.h"
#include "ExpandableArray.h"
#include "List.h"
#include "NBEquation.h"
#include "NBPartition.h"
#include "NBPartitioning.h"
#include "NBSlice.h"
#include "NBSolve.h"
#include "NBStrongComponent.h"
#include "NBTearing.h"
#include "NBVariable.h"
#include "NFComponentRef.h"
#include "NFConvertDAE.h"
#include "NFExpression.h"
#include "NFScalarize.h"
#include "NFStatement.h"
#include "NFVariable.h"
#include "NSimGenericCall.h"
#include "NSimJacobian.h"
#include "NSimPartition.h"
#include "NSimStrongComponent.h"
#include "NSimVar.h"
#include "Pointer.h"
#include "StringUtil.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
