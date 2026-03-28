#include <stdio.h>
int main()
{
    int income;
    float tax = 0.0;

    printf("Enter income amount = ");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }

    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }

    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }

    else
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }

    printf("The tax pay by you is %.2fRs.", tax);

    return 0;
}
// int main()
// {
//     float income;
//     int tax;

//     printf("Enter income amount = ");
//     scanf("%f", &income);

//     if (income <= 2.5l)
//     {
//         tax = 0;
//     }

//     else if (income > 2.5l && income <= 5.0l)
//     {
//         tax = 5 ;
//     }

//     else if (income > 5.0l && income <= 10.0l)
//     {
//         tax = 20 ;
//     }

//     else
//     {
//         tax = 30 ;
//     }

//     printf("The tax pay by employee is %d", tax);
// }
