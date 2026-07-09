#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in C

    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = ", i);
        scanf("%d", &ptr[i]);
    }

    printf("The array is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n");

    n = 10;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = ", i);
        scanf("%d", &ptr[i]);
    }

    printf("The new array is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
}