#include <stdio.h>

void disp_single_digit_square()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 0 || digit == 1 ||digit == 4 || digit == 9)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total single-digit perfect squares = %d", count);
}

int main()
{
    disp_single_digit_square();

    return 0;
}