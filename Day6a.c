//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
    int i;
    printf("Enter the value:\n");
    scanf("%d",&i);

    if (i%2 == 0)
    {
        printf("value given is even");
    }
    else
    {
        printf("value given is odd");
    }
    return 0;
    
}