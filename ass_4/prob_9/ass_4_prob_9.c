#include <stdio.h>

int main() 
{
    int x = 10;
    int tens, units, sum;

loop: 
    if (x <= 99) 
    {
        tens = x / 10;
        units = x % 10;
        sum = tens + units;

        if (sum == 6) 
        {
            printf("%d\n", x);
        }

        x += 2;
        goto loop; 
    }

    return 0; 
}
