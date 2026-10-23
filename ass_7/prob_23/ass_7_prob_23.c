#include <stdio.h>

void disp_single_digit_square(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_single_digit_square(x);
    return 0;
}

void disp_single_digit_square(int x)
{
    int count = 0, rem;
    
    if (x < 0)
    {
        x = -x;
    }
    
    if (x == 0)
    {
        printf("1\n");
        return;
    }
    
    while (x > 0)
    {
        rem = x % 10;
        if (rem == 0 || rem == 1 || rem == 4 || rem == 9)
        {
            count++;
        }
        x = x / 10;
    }
    
    printf("%d\n", count);
}