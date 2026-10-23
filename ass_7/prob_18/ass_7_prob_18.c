#include <stdio.h>

void check_first_2digits_prime(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_first_2digits_prime(x);
    return 0;
}

void check_first_2digits_prime(int x)
{
    int temp = x, i, flag = 0;
    
    if (temp < 0)
    {
        temp = -temp;
    }
    while (temp >= 100)
    {
        temp = temp / 10;
    }
    if (temp <= 1)
    {
        printf("Not Prime\n");
    }
    else
    {
        for (i = 2; i <= temp / 2; i++)
        {
            if (temp % i == 0)
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