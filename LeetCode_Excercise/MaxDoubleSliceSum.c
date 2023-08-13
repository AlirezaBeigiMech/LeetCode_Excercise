// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

#include "max.h"

#include "printarray.h"

int solutionMaxDoubleSliceSum(int A[], int N) {
    // Implement your solution here

        // Implement your solution here
    int finalmax = 0;

    long *listforward = malloc(N * sizeof(int));;
    long *listbackward = malloc(N * sizeof(int));;

    for (int i = 0; i < N; i++) {
        listbackward[i] = 0;
        listforward[i] = 0;
    }
    for (int i = 1; i < N - 1; i++) {
        listforward[i] = max(listforward[i - 1] + A[i], 0);
    }
    for (int i = N - 2; i > 0; i--) {

        listbackward[i] = max(listbackward[i + 1] + A[i], 0);
    }

    //printArray(listforward, N);
    //printArray(listbackward, N);



    for (int i = 1; i < N - 1; i++) {
        finalmax = max(finalmax, listforward[i - 1] + listbackward[i + 1]);
    }

    return finalmax;

}
