#include <stdio.h>

typedef struct complex_num
{
    int real;
    int imaginary;
}Complex;

int main()
{
    Complex c ={5,3};
    printf("Complex number example: %d + i%d\n", c.real, c.imaginary);

    return 0;
}