// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
int max(int elem1, int elem2);
int solutionmaxprofit(int A[], int N) {
    // Implement your solution here
    long profit = 0;
    long sliceprofit = 0;
    for (int i = 0; i < N - 1; i++) {
        sliceprofit = max(0, sliceprofit + A[i + 1] - A[i]);
        profit = max(profit, sliceprofit);
    }
    return profit;
}

int max(int elem1, int elem2) {
    if (elem1 > elem2) { return elem1; }
    else {
        return elem2;
    }
}