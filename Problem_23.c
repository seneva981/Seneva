// Write a program to print the average of 3 numbers.

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("The average of three numbers is %d", (a+b+c)/3);
    return 0;
}