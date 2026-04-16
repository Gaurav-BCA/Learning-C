#include <stdio.h>

int *sum(int a, int b)
{
    int s = a + b;
    printf("Sum = %d\n", s);
    int *ptr = &s;
    return ptr;
}

float *average(int a, int b)
{
    float avg = (a + b) / 2.0;
    printf("Average = %.2f\n", avg);
    float *ptr = &avg;
    return ptr;
}

int main()
{
    int x = 8, y = 9;
    int *ptr1;
    ptr1 = sum(x, y);
    float *ptr2;
    ptr2 = average(x, y);
    printf("The address of sum = %u and address of average = %u\n", ptr1, ptr2);
    return 0;
}
