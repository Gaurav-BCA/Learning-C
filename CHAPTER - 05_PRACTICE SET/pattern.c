#include <stdio.h>

int main()
{
    // 1st pattern is below there:-
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
                printf(" *");
        }
        printf("\n");
    }

    printf("\n");

    // 2nd pattern is below there:-
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
                printf(" *");
        }
        printf("\n");
    }

    printf("\n");

    // 3rd pattern is below there:-
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    

    return 0;
}




// 2nd pattern is below there
    
