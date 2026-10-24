
#include <stdio.h>
#include <string.h>

void getnumbers(char number1[], char number2[])
{
    printf("Enter first number: ");
    scanf("%50s", number1);

    printf("Enter second number: ");
    scanf("%50s", number2);
}

void addnumbers(char number1[], char number2[], char result[])
{
    int i, j, k;
    int carry = 0, sum;
    int len1 = strlen(number1);
    int len2 = strlen(number2);

    i = len1 - 1;
    j = len2 - 1;
    k = 0;

    while(i >= 0 || j >= 0 || carry > 0)
    {
        sum = carry;

        if(i >= 0)
        {
            sum = sum + (number1[i] - '0');
            i--;
        }

        if(j >= 0)
        {
            sum = sum + (number2[j] - '0');
            j--;
        }

        result[k] = (sum % 10) + '0';
        carry = sum / 10;
        k++;
    }

    result[k] = '\0';

    for(i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }
}

void print(char result[])
{
    printf("Sum = %s\n", result);
}

int main()
{
    char number1[51], number2[51];
    char result[52];

    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);

    return 0;
}
