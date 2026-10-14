#include <stdio.h>

int main()
{
    int x,num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    x = num;
    if (x == 0) {
        count = 1;
    }
    
    loop:
    for ( ; x != 0; )
    {
    
        count = count + 1;
        x = x / 10;
        goto loop;
    }
    printf("Total number of digits: %d\n", count);
    
    return 0;
}