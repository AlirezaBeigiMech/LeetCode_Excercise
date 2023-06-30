
#include "55_Jump_Game.h"
#include "main.h"

void printArray(int A[], int N) {
    for (int loop = 0; loop < N; loop++)
        printf("%d ", A[loop]);
}

int main() {
    // Q 55, Answer of the Jump Game
    int nums[5] = { 3, 2, 1, 0, 4 };
    int nums1[5] = { 2, 3, 1, 1, 4 };
    int array189[5] = {3, 8, 9, 7, 6};
    int  numsSize = 5;
    bool a = canJump(nums, numsSize);
    bool a1 = canJump(nums1, numsSize);
    struct Results result = solutionCyclicRotation(array189, 5, 3);
    printf("Q55 Answer for { 3, 2, 1, 0, 4 } = %d\n", a);
    printf("Q55 Answer for { 2, 3, 1, 1, 4 } = %d\n", a1);
    printf("Q868 Answer for { 185 } or 10111001 = %d\n", solutionBinaryGap(185));
    printf("Q189 Answer for  A = {3, 8, 9, 7, 6} and K = 3 is newA = \n" );
    printArray(result.A, 5);

    
    return 0;

}
