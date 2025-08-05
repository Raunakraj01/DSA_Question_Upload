#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result = malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {2,7,11,15}, target = 9, returnSize;
    int* res = twoSum(nums, 4, target, &returnSize);
    if (res) printf("[%d,%d]\n", res[0], res[1]);
    free(res);
}

//Problem Statement
/*You are given:

An array of integers called nums.

An integer target.

❓Your task:
Find two different numbers in the array that add up to the target and return their indices */