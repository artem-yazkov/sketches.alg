/**
 * https://leetcode.com/problems/two-sum/description/
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int ia = 0; ia < numsSize - 1; ia++) {
        for (int ib = ia + 1; ib < numsSize; ib++) {
            if (nums[ia] + nums[ib] == target) {
                *returnSize = 2;
                int *output = malloc(sizeof(int) * *returnSize);
                output[0] = ia;
                output[1] = ib;
                return ouput;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
