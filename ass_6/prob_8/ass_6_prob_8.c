#include<stdio.h>
int main ()
{
    int x;
    x = 10;
    loop:
    while(x <= 98)
    {
        if(((x / 10) + (x % 10)) == 6)
        {
            printf("%d\n", x);
        }
        x = x + 2;
        goto loop;
    }
}