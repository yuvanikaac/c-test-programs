
#include <stdio.h>

int main()
{
    int x, digit, sum = 0;
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
        sum = sum + digit;
        x = x / 10;
        goto loop;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
