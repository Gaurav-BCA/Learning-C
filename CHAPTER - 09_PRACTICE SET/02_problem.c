#include <stdio.h>

struct vector
{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}
int main()
{
    struct vector v1 = {3, 6};
    struct vector v2 = {6, 3};
    struct vector v3 = sumVector(v1, v2);
    printf("The sum of vector v1 & v2 is v3 = %di + %dj\n", v3.i, v3.j);

    return 0;
}

// #include <stdio.h>

// typedef struct vector
// {
//     int i;
//     int j;
// }V;

// void sumVector(V v1, V v2)
// {
//     V v3;
//     v3.i = v1.i + v2.i;
//     v3.j = v1.j + v2.j;
//     printf("Sum of %di + %dj and %di + %dj = %di + %dj\n", v1.i, v1.j, v2.i, v2.j,v3.i, v3.j);
// }
// int main()
// {
//     V v1, v2;
//     v1.i = 3;
//     v1.j = 6;
//     v2.i = 6;
//     v2.j = 3;
//     sumVector(v1, v2);
//     return 0;
// }