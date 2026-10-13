#include<stdio.h>
int main ()
{
    int x;
    x = -1;
    loop:
    
    for ( ; x < 9 ; )
    {
        
        x = x + 2;
        printf("%d\n", x);
        
        goto loop;
    }
}
