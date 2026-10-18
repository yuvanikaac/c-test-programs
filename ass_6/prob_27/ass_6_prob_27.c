#include<stdio.h>
int main ()
{
    int num = 0, total_count = 0;
    
    loop:
    while(num < 100000)
    {
        int temp = num;
        int sum = 0;
        
        while(temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        
        if(sum == 14)
        {
            total_count++;
        }
        
        num++;
        goto loop;
    }
    
    printf("%d\n", total_count);
    return 0;
}