
#include <stdio.h>

int main()
{
    int x, temp, first, last, power = 1;

    printf("Enter a number: ");
    scanf("%d", &x);

    temp = x;

loop:
    if (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
        goto loop;
    }

    first = temp;
    last = x % 10;

    if (last % 2 == 0)
    {
        printf("Result = %d", x);
    }
    else
    {
        x = x - power;
        printf("Result = %d", x);
    }

    return 0;
}
