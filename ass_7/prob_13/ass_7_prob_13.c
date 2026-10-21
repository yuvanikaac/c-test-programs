#include <stdio.h>

void disp_reverse_number(int);

int main ()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    disp_reverse_number(x);
    return 0;
}

void disp_reverse_number(int x)
{
    int rev = 0, remainder;
    while(x != 0)
    {
        remainder = x % 10;
        rev = rev * 10 + remainder;
        x = x / 10;
    }
    printf("%d\n", rev);
}