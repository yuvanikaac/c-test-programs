#include <stdio.h>

int main()
{
    int x,a, b, c, max;
    
    printf("Enter three numbers: ");
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
    
    x = max;
    
    loop:
    for ( ; ; )
    {
       
        if (x % a == 0 && x % b == 0 && x % c == 0)
        {
            printf("LCM of %d, %d, and %d is: %d\n", a, b, c, x);[cite: 18]
            break;
        }
        x = x + 1;
        goto loop;
    }
    
    return 0;
}