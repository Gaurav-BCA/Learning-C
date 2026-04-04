#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter number = ");
    scanf("%d", &n);
    sum = sum +n;
    while(n!=0)
    {
        printf("Enter number = ");
        scanf("%d", &n);
        sum = sum +n;
    }
    printf("Sum of all numbers = %d", sum);
    return 0;
}