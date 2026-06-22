#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "AbsynUtil.h"
#include "Dump.h"
#include "ElementSource.h"
#include "Error.h"
#include "ExecStat.h"
#include "Flags.h"
#include "List.h"
#include "NFCall.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponentRef.h"
#include "NFEquation.h"
#include "NFExpression.h"
#include "NFFlatModel.h"
#include "NFFlatten.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFInstUtil.h"
#include "NFStatement.h"
#include "NFVariable.h"
#include "SCodeDump.h"
#include "SCodeUtil.h"
#include "System.h"
#include "UnorderedMap.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
