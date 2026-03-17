#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    printf("r=");
    scanf("%d", &r);

    int h;
    printf("h=");
    scanf("%d", &h);

    float area, volume;
    area =  pi*r*r;
    volume = pi*r*r*h;

    printf("The area of circle with radius %d is %f\n", r, area);
    printf("The volume of cylinder with radius %d and height %d is %f", r, h, volume);
    return 0;
}
