#include <stdio.h>

void disp_2digit_odd_below20(int);

int main ()
{
    int x, y;
    x=20;
    disp_2digit_odd_below20(x);
    return 0;
}

void disp_2digit_odd_below20(int x)
{
    int i;
    for(i = 11; i <= x; i += 2)
    {
        printf("%d\n", i);
    }
}