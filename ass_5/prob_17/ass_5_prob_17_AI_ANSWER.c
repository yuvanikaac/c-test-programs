
#include <stdio.h>

int main()
{
    int x, temp, i = 2;
    int sum = 0, digit, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    temp = x;

digit_loop:
    if (temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
        goto digit_loop;
    }

    if (x <= 1)
    {
        flag = 1;
    }

prime_loop:
    if (i < x)
    {
        if (x % i == 0)
        {
            flag = 1;
        }

        i++;
        goto prime_loop;
    }

    if (flag == 0 && sum == 14)
    {
        printf("Prime & sum of digits is 14");
    }
    else if (flag == 1 && sum == 14)
    {
        printf("Not Prime but sum of digits is 14");
    }
    else if (flag == 0)
    {
        printf("Prime but sum of digits is not 14");
    }
    else
    {
        printf("Not Prime and sum of digits is not 14");
    }

    return 0;
}
