#include <stdio.h>
#include <stdlib.h>
#include "55_Jump_Game.h"
#include "main.h"


int main() {
    // Q 55, Answer of the Jump Game
    int nums[5] = { 3, 2, 1, 0, 4 };
    int nums1[5] = { 2, 3, 1, 1, 4 };
    int  numsSize = 5;
    bool a = canJump(nums, numsSize);
    bool a1 = canJump(nums1, numsSize);
    printf("Q55 Answer for { 3, 2, 1, 0, 4 } = %d\n", a);
    printf("Q55 Answer for { 2, 3, 1, 1, 4 } = %d\n", a1);
    printf("Q868 Answer for { 185 } or 10111001 = %d\n", solutionBinaryGap(185));
    return 0;

}
