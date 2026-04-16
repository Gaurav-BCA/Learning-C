#include <stdio.h>

int main()
{
    char i = 'A';
    char *i1 = &i; // j is a pointer(character pointer), pointing to i
    float k = 5.232;
    float *k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", i1);
    printf("The address of k is %p\n", &k);
    printf("The address of k is %p\n", k1);

    printf("The character at address i is %c\n", i);
    printf("The character at address i is %c\n", *i1);
    printf("The character at address k is %.3f\n", k);
    printf("The character at address k is %.3f\n", *k1);
    return 0;
}