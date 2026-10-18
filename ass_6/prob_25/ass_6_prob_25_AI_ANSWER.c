#include <stdio.h>

int main()
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

    return 0;
}