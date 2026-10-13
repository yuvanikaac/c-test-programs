#include <stdio.h>

int main()
{
    int x;
    int sum = 0;
    x = 70;
    loop:
    for ( ; x < 80; )
    {
    
        if (x % 2 != 0)
        {
            sum = sum + x;
        }
        x = x + 1;
        goto loop;
    }
    printf("%d\n", sum);
    
    return 0;
}