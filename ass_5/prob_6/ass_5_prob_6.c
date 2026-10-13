#include <stdio.h>

int main()
{
    int x;
    x = 11;
    loop:
    for ( ; x < 20; )
    {
        printf("%d\n", x);
        x = x + 2;
        goto loop;
    }
    
    return 0;
}