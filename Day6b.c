//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
    int i;
    printf("Enter the value:\n");
    scanf("%d",&i);

    if (i<0)
    {
        printf("value is negative");
    }
    else if (i==0)
    {
        printf("Value is zero");
    }
    else
    {
        printf("value is positive");
    }
    return 0;
    
}