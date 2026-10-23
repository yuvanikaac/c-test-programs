#include <stdio.h>

void check_prime(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_prime(x);
    return 0;
}

void check_prime(int x)
{
    int i, flag = 0;
    if (x <= 1)
    {
        printf("Not Prime\n");
    }
    else
    {
        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("Prime\n");
        }
        else
        {
            printf("Not Prime\n");
        }
    }
}