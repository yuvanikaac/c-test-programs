#include <stdio.h>

int main()
{
    int x, num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    x = num;
    
    loop:
    for ( ; x != 0; )
    {

        reverse = (reverse * 10) + (x % 10);
        x = x / 10;
        goto loop;
    }
    printf("Reverse of the number: %d\n", reverse);
    
    return 0;
}