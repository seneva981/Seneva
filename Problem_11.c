// Take a number (n) from the user and output its cube(n*n*n)

#include <stdio.h>

int main(){
    int a;
    printf("Enter the number for which you want to get its cube: ");
    scanf("%d", &a);

    printf("Cube the number is %d", a*a*a);
    return 0;
}