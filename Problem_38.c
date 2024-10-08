// Pre Increment
// Post Increment
// Pre Decrement
// Post Decrement

#include <stdio.h>
int main(){
    int i = 1;
    printf("%d\n", i++);              //Post Increment
    printf("%d\n", i);

    printf("%d\n", ++i);              //Pre Increment
    printf("%d\n", i);

    printf("%d\n", i--);              //Post Decrement
    printf("%d\n", i);

    printf("%d\n", --i);              //Pre Decrement
    printf("%d\n", i);
    return 0;
}