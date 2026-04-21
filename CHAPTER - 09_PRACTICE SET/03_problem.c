#include<stdio.h>

typedef struct Emplpyee
{
   int code;
   float salary;
}emp;

int main()
{
    emp e1;
    emp* ptr = &e1;
    // (*ptr).code = 877;
    // (*ptr).salary = 9000;

    ptr->code = 877;
    ptr->salary = 9000;

    printf("%.2f salary of %d code\n", ptr->salary, ptr->code);
    
    return 0;
}