#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type
    float salary;
    char name[19];
}; // semicolon is important

int main()
{
    struct employee e1, e2;

    e1.code = 222020;
    e1.salary = 54000;
    strcpy(e1.name, "Gaurav");
    printf("| Name: %s | Code: %d | Salary: %.2f |\n", e1.name, e1.code, e1.salary);

    e2.code = 222021;
    e2.salary = 55000;
    strcpy(e2.name, "Amit");
    printf("| Name: %s | Code: %d | Salary: %.2f |\n", e2.name, e2.code, e2.salary);

    return 0;
}