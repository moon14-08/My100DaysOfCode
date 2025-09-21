//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int area,perimeter,l,b;
    printf("Enter values of lenght and breadth:\n");
    scanf("%d %d",&l,&b);
    
    perimeter = 2*(l+b);
    area = l*b;
    
    printf("Periemter is %d\n",perimeter);
    printf("Area is %d\n ",area);
    return 0;
}

