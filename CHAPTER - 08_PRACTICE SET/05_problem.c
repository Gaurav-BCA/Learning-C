// Encrypt the code
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "My hotspot password is realmec21y";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s", str);
    return 0;
}
// go to problem no.6 to decrypt the code
