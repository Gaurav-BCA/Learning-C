#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d, %d, %d", &a, &b, &c);

    if (a < b && a < c)
    {
        printf("%d is smaller no.", a);
    }
    else
    {
        if (b < c)
        {
            printf("%d is smaller no.", b);
        }
        else
        {
            printf("%d is smaller no.", c);
        }
    }
    return 0;
}