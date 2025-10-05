// Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the natural no.\n");
    scanf("%d",&n);
    i=n*(n+1)/2;
    printf("value will be %d",i);
    return 0;
}