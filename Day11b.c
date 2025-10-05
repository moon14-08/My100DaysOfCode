//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    int SP,CP;
    float Profit_percent,Loss_percent,Profit,Loss;

    printf("Enter SP and CP respectively:\n");
    scanf("%d %d", &SP,&CP);

    Profit= SP - CP;
    Loss = CP - SP ;

    if (SP > CP)
    {
       Profit_percent = (Profit/CP)*100;
       printf("profit_percent =%.2f\n", Profit_percent);
    }
    else if (CP > SP)
    {
       Loss_percent = (Loss/CP)*100;
       printf("Loss_percent =%.2f\n", Loss_percent);
    }
    else
    {
        printf("NO profit no loss\n");
    }
    return 0;
}