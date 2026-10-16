#include<stdio.h>
int main ()
{
    int x;
    x = 1;
    loop:
    while(x <= 5)
    {
        printf("%d\n", x);
        x++;
        goto loop;
    }
}