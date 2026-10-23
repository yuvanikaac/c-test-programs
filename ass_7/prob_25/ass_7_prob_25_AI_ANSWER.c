#include <stdio.h>

void disp_single_digit_prime()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == 2 || digit == 3 ||digit == 5 || digit == 7)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total single-digit prime numbers = %d", count);
}

int main()
{
    disp_single_digit_prime();

    return 0;
}