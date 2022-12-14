/*
 * File: sf_b.c
 *
 *
 *   --- THIS FILE GENERATED BY S-FUNCTION BUILDER: 3.0 ---
 *
 *   This file is an S-function produced by the S-Function
 *   Builder which only recognizes certain fields.  Changes made
 *   outside these fields will be lost the next time the block is
 *   used to load, edit, and resave this file. This file will be overwritten
 *   by the S-function Builder block. If you want to edit this file by hand, 
 *   you must change it only in the area defined as:  
 *
 *        %%%-SFUNWIZ_defines_Changes_BEGIN
 *        #define NAME 'replacement text' 
 *        %%% SFUNWIZ_defines_Changes_END
 *
 *   DO NOT change NAME--Change the 'replacement text' only.
 *
 *   For better compatibility with the Simulink Coder, the
 *   "wrapper" S-function technique is used.  This is discussed
 *   in the Simulink Coder's Manual in the Chapter titled,
 *   "Wrapper S-functions".
 *
 *  -------------------------------------------------------------------------
 * | See matlabroot/simulink/src/sfuntmpl_doc.c for a more detailed template |
 *  ------------------------------------------------------------------------- 
 *
 * Created: Thu Sep 29 10:53:48 2022
 */

#define S_FUNCTION_LEVEL 2
#define S_FUNCTION_NAME sf_b
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
/* %%%-SFUNWIZ_defines_Changes_BEGIN --- EDIT HERE TO _END */
#define NUM_INPUTS            2
/* Input Port  0 */
#define IN_PORT_0_NAME        u0
#define INPUT_0_WIDTH         1
#define INPUT_DIMS_0_COL      1
#define INPUT_0_DTYPE         real_T
#define INPUT_0_COMPLEX       COMPLEX_NO
#define IN_0_FRAME_BASED      FRAME_NO
#define IN_0_BUS_BASED        1
#define IN_0_BUS_NAME         sigStructType
#define IN_0_DIMS             1-D
#define INPUT_0_FEEDTHROUGH   1
#define IN_0_ISSIGNED         0
#define IN_0_WORDLENGTH       8
#define IN_0_FIXPOINTSCALING  1
#define IN_0_FRACTIONLENGTH   9
#define IN_0_BIAS             0
#define IN_0_SLOPE            0.125
/* Input Port  1 */
#define IN_PORT_1_NAME        u1
#define INPUT_1_WIDTH         1
#define INPUT_DIMS_1_COL      1
#define INPUT_1_DTYPE         real_T
#define INPUT_1_COMPLEX       COMPLEX_NO
#define IN_1_FRAME_BASED      FRAME_NO
#define IN_1_BUS_BASED        1
#define IN_1_BUS_NAME         paramStructType
#define IN_1_DIMS             1-D
#define INPUT_1_FEEDTHROUGH   1
#define IN_1_ISSIGNED         0
#define IN_1_WORDLENGTH       8
#define IN_1_FIXPOINTSCALING  1
#define IN_1_FRACTIONLENGTH   9
#define IN_1_BIAS             0
#define IN_1_SLOPE            0.125

#define NUM_OUTPUTS           1
/* Output Port  0 */
#define OUT_PORT_0_NAME       y0
#define OUTPUT_0_WIDTH        1
#define OUTPUT_DIMS_0_COL     1
#define OUTPUT_0_DTYPE        real_T
#define OUTPUT_0_COMPLEX      COMPLEX_NO
#define OUT_0_FRAME_BASED     FRAME_NO
#define OUT_0_BUS_BASED       1
#define OUT_0_BUS_NAME        sigStructType
#define OUT_0_DIMS            1-D
#define OUT_0_ISSIGNED        1
#define OUT_0_WORDLENGTH      8
#define OUT_0_FIXPOINTSCALING 1
#define OUT_0_FRACTIONLENGTH  3
#define OUT_0_BIAS            0
#define OUT_0_SLOPE           0.125

#define NPARAMS               0

#define SAMPLE_TIME_0         INHERITED_SAMPLE_TIME
#define NUM_DISC_STATES       0
#define DISC_STATES_IC        [0]
#define NUM_CONT_STATES       0
#define CONT_STATES_IC        [0]

#define SFUNWIZ_GENERATE_TLC  1
#define SOURCEFILES           "__SFB__INC_PATH ./C_Files__SFB__./C_Files/ex_mySrc_LCT.c__SFB__"
#define PANELINDEX            N/A
#define USE_SIMSTRUCT         0
#define SHOW_COMPILE_STEPS    0
#define CREATE_DEBUG_MEXFILE  0
#define SAVE_CODE_ONLY        1
#define SFUNWIZ_REVISION      3.0
/* %%%-SFUNWIZ_defines_Changes_END --- EDIT HERE TO _BEGIN */
/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
#include "simstruc.h"
#include "ex_myTypes_LCT.h"
/*
 * Code Generation Environment flag (simulation or standalone target).
 */
 static int_T isSimulationTarget;
