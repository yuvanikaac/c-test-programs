#include<stdio.h>
int main ()
{
    int x, rev = 0;
    scanf("%d", &x);
    loop:
    while(x != 0)
    {
        rev = (rev * 10) + (x % 10);
        x = x / 10;
        goto loop;
    }
    printf("%d\n", rev);
}