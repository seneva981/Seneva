// Arguments and Parameters in Function

#include <stdio.h>

int printTable(int n);

int main(){

    int n;
    printf("Enter the number for which you want to print the table: ");
    scanf("%d", &n);

    printTable(n);

    return 0;
}

int printTable(int n){

    for (int i = 1; i < 11; i++)
    {
        printf("%d\n", n*i);
    }
}