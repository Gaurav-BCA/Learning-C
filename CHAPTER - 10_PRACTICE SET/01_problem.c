#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "r");

    printf("The values are");
    int num;
    for (int i = 0; i < 3; i++)
    {
    fscanf(ptr, "%d", &num);
    printf(" %d", num);
    }

    fclose(ptr);
    
    return 0;
}