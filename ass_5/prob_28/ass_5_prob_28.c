#include <stdio.h>

int main()
{
    int x,a, b, max;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
   
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    
    x = max;
    
    loop:
    for ( ; ; )
    {
       
        if (x % a == 0 && x % b == 0)
        {
            printf("LCM of %d and %d is: %d\n", a, b, x);
            break;
        }
        x = x + 1;
        goto loop;
    }
    
    return 0;
}