#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array are: ");
    scanf("%d", &n);
    int A[n], B[n];

    printf("Inpur %d elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Elements - %d : ", i);
        scanf("%d", &A[i]);
    }

    printf("The element stored in the first array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nThe elements copied into the second array are: ");
    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
        printf("%d ", B[i]);
    }

    return 0;
}