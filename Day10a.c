// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    int a,b,c ;
    printf("Enter side length:\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Traiangle verified\n");
        if (a==b || b==c || c==a)
        {
            printf("Triangle is isosceles");
        }
        else if (a==b && b==c )
        {
            printf("Triangle is equilateral");
        }
        else 
        {
            printf("Triangle is scalene");
        }
        
    }
    else
    {
        printf("Triangle is not valid");
    }
    return 0;
    
}