#include <stdio.h>

int main()
{
    float P;
    printf("P=");
    scanf("%f", &P);

    int r;
    printf("r=");
    scanf("%d", &r);

    int t;
    printf("t=");
    scanf("%d", &t);

    printf("The value of simple interest is %f", (P * r * t) / 100);
    return 0;
}
