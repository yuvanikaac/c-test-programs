#include<stdio.h>
int main ()
{
    int x = 9999;
    
    loop:
    while(x >= 1000)
    {
        if(x % 7 == 0 && x % 9 == 0)
        {
            printf("%d\n", x);
            break;
        }
        x--;
        goto loop;
    }
    
    return 0;
}