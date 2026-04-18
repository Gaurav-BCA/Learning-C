// #include <stdio.h>

// int strlen(char str[])
// {
//     int i = 0;
//     while(str[i]!= '\0')
//     {
//         i++;
//     }
//     return i; 
// }
// int main()
// {
//     char str[] = "Gaurav Bisht";

//     printf("Length = %d", strlen(str));
//     return 0;
// }


// #include <stdio.h>

// int strlen(char str[])
// {
//     int i = 0, count;
//     char c  = str[i];
//     while(c!= '\0')
//     {
//         c = str[i];
//         i++;
//     }
//     count = i-1;
//     return count; 
// }
// int main()
// {
//     char str[] = "Gaurav Bisht";

//     printf("Length = %d", strlen(str));
//     return 0;
// }

// #include<stdio.h>

// int strlen(char str[]){
//     int count =0;
//     for (int i = 0; str[i] !=0 ; i++)
//     {
//         count++;
//     }
//     return count;
    
// }
// int main()
// {
//     char str[] = "Gaurav Bisht";
   
//     printf("Length = %d", strlen(str));
//     return 0;
// }

#include <stdio.h>
 
void strlen(char str[]) {  // Change the return type to void
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    printf("Length = %d\n", i); // Print the length directly
}

int main() {
    char str[] = "Gaurav";
    strlen(str); // Call the function to print the length

    return 0;
}
//above code is not provide correct length 
