#include <stdlib.h>

#ifdef __GPU__
#include <CL/cl.h>
#include <stdio.h>
#endif

double dot(double* , double* );

double* cross(double* , double* );

double** matAdd(double** , double**);

double** matSub(double** , double** );

double** matMult(double** , double** );

double* zero(int);

double** eyes(int, int);



