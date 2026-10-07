#include<stdio.h>
int main ()
{
    int x,y,z;
    x=1;
   
    loop: if(x <10)
    {
        
        printf("%d",x);
        x+=2;
        goto loop;
    }
    
    
    
    
    return 0; 
}