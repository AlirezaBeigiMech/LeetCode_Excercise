#include "main.h"

struct Results solutionCyclicRotation(int A[], int N, int K) {
    // Implement your solution here
    struct Results result;
    result.A = A;
    if (A[0] != NULL) {
        //K = K % N;
        int *B = malloc(2*N * sizeof(int)); 
        //int B[];
        for (int i = 0; i < 2 * N; i++) {
            if (i < N) {
                B[i] = A[i];
            }
            else {
                B[i] = A[i - N];
            }

        }
        for (int i = 0; i < N; i++) {
            A[i] = B[N - K + i];
        }
    }
    result.A = A;
    result.N = N;
    return result;

}