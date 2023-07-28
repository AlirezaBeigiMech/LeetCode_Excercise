// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#include <math.h>
int solutionMinPerimeterRectangle(int N) {
    // Implement your solution here
    int i = sqrt(N) + 1;
    while (i > 0) {
        if (N % i == 0) {
            return 2 * (i + N / i);
        }
        i--;
    }
    return 2 * (1 + N);
}