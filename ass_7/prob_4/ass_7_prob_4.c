#include <stdio.h>

void disp_rsum(int);

int main ()
{
    int x, y;
    x=6;
    disp_rsum(x);
    return 0;
}

void disp_rsum(int x)
{
    int i, sum = 0;
    for(i = x; i >= 1; i--)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
}