/* Utility function prototypes. */
static int_T GetRTWEnvironmentMode(SimStruct *S);
/* Macro used to check if Simulation mode is set to accelerator */
#define isBusDWorkPresent  ( ( ( !ssRTWGenIsCodeGen(S) || isSimulationTarget ) && !ssIsExternalSim(S) ) || ssIsRapidAcceleratorActive(S) )

typedef struct {
    int_T offset;
    int_T elemSize;
    int_T numElems;
} busInfoStruct;

extern void sf_b_Outputs_wrapper(const sigStructType *u0,
			const paramStructType *u1,
			sigStructType *y0);
/*====================*
 * S-function methods *
 *====================*/
/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *   Setup sizes of the various vectors.
 */
static void mdlInitializeSizes(SimStruct *S)
{

    DECL_AND_INIT_DIMSINFO(inputDimsInfo);
    DECL_AND_INIT_DIMSINFO(outputDimsInfo);
    ssSetNumSFcnParams(S, NPARAMS);
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        return; /* Parameter mismatch will be reported by Simulink */
    }

    ssSetArrayLayoutForCodeGen(S, SS_COLUMN_MAJOR);

    ssSetOperatingPointCompliance(S, USE_DEFAULT_OPERATING_POINT);

    ssSetNumContStates(S, NUM_CONT_STATES);
    ssSetNumDiscStates(S, NUM_DISC_STATES);


    if (!ssSetNumInputPorts(S, NUM_INPUTS)) return;
    /* Input Port 0 */

  /* Register sigStructType datatype for Input port 0 */

    #if defined(MATLAB_MEX_FILE)
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY)
    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "sigStructType", &dataTypeIdReg);
      if(dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetInputPortDataType(S, 0, dataTypeIdReg);
    }
    #endif
    ssSetInputPortWidth(S, 0, INPUT_0_WIDTH);
    ssSetInputPortComplexSignal(S, 0, INPUT_0_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 0, INPUT_0_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 0, 1); /*direct input signal access*/
    ssSetBusInputAsStruct(S, 0, IN_0_BUS_BASED);
    ssSetInputPortBusMode(S, 0, SL_BUS_MODE);
    /* Input Port 1 */

  /* Register paramStructType datatype for Input port 1 */

    #if defined(MATLAB_MEX_FILE)
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY)
    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "paramStructType", &dataTypeIdReg);
      if(dataTypeIdReg == INVALID_DTYPE_ID) return;
      ssSetInputPortDataType(S, 1, dataTypeIdReg);
    }
    #endif
    ssSetInputPortWidth(S, 1, INPUT_1_WIDTH);
    ssSetInputPortComplexSignal(S, 1, INPUT_1_COMPLEX);
    ssSetInputPortDirectFeedThrough(S, 1, INPUT_1_FEEDTHROUGH);
    ssSetInputPortRequiredContiguous(S, 1, 1); /*direct input signal access*/
    ssSetBusInputAsStruct(S, 1, IN_1_BUS_BASED);
    ssSetInputPortBusMode(S, 1, SL_BUS_MODE);

    if (!ssSetNumOutputPorts(S, NUM_OUTPUTS)) return;
    /* Output Port 0 */

  /* Register sigStructType datatype for Output port 0 */

    #if defined(MATLAB_MEX_FILE)
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY)
    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(S, "sigStructType", &dataTypeIdReg);
      if(dataTypeIdReg == INVALID_DTYPE_ID) return;
        ssSetOutputPortDataType(S, 0, dataTypeIdReg);
    }
    #endif

    ssSetBusOutputObjectName(S, 0, (void *) "sigStructType");
    ssSetOutputPortWidth(S, 0, OUTPUT_0_WIDTH);
    ssSetOutputPortComplexSignal(S, 0, OUTPUT_0_COMPLEX);
    ssSetBusOutputAsStruct(S, 0,OUT_0_BUS_BASED);
    ssSetOutputPortBusMode(S, 0, SL_BUS_MODE);

    if (ssRTWGenIsCodeGen(S)) {
        isSimulationTarget = GetRTWEnvironmentMode(S);
        if (isSimulationTarget == -1) {
            ssSetErrorStatus(S, " Unable to determine a valid code generation environment mode");
            return;
        }
        isSimulationTarget |= ssRTWGenIsModelReferenceSimTarget(S);
    }
    
    /* Set the number of dworks */
    if (!isBusDWorkPresent) {
        if (!ssSetNumDWork(S, 0)) return;
    } else {
        if (!ssSetNumDWork(S, 3)) return;
    }

    if (isBusDWorkPresent) {

      /*
       * Configure the dwork 0 (u0BUS)
       */
#if defined(MATLAB_MEX_FILE)
      if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
        DTypeId dataTypeIdReg;
        ssRegisterTypeFromNamedObject(S, "sigStructType", &dataTypeIdReg);
        if (dataTypeIdReg == INVALID_DTYPE_ID) return;
        ssSetDWorkDataType(S, 0, dataTypeIdReg);
      }
