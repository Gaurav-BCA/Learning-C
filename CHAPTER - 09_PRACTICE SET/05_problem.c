#include <stdio.h>

typedef struct complex_num
{
    int real;
    int imaginary;
}Complex;

void display(Complex c[], int n)
{   
    for (int i = 0; i < n; i++)
    {
        printf("Enter real number: ");
        scanf("%d", &c[i].real);
        printf("Enter imaginary number: ");
        scanf("%d", &c[i].imaginary);

        printf("Complex number example: %d + i%d\n", c[i].real, c[i].imaginary);
    }
    
   
}
int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    Complex carr[n];
    display(carr, n);
    return 0;
}