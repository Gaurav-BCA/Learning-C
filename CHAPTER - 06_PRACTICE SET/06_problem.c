#include<stdio.h>

void change_to_ten_times(int);

void change_to_ten_times(int a)
{
    a = a * 10; // it does not change the value of said variable
}
int main()
{
    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_ten_times(x);
    printf("Now the value of x is %d\n", x); //Now the value of x is 45

    return 0;
}
