/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes) {
    //int **answer

    returnColumnSizes[0] = calloc(2, sizeof(int));
    *returnSize = 2;

    int array[2001] = { };
    int** ret = malloc(sizeof(int*) * 2);
    ret[0] = malloc(sizeof(int) * 1000);
    ret[1] = malloc(sizeof(int) * 1000);


    for (int i = 0; i < nums1Size; i++) {
        if (array[1000 + nums1[i]] != 2 && array[1000 + nums1[i]] != 3 && array[1000 + nums1[i]] != 1) {
            array[1000 + nums1[i]] = 1;
        }
        else if (array[1000 + nums1[i]] == 2) {
            array[1000 + nums1[i]] = 3;
        }

    }
    for (int i = 0; i < nums2Size; i++) {
        if (array[1000 + nums2[i]] != 1 && array[1000 + nums2[i]] != 3 && array[1000 + nums2[i]] != 2) {
            array[1000 + nums2[i]] = 2;
        }
        else if (array[1000 + nums2[i]] == 1) {
            array[1000 + nums2[i]] = 3;
        }

    }


    for (int i = 0; i < nums1Size; i++) {
        if (array[1000 + nums1[i]] == 1) {
            ret[0][returnColumnSizes[0][0]++] = nums1[i];
            array[1000 + nums1[i]] = 0;
        }

    }

    for (int i = 0; i < nums2Size; i++) {
        if (array[1000 + nums2[i]] == 2) {
            ret[1][returnColumnSizes[0][1]++] = nums2[i];
            array[1000 + nums2[i]] = 0;
        }

    }
    return ret;
}