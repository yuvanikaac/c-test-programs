#include <stdio.h>

void disp_2digit_even_sum6(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_2digit_even_sum6(x);
    return 0;
}

void disp_2digit_even_sum6(int x)
{
    int i, j, count = 0, is_prime;
    for(i = 2; i <= x; i++)
    {
        is_prime = 1;
        for(j = 2; j <= i / 2; j++)
        {
            if(i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if(is_prime && i < 10)
        {
            count++;
        }
    }
    printf("%d\n", count);
}