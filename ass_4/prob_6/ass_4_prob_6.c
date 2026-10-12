#include<stdio.h>
int main ()
{
    int x,y,z;
    x=11;
   
    loop: if((x >10) && (x<20))
    {
        
        printf("%d",x);
        x+=2;
        goto loop;
    }
    
    
    
    
    return 0; 
}