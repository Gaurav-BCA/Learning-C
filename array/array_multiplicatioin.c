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
            for (int k = 0; k < 2; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
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

/*
#include<stdio.h>

int main(){
    int a[3][2], b[2][3];
    int c[3][3];
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("c[%d][%d] = %d\n", i, j, c[i][j]);
        }
    }
    return 0;
}
*/