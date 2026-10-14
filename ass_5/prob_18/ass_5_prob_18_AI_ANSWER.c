
#include <stdio.h>

int main()
{
    int x, temp, first_two, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    temp = x;

loop:
    if (temp >= 100)
    {
        temp = temp / 10;
        goto loop;
    }

    first_two = temp;

    if (first_two <= 1)
    {
        flag = 1;
    }

prime_loop:
    if (i < first_two)
    {
        if (first_two % i == 0)
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
