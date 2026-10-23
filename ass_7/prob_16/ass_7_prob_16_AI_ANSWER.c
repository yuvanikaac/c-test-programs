#include <stdio.h>

void check_prime()
{
    int n, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

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

    if (flag == 0)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
}

int main()
{
    check_prime();

    return 0;
}