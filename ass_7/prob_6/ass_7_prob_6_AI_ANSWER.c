#include <stdio.h>

void disp_2digit_odd_below20()
{
    int i = 11;

    while (i < 20)
    {
        printf("%d\n", i);
        i = i + 2;
    }
}

int main()
{
    disp_2digit_odd_below20();

    return 0;
}