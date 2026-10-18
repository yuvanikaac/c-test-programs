#include<stdio.h>
int main ()
{
    int x, sum = 0;
    scanf("%d", &x);
    loop:
    while(x != 0)
    {
        sum = sum + (x % 10);
        x = x / 10;
        goto loop;
    }
    printf("%d\n", sum);
}