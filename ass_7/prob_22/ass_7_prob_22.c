#include <stdio.h>

void disp_total_2digit_odd(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_total_2digit_odd(x);
    return 0;
}

void disp_total_2digit_odd(int x)
{
    int count = 0, two_digit;
    
    if (x < 0)
    {
        x = -x;
    }
    
    while (x >= 10)
    {
        two_digit = x % 100;
        if (two_digit % 2 != 0)
        {
            count++;
        }
        x = x / 10;
    }
    
    printf("%d\n", count);
}