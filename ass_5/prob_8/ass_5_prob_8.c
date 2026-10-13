#include <stdio.h>

int main()
{
    int x;
    x = 10;
    loop:
    for ( ; x < 100; )
    {
       
        if ((x % 2 == 0) && ((x / 10) + (x % 10) == 6))
        {
            printf("%d\n", x);
        }
        x = x + 1;
        goto loop;
    }
    
    return 0;
}