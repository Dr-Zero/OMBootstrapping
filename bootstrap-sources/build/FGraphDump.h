#ifndef FGraphDump__H
#define FGraphDump__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;

extern struct record_description GraphML_ArrowType_ARROWNONE__desc;

extern struct record_description GraphML_ArrowType_ARROWSTANDART__desc;

extern struct record_description GraphML_FontStyle_FONTPLAIN__desc;

extern struct record_description GraphML_LineType_LINE__desc;

extern struct record_description GraphML_NodeLabel_NODELABEL__INTERNAL__desc;

extern struct record_description GraphML_ShapeType_ELLIPSE__desc;

extern struct record_description GraphML_ShapeType_HEXAGON__desc;

extern struct record_description GraphML_ShapeType_OCTAGON__desc;

extern struct record_description GraphML_ShapeType_PARALLELOGRAM__desc;

extern struct record_description GraphML_ShapeType_RECTANGLE__desc;

extern struct record_description GraphML_ShapeType_ROUNDRECTANGLE__desc;

extern struct record_description GraphML_ShapeType_TRAPEZOID__desc;

extern struct record_description GraphML_ShapeType_TRIANGLE__desc;


DLLDirection
modelica_string omc_FGraphDump_graphml(threadData_t *threadData, modelica_metatype _node, modelica_boolean _escape, modelica_metatype *out_shape, modelica_string *out_nname);
DLLDirection
modelica_metatype boxptr_FGraphDump_graphml(threadData_t *threadData, modelica_metatype _node, modelica_metatype _escape, modelica_metatype *out_shape, modelica_metatype *out_nname);
static const MMC_DEFSTRUCTLIT(boxvar_lit_FGraphDump_graphml,2,0) {(void*) boxptr_FGraphDump_graphml,0}};
#define boxvar_FGraphDump_graphml MMC_REFSTRUCTLIT(boxvar_lit_FGraphDump_graphml)


#define boxptr_FGraphDump_addNode omc_FGraphDump_addNode


#define boxptr_FGraphDump_addNodes omc_FGraphDump_addNodes


DLLDirection
void omc_FGraphDump_dumpGraph(threadData_t *threadData, modelica_metatype _inGraph, modelica_string _fileName);
#define boxptr_FGraphDump_dumpGraph omc_FGraphDump_dumpGraph
static const MMC_DEFSTRUCTLIT(boxvar_lit_FGraphDump_dumpGraph,2,0) {(void*) boxptr_FGraphDump_dumpGraph,0}};
#define boxvar_FGraphDump_dumpGraph MMC_REFSTRUCTLIT(boxvar_lit_FGraphDump_dumpGraph)

#ifdef __cplusplus
}
#endif
#endif
