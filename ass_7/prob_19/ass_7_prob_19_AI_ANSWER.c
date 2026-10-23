#include <stdio.h>

void middle_2digits_prime()
{
    int n, num, i = 2, flag = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &n);

    num = (n / 10) % 100;

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
        printf("Middle two digits are prime");
    }
    else
    {
        printf("Middle two digits are not prime");
    }
}

int main()
{
    middle_2digits_prime();

    return 0;
}