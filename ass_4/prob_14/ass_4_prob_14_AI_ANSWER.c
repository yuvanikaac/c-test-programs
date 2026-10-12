#include <stdio.h>

int main()
{
    int x, temp, first, last, count = 0, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &x);

    temp = x;

loop:
    if (temp > 0)
    {
        count++;
        temp = temp / 10;
        goto loop;
    }

    temp = x;

    last = temp % 10;

    power = 1;
    count = count - 1;

power_loop:
    if (count > 0)
    {
        power = power * 10;
        count--;
        goto power_loop;
    }

    first = x / power;

    result = (last * power) + (x % power);
    result = (result / 10) * 10 + first;

    printf("Result = %d", result);

    return 0;
}