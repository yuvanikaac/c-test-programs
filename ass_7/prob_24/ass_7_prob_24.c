#include <stdio.h>
#include <math.h>

void disp_two_digit_square(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_two_digit_square(x);
    return 0;
}

void disp_two_digit_square(int x)
{
    int count = 0, two_digit, root;
    
    if (x < 0)
    {
        x = -x;
    }
    
    while (x >= 10)
    {
        two_digit = x % 100;
        root = (int)sqrt(two_digit);
        if (root * root == two_digit)
        {
            count++;
        }
        x = x / 10;
    }
    
    printf("%d\n", count);
}