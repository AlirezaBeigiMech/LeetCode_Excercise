double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum = sum + nums[i];
    }
    int newsum = sum;
    for (int i = k; i < numsSize; i++) {
        newsum = newsum + nums[i] - nums[i - k];
        if (newsum > sum) {
            sum = newsum;
        }
    }
    return (double)sum / k;
}