#include <stdio.h>

int sum(int, int);
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int x = 1;
    int y = 7;
    printf("The sum of x and y is %d\n", sum(x,y));
    return 0;
}