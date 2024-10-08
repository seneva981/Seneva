// Swap two numbers, a and b.

#include <stdio.h>

void swap_by_value(int x, int y);
void swap_by_ref(int *p, int *q);

int main(){
    int a, b;
    printf("Enter a and b: \n");
    scanf("%d\n %d", &a, &b);
    swap_by_value(a, b);
    printf("Actual value is: a = %d and b = %d\n", a, b);
    swap_by_ref(&a, &b);
    printf("Actual value became: a = %d and b = %d", a, b);
    return 0;
}

// Function for swapping by value
void swap_by_value(int x, int y){                                                                          //Not Understood
    int s = x;
    x = y;
    y = s;
    printf("Swapped value is: a = %d and b = %d\n", x, y);
}

// Function for swapping by reference
void swap_by_ref(int *p, int *q){
    int t = *p;
    *p = *q;
    *q = t;
    printf("Swapped by reference value is: a = %d and b = %d\n", *p, *q);
}