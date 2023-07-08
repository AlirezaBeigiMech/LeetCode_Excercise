
// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results {
    int* A;
    int M; // Length of the array
};

struct Results solutionGenomicRangeQuery(char* S, int P[], int Q[], int M) {
        struct Results result;
        int N = strlen(S);
        int* C = malloc(N * sizeof(int));
        
        int *matrix[4] = malloc(N * sizeof(int));
        result.A = malloc(M * sizeof(int)); ;
        memset(matrix, 0, 4 * (N + 1) * sizeof(int));

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


            matrix[0][i + 1] = matrix[0][i];
            matrix[1][i + 1] = matrix[1][i];
            matrix[2][i + 1] = matrix[2][i];
            matrix[3][i + 1] = matrix[3][i];
            matrix[C[i] - 1][i + 1] ++;
        }

        for (int i = 0; i < M; i++) {

            if (matrix[0][P[i]] < matrix[0][Q[i] + 1]) {
                result.A[i] = 1;
            }
            else if (matrix[1][P[i]] < matrix[1][Q[i] + 1]) {
                result.A[i] = 2;
            }
            else if (matrix[2][P[i]] < matrix[2][Q[i] + 1]) {
                result.A[i] = 3;
            }
            else if (matrix[3][P[i]] < matrix[3][Q[i] + 1]) {
                result.A[i] = 4;
            }
        }
        result.M = M;
        return result;
    }