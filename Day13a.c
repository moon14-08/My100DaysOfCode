//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    int a,b, rem;
    char cal;
    float sum,sub,mul,div;
    printf("Enter your value a and b\n");
    scanf("%d %d",&a,&b);

    printf("Enter character:\n");
    scanf(" %c",&cal);

    switch (cal)
    {
    case '+' :
        sum = a + b ;
        printf("sum is %.2f",sum);
        break;
    case '-':
        sub = a - b ;
        printf("sub is %.2f",sub);
        break;
    case '*':
        mul = a * b;
        printf("mul is %.2f",mul);
        break;
    case '/':
        div = a / b;
        printf("div is %.2f",div);
        break;
    case '%':
        rem = a % b;
        printf("rem is %d",rem);
        break;    
    default:
        printf("NO data availabe");
        break;
    }
    return 0;
}