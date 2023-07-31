// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <math.h>

int solutionflag(int A[], int N) {
    // Implement your solution here
    long count = 0;
    int ret = 0;
    //int Firstpeak = 0;
    //int Lastpeak = 0;
    int m = N / 2;
    int *B = malloc(m * sizeof(int)); ;
    for (int i = 1; i < N - 1; i++) {
        if (A[i] > A[i - 1] && A[i] > A[i + 1]) {
            B[count] = i;
            count++;
            i++;
        }


    }

    for (int j = 2; ((j - 1) * j) <= N; j++) {
        int indP = 1;
        int flagj = j - 1;
        int indQ = 0;
        while (indP < count && flagj>0) {
            if ((B[indP] - B[indQ]) >= j) {
                indQ = indP;
                flagj--;
            }
            indP++;
        }
        if (flagj == 0) {
            ret = j;
        }

    }
    return ret;
}