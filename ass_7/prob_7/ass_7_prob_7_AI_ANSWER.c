#include <stdio.h>

void disp_2digit_odd_sum7()
{
    int i = 11, sum;

    while (i < 100)
    {
        sum = (i / 10) + (i % 10);

        if (sum == 7 && i % 2 != 0)
        {
            printf("%d\n", i);
        }

        i++;
    }
}

int main()
{
    disp_2digit_odd_sum7();

    return 0;
}