// Write a function to reverse an array.

#include <stdio.h>

void reverse(int arr[], int n);
void print_arr(int arr[], int n);

int main(){
    int arr[] = {3,6,2,5,4,6};
    reverse(arr, 6);
    print_arr(arr, 6);
    return 0;
    }

void print_arr(int arr[], int n){
    printf("Array in reverse order: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}

void reverse(int arr[], int n){
    for(int i = 0; i < n/2; i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}