// Pointers arithematic

#include <stdio.h>

int main(){
    int age = 22;
    int *ptr = &age;
    int _age = 23;
    int *_ptr = &_age;

    printf("Difference between %u and %u is = %u\n", ptr, _ptr, ptr-_ptr);
    _ptr = &age;
    printf("Comparison = %u", ptr == _ptr);
    return 0;
}