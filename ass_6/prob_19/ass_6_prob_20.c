#include<stdio.h>
int main ()
{
    int num = 2, count = 0;
    
    loop:
    while(num <= 9)
    {
        if(num == 2 || num == 3 || num == 5 || num == 7)
        {
            count++;
        }
        num++;
        goto loop;
    }
    
    printf("%d\n", count);
    return 0;
}