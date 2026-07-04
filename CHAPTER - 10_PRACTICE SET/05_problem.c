#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("int.txt", "r");

    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    ptr = fopen("int.txt", "w");

    fprintf(ptr, "%d\n", 2*num);

    fclose(ptr);
    return 0;
}