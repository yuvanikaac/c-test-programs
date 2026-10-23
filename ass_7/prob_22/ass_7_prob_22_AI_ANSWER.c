#include <stdio.h>

void disp_total_2digit_odd()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 100;

        if (digit >= 10 && digit <= 99 && digit % 2 != 0)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total two-digit odd numbers = %d", count);
}

int main()
{
    disp_total_2digit_odd();

    return 0;
}