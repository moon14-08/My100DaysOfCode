//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int sec, hour,min,total_sec;
    printf("Enter  time in seconds:\n");
    scanf("%d",&total_sec);

    hour = total_sec / 3600;
    min  = (total_sec % 3600) / 60;  
    sec  = (total_sec % 3600) % 60; 
    printf("total sec = %d:%d:%d",hour,min,sec);
    return 0;
}