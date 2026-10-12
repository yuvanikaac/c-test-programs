#include <stdio.h>

int main() 
{
    int x = 11; 
    int tens;
    int total_sum = 0; 

loop: 
    if (x <= 99) 
    {
        tens = x / 10;

        if (tens == 7) 
        {
            total_sum += x;
        }

        x += 2;
        goto loop; 
    }

    
    printf("Sum = %d\n", total_sum);

    return 0; 
}
