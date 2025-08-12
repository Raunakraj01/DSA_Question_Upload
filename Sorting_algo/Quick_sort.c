#include <stdio.h>

//Swaping using Function!
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Partition function 
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // pivot as last element!
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

//QuickSort Algorithm!(First Run)
void quickSort(int arr[], int low, int high) {
    if (low < high) { //condition when low crosses The high!
        int pi = partition(arr, low, high);

        //Recursive call on each iteration!
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//Printing the array Here!
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//main function using fixed value of array
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);
    return 0;

    
//if taking array input from user!
//if takking input then just replace n with len and everything will be same

// int len, arr2[100];
// printf("Enter the len of array: ");

// for(int i = 0; i <len ; i ++){
//     scanf("%d", &arr2);
// }
}