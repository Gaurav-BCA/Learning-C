#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in C
    ptr[0] = 67;
    free(ptr);
    printf("ptr[0] = %d ", ptr[0]);

    return 0;
}