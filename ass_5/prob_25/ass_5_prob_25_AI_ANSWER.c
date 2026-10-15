
#include <stdio.h>

int main()
{
    int x, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

loop:
    if (x > 0)
    {
        digit = x % 10;

        if (digit == 2 || digit == 3 ||
            digit == 5 || digit == 7)
        {
            count++;
        }

        x = x / 10;
        goto loop;
    }

    printf("Total single-digit prime numbers = %d", count);

    return 0;
}
