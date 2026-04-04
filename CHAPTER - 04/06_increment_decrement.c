// i++ prints i first and then increments i (Post increment operator).
// ++i increments i first and then prints i (Pre increment operator).

// i-- prints i first and then decrements i (Post decrement operator).
// --i decrements i first and then prints i (Pre decrement operator).

#include <stdio.h>

int main()
{
    int i = 5;

    printf("the value of i is %d\n", i);

    i = i + 5;
    printf("the value of i is %d\n", i); // i = 10

    printf("the value of i is %d\n", ++i); //  i = 11
    printf("the value of i is %d\n", i++); //  i = 11
    printf("the value of i is %d\n", i);   //  i = 12

    i += 2; // Same as i = i + 2
    printf("the value of i is %d\n", i); //  i = 14

    return 0;
}