// Initialization in float value and char value.

#include <stdio.h>
int main(){
    for(float i = 1.0; i <= 10.0 ;i++)
    {
        printf("%f\n", i);
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%c\n", i);
    }
    
    return 0;
}