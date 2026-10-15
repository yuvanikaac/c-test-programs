
#include <stdio.h>

int main()
{
    int x, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x < 0)
    {
        x = -x;
    }

loop:
    if (x > 0)
    {
        digit = x % 10;

        if (digit % 2 != 0)
        {
            count++;
        }

        x = x / 10;
        goto loop;
    }

    printf("Total odd digits = %d", count);

    return 0;
}
