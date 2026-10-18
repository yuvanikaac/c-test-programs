#include<stdio.h>
int main ()
{
    int x, two_digit, count = 0;
    scanf("%d", &x);
    
    loop:
    while(x >= 10)
    {
        two_digit = x % 100;
        if(two_digit == 16 || two_digit == 25 || two_digit == 36 || two_digit == 49 || two_digit == 64 || two_digit == 81)
        {
            count++;
        }
        x = x / 10;
        goto loop;
    }
    
    printf("%d\n", count);
    return 0;
}