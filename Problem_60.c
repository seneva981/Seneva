// Write a function that prints Namaste if user is Indian and Bonjour if the user is French.

#include <stdio.h>

void namaste();
void bonjour();

int main(){

    char a;
    printf("Enter 'i' for Indian and 'f' for French: ");
    scanf("%c", &a);

    if (a == "i")
    {
        namaste();
    }
    else if (a == "f")                                                                    //Giving Warning
    {
        bonjour();
    }
    
    return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}