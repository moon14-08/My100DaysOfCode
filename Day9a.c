//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include<math.h>
int main()
{
    int D,b,a,c;
    float x1,x2;
    printf("Enter cofficients:\n");
    scanf("%d %d %d",&a,&b,&c);

    D =b*b - 4*(a*c);
    
    if (D>0)
    {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        printf("real and different");
    }
    else if (D==0)
    {
       int y = -b/2*a;
        printf("real and same");
    }
    else 
    {
        printf("not real");
    }

    printf(" %.2f",x1);
    printf(" %.2f",x2);
    return 0;
}