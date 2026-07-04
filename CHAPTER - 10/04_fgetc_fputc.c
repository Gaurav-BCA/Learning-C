#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("gaurav.text", "a");

    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c", c);

    fputc('c', ptr); // used to write a character in file

    fclose(ptr);

    return 0;
}