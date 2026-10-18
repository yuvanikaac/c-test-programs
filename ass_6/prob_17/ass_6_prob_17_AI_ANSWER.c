#include <stdio.h>

int main()
{
    int n, i = 2, flag = 0;
    int digit, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
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

    if (n > 1 && flag == 0 && sum == 14)
    {
        printf("Prime number and sum of digits is 14");
    }
    else
    {
        printf("Condition not satisfied");
    }

    return 0;
}