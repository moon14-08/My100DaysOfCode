// Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float area, circumference,r;

    printf("Enter value of radius:\n");
    scanf("%f",&r);
    
    area=3.14*(r*r);
    circumference=2*3.14*r;

    printf("area is %.2f and circumference is %.2f",area,circumference);
    return 0;
}
