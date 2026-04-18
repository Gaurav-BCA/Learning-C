// #include <stdio.h>

// int main()
// {
//     int arr[3][2];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("Enter the value of arr[%d][%d] = ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("The value of arr[%d][%d] = %d\n", i, j, arr[i][j]);
//             ;
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("arr[3][2] = {\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d, ", arr[i][j]);
        }
        printf("\n");
    }
    printf("}");

    return 0;
}