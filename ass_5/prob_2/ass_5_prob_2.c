#include<stdio.h>
int main ()
{
    int x;
    x = 6;
    loop:
    
    for ( ; x > 1 ; )
    {
        
        x--;
        printf("%d\n", x);
        
        goto loop;
    }
}
