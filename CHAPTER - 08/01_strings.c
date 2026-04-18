#include<stdio.h>

int main()
{
    char st[] = "abc"; // it's same as - char st[] = {'a','b','c','\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("Character at %d is %c\n", i, st[i]);
    }
        
    return 0;
}