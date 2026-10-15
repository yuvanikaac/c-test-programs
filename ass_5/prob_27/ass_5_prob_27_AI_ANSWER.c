
#include <stdio.h>

int main()
{
    int x = 1, temp, digit, sum;
    int count = 0;

loop:
    if (x < 100000)
    {
        temp = x;
        sum = 0;

digit_loop:
        if (temp > 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
            goto digit_loop;
        }

        if (sum == 14)
        {
            count++;
        }

        x++;
        goto loop;
    }

    printf("Total count = %d", count);

    return 0;
}
