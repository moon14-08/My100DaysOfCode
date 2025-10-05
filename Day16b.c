//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main ()
{
    int rev = 0 , num, n,value,real;
    printf("Enter the value\n");
    scanf("%d",&n);

    num = n;
    real =n;

    while (num!=0)
    {
    value = num % 10;       
    rev = rev * 10 + value; 
    num = num / 10; 
    }
    if (rev == real)
    {
        printf("It is palindrome");
    }
    else
    printf("Not a palindrome");

    return 0;
    
}