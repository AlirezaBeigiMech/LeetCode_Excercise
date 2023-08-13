// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

#include "max.h"
int solutionMaxSliceSum(int A[], int N) {
    // Implement your solution here
    int globalmax = A[0];
    int localsum = 0;
    int localmax = A[0];
    for (int i = 1; i < N; i++) {
        localsum = localmax + A[i];
        localmax = max(localsum, A[i]);
        globalmax = max(localmax, globalmax);


    }
    return globalmax;
}

