// FROM DO_WHILE LOOP
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);

    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;

       do
        {
            if (n % i == 0 && n!=2)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
    }
    
        if (not_prime)
        {
            printf("%d is not prime ", n);
        }
        else
        {
            printf("%d is prime ", n);
        }
    

    return 0;
}

/* FROM WHILE LOOP :-
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);

    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        int i = 2;

        while (i < n)
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
            i++;
        }
    }
    {
        if (not_prime)
        {
            printf("%d is not prime ", n);
        }
        else
        {
            printf("%d is prime ", n);
        }
    }

    return 0;
}
*/