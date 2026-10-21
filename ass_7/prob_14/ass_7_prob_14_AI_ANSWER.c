#include <stdio.h>
#include <math.h>

void disp_interchange_first_last_digit(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    disp_interchange_first_last_digit(x);
    return 0;
}

void disp_interchange_first_last_digit(int x)
{
    int last_digit, first_digit, digits = 0, temp, divisor = 1, middle_part, result;
    
    if(x < 0)
    {
        x = -x;
    }
    
    last_digit = x % 10;
    temp = x;
    
    while(temp >= 10)
    {
        temp = temp / 10;
        digits++;
        divisor = divisor * 10;
    }
    
    first_digit = temp;
    middle_part = x % divisor;
    middle_part = middle_part / 10;
    
    result = last_digit * divisor + middle_part * 10 + first_digit;
    
    printf("%d\n", result);
}