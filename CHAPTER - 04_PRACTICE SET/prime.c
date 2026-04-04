#include <stdio.h>

int main()
{
    int n, flag;
    printf("Enter number: ");
    scanf("%d", &n);
    flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag++;
        }
    }
    if (flag == 2)
    {
        printf("%d is prime.", n);
    }
    else
    {
        printf("%d is not prime.", n);
    }
    return 0;
}