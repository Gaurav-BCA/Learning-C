#include <stdio.h>
/*
Fibbonacci series = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
In mathematical terms, it can be defined by the recurrence relation:-
Fibonacci(1)=0
𝐹ibonacci(2)=1
Fibonacci(n)=Fibonacci(n−1)+Fibonacci(n−2) for 𝑛≥2
*/
int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    // printf("The value of fibonacci series at %d is %d.", n, fibonacci(n));
    return 0;
}