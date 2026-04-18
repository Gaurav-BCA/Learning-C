
// #include <stdio.h>

// int strlen(char str[])
// {
//     int i = 0;
//     while(str[i]!= '\0')
//     {
//         i++;
//     }
//     return i;
// }

// void my_strcpy(char target[], char source[])
// {
//    for (int i = 0; i < strlen(source)+1; i++)
//    {
//     target[i] = source[i];
//    }
// }
// int main()
// {
//     char a[] = "Gaurav Bisht";
//     char b[30];
//     my_strcpy(b, a);
//     printf("%s %s", a, b);
//     return 0;
// }

// Below is my code:-
#include <stdio.h>

void my_strcpy(char target[], char source[])
{
    int i;
    for (i = 0; source[i] != '\0'; i++)
    {
        target[i] = source[i];
    }
    target[i] = '\0'; // Add null terminator at the end
}

int main()
{
    char a[] = "Gaurav Bisht";
    char b[30];
    my_strcpy(b, a);
    printf("%s %s", a, b);
    return 0;
}
