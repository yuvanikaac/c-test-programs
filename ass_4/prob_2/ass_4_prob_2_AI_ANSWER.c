#include <stdio.h>

int main()
{
    int x = 5;

loop:
    if (x >= 1)
    {
        printf("%d\n", x);
        x--;
        goto loop;
    }

    return 0;
}