
#include <stdio.h>

void find_2digit_odd_sum7()
{
    int i, sum;

    for(i = 10; i <= 99; i++)
    {
        sum = (i / 10) + (i % 10);

        if(i % 2 != 0 && sum == 7)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    printf("Two-digit odd numbers whose digit sum is 7:\n");

    find_2digit_odd_sum7();

    return 0;
}
