#include <stdio.h>

int main()
{
    int n, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }

        i++;
    }

    if (n <= 1 || flag == 1)
    {
        printf("Not a prime number");
    }
    else
    {
        printf("Prime number");
    }

    return 0;
}