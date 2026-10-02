#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array are: ");
    scanf("%d", &n);
    int A[n], B[n];
    
    printf("Inpur %d elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Elements - %d : ", i);
        scanf("%d", &A[i]);
    }

    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = i + 1; j<n; j++)
        {
            if(A[j] == A[i])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is: %d", count);
    return 0;
}