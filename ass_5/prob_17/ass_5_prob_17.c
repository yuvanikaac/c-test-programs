#include <stdio.h>

int main()
{
    int x,num, sum = 0, isPrime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    x = num;
    loop1:
    for ( ; x != 0; )
    {
       
        sum = sum + (x % 10);
        x = x / 10;
        goto loop1;
    }
    
   
    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        x = 2;
        loop2:
        for ( ; x * x <= num; )
        {
            
            if (num % x == 0)
            {
                isPrime = 0;
                break;
            }
            x = x + 1;
            goto loop2;
        }
    }
    
    
    if (isPrime && sum == 14)
    {
        printf("Output - Prime & sum of digits is 14\n");
    }
    else if (!isPrime && sum == 14)
    {
        printf("Output - Not Prime but sum of digits is 14\n");
    }
    else if (isPrime && sum != 14)
    {
        printf("Output - Prime & sum of digits is not 14\n");
    }
    else
    {
        printf("Output - Not Prime and sum of digits is not 14\n");
    }
    
    return 0;
}