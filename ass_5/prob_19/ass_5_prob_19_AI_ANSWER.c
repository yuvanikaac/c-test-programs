
#include <stdio.h>

int main()
{
    int x, middle, i = 2, flag = 0;

    printf("Enter a four-digit number: ");
    scanf("%d", &x);

    middle = (x / 10) % 100;

    if (middle <= 1)
    {
        flag = 1;
    }

prime_loop:
    if (i < middle)
    {
        if (middle % i == 0)
        {
            flag = 1;
        }

        i++;
        goto prime_loop;
    }

    if (flag == 0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }

    return 0;
}
