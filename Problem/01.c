#include <stdio.h>

int main()
{
    int n;
    printf("Numbers of values in A[n]: ");
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("The value store into the array are: ");
    for (int i = 0; i < n; i++)
    {
        {
            printf("%d ", A[i]);
        }
    }

    printf("\nThe value store into the array in reverses are: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n, temp;
//     printf("Numbers of values in A[n]: ");
//     scanf("%d", &n);
//     int A[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     printf("The value store into the array are: ");
//     for (int i = 0; i < n; i++)
//     {
//         {
//             printf("%d ", A[i]);
//         }
//     }

//     for (int i = 0; i < n/2; i++)
//     {
//         temp = A[i];
//         A[i] = A[n-1-i];
//         A[n-1-i] = temp;
//     }

//     printf("\nThe value store into the array in reverses are: ");
//     for (int i = 0; i <n; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     return 0;
// }