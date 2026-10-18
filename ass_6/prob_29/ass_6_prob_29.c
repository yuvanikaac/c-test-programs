#include<stdio.h>
int main ()
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    
    loop:
    while(1)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            printf("%d\n", max);
            break;
        }
        max++;
        goto loop;
    }
    
    return 0;
}