#endif
      
      ssSetDWorkUsageType(S, 0, SS_DWORK_USED_AS_DWORK);
      ssSetDWorkName(S, 0, "u0BUS");
      ssSetDWorkWidth(S, 0, DYNAMICALLY_SIZED);
      ssSetDWorkComplexSignal(S, 0, COMPLEX_NO);

      /*
       * Configure the dwork 1 (u1BUS)
       */
#if defined(MATLAB_MEX_FILE)
      if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
        DTypeId dataTypeIdReg;
        ssRegisterTypeFromNamedObject(S, "paramStructType", &dataTypeIdReg);
        if (dataTypeIdReg == INVALID_DTYPE_ID) return;
        ssSetDWorkDataType(S, 1, dataTypeIdReg);
      }
#endif
      
      ssSetDWorkUsageType(S, 1, SS_DWORK_USED_AS_DWORK);
      ssSetDWorkName(S, 1, "u1BUS");
      ssSetDWorkWidth(S, 1, DYNAMICALLY_SIZED);
      ssSetDWorkComplexSignal(S, 1, COMPLEX_NO);

      /*
       * Configure the dwork 2 (y0BUS)
       */
#if defined(MATLAB_MEX_FILE)
      if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
        DTypeId dataTypeIdReg;
        ssRegisterTypeFromNamedObject(S, "sigStructType", &dataTypeIdReg);
        if (dataTypeIdReg == INVALID_DTYPE_ID) return;
        ssSetDWorkDataType(S, 2, dataTypeIdReg);
      }
#endif
      
      ssSetDWorkUsageType(S, 2, SS_DWORK_USED_AS_DWORK);
      ssSetDWorkName(S, 2, "y0BUS");
      ssSetDWorkWidth(S, 2, DYNAMICALLY_SIZED);
      ssSetDWorkComplexSignal(S, 2, COMPLEX_NO);
    }
    ssSetNumPWork(S, 0);

    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    ssSetSimulinkVersionGeneratedIn(S, "10.3");

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S, (SS_OPTION_EXCEPTION_FREE_CODE |
                     SS_OPTION_USE_TLC_WITH_ACCELERATOR |
                     SS_OPTION_WORKS_WITH_CODE_REUSE));
}

/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    Specifiy  the sample time.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, SAMPLE_TIME_0);
    ssSetModelReferenceSampleTimeDefaultInheritance(S);
    ssSetOffsetTime(S, 0, 0.0);
}

#define MDL_SET_INPUT_PORT_DATA_TYPE
static void mdlSetInputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetInputPortDataType(S, 0, dType);
}

#define MDL_SET_OUTPUT_PORT_DATA_TYPE
static void mdlSetOutputPortDataType(SimStruct *S, int port, DTypeId dType)
{
    ssSetOutputPortDataType(S, 0, dType);
}

#define MDL_SET_DEFAULT_PORT_DATA_TYPES
static void mdlSetDefaultPortDataTypes(SimStruct *S)
{
    ssSetInputPortDataType(S, 0, SS_DOUBLE);
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
}

#define MDL_SET_WORK_WIDTHS
#if defined(MDL_SET_WORK_WIDTHS) && defined(MATLAB_MEX_FILE)

static void mdlSetWorkWidths(SimStruct *S)
{
/* Set the width of DWork(s) used for marshalling the IOs */
    if (isBusDWorkPresent) {

        /* Update dwork 0 */
        ssSetDWorkWidth(S, 0, ssGetInputPortWidth(S, 0));

        /* Update dwork 1 */
        ssSetDWorkWidth(S, 1, ssGetInputPortWidth(S, 1));

        /* Update dwork 2 */
        ssSetDWorkWidth(S, 2, ssGetOutputPortWidth(S, 0));

    }

}

#endif

#define MDL_START  /* Change to #undef to remove function */
#if defined(MDL_START)
/* Function: mdlStart =======================================================
 * Abstract:
 *    This function is called once at start of model execution. If you
 *    have states that should be initialized once, this is the place
 *    to do it.
 */
