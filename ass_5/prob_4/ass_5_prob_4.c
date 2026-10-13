#include<stdio.h>
int main ()
{
    int x;
    int sum = 0;
    x = 7;
    loop:
    
    for ( ; x > 1 ; )
    {
        
        x--;
        sum = sum + x;
        
        goto loop;
    }
    
    printf("Sum: %d\n", sum);
}
