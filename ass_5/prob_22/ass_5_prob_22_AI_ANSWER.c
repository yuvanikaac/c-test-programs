
#include <stdio.h>

int main()
{
    int x, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

loop:
    if (x >= 10)
    {
        digit = x % 100;

        if (digit >= 10 && digit % 2 != 0)
        {
            count++;
        }

        x = x / 10;
        goto loop;
    }

    printf("Total two-digit odd numbers = %d", count);

    return 0;
}
