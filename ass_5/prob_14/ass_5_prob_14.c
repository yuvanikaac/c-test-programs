#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    
    int num, lastDigit, firstDigit, digits = 0, divisor = 1, middlePart, result;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10;
    x = num;
    
    loop:
    for ( ; x >= 10; )
    {
       
        x = x / 10;
        divisor = divisor * 10;
        goto loop;
    }
    
    firstDigit = x;
    middlePart = (num % divisor) / 10;
    result = (lastDigit * divisor) + (middlePart * 10) + firstDigit;
    
    printf("Output: %d\n", result);
    
    return 0;
}