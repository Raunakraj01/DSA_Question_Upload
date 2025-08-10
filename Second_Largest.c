#include <stdio.h>

int main() {
    int arr[10];
    int largest, secondlargest;

    // Input 10 integers
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondlargest = -2147483648;  // Minimum value of int

    // Find the largest and second largest
    for (int i = 0; i < 10; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] < largest) {
            secondlargest = arr[i];
        }
    }

    if (secondlargest == -2147483648) {
        printf("No second largest number found.\n");
    } else {
        printf("Second largest number is %d\n", secondlargest);
    }
    return 0;
}