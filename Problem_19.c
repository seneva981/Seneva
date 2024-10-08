// Write a program to check if a number is odd or even.

#include <stdio.h>
int main(){
    int a;
    // Even -> 1
    // Odd -> 0
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("%d", a%2 == 0);
    return 0;
}