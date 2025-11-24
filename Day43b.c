//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[50];
    int i, len, flag = 1;

    printf("Enter a string:\n");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("It is a palindrome.\n");
    else
        printf("It is not a palindrome.\n");

    return 0;
}
