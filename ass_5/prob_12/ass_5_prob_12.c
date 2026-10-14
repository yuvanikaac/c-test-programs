#include <stdio.h>

int main()
{
    int x;
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    x = num;
    
    loop:
    for ( ; x != 0; )
    {
        
        sum = sum + (x % 10);
        x = x / 10;
        goto loop;
    }
    printf("Sum of all digits: %d\n", sum);
    
    return 0;
}