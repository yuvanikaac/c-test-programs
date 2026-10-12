#include <stdio.h>

int main()
{
    int x = 11, sum;

loop:
    if (x < 100)
    {
        sum = (x / 10) + (x % 10);

        if (x % 2 != 0 && sum == 7)
        {
            printf("%d\n", x);
        }

        x++;
        goto loop;
    }

    return 0;
}