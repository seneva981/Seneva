// Write a program to check if the given number is a natural number.
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("Yes entered number is natural number.");
    }
    else
    {
        printf("No it is not natural number.");
    }
    
    return 0;
}