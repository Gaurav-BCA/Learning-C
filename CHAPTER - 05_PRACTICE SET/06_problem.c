#include <stdio.h>
int sum_natural(int);

int sum_natural(int n)
{
    if(n == 1){
        return 1;
    }
    // sum(n) = 1 + 2 + 3 + 4 + 5 + ... + (n-1) + n
    // sum(n-1) = 1 + 2 + 3 + 4 + 5 + ... + (n-1)
    return sum_natural(n-1) + n;
}
int main()
{
    int n;
    printf("Enter n = ");
    scanf("%d", &n);

    printf("The sum of first %d natural number is %d.", n, sum_natural(n));
    return 0;
}