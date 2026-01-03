#include <stdio.h>

int main()
{
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}

/*
{
    int a;
    char ch;
    float b;
    printf("Size of char: %d bytes\n", sizeof(a));
    printf("Size of int: %d bytes\n", sizeof(ch));
    printf("Size of float: %d bytes\n", sizeof(b));
    return 0;
}
*/