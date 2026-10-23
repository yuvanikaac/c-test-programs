#include <stdio.h>

void middle_2digits_prime(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    middle_2digits_prime(x);
    return 0;
}

void middle_2digits_prime(int x)
{
    int middle_digits, i, flag = 0;
    middle_digits = (x / 10) % 100;
    if (middle_digits <= 1)
    {
        printf("Not Prime\n");
    }
    else
    {
        for (i = 2; i <= middle_digits / 2; i++)
        {
            if (middle_digits % i == 0)
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