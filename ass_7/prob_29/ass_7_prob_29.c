#include <stdio.h>

void disp_LCM3(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_LCM3(x);
    return 0;
}

void disp_LCM3(int x)
{
    int y, z, max;
    scanf("%d", &y);
    scanf("%d", &z);
    
    max = x;
    if (y > max)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }
    
    while (1)
    {
        if (max % x == 0 && max % y == 0 && max % z == 0)
        {
            printf("%d\n", max);
            break;
        }
        max++;
    }
}