#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "source";
    char a1[] = "Gaurav";
    char a2[] = "Bisht";
    char target[30];
    int l = strlen(source);
    printf("\nLength of source is %d\n\n", l);

    strcpy(target, source); // target now contains "Gaurav"
    printf("source = %s, target = %s\n\n", source, target);

    strcat(a1, a2);
    printf("My full name is a1 %s, a2 = %s\n\n", a1, a2); // a1 now contains "GauravBisht" no space in between
    
    int a = strcmp("jar","far");
    printf("%d\n\n",a);
    return 0;
}