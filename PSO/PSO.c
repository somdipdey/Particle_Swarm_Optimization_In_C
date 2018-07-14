/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: PSO.c
 *
 * MATLAB Coder version            : 4.0
 * C/C++ source code generated on  : 14-Jul-2018 23:28:01
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "PSO.h"
#include "rand.h"
#include "PSO_emxutil.h"
#include <stdio.h>

/* Function Definitions */

/*
 * %% Problem Definiton
 * Arguments    : double costFunction
 *                short NVar
 *                double varMin
 *                double varMax
 *                int maxIt
 *                int NPop
 *                double W
 *                double wDamp
 *                double C1
 *                double C2
 *                boolean_T showIterInfo
 *                struct0_T *out
 * Return Type  : void
 */
void PSO(double costFunction, short NVar, double varMin, double varMax, int
         maxIt, int NPop, double W, double wDamp, double C1, double C2,
         boolean_T showIterInfo, struct0_T *out)
{
  emxArray_struct1_T *particle;
  emxArray_real_T *BestCosts;
  int i0;
  int it;
  emxArray_char_T *charStr;
  emxArray_real_T *b_NVar;
  emxArray_real_T *c_NVar;
  int nbytes;
  (void)costFunction;
  (void)varMin;
  (void)varMax;
  (void)W;
  (void)wDamp;
  (void)C1;
  (void)C2;
  emxInit_struct1_T(&particle, 1);

  /*  */
  /*  Copyright (c) 2016, Yarpiz (www.yarpiz.com) */
  /*  All rights reserved. Please read the "license.txt" for license terms. */
  /*  */
  /*  Project Code: YTEA101 */
  /*  Project Title: Particle Swarm Optimization Video Tutorial */
  /*  Publisher: Yarpiz (www.yarpiz.com) */
  /*   */
  /*  Developer and Instructor: S. Mostapha Kalami Heris (Member of Yarpiz Team) */
  /*   */
  /*  Contact Info: sm.kalami@gmail.com, info@yarpiz.com */
  /*  */
  /*  Cost Function */
  /*  Number of Unknown (Decision) Variables */
  /* VarSize = [1 nVar];         % Matrix Size of Decision Variables */
  /*  Lower Bound of Decision Variables */
  /*  Upper Bound of Decision Variables */
  /*     %% Parameters of PSO */
  /*  Maximum Number of Iterations */
  /*  Population Size (Swarm Size) */
  /*  Intertia Coefficient */
  /*  Damping Ratio of Inertia Coefficient */
  /*  Personal Acceleration Coefficient */
  /*  Social Acceleration Coefficient */
  /*  The Flag for Showing Iteration Information */
  /*     %% Initialization */
  /*  The Particle Template */
  /*  Create Population Array */
  particle->size[0] = NPop;
  emxInit_real_T(&BestCosts, 1);

  /*  Initialize Global Best */
  /*  Initialize Population Members */
  /*  Array to Hold Best Cost Value on Each Iteration */
  /*     %% Main Loop of PSO */
  i0 = BestCosts->size[0];
  BestCosts->size[0] = maxIt;
  emxEnsureCapacity_real_T(BestCosts, i0);
  it = 1;
  emxInit_char_T(&charStr, 2);
  emxInit_real_T1(&b_NVar, 2);
  emxInit_real_T1(&c_NVar, 2);
  while (it <= maxIt) {
    for (nbytes = 1; nbytes <= NPop; nbytes++) {
      /*  Update Velocity */
      b_rand(NVar, b_NVar);
      b_rand(NVar, c_NVar);

      /*  Apply Velocity Limits */
      /*  Update Position */
      /*  Apply Lower and Upper Bound Limits */
      /*  Evaluation */
      /*  Update Personal Best */
    }

    /*  Store the Best Cost Value */
    BestCosts->data[it - 1] = rtInf;

    /*  Display Iteration Information */
    if (showIterInfo) {
      nbytes = (int)snprintf(NULL, 0, "L%d", it) + 1;
      i0 = charStr->size[0] * charStr->size[1];
      charStr->size[0] = 1;
      charStr->size[1] = nbytes;
      emxEnsureCapacity_char_T(charStr, i0);
      snprintf(&charStr->data[0], (size_t)nbytes, "L%d", it);
      nbytes = (int)snprintf(NULL, 0, "L%f", rtInf) + 1;
      i0 = charStr->size[0] * charStr->size[1];
      charStr->size[0] = 1;
      charStr->size[1] = nbytes;
      emxEnsureCapacity_char_T(charStr, i0);
      snprintf(&charStr->data[0], (size_t)nbytes, "L%f", rtInf);
    }

    /*  Damping Inertia Coefficient */
    it++;
  }

  emxFree_real_T(&c_NVar);
  emxFree_real_T(&b_NVar);
  emxFree_char_T(&charStr);
  out->pop->size[0] = particle->size[0];
  emxFree_struct1_T(&particle);
  out->BestSol.Cost = rtInf;
  out->BestSol.Position = 0.0;
  i0 = out->BestCosts->size[0];
  out->BestCosts->size[0] = BestCosts->size[0];
  emxEnsureCapacity_real_T(out->BestCosts, i0);
  nbytes = BestCosts->size[0];
  for (i0 = 0; i0 < nbytes; i0++) {
    out->BestCosts->data[i0] = BestCosts->data[i0];
  }

  emxFree_real_T(&BestCosts);
}

/*
 * File trailer for PSO.c
 *
 * [EOF]
 */
