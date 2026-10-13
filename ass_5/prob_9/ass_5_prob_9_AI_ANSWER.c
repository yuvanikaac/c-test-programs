
#include <stdio.h>

int main()
{
    int x = 10, sum = 0;

loop:
    if (x < 100)
    {
        if (x % 10 == 5)
        {
            sum = sum + x;
        }

        x++;
        goto loop;
    }

    printf("Sum = %d", sum);

    return 0;
}
