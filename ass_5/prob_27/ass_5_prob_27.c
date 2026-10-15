#include <stdio.h>

int main()
{
    int x, count = 0;
    x = 0;
    
    loop1:
    for ( ; x < 100000; )
    {
        
        int temp = x;
        int sum = 0;
        
        loop2:
        for ( ; temp != 0; )
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
            goto loop2;
        }
        
        if (sum == 14)
        {
            count = count + 1;
        }
        
        x = x + 1;
        goto loop1;
    }
    
    printf("Total count of numbers less than 100000 with sum of digits equal to 14: %d\n", count);[cite: 16]
    
    return 0;
}