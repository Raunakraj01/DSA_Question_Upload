#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) return 0;
    int i = 0;
    //Brute Force Approach
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    int nums[] = {1,1,2}, n = 3;
    int newLen = removeDuplicates(nums, n);
    printf("New length: %d\nArray: ", newLen);
    for (int i = 0; i < newLen; i++) printf("%d ", nums[i]);
}

/*What is Brute Force Approach?
The Brute Force Approach is the most straightforward way to solve a problem — by trying all possible options, one by one.

It's like solving a lock by trying every possible combination until one works.*/