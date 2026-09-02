#include <stdio.h>

int main()
{
    int A[2][2] = {{4, 4}, {5, 3}};
    int B[2][2] = {{2, 6}, {7, 4}};
    int C[2][2];
     
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = 0;
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }
    return 0;
}