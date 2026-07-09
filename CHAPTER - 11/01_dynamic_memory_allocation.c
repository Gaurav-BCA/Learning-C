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

    ptr[0] = 3;
    ptr[1] = 7;

    ptr[2] = 2;
    ptr[3] = 8;
    printf("%d %d %d %d", ptr[0], ptr[1], ptr[2], ptr[3]);
    return 0;
}