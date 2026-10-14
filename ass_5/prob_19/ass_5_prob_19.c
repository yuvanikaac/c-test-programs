#include <stdio.h>

int main()
{
    int x;
    // Your Code here
    int num, middleTwo, isPrime = 1;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    // Get the middle two digits (hundred's and ten's digit)
    middleTwo = (num / 10) % 100;
    
    if (middleTwo <= 1)
    {
        isPrime = 0;
    }
    else
    {
        x = 2;
        loop:
        for ( ; x * x <= middleTwo; )
        {
            // Your code here.
            if (middleTwo % x == 0)
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
        printf("Output - Prime\n");[cite: 15]
    }
    else
    {
        printf("Output - Not Prime\n");[cite: 15]
    }
    
    return 0;
}