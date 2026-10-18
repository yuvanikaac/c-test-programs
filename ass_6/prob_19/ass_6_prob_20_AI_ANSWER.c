#include <stdio.h>

int main()
{
    int i = 2, count = 0;

    while (i <= 9)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            count++;
        }

        i++;
    }

    printf("Total single-digit prime numbers = %d", count);

    return 0;
}