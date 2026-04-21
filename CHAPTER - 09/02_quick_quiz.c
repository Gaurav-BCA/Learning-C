#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[19];
}; // semicolon is important

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        struct employee ei;

        printf("Enter name: ");
        scanf("%s", &ei.name);

        printf("Enter code: ");
        scanf("%d", &ei.code);

        printf("Enter salary: ");
        scanf("%f", &ei.salary);

        printf("| Name: %s | Code: %d | Salary: %.2f |\n", ei.name, ei.code, ei.salary);
    }

    return 0;
}