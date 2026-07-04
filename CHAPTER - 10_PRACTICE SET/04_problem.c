#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("name_salary.txt", "a");

    char name[20];
    int salary;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name: ");
        scanf("%s", &name);
        printf("Enter the salary: ");
        scanf("%d", &salary);
        fprintf(ptr, "%s, %d\n", name, salary);
    }

    return 0;
}