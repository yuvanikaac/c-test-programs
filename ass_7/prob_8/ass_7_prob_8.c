#include <stdio.h>

void disp_2digit_even_sum6(int);

int main ()
{
    int x, y;
    x=99;
    disp_2digit_even_sum6(x);
    return 0;
}

void disp_2digit_even_sum6(int x)
{
    int i;
    for(i = 10; i <= x; i++)
    {
        if(i % 2 == 0 && (i / 10 + i % 10 == 6))
        {
            printf("%d\n", i);
        }
    }
}