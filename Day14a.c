//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
    int n,i,odd,sum =0;
    printf("Enter value of n:\n");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        odd = (2*i -1);
        sum += odd ;
    }
    printf("Sum of odd no. is %d\n",sum);
    return 0;
    
}