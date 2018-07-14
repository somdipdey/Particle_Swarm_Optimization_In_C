# Particle Swarm Optimization In C
Particle Swarm Optimization function implemented in C

Main program file ==> **PSO.c** in /src/

function ==>

**void PSO(double costFunction, short NVar, double varMin, double varMax, int
         maxIt, int NPop, double W, double wDamp, double C1, double C2,
         boolean_T showIterInfo, struct0_T *out)**
         
costFunction is the desired output that is needed to be optimized by the particles.

Examples of usage is provided in /src/examples.

This function is based on the video tutorials provided by Yarpiz on **Particle Swarm Optimization (PSO) in MATLAB**. Link for the tutorial available from [Here](http://yarpiz.com/440/ytea101-particle-swarm-optimization-pso-in-matlab-video-tutorial).
