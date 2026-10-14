
#include <stdio.h>

int main()
{
    int x, temp, first, last;
    int power = 1, result;

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

    result = (last * power) + (x % power) - last + first;

    printf("Result = %d", result);

    return 0;
}
