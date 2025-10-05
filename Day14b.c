//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int n,i,product = 1;
    printf("Enter value of n:\n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        if(i % 2 == 0)     
        product *= i;
    }
    printf("Product of even no.=%d",product);
    return 0;
}