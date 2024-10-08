// Array

#include <stdio.h>
int main(){
    int marks[3];
    printf("Enter Physics Marks: ");
    scanf("%d", &marks[0]);

    printf("Enter Math Marks: ");
    scanf("%d", &marks[1]);
    
    printf("Enter Chemistry Marks: ");
    scanf("%d", &marks[2]);

    printf("Physics Marks: %d\n", marks[0]);
    printf("Math Marks: %d\n", marks[1]);
    printf("Chemistry Marks: %d\n", marks[2]);
    return 0;
}