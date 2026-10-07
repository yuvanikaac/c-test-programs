#include <stdio.h>

int main()
{
    int x = 6, sum = 0;

loop:
    if (x >= 1)
    {
        sum = sum + x;
        x--;
        goto loop;
    }

    printf("Sum = %d", sum);

    return 0;
}