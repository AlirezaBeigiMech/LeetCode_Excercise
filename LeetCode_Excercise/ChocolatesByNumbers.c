
int solutionChocolatesByNumbers(int N, int M) {
    // Implement your solution here


    int count = 0;
    int res = 0;
    int N1 = N;
    if (M > N) {

        if (M % N == 0) {
            return 1;
        }
        M = M % N;
    }
    while (res != M) {


        //printf("res = %d\n", res);

        if ((N1 - res) % M == 0) {
            count = count + (N1 - res) / M;
        }
        else {
            count = count + (N1 - res) / M + 1;
            //printf("count1 = %d\n", count);
        }
        //printf("count = %d\n", count);
        res = M - N % M;
        N = N1 - res;
    }


    return count;
}
