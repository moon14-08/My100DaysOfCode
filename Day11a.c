//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number\n");
    scanf("%d",&month);
    switch (month)
    {
        case 1:
        printf("January and 31 days\n");
        break;
        case 2:
        printf("February and 28 days\n");
        break;
        case 3:
        printf("March and 31 days\n");
        break;
        case 4:
        printf("April and 30 days\n");
        break;
        case 5:
        printf("May and 31 days\n");
        break;
        case 6:
        printf("June and 30 days\n");
        break;
        case 7:
        printf("July and 31 days\n");
        break;
        case 8:
        printf("August and 31 days\n");
        break;
        case 9:
        printf("September and 30 days\n");
        break;
        case 10:
        printf("October and 31 days\n");
        break;
        case 11:
        printf("November and 30 days\n");
        break;
        case 12:
        printf("December and 31 days\n");
        break;
        default:
        printf("not sufficient data\n");
        break;
    }
    return 0;
}

