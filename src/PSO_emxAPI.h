/*
 * Copyright @ Somdip Dey, 2018
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: PSO_emxAPI.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 14-Jul-2018 23:28:01
 */

#ifndef PSO_EMXAPI_H
#define PSO_EMXAPI_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "PSO_types.h"

/* Function Declarations */
extern emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size);
extern emxArray_struct1_T *emxCreateND_struct1_T(int numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapperND_real_T(double *data, int
  numDimensions, int *size);
extern emxArray_struct1_T *emxCreateWrapperND_struct1_T(int numDimensions, int
  *size);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);
extern emxArray_struct1_T *emxCreateWrapper_struct1_T(int rows, int cols);
extern emxArray_real_T *emxCreate_real_T(int rows, int cols);
extern emxArray_struct1_T *emxCreate_struct1_T(int rows, int cols);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
extern void emxDestroyArray_struct1_T(emxArray_struct1_T *emxArray);
extern void emxDestroy_struct0_T(struct0_T emxArray);
extern void emxInit_struct0_T(struct0_T *pStruct);

#endif

/*
 * File trailer for PSO_emxAPI.h
 *
 * [EOF]
 */
