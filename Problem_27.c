// Conditional Statements
// If-else, else if and else

#include <stdio.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >=18)
    {
        printf("you are an adult");
    }
    else if (age < 18 && age > 12)
    {
        printf("You are an teenager");
    }
    else{
        printf("You are a child");
    }

    return 0;
}