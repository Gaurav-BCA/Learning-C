#include <stdio.h>

int main()
{
    // n! = 1 X 2 X 3 X 4 X 5 X ....... X n
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    int product = 1;
    int i = 1, n;
    printf("Enter the number = ");
    scanf("%d", &n);
    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("The factorial of %d is %d", n,product);
  
    return 0;
}