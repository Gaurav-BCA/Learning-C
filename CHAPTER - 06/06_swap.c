#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int x = 8;
    int y = 6;
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d", x, y);
    return 0;
}

