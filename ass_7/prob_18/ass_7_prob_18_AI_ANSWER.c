#include <stdio.h>

void check_first_2digits_prime()
{
    int n, num, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n % 100;

    if (num <= 1)
    {
        flag = 1;
    }

    while (i < num)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }

        i++;
    }

    if (flag == 0)
    {
        printf("First two digits are prime");
    }
    else
    {
        printf("First two digits are not prime");
    }
}

int main()
{
    check_first_2digits_prime();

    return 0;
}