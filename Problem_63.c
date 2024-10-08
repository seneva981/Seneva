// Function

#include <stdio.h>

void gst(float a);

int main(){
    float a;
    printf("Enter the actual price: ");
    scanf("%f", &a);
    gst(a);
    printf("Actual price is: %f", a);
    return 0;
}

void gst(float a){
    printf("Price with gst is: %f\n", a + (0.18*a));
}