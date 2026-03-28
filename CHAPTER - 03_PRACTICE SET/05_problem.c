#include<stdio.h>

int main(){
    char ch;
    printf("The character is ");
    scanf("%c", &ch);
    printf("The value of character is %d\n", ch);


    if (ch>=97 && ch<=122){
        printf("This is a lower case alphabet.");
    }

    else{
        printf("This is not a lower case alphabet.");
    }
    return 0;
}