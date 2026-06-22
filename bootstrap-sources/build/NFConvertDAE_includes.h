#ifdef __cplusplus
extern "C" {
#endif
#include "openmodelica.h"       // Defines OPENMODELICA_H_ for libraries to test if called from OpenModelica.
#include "ModelicaUtilities.h"  // Make Modelica C util functions available for external includes.

#include "ComponentReferenceBasics.h"
#include "ElementSource.h"
#include "Error.h"
#include "ExecStat.h"
#include "Flags.h"
#include "NFAttributes.h"
#include "NFBinding.h"
#include "NFClass.h"
#include "NFClassTree.h"
#include "NFComponent.h"
#include "NFComponentRef.h"
#include "NFConvertDAE.h"
#include "NFDimension.h"
#include "NFEquation.h"
#include "NFExpression.h"
#include "NFFlatModel.h"
#include "NFFlatten.h"
#include "NFFunction.h"
#include "NFInstNode.h"
#include "NFModifier.h"
#include "NFPrefixes.h"
#include "NFStatement.h"
#include "NFType.h"
#include "NFVariable.h"
#include "UnorderedSet.h"
#include "Util.h"
#ifdef __cplusplus
}
#endif
