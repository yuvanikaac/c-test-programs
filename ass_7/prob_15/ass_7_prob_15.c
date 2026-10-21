
#include <stdio.h>

void check_last_digit_odd(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    check_last_digit_odd(x);
    return 0;
}

void check_last_digit_odd(int x)
{
    int temp = x;
    int divisor = 1;
    
    if (x < 0)
    {
        x = -x;
        temp = x;
    }
    
    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    
    
    if (temp % 2 != 0)
    {
        x = x - divisor;
    }
    
    printf("%d\n", x);
}

