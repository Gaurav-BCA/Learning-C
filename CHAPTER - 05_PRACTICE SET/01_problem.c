#include <stdio.h>
float average(int, int, int);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a, b, c;
    a = 2;
    b = 8;
    c = 11;
    printf("Average = %f\n", average(a, b, c));

    int x, y, z;
    float w;
    x = 6;
    y = 5;
    z = 4;
    w = average(x, y, z);
    printf("Average = %f\n", w);
    return 0;
}


// #include <stdio.h>
// float average(int, int, int);

// float average(int a, int b, int c)
// {
//     printf("Average = %f\n", (a + b + c) / 3.0);
// }
// int main()
// {
//     int a, b, c;
//     a = 2;
//     b = 8;
//     c = 11;
//     average(a, b, c);

//     int x, y, z;
//     float w;
//     x = 6;
//     y = 5;
//     z = 4;
//     w = average(x, y, z);
//     return 0;
// }

