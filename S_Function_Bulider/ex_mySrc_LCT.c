#include "ex_myTypes_LCT.h"

void myFcn(const sigStructType *in, const paramStructType *params, sigStructType *out)
{
    out->sig1 = in->sig1 * params->param1;
    out->sig2 = in->sig2 * params->param2 + params->param3;
}