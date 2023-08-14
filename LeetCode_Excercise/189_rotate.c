void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    int c[2 * numsSize - k];
    for (int i = 0; i < 2 * numsSize - k; i++) {
        if (i < numsSize) {
            c[i] = nums[i];
        }
        else {
            c[i] = nums[i - numsSize];
        }
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = c[numsSize - k + i];
    }

}