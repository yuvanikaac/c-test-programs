#include<stdio.h>
int main ()
{
    int x;
    x = 11;
    loop:
    while(x <= 99)
    {
        if(((x / 10) + (x % 10)) == 7)
        {
            printf("%d\n", x);
        }
        x = x + 2;
        goto loop;
    }
}