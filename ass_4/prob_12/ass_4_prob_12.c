#include <stdio.h>

int main() 
{
    long long num;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) 
    {
        num = -num;
    }

loop:
    if (num != 0) 
    {
        sum += num % 10; 
        num = num / 10;  
        goto loop;       
    }

    printf("Sum of digits = %d\n", sum);

    return 0; 
}
