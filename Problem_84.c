// Will the ouptut be same?

#include <stdio.h>

void printAdd(int a);

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    printAdd(a);
    printf("The address of the number is: %p\n", &a);

    return 0;
}

void printAdd(int a){
    printf("The address of the number after calling function is: %p\n", &a);
}