
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

        if (digit == 16 || digit == 25 ||
            digit == 36 || digit == 49 ||
            digit == 64 || digit == 81)
        {
            count++;
        }

        x = x / 10;
        goto loop;
    }

    printf("Total two-digit perfect squares = %d", count);

    return 0;
}
