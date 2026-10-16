#include<stdio.h>
int main ()
{
    int x;
    x = 1;
    loop:
    while(x <= 9)
    {
        printf("%d\n", x);
        x = x + 2;
        goto loop;
    }
}