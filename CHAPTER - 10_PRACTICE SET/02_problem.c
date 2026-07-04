#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Table.txt", "a");

    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    fputs("Table of number ", ptr);
    fprintf(ptr, "%d:-\n", n);

    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", n, i, n*i);
    }
    fputc('\n', ptr);

    fclose(ptr);
    
    return 0;
}