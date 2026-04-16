#include <stdio.h>

int sum(int *, int *);

// Sum should change value of x
int sum(int *a, int *b)
{
    *a = 7;
    // printf("x = ");
    // scanf("%d", &(*a));
    return *a + *b;
}

int main()
{
    int x = 1;
    int y = 7;
    printf("The sum of x and y is %d\n", sum(&x, &y));
    printf("The value of x is %d\n", x);
    return 0;
}