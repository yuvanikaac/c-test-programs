#include<stdio.h>
int main ()
{
    int x, i = 2, is_prime = 1;
    scanf("%d", &x);
    
    if (x <= 1)
    {
        is_prime = 0;
    }
    
    loop:
    while(i * i <= x)
    {
        if(x % i == 0)
        {
            is_prime = 0;
            break;
        }
        i++;
        goto loop;
    }
    
    if(is_prime == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    
    return 0;
}