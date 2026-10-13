#include<stdio.h>
int main ()
{
    int x;
    x = 0;
    loop:
    
    for ( ; x < 5 ; )
    {
        
        x++;
        printf("%d\n", x);
        
        goto loop;
    }
}
