// Write a function to count the number of odd numbers in an array.

#include <stdio.h>

int count_odd(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int m = count_odd(arr, 11);
    printf("Number of odd numbers is: %d", m);
    return 0;
}

int count_odd(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}