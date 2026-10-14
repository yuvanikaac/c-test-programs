#include <stdio.h>

int main()
{
    int x,num, lastTwo, isPrime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    
    lastTwo = num % 100;
    
    if (lastTwo <= 1)
    {
        isPrime = 0;
    }
    else
    {
        x = 2;
        loop:
        for ( ; x * x <= lastTwo; )
        {
            
            if (lastTwo % x == 0)
            {
                isPrime = 0;
                break;
            }
            x = x + 1;
            goto loop;
        }
    }
    
    if (isPrime)
    {
        printf("Output - Prime\n");[cite: 14]
    }
    else
    {
        printf("Output - Not Prime\n");[cite: 14]
    }
    
    return 0;
}