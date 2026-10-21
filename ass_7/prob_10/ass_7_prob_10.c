#include <stdio.h>

void disp_2digit_odd_sum_tens7(int);

int main ()
{
    int x, y;
    x=99;
    disp_2digit_odd_sum_tens7(x);
    return 0;
}

void disp_2digit_odd_sum_tens7(int x)
{
    int i, sum = 0;
    for(i = 70; i <= x; i++)
    {
        if(i % 2 != 0 && (i / 10 == 7))
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
}