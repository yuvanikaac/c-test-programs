#include <stdio.h>

void disp_2digit_even_sum6()
{
    int i = 2, count = 0, j, flag;

    while (i <= 9)
    {
        flag = 0;
        j = 2;

        while (j < i)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }

            j++;
        }

        if (flag == 0)
        {
            count++;
        }

        i++;
    }

    printf("Total single-digit prime numbers = %d", count);
}

int main()
{
    disp_2digit_even_sum6();

    return 0;
}