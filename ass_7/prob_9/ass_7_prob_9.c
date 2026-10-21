#include <stdio.h>

void disp_2digit_ones5(int);

int main ()
{
    int x, y;
    x=99;
    disp_2digit_ones5(x);
    return 0;
}

void disp_2digit_ones5(int x)
{
    int i, sum = 0;
    for(i = 10; i <= x; i++)
    {
        if(i % 10 == 5)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
}