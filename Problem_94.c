// Taking input and giving output of an array using pointer.

#include <stdio.h>

int main(){
    int aadhaar[5];
    int *ptr = &aadhaar[0];
    for(int i = 0; i < 5; i++){
        printf("%d Index = ", i);
        scanf("%d", (ptr+i));
    }
    for(int i = 0; i < 5; i++){
        printf("%d Index = %d\n", i, *(ptr+i));
    }

    // int aadhaar[5];
    // printf("Enter list of aadhaar: ");
    // for(int i = 0; i < 5; i++){
    //     scanf("%d", &aadhaar[i]);
    // }
    // for(int i = 0; i < 5; i++){
    //     printf("Aadhaar number at %d is: %d\n", i, aadhaar[i]);
    // }
    return 0;
}
