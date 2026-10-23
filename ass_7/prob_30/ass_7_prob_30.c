#include <stdio.h>

void disp_count_HCF2(int);

int main ()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d", &x);
    disp_count_HCF2(x);
    return 0;
}

void disp_count_HCF2(int x)
{
    int y, i, hcf = 1;
    scanf("%d", &y);
    
    for (i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }
    
    printf("%d\n", hcf);
}