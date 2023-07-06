#include "main.h"

struct ResultsC solutionMaxCounters(int N, int A[], int M) {
    // Implement your solution here
    struct ResultsC result;
    result.L = N;
    int maxcount = 0;

    result.C = (int*)malloc(result.L * sizeof(int));
    for (int i = 0; i < N; i++) {
        result.C[i] = 0;

    }

    for (int i = 0; i < M; i++) {
        if (A[i] != N + 1) {
            result.C[(int)A[i] - 1] = result.C[(int)A[i] - 1] + 1;
            if (result.C[(int)A[i] - 1] > maxcount) {
                maxcount = result.C[(int)A[i] - 1];
            }
        }
        else {
            for (int j = 0; j < N; j++) {
                result.C[j] = maxcount;
            }
        }
    }

    return result;
}