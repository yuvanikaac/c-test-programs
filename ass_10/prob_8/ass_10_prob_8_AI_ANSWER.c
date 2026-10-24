
#include <stdio.h>
#include <string.h>

int main()
{
    char str[51];
    int i, valid = 1;

    printf("Enter a number: ");
    scanf("%50s", str);

    if(strlen(str) > 50 || strlen(str) == 0)
    {
        valid = 0;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            valid = 0;
            break;
        }
    }

    if(valid == 1)
    {
        printf("Valid number");
    }
    else
    {
        printf("Invalid number");
    }

    return 0;
}
