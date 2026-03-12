#include <stdio.h>

int main()
{
    // int length = 4;
    // int width = 9;
    int length, width;
    printf("Enter length:-\n");
    scanf("%d", &length);
    printf("Enter width:-\n");
    scanf("%d", &width);
    int Area = length * width;
    int Parameter = 2 * (length + width);
    printf("The area of this rectangle is %d X %d = %d\n", length, width, Area);
    printf("The parameter of this rectangle is 2(%d + %d) = %d", length, width, Parameter);
    return 0;
}