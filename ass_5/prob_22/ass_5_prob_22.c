#include <stdio.h>

int main()
{
    int x, num, count = 0, twoDigit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    x = num;
    
    loop:
    for ( ; x >= 10; )
    {
        
        twoDigit = x % 100;
        if (twoDigit % 2 != 0)
        {
            count = count + 1;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("Total number of two-digit odd numbers: %d\n", count);
    
    return 0;
}