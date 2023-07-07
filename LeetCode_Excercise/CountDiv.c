int solutionCountDiv(int A, int B, int K) {
    // Implement your solution here

    int rem = A % K;
    if (rem != 0) {
        A = (K - rem) + A;
    }

    if (A <= B) {
        return (int)((B - A) / K + 1);
    }
    else {
        return 0;
    }
}