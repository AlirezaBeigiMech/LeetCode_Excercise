#include "55_Jump_Game.h"
/// <summary>
/// 55. Jump Game
//You are given an integer array nums.You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
//Return true if you can reach the last index, or false otherwise.
/// </summary>
/// <param name="nums">
///  integer array nums
/// </param>
/// <param name="numsSize"></param>
///  integer size of array nums
/// <returns>
/// 
/// Return true if you can reach the last index by jumpying with available array, or false otherwise.
/// </returns>
bool canJump(int* nums, int numsSize) {
    int initial = nums[0];
    bool state;
    numsSize = numsSize - 1;
    const int  numsSize1 = numsSize;
    if (initial > 0 && initial == numsSize) {
        return true;
    }
    else if (initial > 0 && numsSize > initial) {
        while (initial > 0) {
            int* two = malloc((numsSize + 1 - initial) * sizeof(int));
            memcpy(two, &nums[(int)initial], (numsSize - initial) * sizeof(int));
            state = canJump(two, numsSize + 1 - initial);
            if (state == false) {
                initial--;
                return false;
            }
            else {
                return true;
            }
        }
    }

    return false;
}