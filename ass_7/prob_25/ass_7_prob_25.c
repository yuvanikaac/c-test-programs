#include <stdio.h>

void disp_single_digit_prime(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_single_digit_prime(x);
    return 0;
}

void disp_single_digit_prime(int x)
{
    int count = 0, rem;
    
    if (x < 0)
    {
        x = -x;
    }
    
    while (x > 0)
    {
        rem = x % 10;
        if (rem == 2 || rem == 3 || rem == 5 || rem == 7)
        {
            count++;
        }
        x = x / 10;
    }
    
    printf("%d\n", count);
}