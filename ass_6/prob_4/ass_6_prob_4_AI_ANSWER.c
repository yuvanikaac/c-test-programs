#include <stdio.h>

int main()
{
    int i = 6, sum = 0;

    while (i >= 1)
    {
        sum = sum + i;
        i--;
    }

    printf("Sum = %d", sum);

    return 0;
}