/*
 * 238. Product of Array Except Self
 * https://leetcode.com/problems/product-of-array-except-self/description/
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *result = malloc(sizeof(int) * numsSize);

    /* store postfixes within result array */
    result[numsSize - 1] = 1;
    for (int i = numsSize - 2; i >= 0; i--) {
        result[i] = result[i+1] * nums[i+1];
    }
    int prefix = 1;
    for (int i = 1; i < numsSize; i++) {
        prefix *= nums[i-1];
        result[i] *= prefix;
    }
    *returnSize = numsSize;
    return result;
}
