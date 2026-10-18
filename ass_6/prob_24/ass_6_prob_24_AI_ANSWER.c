#include <stdio.h>

int main()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 10)
    {
        digit = n % 100;

        if (digit == 16 || digit == 25 ||digit == 36 || digit == 49 ||digit == 64 || digit == 81)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total two-digit perfect square numbers = %d", count);

    return 0;
}