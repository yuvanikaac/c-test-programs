#include <stdio.h>

void check_prime_and_sum14()
{
    int n, i = 2, flag = 0;
    int temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    if (n <= 1)
    {
        flag = 1;
    }

    while (i < n)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }

        i++;
    }

    if (flag == 0 && sum == 14)
    {
        printf("Prime number and digit sum is 14");
    }
    else
    {
        printf("Condition not satisfied");
    }
}

int main()
{
    check_prime_and_sum14();

    return 0;
}