#include<stdio.h>
int main ()
{
    int a, b, min;
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    
    loop:
    while(min >= 1)
    {
        if (a % min == 0 && b % min == 0)
        {
            printf("%d\n", min);
            break;
        }
        min--;
        goto loop;
    }
    
    return 0;
}