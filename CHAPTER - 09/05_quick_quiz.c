#include <stdio.h>
#include<string.h>

struct employee
{
    char name[19];
    int code;
    float salary;
}; // semicolon is important

void show(struct employee e)
{
    // printf("Enter name: ");
    // scanf("%s", &e.name);

    // printf("Enter code: ");
    // scanf("%d", &e.code);

    // printf("Enter salary: ");
    // scanf("%f", &e.salary);

    printf("| Name: %s | Code: %d | Salary: %.2f |\n", e.name, e.code, e.salary);
}
int main()
{
    struct employee e1, e2;
    strcpy(e1.name, "Gaurav");
    e1.code = 88;
    e1.salary = 90000; 
    show(e1);
    // show(e2);
    return 0;
}