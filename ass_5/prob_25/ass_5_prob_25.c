#include <stdio.h>

int main()
{
    int x,num, count = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    x = num;
    
    loop:
    for ( ; x != 0; )
    {
       
        digit = x % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count = count + 1;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("Total number of single-digit prime numbers: %d\n", count);[cite: 21]
    
    return 0;
}