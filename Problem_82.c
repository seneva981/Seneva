// Pointers in function call.
// Call by value.

#include <stdio.h>

void square(int n);                                            // Call by value
void _square(int *a);                                          // Call by reference

int main(){
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    square(number);
    printf("Number is: %d\n", number);

    _square(&number);
    printf("Now number is: %d\n", number);
    return 0;
}

void square(int n){
    n = n  *  n;
    printf("Square = %d\n", n);
}

void _square(int *a){
    *a = (*a) * (*a);
    printf("%d\n", *a);
}