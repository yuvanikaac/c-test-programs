
#include <stdio.h>
#include <string.h>

int main()
{
    int a[50], b[50], result[51];
    int i, j, carry = 0, sum;
    char num1[51], num2[51];
    int len1, len2, len;

    printf("Enter first number: ");
    scanf("%50s", num1);

    printf("Enter second number: ");
    scanf("%50s", num2);

    len1 = strlen(num1);
    len2 = strlen(num2);

    for(i = 0; i < len1; i++)
    {
        a[i] = num1[len1 - 1 - i] - '0';
    }

    for(i = 0; i < len2; i++)
    {
        b[i] = num2[len2 - 1 - i] - '0';
    }

    len = (len1 > len2) ? len1 : len2;

    for(i = 0; i < len; i++)
    {
        if(i >= len1)
            a[i] = 0;

        if(i >= len2)
            b[i] = 0;

        sum = a[i] + b[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }

    if(carry > 0)
    {
        result[len] = carry;
        len++;
    }

    printf("Sum = ");

    for(i = len - 1; i >= 0; i--)
    {
        printf("%d", result[i]);
    }

    return 0;
}
