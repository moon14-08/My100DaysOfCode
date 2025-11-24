//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
#include <string.h>

int main() 
{
    char num[100];
    int freq[10] = {0};

    printf("Enter an integer number:\n");
    scanf("%s", num);   

    for (int i = 0; i < strlen(num); i++) 
    {
        if (num[i] >= '0' && num[i] <= '9') 
        {   
            freq[num[i] - '0']++;
        }
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) 
    {
        if (freq[i] > freq[maxDigit]) 
        {
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times).\n", maxDigit, freq[maxDigit]);

    return 0;
}
