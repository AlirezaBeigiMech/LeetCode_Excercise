#include "main.h"

struct Results solutionCountNonDivisible(int A[], int N) {
    // Implement your solution here
    struct Results result;
    int * B = malloc((2 * N + 1)* sizeof(int));
    int* C = malloc(N * sizeof(int));

    for (int i = 0; i < 2 * N + 1; i++) {
        B[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        B[A[i]] ++;
        C[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 1; j * j <= A[i]; j++) {
            if (A[i] % j == 0 && A[i] / j != j) {
                C[i] = C[i] + B[j];
                C[i] = C[i] + B[A[i] / j];
            }
            else if (A[i] % j == 0 && A[i] / j == j) {
                C[i] = C[i] + B[j];
            }
        }

        C[i] = N - C[i];
    }
    if (N == 1) {
        C[0] = 0;
    }
    result.C = C;
    result.L = N;
    return result;
}