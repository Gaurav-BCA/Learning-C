#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[19];
}Emp; // semicolon is important

int main()
{
    // typedef int gaurav; // gaurav used same as int datatype
    // gaurav a = 88;
    // printf("The value of a is %d\n", a);

    // typedef struct employee Emp;
    Emp e1;
    Emp* ptr = &e1;
    strcpy(e1.name, "Gaurav");
    e1.code = 222020;
    e1.salary = 54000;
    printf("| Name: %s | Code: %d | Salary: %.2f |\n", e1.name, e1.code, e1.salary);
    printf("| Name: %s | Code: %d | Salary: %.2f |\n", ptr->name, ptr->code, ptr->salary);
  
    
    return 0;
}