// Pointer arithematic

#include <stdio.h>

int main(){
    int age = 4;
    int *ptr = &age;
    printf("Actual Address: %u\n", ptr);
    ptr++;
    printf("Address after increment: %u\n", ptr);
    ptr--;
    printf("Address after decrement: %u\n", ptr);
    ptr--;
    printf("Address after decrement again: %u\n", ptr);

    float price = 20.00;
    float *ptrt = &price;
    printf("Actual Address: %u\n", ptrt);
    ptrt++;
    printf("Address after increment: %u\n", ptrt);
    ptrt--;
    printf("Address after decrement: %u\n", ptrt);
    ptrt--;
    printf("Address after decrement again: %u\n", ptrt);

    char star = '*';
    char *ptrtr = &star;
    printf("Actual Address: %u\n", ptrtr);
    ptrtr++;
    printf("Address after increment: %u\n", ptrtr);
    ptrtr--;
    printf("Address after decrement: %u\n", ptrtr);
    ptrtr--;
    printf("Address after decrement again: %u\n", ptrtr);

    return 0;
}