#include <stdio.h>

int main()
{
    int n;
    printf("Enter that number which table you want! = ");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}