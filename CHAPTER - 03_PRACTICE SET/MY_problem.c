#include <stdio.h>

int main()
{
  
    int n1, n2, n3;
    int max;
    printf("Enter n1,n2,n3: ");
    scanf("%d,%d,%d", &n1, &n2, &n3);

    max = n1;

    if (n2 > max && n2>n3)
    {
        max = n2;
    }

       else if (n3 > max)
        {
            max = n3;
        }

        else
        {
            max = n1;
        }
    

    printf("%d is big no.", max);
    return 0;
    



      /*
     int n1,n2,n3;

     scanf("%d,%d,%d",&n1,&n2,&n3);

     if(n2>n1 && n2>n3)
      {
         printf("%d is max",n2);
      }

     else if(n3>n1 && n3>n2)
     {
         printf("%d is max",n3);
     }


     else
     {
     printf("%d is big no.",n1);
     }
    */
    // Above code is right!



    
    /*
    int n1,n2,n3;
    int max;
    scanf("%d,%d,%d",&n1,&n2,&n3);

    max = n1;
    if(n2>max && n2>n3)
     {
        printf("%d is max",n2);
     }

    else {
        if(n3>n2)
    {
        printf("%d is max",n3);
    }


    else
    {
         printf("%d is big no.",n1);
    }
    }
    */
    
    // Above code is wrong!

}