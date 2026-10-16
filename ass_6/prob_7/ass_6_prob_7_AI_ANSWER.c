#include <stdio.h>

int main()
{
    int i = 11, sum, digit1, digit2;

    while (i < 100)
    {
        digit1 = i / 10;
        digit2 = i % 10;
        sum = digit1 + digit2;

        if (i % 2 != 0 && sum == 7)
        {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;
}