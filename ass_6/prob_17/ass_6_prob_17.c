#include<stdio.h>
int main ()
{
    int x, temp, i = 2, is_prime = 1, sum = 0;
    scanf("%d", &x);
    
    if (x <= 1)
    {
        is_prime = 0;
    }
    
    loop1:
    while(i * i <= x)
    {
        if(x % i == 0)
        {
            is_prime = 0;
            break;
        }
        i++;
        goto loop1;
    }
    
    temp = x;
    loop2:
    while(temp != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
        goto loop2;
    }
    
    if(is_prime == 1)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    
    if(sum == 14)
    {
        printf("Sum of digits is 14\n");
    }
    else
    {
        printf("Sum of digits is not 14\n");
    }
    
    return 0;
}