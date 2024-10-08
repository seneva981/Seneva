// Write a program to find if a character entered by user is upper case or not.

#include <stdio.h>

int main(){
    char alpha;
    printf("Enter 'A-Z' or 'a-z': ");
    scanf("%c", &alpha);

    if (alpha >= 'A' && alpha <= 'Z')
    {
        printf("Upper Case");
    }
    else if (alpha >= 'a' && alpha <= 'z')
    {
        printf("Lower Case");
    }
    else
    {
        printf("Not English Letter");
    }
    return 0;
}