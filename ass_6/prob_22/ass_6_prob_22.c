#include<stdio.h>
int main ()
{
    int x, two_digit, count = 0;
    scanf("%d", &x);
    
    loop:
    while(x >= 10)
    {
        two_digit = x % 100;
        if(two_digit % 2 != 0)
        {
            count++;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("%d\n", count);
    return 0;
}