//Question: Create a structure representing a bank account of a customer.


#include<stdio.h>

struct bankacc
{
    char name[30];      // To show the name of customer
    int accNo;          // To show the account number of customer
    char ifsc[12];      // To show the ifsc code of customer
    float balance;      // To show the balance in bank wallet of customer
    char address[100];  // To show the address of customer
};

int main()
{
    
    return 0;
}