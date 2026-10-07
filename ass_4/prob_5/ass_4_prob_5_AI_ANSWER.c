#include <stdio.h>

int main()
{
    int x = 1;

loop:
    if (x <= 9)
    {
        printf("%d\n", x);
        x = x + 2;
        goto loop;
    }

    return 0;
}