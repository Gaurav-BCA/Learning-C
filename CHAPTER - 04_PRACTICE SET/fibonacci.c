#include <stdio.h>

int main()
{
    int n, a, b, c;
    printf("Enter N: ");
    scanf("%d", &n);
    a = 0;
    b = 1;
    c = 0;
    printf("Fibonacci series:-\n");

    // upto positive integer N:-
    // while (a <= n)
    // {
    //     printf("%d\n", a);
    //     c = a + b;
    //     a = b;
    //     b = c;
    // }

    // for N terms:-
    // for (int i = 1; i<=n; i++)
    // {
    //     printf("%d\n", a);
    //     c = a + b;
    //     a = b;
    //     b = c;
    // }

    return 0;
}