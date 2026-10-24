#include <stdio.h>

void disp_2digit_odd_sum_tens7()
{
    int i = 70, sum = 0;

    while (i <= 79)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }

        i++;
    }

    printf("Sum = %d", sum);
}

int main()
{
    disp_2digit_odd_sum_tens7();

    return 0;
}