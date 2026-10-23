#include <stdio.h>

void disp_count_sum14()
{
    int i = 1, temp, digit, sum, count = 0;

    while (i < 100000)
    {
        temp = i;
        sum = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }

        i++;
    }

    printf("Total count = %d", count);
}

int main()
{
    disp_count_sum14();

    return 0;
}