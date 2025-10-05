// Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two values of a and b\n");
    scanf("%d %d",&a,&b);
     c=a;
     a=b;
     b=c;
     
     printf("%d %d",a,b);
     
     return 0;
}
