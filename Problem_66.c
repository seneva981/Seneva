// Recursion
// Print "Hello World" 10 times using recursion.

#include <stdio.h>

void printHello(int a);

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printHello(a);
    return 0;
}

void printHello(int a){
    if (a == 0)
    {
        return;
    }
    printf("Hello World!\n");
    printHello(a - 1);
}