#include<stdio.h>

int main()
{
    char st[30];
    printf("Write below here:-\n");
    gets(st); // The enter string is stored in st!
    puts(st); // Little bit same as - printf("%s",st);
    printf("He is very genius");
    return 0;
}