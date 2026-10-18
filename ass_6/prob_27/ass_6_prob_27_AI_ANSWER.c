#include <stdio.h>

int main()
{
    int n = 1, temp, digit, sum, count = 0;

    while (n < 100000)
    {
        temp = n;
        sum = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        if (sum == 14)
        {
            count++;
        }

        n++;
    }

    printf("Total count = %d", count);

    return 0;
}