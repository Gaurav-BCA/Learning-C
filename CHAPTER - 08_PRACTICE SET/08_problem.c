#include <stdio.h>

int main()
{
    char str[] = "Gaurav Bisht";
    int contains = 0;
    char ch = 'a';
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            contains = 1;
        }
    }
    if (contains)
    {
        printf("Yes it's contains");
    }
    else
    {
        printf("Does not contains");
    }
    return 0;
}