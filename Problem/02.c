#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Numbers of values in A[n]: ");
    scanf("%d", &n);
    int A[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    printf("Sum of all elements stores in the array is: %d", sum);

    return 0;
}