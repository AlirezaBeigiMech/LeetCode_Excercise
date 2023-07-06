// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <string.h>
int solutionMaxCounters(int A[], int N) {
    // Implement your solution here
    int maxN = 1;
    int Maxim = 1;
    //int M = 1;
    for (int i = 0; i < N; i++) {
        if (A[i] > Maxim) {
            Maxim = A[i];
        }

    }
    //int B[Maxim];
    int* B = malloc(Maxim * sizeof(int));
    memset(B, 0, Maxim * sizeof(int));
    for (int i = 0; i < N; i++) {
        if (A[i] > 0) {
            B[A[i] - 1] = 1;
        }

    }

    int j = 0;
    int flag = 0;
    int sum = 0;
    while (flag != 1 && j < N) {
        if (B[j] == 0) {
            maxN = j + 1;
            flag = 1;
        }
        else {
            sum = sum + 1;
        }

        j++;

    }
    if (sum == 0) {
        maxN = 1;
    }

    else if (sum == N) {
        maxN = N + 1;
    }
    return maxN;
}