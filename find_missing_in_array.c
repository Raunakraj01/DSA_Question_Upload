#include <stdio.h>

int missingNumber(int arr[], int n) {
    int sum = 0, expected = n * (n + 1) / 2;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return expected - sum;
}

int main() {
    int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Missing number: %d\n", missingNumber(arr, n));
    return 0;
}
