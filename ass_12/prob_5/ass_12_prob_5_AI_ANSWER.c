
#include <stdio.h>
#include <string.h>

void getnumbers(char number1[], char number2[])
{
    printf("Enter first number: ");
    scanf("%50s", number1);

    printf("Enter second number: ");
    scanf("%50s", number2);
}

void multiplynumbers(char number1[], char number2[], char result[])
{
    int a[50], b[50], c[101] = {0};
    int i, j, len1, len2, len;

    len1 = strlen(number1);
    len2 = strlen(number2);

    for(i = 0; i < len1; i++)
        a[i] = number1[len1 - 1 - i] - '0';

    for(i = 0; i < len2; i++)
        b[i] = number2[len2 - 1 - i] - '0';

    for(i = 0; i < len1; i++)
    {
        for(j = 0; j < len2; j++)
        {
            c[i + j] += a[i] * b[j];
        }
    }

    for(i = 0; i < 100; i++)
    {
        c[i + 1] += c[i] / 10;
        c[i] = c[i] % 10;
    }

    len = len1 + len2;

    while(len > 1 && c[len - 1] == 0)
        len--;

    for(i = 0; i < len; i++)
        result[i] = c[len - 1 - i] + '0';

    result[len] = '\0';
}

void print(char result[])
{
    printf("Product = %s\n", result);
}

int main()
{
    char number1[51], number2[51];
    char result[102];

    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);

    return 0;
}
