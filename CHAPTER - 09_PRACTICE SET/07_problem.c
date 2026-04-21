#include <stdio.h>

typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} time;

int compare(time d1, time d2)
{
    // If d1 is greater than d2, then result is positive
    // If d1 amd d2 is equal, then result is 0
    // If d1 is smaller than d2, then result is negative

    if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd)
    {
        return 0;
    }
    else if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    time d1 = {19, 7, 2006};
    time d2 = {14, 7, 2006};
    
    printf("%d", compare(d1, d2));
    return 0;
}