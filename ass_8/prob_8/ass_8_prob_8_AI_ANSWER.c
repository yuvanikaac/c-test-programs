#include <stdio.h>

void disp_interchange_first_last_digit()
{
    int n, temp, first, last, divisor = 1, middle, result;

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

    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Result = %d", result);
}

int main()
{
    disp_interchange_first_last_digit();

    return 0;
}