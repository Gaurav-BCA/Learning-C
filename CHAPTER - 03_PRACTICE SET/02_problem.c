#include <stdio.h>

int main()
{
    int s1, s2, s3;
    float obtained_percentage;
    // subject is denote from s.
    printf("Enter the value of each subject:-\n");

    printf("s1 = ");
    scanf("%d", &s1);

    printf("s2 = ");
    scanf("%d", &s2);

    printf("s3 = ");
    scanf("%d", &s3);

    printf("The marks are %d, %d and %d.\n", s1, s2, s3);

    obtained_percentage = (((s1 + s2 + s3) / 300.0) * 100);
    printf("Obtained percentage = %f.\n", obtained_percentage);

    if (s1 < 33 || s2 < 33 || s3 < 33)
    {
        printf("You are failed due to less marks in individual subjects.");
    }

    else if (obtained_percentage < 40)
    {
        printf("You are failed due to less percentage.");
    }

    else
    {
        printf("You are passed!");
    }

    return 0;
}