int pivotIndex(int* nums, int numsSize) {
    int sum = 0;
    int newsum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum = sum + nums[i];
    }
    for (int j = 0; j < numsSize; j++) {
        if ((sum - nums[j]) / 2 == newsum && (sum - nums[j]) % 2 == 0) {
            return j;
        }
        else {
            newsum = newsum + nums[j];
        }
    }
    return -1;


}