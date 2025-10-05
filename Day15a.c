//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int n,i,factorial = 1;
    printf("Enter value :\n"),
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        factorial = factorial*i ;
    }
    printf("value = %d",factorial);
    return 0;
}