
// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results {
    int* A;
    int M; // Length of the array
};

struct Results solution(char* S, int P[], int Q[], int M) {
    // Implement your solution here
    struct Results result;
    int minDNA = 1;
    int N = strlen(S);
    int *C = malloc(N * sizeof(int));
    result.A = malloc(M * sizeof(int)); ;
    for (int i = 0; i < N; i++) {
        switch (S[i])
        {
        case 'A':
            C[i] = 1;
            break;
        case 'C':
            C[i] = 2;
            break;
        case 'G':
            C[i] = 3;
            break;
        case 'T':
            C[i] = 4;
            break;
        }
    }
    //printf("A[0] = %d\n",C[0]);
    int k;
    for (int j = 0; j < M; j++) {
        minDNA = C[P[j]];

        for (k = P[j]; k < Q[j] + 1; k++) {
            if (C[k] < minDNA) {
                minDNA = C[k];
            }
        }
        result.A[j] = minDNA;

    }

    result.M = M;
    return result;
}