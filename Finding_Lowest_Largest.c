#include <stdio.h>

void Find_largest(int* arr, int len){

    int largest = arr[0];
    for(int i = 1; i< len; i++){
        if(arr[i] < largest){
            largest = arr[i];
        }
    }
    printf("The largest number is: %d", largest);
}

void Find_Lowest(int* arr, int len){

    int lowest = arr[0];
    for(int i = 1; i< len; i ++){
        if(arr[i] > lowest){
            lowest = arr[i];
        }
    }
    printf("Lowest Element is array is: %d",lowest);
    

}

int main(){

    int arr[100], len;
    printf("Enter the length of array <100: ");
    scanf("%d",&len);
    printf("Enter the Array Elements: ");
    for(int i = 0; i <=len; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter < for finding lowest value: ");
    printf("Enter > for finding largest number: ");
    char choice;
    scanf("%s",choice);
    switch (choice)
    {
    case '<' :
     Find_Lowest(arr, len);
        break;
    
    case '>' :
    Find_largest(arr, len);
    default:
        break;
    }


}