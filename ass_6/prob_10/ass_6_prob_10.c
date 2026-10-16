#include<stdio.h>
int main ()
{
    int x, sum = 0;
    x = 71;
    loop:
    while(x <= 79)
    {
        sum = sum + x;
        x = x + 2;
        goto loop;
    }
    printf("%d\n", sum);
}