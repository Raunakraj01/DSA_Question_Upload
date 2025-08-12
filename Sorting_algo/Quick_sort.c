#include <stdio.h>
#include <time.h>

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
    int arr[100], len;
    printf("Enter the number of elements: ");
    scanf("%d",&len);

    printf("Enter The element of array: ");
    for(int i = 0; i<len; i ++){
        scanf("%d",&arr[i]);
    }
    int n = len;
    printf("Original array: ");
    printArray(arr, n);

    //Start the Timer
    clock_t start = clock();

    quickSort(arr, 0, n - 1);


    //Stop the Timmer
    clock_t end = clock();

    printf("Sorted array: ");
    printArray(arr, n);

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", time_taken);
    return 0;
}