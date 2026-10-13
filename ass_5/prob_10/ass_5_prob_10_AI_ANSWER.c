#include <stdio.h>

int main()
{
    int x = 70, sum = 0;

loop:
    if (x < 80)
    {
        if (x % 2 != 0)
        {
            sum = sum + x;
        }

        x++;
        goto loop;
    }
    printf("Sum = %d", sum);

    return 0;
}
