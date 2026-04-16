#include<stdio.h>

int main()
{
    int i = 2;
    int *ptr = &i;
    printf("Address of i is %u\n", &i);
    printf("Value of i s %d\n", *ptr);

    return 0;
}