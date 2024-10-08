// Arguments and Parameters in Function

#include <stdio.h>

int add(int x, int y);

int main(){

    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("The sum of the number is: %d", add(a, b));

    return 0;
}

int add(int x, int y){
    return x + y;
}