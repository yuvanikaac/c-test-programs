#include<stdio.h>
int main ()
{
    int x,y,z;
    x=6;
    y=0;
    loop: if(x > 0)
    {
        
        y=y+x;
        x--;
        goto loop;
    }
     printf("%d ", y);
    
    return 0; 
}