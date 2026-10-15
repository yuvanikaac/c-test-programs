#include <stdio.h>

int main()
{
    int x, num, count = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    x = num;
    
    loop:
    for ( ; x != 0; )
    {
       
        digit = x % 10;
        if (digit == 0 || digit == 1 || digit == 4 || digit == 9)
        {
            count = count + 1;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("Total number of single-digit perfect square numbers: %d\n", count);
    
    return 0;
}