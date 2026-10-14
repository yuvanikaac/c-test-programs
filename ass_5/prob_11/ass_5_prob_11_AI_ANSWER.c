
#include <stdio.h>

int main()
{
    int x, count = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x == 0)
    {
        count = 1;
    }
    else
    {
        if (x < 0)
        {
            x = -x;
        }

    loop:
        if (x > 0)
        {
            count++;
            x = x / 10;
            goto loop;
        }
    }

    printf("Total number of digits = %d", count);

    return 0;
}
