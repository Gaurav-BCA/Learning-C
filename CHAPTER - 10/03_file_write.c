#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("gaurav.text", "w"); // w for write, it's delete the complete data of the file and write form begining
    ptr = fopen("gaurav.text", "a"); // a for appends, it's used to write further in the file 
    int num;
    printf("Print the number: ");
    scanf("%d", &num);
    fprintf(ptr, "%d\n", num);

    fclose(ptr);
    
    return 0;
}