#include <stdio.h>

float c2f(float);

float c2f(float c)
{
    return (9 * c) / 5 + 32;
}

int main()
{

    float c = 37.6;
    printf("%.2f celcius = %.2f fahrenheit", c, c2f(c));

    // float f, c = 37.6;
    // f = c2f(c);
    // printf("%.2f celcius = %.2f fahrenheit", c, f);

    return 0;
}

// #include <stdio.h>

// float c2f(float);

// float c2f(float c)
// {
//     printf("%.2f celcius = %.2f fahrenheit\n", c, (9 * c) / 5 + 32);
// }

// int main()
// {

//     float c = 37.6;
//     c2f(c);

//     c2f(46);
    

//     // float f, c = 37.6;
//     // f = c2f(c);
//     // printf("%.2f celcius = %.2f fahrenheit", c, f);

//     return 0;
// }