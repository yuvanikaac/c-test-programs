#include<stdio.h>
int main ()
{
    int x, count = 0, digit;
    scanf("%d", &x);
    
    loop:
    while(x != 0)
    {
        digit = x % 10;
        if(digit % 2 != 0)
        {
            count++;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("%d\n", count);
    return 0;
}