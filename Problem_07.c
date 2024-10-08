// Input
// Program to print sum of two numbers.

#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("The Sum of two numbers is: %d", sum);

    // also

    // printf("The sum of two numbers is: %d", a + b);
    return 0;
}