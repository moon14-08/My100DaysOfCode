// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int s,d,p,q,a,b;
    printf("Enter two values:\n");
    scanf("%d %d",&a,&b);

    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;

    printf("sum is %d\n",s);
    printf("difference is %d\n",d);
    printf("product is %d\n",p);
    printf("quotient is %d\n",q);

    return 0;
}

