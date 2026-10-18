#include<stdio.h>
#include<math.h>

int main ()
{
    int x, temp, last_digit, first_digit, digits = 0, divisor = 1, middle_part, result;
    scanf("%d", &x);
    
    temp = x;
    last_digit = x % 10;
    
    loop:
    while(temp != 0)
    {
        if(digits == 0) {
            first_digit = temp % 10;
        }
        digits++;
        temp = temp / 10;
        goto loop;
    }
    
    int i = 1;
    loop2:
    while(i < digits)
    {
        divisor = divisor * 10;
        i++;
        goto loop2;
    }
    
    middle_part = (x % divisor) / 10;
    result = (last_digit * divisor) + (middle_part * 10) + first_digit;
    
    printf("%d\n", result);
}