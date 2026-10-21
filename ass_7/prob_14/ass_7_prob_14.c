#include <stdio.h>

void disp_interchange_first_last_digit()
{
    int n, temp, first, last, digits = 1, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;
    last = n % 10;

    result = (n % divisor) / 10;
    result = last * divisor + result * 10 + first;

    printf("Result = %d", result);
}

int main()
{
    disp_interchange_first_last_digit();

    return 0;
}