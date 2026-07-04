#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("gaurav.text", "r");

    char ch;
    while (1)
    {
        ch = fgetc(ptr);
        // When all the character of file has been read, break
        if (ch == EOF)
        {
            break;
        }
        printf("%c", ch);
    }

    fclose(ptr);

    return 0;
}