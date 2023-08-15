int largestAltitude(int* gain, int gainSize) {
    int *res =  malloc((gainSize + 1)  * sizeof(int)); ;
    res[0] = 0;
    int max = 0;
    for (int i = 1; i < gainSize + 1; i++) {
        res[i] = gain[i - 1] + res[i - 1];
        if (res[i] > max) {

            max = res[i];
        }
    }
    return max;
}