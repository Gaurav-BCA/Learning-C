#include <stdio.h>
#define g 9.8
float Force(float);

float Force(float mass)
{
    return mass * g;
}
int main()
{
    float mass = 45;
    printf("Force = %.2f", Force(mass));
    return 0;
}

// #include <stdio.h>
// #define g 9.8
// float Force(float);

// float Force(float mass)
// {
//     printf("Force = %.2f\n", mass * g);
// }
// int main()
// {
//     float mass = 45;
//     Force(mass);
//     return 0;
// }