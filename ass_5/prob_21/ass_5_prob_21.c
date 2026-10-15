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
        if (digit % 2 != 0)
        {
            count = count + 1;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("Total number of odd digits: %d\n", count);
    
    return 0;
}