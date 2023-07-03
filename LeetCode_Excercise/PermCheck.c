#include <string.h>
#include "main.h"

int solutionPermCheck(int A[], int N) {
    // Implement your solution here
    //int c[N];
    int* c = malloc(N * sizeof(int));
    int flag = 1;
    memset(c, 0, sizeof(c));

    for (int i = 0; i < N; i++) {
        //c[(int)(A[i]-1)] = 0;
        if ((A[i] < (N + 1)) && (A[i] > 0)) {
            c[(int)(A[i] - 1)] = 1;
        }
    }
    //printf("N = %d\n",c[0]);
    for (int i = 0; i < N; i++) {
        if (c[i] == 0) {
            flag = 0;
            break;
        }
    }
    return flag;

}