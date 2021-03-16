#include <stdio.h>

float *findMax(float A[], int N)
{
    int I;
    float *theMax = &(A[0]);

    for (I = 1; I < N; I++)
        if (A[I] > *theMax) theMax = &(A[I]);

    return theMax;
}

void check_findMax()
{
    float A[5] = {0.0f, 3.0f, 1.5f, 2.0f, 4.1f};
    float *maxA;

    maxA = findMax(A,5);
    *maxA = *maxA + 1.0;
    printf("%.1f %.1f\n",*maxA,A[4]);
}