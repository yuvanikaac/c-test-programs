#include <stdio.h>

int main()
{
    int x,num, divisor = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    x = num;
    
    loop:
    for ( ; x >= 10; )
    {
    
        x = x / 10;
        divisor = divisor * 10;
        goto loop;
    }
    
    // Check if the MSB (x) is even or odd
    if (x % 2 == 0)
    {
        printf("Result: %d\n", num);
    }
    else
    {
        num = num - divisor;
        printf("Result: %d\n", num);
    }
    
    return 0;
}