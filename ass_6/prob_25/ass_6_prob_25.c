#include<stdio.h>
int main ()
{
    int x, digit, count = 0;
    scanf("%d", &x);
    
    loop:
    while(x != 0)
    {
        digit = x % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("%d\n", count);
    return 0;
}