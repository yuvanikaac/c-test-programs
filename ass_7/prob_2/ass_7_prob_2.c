#include <stdio.h>

void disp_descend(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    disp_descend(x);
    return 0;
}

void disp_descend(int x)
{
    int i;
    for(i = x; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}