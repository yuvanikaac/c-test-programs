#include <stdio.h>

void disp_LCM2(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    disp_LCM2(x);
    return 0;
}

void disp_LCM2(int x)
{
    int y, max;
    scanf("%d", &y);
    
    max = (x > y) ? x : y;
    
    while (1)
    {
        if (max % x == 0 && max % y == 0)
        {
            printf("%d\n", max);
            break;
        }
        max++;
    }
}