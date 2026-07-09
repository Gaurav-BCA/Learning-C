#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;

    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    // int arr[n]; // Not allowed in C

    printf("Table of number 7:-\n");
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7*(i+1);
        printf("7 X %d = %d\n", i+1 , ptr[i]);
    }
    int new = 15;
    ptr = (int *)realloc(ptr, new * sizeof(int));

    for (int i = n; i < new; i++)
    {
        ptr[i] = 7*(i+1);
        printf("7 X %d = %d\n", i+1, ptr[i]);
    }

    return 0;
}