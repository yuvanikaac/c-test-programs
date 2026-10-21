#include <stdio.h>

void count_total_digits(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    count_total_digits(x);
    return 0;
}

void count_total_digits(int x)
{
    int count = 0;
    if(x == 0)
    {
        count = 1;
    }
    else
    {
        if(x < 0)
        {
            x = -x;
        }
        while(x > 0)
        {
            count++;
            x = x / 10;
        }
    }
    printf("%d\n", count);
}