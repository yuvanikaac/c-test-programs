#include<stdio.h>
int main ()
{
    int x;
    int sum = 0;
    x = 0;
    loop:
    
    for ( ; x < 5 ; )
    {
        
        x++;
        sum = sum + x;
        
        goto loop;
    }
    
    printf("Sum: %d\n", sum);
}
