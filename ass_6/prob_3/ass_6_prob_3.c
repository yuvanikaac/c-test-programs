#include<stdio.h>
int main ()
{
    int x, sum = 0;
    x = 1;
    loop:
    while(x <= 5)
    {
        sum = sum + x;
        x++;
        goto loop;
    }
    printf("%d\n", sum);
}