static void mdlStart(SimStruct *S)
{
    /* Bus Information */
    slDataTypeAccess *dta = ssGetDataTypeAccess(S);
    const char *bpath = ssGetPath(S);
	DTypeId paramStructTypeId = ssGetDataTypeId(S, "paramStructType");
	DTypeId sigStructTypeId = ssGetDataTypeId(S, "sigStructType");

	busInfoStruct *busInfo = (busInfoStruct *)malloc(10*sizeof(busInfoStruct));
	if(busInfo==NULL) {
        ssSetErrorStatus(S, "Memory allocation failure");
        return;
    }

      /* Calculate offsets of all primitive elements of the bus */

	busInfo[0].offset   = dtaGetDataTypeElementOffset(dta, bpath, sigStructTypeId, 0);
	busInfo[0].elemSize = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[0].numElems = 1;
	busInfo[1].offset   = dtaGetDataTypeElementOffset(dta, bpath, sigStructTypeId, 1);
	busInfo[1].elemSize = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[1].numElems = 1;
	busInfo[2].offset   = dtaGetDataTypeElementOffset(dta, bpath, paramStructTypeId, 0);
	busInfo[2].elemSize = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[2].numElems = 1;
	busInfo[3].offset   = dtaGetDataTypeElementOffset(dta, bpath, paramStructTypeId, 1);
	busInfo[3].elemSize = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[3].numElems = 1;
	busInfo[4].offset   = dtaGetDataTypeElementOffset(dta, bpath, paramStructTypeId, 2);
	busInfo[4].elemSize = dtaGetDataTypeSize(dta, bpath, ssGetDataTypeId(S, "double"));
	busInfo[4].numElems = 1;
	ssSetUserData(S, busInfo);
}
#endif /*  MDL_START */

/* Function: mdlOutputs =======================================================
 *
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
    const char *u0 = (char *) ssGetInputPortSignal(S, 0);
    const char *u1 = (char *) ssGetInputPortSignal(S, 1);
    char *y0 = (char *) ssGetOutputPortSignal(S, 0);

	busInfoStruct* busInfo = (busInfoStruct *) ssGetUserData(S);

	/* Temporary bus copy declarations */
	sigStructType _u0BUS;
	paramStructType _u1BUS;
	sigStructType _y0BUS;

	/* Copy input bus into temporary structure */
	(void) memcpy(&_u0BUS.sig1, u0 + busInfo[0].offset, busInfo[0].elemSize * busInfo[0].numElems);
	(void) memcpy(&_u0BUS.sig2, u0 + busInfo[1].offset, busInfo[1].elemSize * busInfo[1].numElems);
	(void) memcpy(&_u1BUS.param1, u1 + busInfo[2].offset, busInfo[2].elemSize * busInfo[2].numElems);
	(void) memcpy(&_u1BUS.param2, u1 + busInfo[3].offset, busInfo[3].elemSize * busInfo[3].numElems);
	(void) memcpy(&_u1BUS.param3, u1 + busInfo[4].offset, busInfo[4].elemSize * busInfo[4].numElems);

    sf_b_Outputs_wrapper(&_u0BUS, &_u1BUS, &_y0BUS);

	/* Copy temporary structure into output bus */
	(void) memcpy(y0 + busInfo[0].offset, &_y0BUS.sig1, busInfo[0].elemSize * busInfo[0].numElems);
	(void) memcpy(y0 + busInfo[1].offset, &_y0BUS.sig2, busInfo[1].elemSize * busInfo[1].numElems);

}

/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
    /* Free stored bus information */
    busInfoStruct *busInfo = (busInfoStruct *) ssGetUserData(S);
    if(busInfo != NULL) {
        free(busInfo);
    }

}

static int_T GetRTWEnvironmentMode(SimStruct *S)
{
    int_T status = -1;
    mxArray *plhs[1];
    mxArray *prhs[1];
    mxArray * err;
    
    /*
     * Get the name of the Simulink block diagram
     */
    prhs[0] = mxCreateString(ssGetModelName(ssGetRootSS(S)));
    plhs[0] = NULL;
    
    /*
     * Call "isSimulationTarget = rtwenvironmentmode(modelName)" in MATLAB
     */
    err = mexCallMATLABWithTrap(1, plhs, 1, prhs, "rtwenvironmentmode");
    mxDestroyArray(prhs[0]);
    
    /*
     * Set the error status if an error occurred
     */
    if (err) {
        if (plhs[0]) {
            mxDestroyArray(plhs[0]);
            plhs[0] = NULL;
        }
        ssSetErrorStatus(S, "Unknown error during call to 'rtwenvironmentmode'.");
        return -1;
    }
    
    /*
     * Get the value returned by rtwenvironmentmode(modelName)
    */
    if (plhs[0]) {
        status = (int_T) (mxGetScalar(plhs[0]) != 0);
        mxDestroyArray(plhs[0]);
        plhs[0] = NULL;
    }
    
    return (status);
}

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif



