#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("file.txt", "r");
    ptr2 = fopen("file1.txt", "a");

    char ch;
    while (1)
    {
        ch = fgetc(ptr1);
        // When all the character of file has been read, break
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
        fprintf(ptr2, "%c", ch);
        fprintf(ptr2, "%c", ch);
    }

    fclose(ptr1);

    return 0;
}