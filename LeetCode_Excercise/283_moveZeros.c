void moveZeroes(int* nums, int numsSize) {
    int *res = malloc(numsSize * sizeof(int)); 
    memset(res, 0, numsSize * sizeof(int));
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            res[count] = nums[i];
            count++;
        }
    }
    for (int i = 0; i < numsSize; i++) {
        nums[i] = res[i];
    }
}