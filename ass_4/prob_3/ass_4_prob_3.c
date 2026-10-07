#include<stdio.h>
int main ()
{
    int x,y,z;
    x=1;
    y=0;
    loop: if(x < 6)
    {
        
        y=y+x;
        x++;
        goto loop;
    }
     printf("%d ", y);
    
    return 0; 
}