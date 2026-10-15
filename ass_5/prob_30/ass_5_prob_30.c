#include <stdio.h>

int main()
{
    int x,a, b, min, hcf = 1;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    
    x = 1;
    
    loop:
    for ( ; x <= min; )
    {
      
        if (a % x == 0 && b % x == 0)
        {
            hcf = x;
        }
        x = x + 1;
        goto loop;
    }
    
    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    
    return 0;
}