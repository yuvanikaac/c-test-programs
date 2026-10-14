#include <stdio.h>

int main()
{
    int x,num, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        x = 2;
        loop:
        for ( ; x * x <= num; )
        {
            
            if (num % x == 0)
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
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}