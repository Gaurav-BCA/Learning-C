#include<stdio.h>

int main(){
    int a = 1;
    int b = 1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a and b is %d\n", a||b);
    printf("The value of a(not) is %d\n", !a);

    if(a&&b){
        printf("both are same\n");
    }
    

    // same as writing
    if(a){
        if(b){
            printf("both are same\n");
        }
    }

    // same as writing
    a&&b?printf("both are same"):printf("both are not same");
    return 0;
}