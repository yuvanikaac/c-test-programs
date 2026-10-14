
#include <stdio.h>

int main()
{
    int x, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x <= 1)
    {
        flag = 1;
    }

loop:
    if (i < x)
    {
        if (x % i == 0)
        {
            flag = 1;
        }

        i++;
        goto loop;
    }

    if (flag == 0)
    {
        printf("%d is a prime number", x);
    }
    else
    {
        printf("%d is not a prime number", x);
    }

    return 0;
}
