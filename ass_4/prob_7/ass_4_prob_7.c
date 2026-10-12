#include <stdio.h>

int main() 
{
    int x;
    int tens, units, sum;

    for (x = 11; x <= 99; x += 2) 
    {
        tens = x / 10;   
        units = x % 10;  
        sum = tens + units;

       
        if (sum == 7) 
        {
            printf("%d\n", x);
        }
    }

    return 0; 
}
