
#include <stdio.h>

int main()
{
    int x, digit, reverse = 0;

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
        reverse = (reverse * 10) + digit;
        x = x / 10;
        goto loop;
    }

    printf("Reverse = %d", reverse);

    return 0;
}
