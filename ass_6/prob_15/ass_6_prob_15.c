#include<stdio.h>
int main ()
{
    int x, temp, divisor = 1;
    scanf("%d", &x);
    
    temp = x;
    loop:
    while(temp >= 10)
    {
        divisor = divisor * 10;
        temp = temp / 10;
        goto loop;
    }
    
    if(temp % 2 != 0)
    {
        x = x - divisor;
    }
    
    printf("%d\n", x);
    return 0;
}