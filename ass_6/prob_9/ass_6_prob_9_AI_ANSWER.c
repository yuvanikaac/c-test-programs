#include <stdio.h>

int main()
{
    int i = 10, sum = 0;

    while (i < 100)
    {
        if (i % 10 == 5)
        {
            sum = sum + i;
        }

        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}