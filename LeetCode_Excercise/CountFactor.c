#include <math.h>
int solutionCountFactor(int N) {
    // Implement your solution here
    int i = 1;
    int count = 0;
    int max = sqrt(N) + 1;
    while (i < max) {
        if (N % i == 0 && N != i * i) {
            count = count + 2;
        }
        else if (N == i * i) {
            count = count + 1;
        }
        i++;
    }
    //printf("i = %d\n",i);
    return count;
}
