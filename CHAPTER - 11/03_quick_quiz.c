#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    // int arr[n]; // Not allowed in C

    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = ", i);
        scanf("%D", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("| ptr[%d] = %d |", i, ptr[i]);
    }

    return 0;
}