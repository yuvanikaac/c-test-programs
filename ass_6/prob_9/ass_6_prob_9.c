#include<stdio.h>
int main ()
{
    int x, sum = 0;
    x = 15;
    loop:
    while(x <= 95)
    {
        sum = sum + x;
        x = x + 10;
        goto loop;
    }
    printf("%d\n", sum);
}