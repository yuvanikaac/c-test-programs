
#include <stdio.h>
int main()
{
    int x;
    int count = 0;
    x = 2;
    loop:
    for ( ; x < 10; )
    {
        
        if (x == 2 || x == 3 || x == 5 || x == 7)
        {
            count = count + 1;
        }
        x = x + 1;
        goto loop;
    }
    printf("Total number of single digit prime numbers: %d\n", count);
    
    return 0;
}

