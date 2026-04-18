// #include <stdio.h>

// char *slice(char str[], int m, int n)
// {
//     char *ptr1 = &str[m];
//     char *ptr2 = &str[n];

//     str = ptr1;
//     str[n] = '\0';
//     return str;
// }
// int main()
// {
//     char str[] = "Gaurav Bisht";

//     printf("%s", slice(str, 1, 5));
//     return 0;
// }

#include <stdio.h>

char *slice(char str[], int m, int n)
{
    char *ptr = &str[m];

    str = ptr;
    str[n] = '\0';

    return str;
}
int main()
{
    char str[] = "Gaurav Bisht";

    printf("%s", slice(str, 1, 5));
    return 0;
}