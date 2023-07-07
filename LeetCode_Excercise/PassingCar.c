int solutionPassingCar(int A[], int N) {
    // Implement your solution here
    long sum = 0;
    long total = 0;
    for (int i = N - 1; i > -1; i--) {
        sum = sum + A[i];
        if (A[i] == 0) {
            total = total + sum;
        }
    }
    if (total > 1000000000 || total < -1000000000) {
        total = -1;
    }
    return total;
}