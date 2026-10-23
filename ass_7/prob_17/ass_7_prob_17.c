#include <stdio.h>

void check_prime_and_sum14(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    check_prime_and_sum14(x);
    return 0;
}

void check_prime_and_sum14(int x)
{
    int i, flag = 0, temp, sum = 0, rem;
    
    if (x <= 1)
    {
        flag = 1;
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
    }
    
    if (flag == 0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    temp = x;
    if (temp < 0)
    {
        temp = -temp;
    }
    
    while (temp > 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    
    if (sum == 14)
    {
        printf("Sum of digits is 14\n");
    }
    else
    {
        printf("Sum of digits is not 14\n");
    }
}