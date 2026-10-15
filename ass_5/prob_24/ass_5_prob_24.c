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
       
        if (twoDigit == 16 || twoDigit == 25 || twoDigit == 36 || 
            twoDigit == 49 || twoDigit == 64 || twoDigit == 81)
        {
            count = count + 1;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("Total number of two-digit perfect square numbers: %d\n", count);[cite: 20]
    
    return 0;
}