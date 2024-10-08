// Write a program to calculate perimeter of rectangle. Take sides ,a and b, from the user.

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &a);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    int perimeter = 2*(a+b);
    printf("The Perimeter of the rectangle is: %d", perimeter);
    return 0;
}