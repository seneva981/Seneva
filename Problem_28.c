// Conditional Statements
// Ternary Operator

#include <stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    age >= 18 ? printf("You are an adult"): printf("You are not adult");
    return 0;
}