#include <stdio.h>

int main()
{
    int x;
    x = 9999;
    loop:
    for ( ; x >= 1000; )
    {
       
        if (x % 7 == 0 && x % 9 == 0)
        {
            printf("Biggest 4-digit number divisible by 7 and 9: %d\n", x);
            break;
        }
        x = x - 1;
        goto loop;
    }
    
    return 0;
}