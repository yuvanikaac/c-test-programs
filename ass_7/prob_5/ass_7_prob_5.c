#include <stdio.h>

void disp_odd(int);

int main ()
{
    int x, y;
    x=9;
    disp_odd(x);
    return 0;
}

void disp_odd(int x)
{
    int i;
    for(i = 1; i <= x; i += 2)
    {
        printf("%d\n", i);
    }
}