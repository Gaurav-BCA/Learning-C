#include<stdio.h>

int main(){
    int n, m, rev, rem, s;
    printf("Enter m = ");
    scanf("%d", &m);
    printf("Enter n = ");
    scanf("%d", &n);

    printf("Reverse number of 10 to %d:-\n", n);

    while(m<=n)
    {
        rev = 0, s = m;
        while(s!=0)
        {
            rem = s%10;
            rev = rev * 10 + rem;
            s = s/10;
        }
        printf("Reverse number of %d = %d\n", m, rev);
        m++;
    }
    return 0;
}