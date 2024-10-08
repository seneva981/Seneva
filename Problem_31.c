// Write a program to check if a student passed or failed.

#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks < 30)
    {
        printf("Student is Failed.");
    }
    else if (marks >= 30 && marks < 100)
    {
        printf("Student is Passed.");
    }
    else
    {
        printf("Wrong Marks");
    }
    
    // marks >= 30 ? printf("PASS!") : printf("FAILED!");
    
    return 0;
}