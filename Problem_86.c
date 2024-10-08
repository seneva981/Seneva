// Write a function to calculate the sum, product and average of two numbers. Print that average in the main function.

#include <stdio.h>

void doWork(int *a, int *b, int *sum, int *product, int *average);

int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    int sum, product, average;
    doWork(&a, &b, &sum, &product, &average);
    printf("Sum is: %d\n", sum);
    printf("product is: %d\n", product);
    printf("Average is: %d\n", average);
    return 0;
}

void doWork(int *a, int *b, int *sum, int *product, int *average){
    *sum = (*a) + (*b);
    *product = (*a)*(*b);
    *average = ((*a) + (*b))/2;
}