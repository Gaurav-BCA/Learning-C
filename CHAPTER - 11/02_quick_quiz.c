#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 1;

    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    // int arr[n]; // Not allowed in C

    ptr[0] = 35;
    ptr[1] = 74;
    ptr[2] = 22;
    ptr[3] = 89;
    ptr[4] = 54;

    printf("%.2f %.2f %.2f %.2f %.2f", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
    return 0;
}