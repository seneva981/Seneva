// Conditional Statements
// If-else

#include <stdio.h>
int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult");
    }
    else{
        printf("You are not an adult");
    }
    
    return 0;
}