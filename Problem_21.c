// Print 1(true) or 0(false) for the following statements.
// If it's Monday or it's Raining.

#include <stdio.h>

int main(){
    int isMonday;
    int isRaining;
    printf("Enter '1' if it's Monday and '0' if not: ");
    scanf("%d", &isMonday);
    printf("Enter '1' if it's Raining and '0' if not: ");
    scanf("%d", &isRaining);

    printf("%d", isMonday || isRaining);
    return 0;
}