#include <stdio.h>

int maxSubArray(int arr[], int n) {
    int maxSoFar = arr[0], currMax = arr[0];
    for (int i = 1; i < n; i++) {
        if (currMax + arr[i] > arr[i])
            currMax = currMax + arr[i];
        else
            currMax = arr[i];
        
        if (currMax > maxSoFar)
            maxSoFar = currMax;
    }
    return maxSoFar;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Max subarray sum: %d\n", maxSubArray(arr, n));
    return 0;
}
