#include <stdio.h>

void disp_two_digit_square()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 100;

        if (digit == 16 || digit == 25 ||digit == 36 || digit == 49 ||digit == 64 || digit == 81)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total two-digit perfect squares = %d", count);
}

int main()
{
    disp_two_digit_square();

    return 0;
}