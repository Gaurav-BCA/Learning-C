#include <stdio.h>

int main()
{
    int A[3][3];
    int At[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("A[3][3] = {");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }
    }
    printf("}");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           At[i][j] = A[j][i];
        }
    }
    printf("\nAt[3][3] = {");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", At[i][j]);
        }
    }
    printf("}");
    return 0;
}