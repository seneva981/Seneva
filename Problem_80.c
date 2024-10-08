// Pointer to pointer

#include <stdio.h>

int main(){
    float price = 100.00;
    float *ptr = &price;
    float **ptrt = &ptr;
    printf("%f\n", price);
    printf("%p\n", ptr);
    printf("%p\n", ptrt);
    return 0;
}