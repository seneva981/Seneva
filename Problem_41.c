// Print the numbers from zero to n, if n is given by the user.

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number n: ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}