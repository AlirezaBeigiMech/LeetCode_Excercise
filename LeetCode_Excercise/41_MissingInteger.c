#include <string.h>
int solutionMissingInteger(int A[], int N) {
    // Implement your solution here
    int maxN = 1;
    int* B = (int*)malloc(N * sizeof(int));
    memset(B, 0, N * sizeof(int));
    for (int i = 0; i < N; i++) {
        if (A[i] > 0) {
            B[A[i] - 1] = 1;
        }
    }

    int j = N - 1;
    int flag = 0;
    int sum = 0;
    while (flag != 1 && j > -1) {
        if (B[j] == 0) {
            maxN = j + 1;
            flag = 1;
        }
        else {
            sum = sum + 1;
        }

        j--;

    }
    if (sum == 0) {
        maxN = 1;
    }

    else if (sum == N) {
        maxN = N + 1;
    }
    return maxN;
}