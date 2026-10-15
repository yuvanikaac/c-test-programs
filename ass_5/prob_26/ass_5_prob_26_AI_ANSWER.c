
#include <stdio.h>

int main()
{
    int x = 9999;

loop:
    if (x >= 1000)
    {
        if (x % 7 == 0 && x % 9 == 0)
        {
            printf("Biggest 4-digit number = %d", x);
        }
        else
        {
            x--;
            goto loop;
        }
    }

    return 0;
}
