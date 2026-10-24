#include <stdio.h>

void disp_2digit_ones5()
{
    int i = 10, sum = 0;

    while (i < 100)
    {
        if (i % 10 == 5)
        {
            sum = sum + i;
        }

        i++;
    }

    printf("Sum = %d", sum);
}

int main()
{
    disp_2digit_ones5();

    return 0;
}