#include <stdio.h>

struct vector
{
    int i;
    int j;
};

int main()
{
    struct vector v;
    v.i = 5;
    v.j = 3;
    printf("Two dimensional vector example: %di + %dj\n", v.i, v.j);

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// struct vector
// {
//     char i[3];
//     char j[3];
// };

// int main()
// {
//     struct vector v;
//     strcpy(v.i, "5i");
//     strcpy(v.j, "2j");
//     printf("Two dimensional vector example: %s + %s\n", v.i, v.j);

//     return 0;
// }