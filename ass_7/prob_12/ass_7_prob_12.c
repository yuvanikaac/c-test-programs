#include <stdio.h>

void disp_sum_all_digits(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_sum_all_digits(x);
    return 0;
}

void disp_sum_all_digits(int x)
{
    int sum = 0, remainder;
    if(x < 0)
    {
        x = -x;
    }
    while(x > 0)
    {
        remainder = x % 10;
        sum = sum + remainder;
        x = x / 10;
    }
    printf("%d\n", sum);
}