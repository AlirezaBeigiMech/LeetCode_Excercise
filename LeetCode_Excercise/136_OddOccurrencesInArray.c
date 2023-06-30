int solutionOddOccurrencesInArray(int A[], int N) {
    // Implement your solution here

    int res = 0;
    for (int i = 0; i < N; i++)
        res = res ^ A[i];

    return res;
}