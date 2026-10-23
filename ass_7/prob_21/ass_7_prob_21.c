#include <stdio.h>

void disp_total_odd_digits(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_total_odd_digits(x);
    return 0;
}

void disp_total_odd_digits(int x)
{
    int count = 0, rem;
    
    if (x < 0)
    {
        x = -x;
    }
    
    while (x > 0)
    {
        rem = x % 10;
        if (rem % 2 != 0)
        {
            count++;
        }
        x = x / 10;
    }
    
    printf("%d\n", count);
}