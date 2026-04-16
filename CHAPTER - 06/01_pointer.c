#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is a pointer(integer pointer), pointing to i

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of j is %p\n", &j);

    printf("The value at address i is %d\n", i);
    printf("The value at address i is %d\n", *(&i));
    printf("The value at address j is %d\n", *j);

    printf("%p = %p\n", j, &i);
    return 0;
}