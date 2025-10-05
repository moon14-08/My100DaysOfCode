//Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int n,rev =0,num;
    printf("Give a no.\n");
    scanf("%d",&n);
    
    while (n!= 0)
    {
        num = n % 10;      
        rev = rev * 10 + num; 
        n = n / 10;          
    }
    printf("value = %d",rev);  
    return 0;
}