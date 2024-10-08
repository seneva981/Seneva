// Print 1(true) or 0(false) for the following statements.
// If it's Sunday and it's Snowing.

#include <stdio.h>

int main(){
    int isSunday;
    int isSnowing;
    printf("Enter '1' if it's Sunday and '0' if not: ");
    scanf("%d", &isSunday);
    printf("Enter '1' if its Snowing and '0' if not: ");
    scanf("%d", &isSnowing);

    printf("%d", isSunday && isSnowing);
    return 0;
}