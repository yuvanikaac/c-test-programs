#include <stdio.h>

void disp_2digit_even_sum6()
{
    int i = 10, sum;

    while (i < 100)
    {
        sum = (i / 10) + (i % 10);

        if (sum == 6 && i % 2 == 0)
        {
            printf("%d\n", i);
        }

        i++;
    }
}

int main()
{
    disp_2digit_even_sum6();

    return 0;
}