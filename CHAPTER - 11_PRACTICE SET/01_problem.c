#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in C

    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("| ptr[%d] = %d |", i, ptr[i]);
    }

    return 0;
}