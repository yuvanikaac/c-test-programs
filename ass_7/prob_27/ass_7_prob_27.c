#include <stdio.h>

void disp_count_sum14(int);

int main ()
{
    int x, y;
    scanf("%d", &x);
    disp_count_sum14(x);
    return 0;
}

void disp_count_sum14(int x)
{
    int i, temp, sum, rem, count = 0;
    
    for (i = 0; i < x; i++)
    {
        temp = i;
        sum = 0;
        
        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }
        
        if (sum == 14)
        {
            count++;
        }
    }
    
    printf("%d\n", count);
}