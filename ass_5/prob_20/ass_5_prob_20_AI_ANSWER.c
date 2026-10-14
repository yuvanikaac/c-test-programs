
#include <stdio.h>

int main()
{
    int x = 2, count = 0;

loop:
    if (x <= 9)
    {
        if (x == 2 || x == 3 || x == 5 || x == 7)
        {
            count++;
        }

        x++;
        goto loop;
    }

    printf("Total single-digit prime numbers = %d", count);

    return 0;
}
