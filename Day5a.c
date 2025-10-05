// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include <math.h> //need for power , otherwise shows error.
int main()
{
    float p,r,t,CI,SI,A;
    printf("Enter the value of principal,rate and time:\n");
    scanf("%f %f %f",&p,&r,&t);
    SI=p*r*t/100;
    A = p *pow((1 + r / 100), t);
    CI=A-p;
    printf("Value of SI is %.2f\n",SI);
    printf("Value of CI is %.2f",CI);
    return 0;
}
