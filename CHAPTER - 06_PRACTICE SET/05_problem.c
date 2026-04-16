#include<stdio.h>

int main()
{
    int i = 2;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    printf("Address of i is %u\n", &i);
    printf("Value of i s %d\n", *ptr1);
    printf("Value of i s %d\n", **ptr2);

    return 0;
}