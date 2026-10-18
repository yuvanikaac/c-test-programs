#include<stdio.h>
int main ()
{
    int x, last_two_digits, i = 2, is_prime = 1;
    scanf("%d", &x);
    last_two_digits = x % 100;
    
    if (last_two_digits <= 1)
    {
        is_prime = 0;
    }
    
    loop:
    while(i * i <= last_two_digits)
    {
        if(last_two_digits % i == 0)
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