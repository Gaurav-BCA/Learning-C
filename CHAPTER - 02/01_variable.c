#include <stdio.h>

int main()
{
    int i = 10; // declare and initialize i with 10
    char j = 'i';
    int a = 3, b = 6, c = 1, d = 9;
    /*%d, %f, %c are called format specifier.
    %d is for int, %f is for float, %c is for char*/
    printf("the value of i is %d and j is %c\n", i, j);
    printf("the value of a is %d and c is %d\n", a, c);
    printf("the value of b is %d and d is %d\n", b, d);
    return 0;
}