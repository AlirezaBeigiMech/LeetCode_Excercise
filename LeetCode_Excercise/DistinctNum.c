#include <string.h>
int solutionDistinctNum(int A[], int N) {
    // Implement your solution here
    int max = -1000000;
    int min = 1000000;
    for (int i = 0; i < N; i++) {
        if (A[i] > max) {
            max = A[i];
        }
        if (A[i] < min) {
            min = A[i];
        }
    }

    int sum = 0;
    if ((max - min) > 0 && N > 0) {
        int *pf = malloc((max - min) * sizeof(int));
        memset(pf, 0, sizeof(pf));
        sum = 0;
        for (int j = 0; j < N; j++)
        {
            pf[A[j] - min] = 1;
        }

        for (int i = 0; i < (max - min + 1); i++) {
            if (pf[i] == 1) {
                sum++;
            }
        }
    }
    else if (N > 0) {

        sum = 1;
    }
    else {
        sum = 0;
    }
    return sum;

}