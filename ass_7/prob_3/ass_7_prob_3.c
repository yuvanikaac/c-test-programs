#include <stdio.h>

void disp_sum(int);

int main ()
{
    int x, y;
    x=5;
    disp_sum(x);
    return 0;
}

void disp_sum(int x)
{
    int i, sum = 0;
    for(i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
}