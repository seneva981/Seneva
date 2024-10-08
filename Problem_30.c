// Conditional Operators
// Nested If-else

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("Positive\n");
        if (num % 2 == 0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
    }
    else
    {
        printf("Negative");
    }

    return 0;
}