#include <stdio.h>

void disp_assend(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    disp_assend(x);
    return 0;
}

void disp_assend(int x)
{
    int i;
    for(i = 1; i <= x; i++)
    {
        printf("%d\n", i);
    }
}