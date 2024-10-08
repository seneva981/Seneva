// Print 1(true) or 0(false) for the following statements.
// If a number (two digit number) is greater than 9 and less than 100.

#include <stdio.h>

int main(){
    int a;
    printf("Enter a two digit number: ");
    scanf("%d", &a);
    printf("%d", a > 9 && a < 100);
    return 0;
}