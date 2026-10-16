#include<stdio.h>
int main ()
{
    int x;
    x = 5;
    loop:
    while(x >= 1)
    {
        printf("%d\n", x);
        x--;
        goto loop;
    }
}