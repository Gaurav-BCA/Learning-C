#include <stdio.h>
struct employee
{
    char name[19];
    int code;
    float salary;
}; // semicolon is important

int main()
{
    struct employee facebook[100]; // an array of structures
    // we can acess the data using:
    facebook[0].code = 100;
    facebook[1].code = 77;

    struct employee Gaurav = {2000, 5000, "Gaurav"};
    printf("| %s | %d | %.2f |", Gaurav.name, Gaurav.code, Gaurav.salary);

    return 0;
}