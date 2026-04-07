#include <stdio.h>

// Function prototype
int change(int);

// Function definition
int change(int a)
{
    a = 01; // Misnomer
    return 0;
}
int main()
{
    int b = 88;
    change(b); // Function call // The value of b remains 22
     printf("b is %d\n", b); // Prints "b is 22"
    return 0;
}