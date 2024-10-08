// Write a program to enter price of 3 items and print their final cost with gst.

#include <stdio.h>
int main(){
    int items[3];
    printf("Enter price of first item: ");
    scanf("%d", &items[0]);
    printf("Enter price of second item: ");
    scanf("%d", &items[1]);
    printf("Enter price of third item: ");
    scanf("%d", &items[2]);

    printf("Final Cost of 1st item: %f\n", ((items[0])+(0.18*items[0])));
    printf("Final Cost of 1st item: %f\n", ((items[1])+(0.18*items[1])));
    printf("Final Cost of 1st item: %f\n", ((items[2])+(0.18*items[2])));

    return 0;
}