#include <stdio.h>

int main()
{
    char str[] = "Gaurav Bisht";
    int count = 0;
    char ch = 'a';
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}