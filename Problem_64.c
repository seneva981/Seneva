// Use library fuctions to calculate the square of a number given by the user.

#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter the number for which you want its square: ");
    scanf("%d", &a);

    printf("Power of the number is: %f", pow(a, 2));
    return 0;
}