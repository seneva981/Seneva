// Write a program to calculate area of a circle.

#include <stdio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("The area of the circle is: %f", 3.14*radius*radius);
    return 0;
}