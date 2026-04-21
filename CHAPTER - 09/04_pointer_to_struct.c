#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[19];
}; // semicolon is important

int main()
{
    struct employee e1;
    e1.code = 55;
    struct employee *ptr;
    ptr = &e1;
    // now we can priint structure elements using:
    printf("%d\n",(*ptr).code);
    printf("%d",ptr->code); // Exactly same as printf("%d\n",(*ptr).code);
    return 0;
}