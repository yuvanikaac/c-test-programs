#include <stdio.h>

int main()
{
    int i = 10, digit1, digit2, sum;

    while (i < 100)
    {
        digit1 = i / 10;
        digit2 = i % 10;
        sum = digit1 + digit2;

        if (i % 2 == 0 && sum == 6)
        {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;
}