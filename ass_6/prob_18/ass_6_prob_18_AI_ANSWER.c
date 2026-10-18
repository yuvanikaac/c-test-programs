#include <stdio.h>

int main()
{
    int n, temp, num, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp >= 100)
    {
        temp = temp / 10;
    }

    num = temp;

    while (i < num)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }

        i++;
    }

    if (num > 1 && flag == 0)
    {
        printf("First two digits form a prime number");
    }
    else
    {
        printf("First two digits do not form a prime number");
    }

    return 0;
}