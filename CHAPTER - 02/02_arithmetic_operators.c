#include <stdio.h>

int main()
{
    int a = 8;
    int b = 3;
    int c = a + b;
    int d = a % b;
    printf("the value of a is %d and b is %d and sum is %d\n", a, b, c);
    // Modulus operator is used to get the remainder
    printf("the remainder, when a is divided by b, is: %d\n", d);
    return 0;
}