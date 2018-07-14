/*
 * Copyright @ Somdip Dey, 2018
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: PSO_emxutil.h
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 14-Jul-2018 23:28:01
 */

#ifndef PSO_EMXUTIL_H
#define PSO_EMXUTIL_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "PSO_types.h"

/* Function Declarations */
extern void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int oldNumel);
extern void emxFreeStruct_struct0_T(struct0_T *pStruct);
extern void emxFree_char_T(emxArray_char_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxFree_struct1_T(emxArray_struct1_T **pEmxArray);
extern void emxInitStruct_struct0_T(struct0_T *pStruct);
extern void emxInit_char_T(emxArray_char_T **pEmxArray, int numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_real_T1(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_struct1_T(emxArray_struct1_T **pEmxArray, int numDimensions);

#endif

/*
 * File trailer for PSO_emxutil.h
 *
 * [EOF]
 */
