#include<stdio.h>
int main ()
{
    int x, sum = 0;
    x = 6;
    loop:
    while(x >= 1)
    {
        sum = sum + x;
        x--;
        goto loop;
    }
    printf("%d\n", sum);
}