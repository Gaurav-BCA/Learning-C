#include <stdio.h>

int main()
{
    // n! = 1 X 2 X 3 X 4 X 5 X ....... X n
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    int product = 1;
    int n;
    printf("Enter the number = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial is %d", product);
    return 0;
}