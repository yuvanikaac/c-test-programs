
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

        if (digit == 0 || digit == 1 ||
            digit == 4 || digit == 9)
        {
            count++;
        }

        x = x / 10;
        goto loop;
    }

    printf("Total single-digit perfect squares = %d", count);

    return 0;
}
